using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotMove 
{
    public RobotControler rbc;

    public void HandelMovement()
    {   
        float ChangePositionOnEachFrame = rbc.moveDistance / rbc.NUMBER_OF_FRAMS_IN_FIXED_UPDATE;
        Vector3 nextPosition =(rbc.transform.forward * ChangePositionOnEachFrame * rbc.actionMultiplier);
        Vector3 currentMovePosition = rbc.transform.position + nextPosition;
        rbc.transform.position = currentMovePosition;
    }

}
