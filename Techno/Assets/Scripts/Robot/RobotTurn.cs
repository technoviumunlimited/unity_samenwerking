using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotTurn 
{
    public RobotControler rbc;
    public void HandelRotation(float _Angel)
    {   
        float ChangeAngelOnEachFrame = _Angel / rbc.NUMBER_OF_FRAMS_IN_FIXED_UPDATE;
        float NextRotationY = ChangeAngelOnEachFrame * rbc.actionMultiplier;
        float currentRoationY =  rbc.transform.rotation.eulerAngles.y+ NextRotationY;
        rbc.transform.rotation =Quaternion.AngleAxis((currentRoationY), Vector3.up);
    }
}
