using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotFinich
{
    public RobotControler rbc;

    public void OnFinich()
    {
        RaycastHit hit;
        if(Physics.Raycast(rbc.transform.position + new Vector3(0,0.5f,0)  * rbc.scaleMultiplier, -rbc.transform.up,out hit, 1 ))
        {
            if(hit.collider.tag == "Finich")
            {   
                rbc.robInstructions.ResetInstructions();
                rbc.levelMagiger.OnChangeLefel();
                rbc.PlayAudio(rbc.audioClip[0]);
            }
            else
            {
                rbc.PlayAudio(rbc.audioClip[3]);
            }
        }

    }
    


}
