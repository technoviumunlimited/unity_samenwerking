using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

[System.Serializable]
public class jumpSetingsVariables
{
    public float MaxJumpHeight = 4;
    public float maxJumpTime = 0.5f;
    
}

public class PlayerControler : MonoBehaviour
{   

    //player settings
    [Header("Player settings")]
    [Tooltip("controls how fast your walking speed is (normal =1)")]
    public float walkSpeed =1;

    [Tooltip("Controls how fast your running speed is (normal =3)")]
    public float runSpeed = 3;

    [Tooltip("controls how fast you spin around (normal =15)")]
    public float rotationFactor = 15;

    //gravity variables
    float groundGravity = -5f;

    //declare refrence variables
    PlayerInput playerInput;
    Animator animator;
    CharacterController characterController;

    //variables player input values
    Vector3 currentMovement;
    Vector3 currentRunMovement;
    Vector2 currentMovementInput;
    bool isMovementPressed;
    bool isRunPrest;

    // jumping variables
    bool isJumpPressed = false;
    bool isJumping = false;
    int jumpCount;

    Dictionary<int,float> initialJumpVelocities = new Dictionary<int, float>();
    Dictionary<int, float> Gravities = new Dictionary<int, float>();

    public List<jumpSetingsVariables> jumpSetings = new List<jumpSetingsVariables>();

    Coroutine currentJumpResetRoutine = null;


    private void Awake()
    {
        setJumpVariables();

        playerInput = new PlayerInput();

        characterController = GetComponent<CharacterController>();
        animator = GetComponent<Animator>();

        playerInput.CharacterControls.Move.started += onMevementInput;
        playerInput.CharacterControls.Move.canceled += onMevementInput;
        playerInput.CharacterControls.Move.performed += onMevementInput;

        playerInput.CharacterControls.Run.started += onRun;
        playerInput.CharacterControls.Run.canceled += onRun;

        playerInput.CharacterControls.Jump.started += onJump;
        playerInput.CharacterControls.Jump.canceled += onJump;

        
    }

    void setJumpVariables()
    {
        for (int i = 0; i < jumpSetings.Count; i++)
        {
            float timeToApex = jumpSetings[i].maxJumpTime / 2;
            float gravity = (-2* jumpSetings[i].MaxJumpHeight) / Mathf.Pow(timeToApex,2);
            float initialJumpVelocite = (2 * jumpSetings[i].MaxJumpHeight) / timeToApex;

            Gravities.Add(i,gravity);
            initialJumpVelocities.Add(i,initialJumpVelocite );
        }
    }

    void onJump(InputAction.CallbackContext context)
    {
        isJumpPressed = context.ReadValueAsButton();
    }

    void onRun(InputAction.CallbackContext context)
    {
        isRunPrest = context.ReadValueAsButton();
    }

    void onMevementInput(InputAction.CallbackContext context)
    {
        currentMovementInput = context.ReadValue<Vector2>();

        currentMovement.x = currentMovementInput.x * walkSpeed;
        currentMovement.z = currentMovementInput.y * walkSpeed;
        currentRunMovement.x = currentMovementInput.x * runSpeed;
        currentRunMovement.z = currentMovementInput.y * runSpeed;

        isMovementPressed =currentMovementInput.x != 0 || currentMovementInput.y != 0;
    }

    void handlJump()
    {
        if(!isJumping && characterController.isGrounded && isJumpPressed)
        {   

            isJumping = true;
            
          
              currentMovement.y = initialJumpVelocities[jumpCount] *.5f ;
            currentRunMovement.y  = initialJumpVelocities[jumpCount] * .5f;

            if(jumpCount < jumpSetings.Count -1 && currentJumpResetRoutine != null)
            {
                StopCoroutine(currentJumpResetRoutine);
            }
            
        }
    
        else if((characterController.isGrounded && isJumping ) )
        {
            
            currentJumpResetRoutine = StartCoroutine(jumpResetRoutine());
            
            isJumping = false; 
            jumpCount +=1;
            
        }

            
            

        
    }
      
    private void Update()
    {

        handleAnimation();
        handleRotation();

        if (isRunPrest)
        {
            characterController.Move(currentRunMovement * Time.deltaTime);
        }
        else
        {
            characterController.Move(currentMovement * Time.deltaTime);
        }

        
        handleGravity();
        handlJump();
    }

    void handleRotation()
    {
        Vector3 positionToLookAt;
        Quaternion currentRoation = transform.rotation;

        positionToLookAt.x = currentMovement.x;
        positionToLookAt.y = 0.0f;
        positionToLookAt.z = currentMovement.z;

        if (isMovementPressed)
        {
            Quaternion targetRoation =Quaternion.LookRotation(positionToLookAt);
            transform.rotation =Quaternion.Slerp(currentRoation,targetRoation,rotationFactor * Time.deltaTime);
        }
    }

    void handleAnimation()
    {
        bool isWalking = animator.GetBool("isWalking");
        bool isRunning = animator.GetBool("isRunning");

        if (isMovementPressed && !isWalking)        {animator.SetBool("isWalking", true); }
        else if (!isMovementPressed && isWalking)   {animator.SetBool("isWalking", false); }

        if (isRunPrest && !isRunning && isMovementPressed)      {animator.SetBool("isRunning", true); }
        else if (!isRunPrest || !isMovementPressed && isRunning){animator.SetBool("isRunning", false);}

        
        animator.SetInteger("JumpCount", jumpCount +1);
        
        if(jumpCount >= jumpSetings.Count  ) 
        {
            jumpCount = 0; 
            
            if(currentJumpResetRoutine != null)  
            {
                StopCoroutine(currentJumpResetRoutine);
            }
        }
 
    }
                   
    void handleGravity()
    {
        
        bool isFalling = currentMovement.y <=-0.2f || !isJumpPressed;
        float fallMultiplier = 2.0f;

        animator.SetBool("isJumping", !characterController.isGrounded );
        
        if (characterController.isGrounded)
        { 
            currentMovement.y = groundGravity;
            currentRunMovement.y = groundGravity;            
        }
        else if (isFalling)
        {   
            float previousYVelocity = currentMovement.y;
            float newYVelocity = currentMovement.y + ( fallMultiplier * Gravities[jumpCount ] * Time.deltaTime);
            float nextVelocity =Mathf.Max((previousYVelocity + newYVelocity) *.5f,-20f);
            currentMovement.y = nextVelocity;
            currentRunMovement.y = nextVelocity;
            
        }
        else
        {    
            float previousYVelocity = currentMovement.y;
            float newYVelocity = currentMovement.y + (Gravities[jumpCount] * Time.deltaTime);
            float nextVelocity =(previousYVelocity + newYVelocity) *.5f;
            currentMovement.y = nextVelocity;
            currentRunMovement.y = nextVelocity;  
        }
    }

    IEnumerator  jumpResetRoutine ()
    {
       yield return new WaitForSeconds (2f); 
       jumpCount =0;

    } 

    private void OnEnable()
    {
        playerInput.CharacterControls.Enable();
    }

    private void OnDisable()
    {
        playerInput.CharacterControls.Disable();
    }
}
//https://www.youtube.com/watch?v=bXNFxQpp2qk&list=PLwyUzJb_FNeQrIxCEjj5AMPwawsw5beAy&index=3
