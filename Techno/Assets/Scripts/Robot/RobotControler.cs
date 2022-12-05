using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class RobotControler : MonoBehaviour
{

    public float timeForAction;
    public float moveDistance;
    public float maxJumpHeight;
    public float timeBetweenAction;
    public AudioClip[] audioClip; // 1 Finich, 2 walk, 3 jump, 4 error
    public GetControl getControl;
    public SetControl setControl;
    public TimeDisplay timeDisplay;
    
    
    public LayerMask layerMask;
    

    int CurentFunction = 0; // 0 = Idel; 1 =Turn riht; 2 = turn left; 3 = Move; 4 = Jump

    bool isMoving;
    bool isJumping;
    bool isTurning;

    [HideInInspector]public Animator animator;
    [HideInInspector]public AudioSource audioSource;
    [HideInInspector]public RobotJump robotJump;
    [HideInInspector]public RobotMove robotMove;
    [HideInInspector]public RobotTurn robotTurn;
    [HideInInspector]public RobotFinich robotFinich;
    [HideInInspector]public LevelMagiger levelMagiger;
    [HideInInspector]public RobInstructions RobInstructions;

    [HideInInspector] public float actionMultiplier;
    [HideInInspector] public float scaleMultiplier;
    
    [HideInInspector] public int NUMBER_OF_FRAMS_IN_FIXED_UPDATE = 50;
    [HideInInspector] public int framesCount = 0;


    void Awake()
    {   


        robotJump = new RobotJump();
        robotMove = new RobotMove();
        robotTurn = new RobotTurn();
        robotFinich = new RobotFinich();
        RobInstructions = new RobInstructions();

        levelMagiger = GameObject.Find("LevelManiger").GetComponent<LevelMagiger>();
        animator = GetComponent<Animator>();
        

        actionMultiplier = NUMBER_OF_FRAMS_IN_FIXED_UPDATE / (NUMBER_OF_FRAMS_IN_FIXED_UPDATE * timeForAction);
        scaleMultiplier = (transform.localScale.x );
        moveDistance =  transform.localScale.x * moveDistance;
        animator.speed = 1/timeForAction;

        
        RobInstructions.Awake();
    }   
    void Start() 
    {
        RobInstructions.startPosition = transform.position;
        RobInstructions.startRotation = transform.rotation;
    }

    Vector3 lastPosition;
    void FixedUpdate()
    {
        SwitchFunctions();
        Debug.DrawLine(lastPosition , transform.position, Color.red,5);
        lastPosition = transform.position;
    }

    public void OnChangeFunction(string NextFunction)
    {   
        
        switch(NextFunction)
        {   

            
            case "Idle":
                CurentFunction = 0; // idle

                transform.rotation = Quaternion.AngleAxis( Mathf.Round( (transform.rotation.eulerAngles.y)/ 90) * 90, transform.up);
                //transform.position = new Vector3(Mathf.Round(transform.position.x * (1/scaleMultiplier)),Mathf.Round(transform.position.y* (1/scaleMultiplier)),Mathf.Round(transform.position.z* (1/scaleMultiplier))) * scaleMultiplier;

                animator.SetInteger("CurentState",0 );
            
            break;

            case "Right":
                CurentFunction = 2; // turn rhit

                animator.SetInteger("CurentState",0 );
                
            break;

            case "Left"  :
                CurentFunction = 1; // turn left
                animator.SetInteger("CurentState",0 );
            break;  

            case "Move" :
                if(IsWalkable())CurentFunction = 3; // move
                animator.SetInteger("CurentState",3 );
                PlayAudio(audioClip[1]);
            break;

            case "Jump":
            if(IsJumpable())CurentFunction = 4; // Jump
                else CurentFunction = 5;
                animator.SetInteger("CurentState",4 );
                PlayAudio(audioClip[2]);
            break;

            case "Finich":
                robotFinich.OnFinich();
                animator.SetInteger("CurentState",5 );
                
            break;
            
        }
        if(NextFunction != "Idle") StartCoroutine(TimeForAction());

    }

    void SwitchFunctions()
    {
        switch(CurentFunction)
        {
            case 0:
            
            break;

            case 1:
            robotTurn.HandelRotation(-90); // turn rhite
            break;

            case 2:
            robotTurn.HandelRotation(90);// turn left
            break;

            case 3:
            robotMove.HandelMovement();
            
            break;

            case 4:
            robotJump.HandelJump();
            robotMove.HandelMovement();
            
            break;

            case 5: 
            robotJump.HandelJump();
            break;
        } 
    }

    public IEnumerator TimeForAction()
    {    
        yield return new WaitForSeconds(timeForAction);
        framesCount = 0;
        OnChangeFunction("Idle");
        SetBasis();
        // transform.position = new Vector3(transform.position.x,robotJump.HeightObjectBelow() ,transform.position.z);
        yield return new WaitForSeconds(timeBetweenAction);
        RobInstructions.HandelPlay();

    }
    void SetBasis()
    {

        Vector3 rot = new Vector3();
        rot.x = (int)transform.rotation.eulerAngles.x;
        rot.y = (int)transform.rotation.eulerAngles.y;
        rot.z = (int)transform.rotation.eulerAngles.z;
        transform.rotation = Quaternion.Euler(rot);

    }

    bool IsWalkable()
    {
        
        if(!(!IsSomethingFront() && IsSomethingBelowFront(0.5f)))
        {
            PlayAudio(audioClip[3]);
        }
        return !IsSomethingFront() && IsSomethingBelowFront(0.5f);

    }

    bool IsJumpable()
    {
        if(!(IsSomethingBelowFront(maxJumpHeight + 1* transform.localScale.x)))
        {
            PlayAudio(audioClip[3]);
        }
        
        return IsSomethingBelowFront(maxJumpHeight + 1* transform.localScale.x);
    }

    bool IsSomethingFront()
    {   
        Vector3 startPosition =transform.position  + new Vector3(0, 0.5f, 0) * scaleMultiplier;
        return Physics.Raycast(startPosition, transform.forward, 1 * scaleMultiplier, layerMask);
    }

    bool IsSomethingBelowFront(float _Lenht)
    {   
        Vector3 startPosition =transform.position + transform.forward * (1f *   scaleMultiplier) + new Vector3(0, 1.5f, 0)  * scaleMultiplier;
        
        return Physics.Raycast(startPosition, -transform.up, (_Lenht + 1.5f)  * scaleMultiplier, layerMask);
        
    }



    public void OnPlaye()
    {
        robotJump.startY = transform.position.y;
        RobInstructions.OnPlayPrest();
    }

    public void OnChangeInstruction(int i, string _Name)
    {
        RobInstructions.OnChangeInstruction(i, _Name);
    }

    public void ResetInstructions()
    {
        RobInstructions.ResetInstructions();
    }


    public void OnResetCompleed()
    {   
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void PlayAudio(AudioClip clip)
    {
        var Audio = gameObject.AddComponent<AudioSource>();
        Audio.clip = clip;
        Audio.pitch = 1/timeForAction;  
        Audio.Play();
        Destroy(Audio,timeForAction);
    }

}





