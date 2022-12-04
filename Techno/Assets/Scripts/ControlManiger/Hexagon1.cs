using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hexagon1 : MonoBehaviour
{
    public float timeForRotation = 1;
    public RobotControler robotControler;
    public int CurentActionControler;

    AudioSource audioSource;


    Quaternion curentRotation;
    
    Quaternion startRotation;
    float xRotationPerFrame;
    float xRotationPerFrameReset;

    int derection; // 1 = naar beneden draaien, 2 naar boven 
    
    [HideInInspector] public int curentFunction = 0;

    bool isTurning = false;
    public static bool isResetting = false;
    bool onResetPrest;

    //Constante vairibols
    int NUMBER_OF_FRAMS_IN_FIXEDUPDATE = 50;
    int ANGEL_DEGRY_FOR_HEXSAGON = 60;

    void Awake() 
    {   
        startRotation = transform.localRotation;

        xRotationPerFrame = ANGEL_DEGRY_FOR_HEXSAGON  / (NUMBER_OF_FRAMS_IN_FIXEDUPDATE * timeForRotation);
        audioSource = GetComponent<AudioSource>();
        audioSource.pitch = 1/timeForRotation;
    }

    void FixedUpdate() 
    {
        if(isTurning && !isResetting) HandelHexagon();
        else if(isResetting)
        {   
            if(!onResetPrest )OnResetPrest();
            HandelReset();
        }
    }


    public void OnTurnPrest(int _Derection)
    {
        if(!isTurning && !isResetting) 
        {   
            derection = _Derection;
            isTurning = true;
            StartCoroutine(HandelActionState());
        }
    }

    public void OnResetPrest()
    {   
        onResetPrest = true;
        derection = 0;
        curentFunction = 0;
        StartCoroutine(HandelActionState());
        xRotationPerFrameReset = (transform.localRotation.eulerAngles.x - startRotation.eulerAngles.x)  / (NUMBER_OF_FRAMS_IN_FIXEDUPDATE * timeForRotation);

    }


    void HandelHexagon()
    {   
        transform.localRotation = CalculatesQuaternion(transform.localRotation);
        audioSource.Play();
    }
    
    void HandelReset()
    {   
        if(transform.localRotation != startRotation)  audioSource.Play();
        Vector3 NextRotation = new Vector3(xRotationPerFrameReset,0,0); 
        transform.localRotation = Quaternion.Euler(NextRotation) * transform.localRotation;
    }


    Quaternion CalculatesQuaternion(Quaternion _Hexsagon)
    {
        curentRotation = _Hexsagon;
        Vector3 NextRotation = new Vector3(xRotationPerFrame,0,0) * derection;
        _Hexsagon = Quaternion.Euler(NextRotation) * curentRotation;
        return _Hexsagon;
    }

    IEnumerator HandelActionState()
    {   
        
        
        yield return new WaitForSeconds(timeForRotation);
        isTurning = false;
        if(onResetPrest) transform.localRotation = startRotation;
        onResetPrest =false;
        
        isResetting = false;
        CurentFunction(derection);
        
    }


    void CurentFunction(int i)
    {   curentFunction -=i;
        switch(curentFunction)
        {   
            case -1:
            CurentFunction(-6);
            break;

            case 0:
            robotControler.OnChangeInstruction(CurentActionControler, "Emty");  
            break;

            case 5:
            robotControler.OnChangeInstruction(CurentActionControler, "Finich");  
            break;

            case 4:
            robotControler.OnChangeInstruction(CurentActionControler, "Left");  
            break;

            case 3:
            robotControler.OnChangeInstruction(CurentActionControler, "Right");  
            break;

            case 2:
            robotControler.OnChangeInstruction(CurentActionControler, "Jump");  
            break;

            case 1:
            robotControler.OnChangeInstruction(CurentActionControler, "Move");  
            break;

            case 6:
            CurentFunction(6);
            break;
        }
    }
}
