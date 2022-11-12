using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class robotController : MonoBehaviour
{   
    [Tooltip("De tijt hoe lang een action duurt")]
    public float timeForAction = 1;
    public float maxJumpHeight;
    public float moveDistance = 1;

    public LayerMask layerMask;
   

    private robotInstructions robotInstructions;

    //Global variables
    private float actionMultiplier;
    public int countFremsDown;
    private int numberOfFremsToDessertDestination;
    
    //Constant variables
    private int NUMBER_OF_FRAMS_IN_FIXED_UPDATE = 50;
    
    //Rotation variables
    private float currentRoationY;
    private bool isTurning = false;
    private float turnAngel;


    //Move variables
    private bool isMoving = false;
    private Vector3 currentMovePosition;
    private float setMovePositionY;
    
    
    //Jump variables
    private bool isJumping = false;
    private float framesCount = 0;
    
    // Racy variables 
    private float RAYCAST_LENGTH_FRONT = 1f;
    private float RAYCAST_LENGTH_BELOW_FRONT = 0.6f;
    private float RAYCAST_LENGTH_BELOW = 10f;






    void Awake()
    {
        robotInstructions = GetComponent<robotInstructions>();
        actionMultiplier = NUMBER_OF_FRAMS_IN_FIXED_UPDATE  / (NUMBER_OF_FRAMS_IN_FIXED_UPDATE * timeForAction);
        numberOfFremsToDessertDestination = (int)(timeForAction * NUMBER_OF_FRAMS_IN_FIXED_UPDATE);
        countFremsDown = numberOfFremsToDessertDestination;
    }

    void FixedUpdate()
    {
        if(isTurning &&!isMoving && !isJumping)   HandelsRotation(turnAngel);
        else if(isMoving && !isJumping )    HandelMovement(moveDistance);
        else if(isJumping )   HandelJump(maxJumpHeight , moveDistance);
        Debug.Log(isMoving);
    }


    public void OnTurnPrest(float _TurnAngel)
    {   
        isTurning = true;
        turnAngel = _TurnAngel;
    }

    public void OnMovePrest()
    {    Debug.Log("test");
        isMoving = true;
        if(IsWalkable())
        {
            
           
        }
        
    }

    public void OnJumpPrest()
    {   
        if(IsJumpable())
        {
            isJumping = true;
        }
    }



    void HandelJump(float _MaxJumpHeight, float _DesiredPositionAfterAction)
    {
       
        framesCount ++;
        float StartValu = - Mathf.Sqrt(_MaxJumpHeight);
        float NextYHight = (-Mathf.Pow((StartValu + ((-StartValu*2) / numberOfFremsToDessertDestination)* framesCount),2)+ _MaxJumpHeight); // Formule: https://www.geogebra.org/classic/gg8vqdys
        NextYHight += setMovePositionY;
        if (currentMovePosition.y <= HeightObjectBelow () && framesCount >= numberOfFremsToDessertDestination /2)
        {
            currentMovePosition.y = HeightObjectBelow ();
        }
        else currentMovePosition.y = NextYHight;
     
        if(framesCount >= numberOfFremsToDessertDestination)
        {
            framesCount = 0; 
            currentMovePosition.y = HeightObjectBelow ();
            setMovePositionY = currentMovePosition.y;        
        }

        HandelMovement(_DesiredPositionAfterAction);
        
    }

    void HandelMovement(float _DesiredPositionAfterAction)
    {   
       
        float ChangePositionOnEachFrame = _DesiredPositionAfterAction / NUMBER_OF_FRAMS_IN_FIXED_UPDATE;
        Vector3 nextPosition =  (transform.forward * ChangePositionOnEachFrame * actionMultiplier );
        currentMovePosition = currentMovePosition + nextPosition;
        transform.position = currentMovePosition;
        isMoving = IsActionActive();
        
    }

    void HandelsRotation(float _DesiredRotationAfterAction)
    {
        float ChangeAngelOnEachFrame = _DesiredRotationAfterAction / NUMBER_OF_FRAMS_IN_FIXED_UPDATE;
        float NextRotationY = ChangeAngelOnEachFrame * actionMultiplier;
        currentRoationY += NextRotationY;
        transform.rotation = Quaternion.AngleAxis((currentRoationY),Vector3.up);
        isTurning = IsActionActive();
    }



    bool IsWalkable()
    {   

        return !IsSomethingFront(RAYCAST_LENGTH_FRONT,transform.position+ new Vector3(0,0.5f,0)) && IsSomethingBelowFront(RAYCAST_LENGTH_BELOW_FRONT);
    }

    bool IsJumpable()
    {
        return !IsWalkable() && IsSomethingBelowFront(maxJumpHeight /2 + RAYCAST_LENGTH_BELOW_FRONT) && !IsSomethingFront(RAYCAST_LENGTH_FRONT,transform.position+ new Vector3(0,maxJumpHeight /2 + RAYCAST_LENGTH_BELOW_FRONT,0));
    }

    bool IsSomethingFront(float _Length ,Vector3 _StartPosition)
    {
        
        return  Physics.Raycast(_StartPosition, transform.forward, _Length ,layerMask) ;
    }

    bool IsSomethingBelowFront(float _Length)
    {
        Vector3 startPosition = transform.position +( transform.forward * 1.5f) + new Vector3(0,0.5f,0);
        return  Physics.Raycast(startPosition, -transform.up, _Length ,layerMask) ;
    }

    bool IsActionActive()
    {   
        countFremsDown --;
        if(countFremsDown <=0) 
        {   
            
            countFremsDown = numberOfFremsToDessertDestination;
            isJumping = false;
            robotInstructions.OnPlayPrest();
            return false;  
        }
        return true;
    }
    
    
    float HeightObjectBelow ()
    {
        RaycastHit hit;
        Physics.Raycast(transform.position + new Vector3(0,1,0), -transform.up , out hit, RAYCAST_LENGTH_BELOW , layerMask );
        return transform.position.y - hit.distance +1;
    }
    }
