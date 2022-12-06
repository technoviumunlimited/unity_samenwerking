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


    //references
    [HideInInspector]public Animator animator;
    [HideInInspector]public RobotJump robotJump;
    [HideInInspector]public RobotMove robotMove;
    [HideInInspector]public RobotTurn robotTurn;
    [HideInInspector]public RobotFinich robotFinich;
    [HideInInspector]public LevelMagiger levelMagiger;
    [HideInInspector]public RobInstructions robInstructions;

    [HideInInspector] public float actionMultiplier;
    [HideInInspector] public float scaleMultiplier;
    
    [HideInInspector] public int NUMBER_OF_FRAMS_IN_FIXED_UPDATE = 50;
    [HideInInspector] public int framesCount = 0;

    


    //SetUp
    void Awake()
    {   
        SetReferences();
        SetNumbers();
        robInstructions.Awake();
    }   

    void SetReferences()
    {
        robotJump = new RobotJump();
        robotJump.rbc = this;
        robotMove = new RobotMove();
        robotMove.rbc = this;
        robotTurn = new RobotTurn();
        robotTurn.rbc = this;
        robotFinich = new RobotFinich();
        robotFinich.rbc = this;
        robInstructions = new RobInstructions();
        robInstructions.rbc = this;
        
        levelMagiger = GameObject.Find("LevelManiger").GetComponent<LevelMagiger>();
        animator = GetComponent<Animator>();
    }

    void SetNumbers()
    {
        actionMultiplier = NUMBER_OF_FRAMS_IN_FIXED_UPDATE / (NUMBER_OF_FRAMS_IN_FIXED_UPDATE * timeForAction);
        scaleMultiplier = (transform.localScale.x );
        animator.speed = 1/(timeForAction);
        moveDistance =  transform.localScale.x * moveDistance;
        
    }

    void Start() 
    {
        robInstructions.startPosition = transform.position;
        robInstructions.startRotation = transform.rotation;
    }



    void FixedUpdate()
    {
        SwitchFunctions();

    }


    // Handel ChangeFunctions
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


    // Handel Loop
    public IEnumerator TimeForAction()
    {    
        yield return new WaitForSeconds(timeForAction);

        framesCount = 0;
        OnChangeFunction("Idle");
        RoundPositionEnRotation();

        yield return new WaitForSeconds(timeBetweenAction);

        robInstructions.HandelPlay();
    }

    void RoundPositionEnRotation()
    {

        Vector3 rot = new Vector3();
        rot.x = (int)transform.rotation.eulerAngles.x;
        rot.y = (int)transform.rotation.eulerAngles.y;
        rot.z = (int)transform.rotation.eulerAngles.z;
        transform.rotation = Quaternion.Euler(rot);

    }


    //Checks if is Walkeble/ is jumpebol
    bool IsWalkable()
    {
        int y = 0;
        for (int i = 1; i < (int)(transform.localScale.x/moveDistance)  + 1; i++)
        {
            if(!(!IsSomethingFront(1 * i) && IsSomethingBelowFront(0.5f , 1 * i)))
            {
                PlayAudio(audioClip[3]);
                
                return false;
            }
            else y++;
            
        
        }
        Debug.Log((int)(transform.localScale.x/moveDistance));
        return (int)(transform.localScale.x/moveDistance) == y;

    }

    bool IsJumpable()
    {

        int y = 0;
        for (int i = 1; i < (int)(transform.localScale.x/moveDistance) + 1; i++)
        {
            if(!(IsSomethingBelowFront(maxJumpHeight + 1, 1 * i)))
            {
                PlayAudio(audioClip[3]);
                return false;
            }
            else y++;

        }
        return (int)(transform.localScale.x/moveDistance) == y;

        
        
    }

    bool IsSomethingFront(float distan)
    {   
        Vector3 startPosition =transform.position  + new Vector3(0, 0.5f , 0) * scaleMultiplier;
        Debug.DrawRay(startPosition , transform.forward * distan*scaleMultiplier, Color.red, 3);
        return Physics.Raycast(startPosition, transform.forward , distan * scaleMultiplier, layerMask);
    }

    bool IsSomethingBelowFront(float _Lenht, float distan)
    {   
        Vector3 startPosition =transform.position + transform.forward * (distan *   scaleMultiplier) + new Vector3(0, 1.5f , 0)  * scaleMultiplier;
        Debug.DrawRay(startPosition , -transform.up  * (_Lenht + 1.5f)  * scaleMultiplier, Color.green, 3);
        return Physics.Raycast(startPosition, -transform.up   , (_Lenht + 1.5f)  * scaleMultiplier, layerMask);
        
    }


    //Handels inputs and sent them to RobInstructions
    public void OnPlaye()
    {   
       
        robotJump.startY = transform.position.y;
        robInstructions.OnPlayPrest();
    }

    public void OnChangeInstruction(int i, string _Name)
    {
        robInstructions.OnChangeInstruction(i, _Name);
    }

    public void ResetInstructions()
    {
        robInstructions.ResetInstructions();
    }

    public void OnResetCompleed()
    {   
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }


    //Handels Audio
    public void PlayAudio(AudioClip clip)
    {
        var Audio = gameObject.AddComponent<AudioSource>();

        try
        {
            Audio.clip = clip;
            Audio.pitch = 1/(timeForAction);  
            Audio.Play();
            Destroy(Audio,timeForAction);
        }
        catch
        {
            Debug.LogError("AudioSource not fount");
        }

    }

}





