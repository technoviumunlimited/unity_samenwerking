// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;

// public class hexagon : MonoBehaviour
// {   
//     public static bool Reset;
//     public float timeForTurn = 1;
//     public int instruction;

//     int direction = 5;
//     float TURN_AGNEL_HAXAGON = 60;
//     float ToZirro = 0;
//     int CurentFunction;
    
//     bool isTurning = false;
//     public RobotControler robotControler;

//     Vector3   currentEulerAngles;

//     void Start(){SetCurentFunction();}

//     void FixedUpdate()
//     {
//         if(Reset)
//         { 
//             if(!(transform.localRotation.eulerAngles.x == 180) )
//             {
//                 currentEulerAngles+= new Vector3(1, 0, 0);
//                 transform.rotation = Quaternion.EulerAngles(currentEulerAngles);
//             }
//             CurentFunction = 5;
//             direction = 0;
//             StartCoroutine(Time());
            
//         }
//         else if(isTurning)HandelTurn();
//     }


//     public void OnTurn( int _Direction)
//     {
//         if(!isTurning)
//         {
//             direction = _Direction;
//             isTurning=true;
//             StartCoroutine(Time());
//         }
//     }

//     void HandelTurn()
//     {
//         float currentRoationZ =  (transform.rotation.eulerAngles.x  + TURN_AGNEL_HAXAGON/(50 * timeForTurn) *  direction);
//         yield return new WaitForSeconds(timeForTurn);
//         isTurning = false;
//         transform.localRotation = Quaternion.AngleAxis(Mathf.Round( transform.localRotation.eulerAngles.x/ 1) *1,Vector3.right);
//         ToZirro = -(transform.localRotation.eulerAngles.x -60) /  (50  * timeForTurn);
//         Reset = false;
//         SetCurentFunction();
//     }
    
//     void SetCurentFunction()
//     {
//         CurentFunction -= direction;
//         if(CurentFunction > 5) CurentFunction =0;
//         else if(CurentFunction< 0) CurentFunction =5;



//         switch (CurentFunction)
//         {
//             case 0:
//             robotControler.OnChangeInstruction(instruction, "Finich");    
//             break;

//             case 1:
//             robotControler.OnChangeInstruction(instruction, "Move");    
//             break;

//             case 2:
//             robotControler.OnChangeInstruction(instruction, "Left");    
//             break;

//             case 3:
//             robotControler.OnChangeInstruction(instruction, "Right");    
//             break;

//             case 4:
//             robotControler.OnChangeInstruction(instruction, "Jump");    
//             break;

//             case 5:
//             robotControler.OnChangeInstruction(instruction, "Emty");    
//             break;
//         }
        
//     }

// }
