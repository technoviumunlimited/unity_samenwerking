using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotJump 
{
    public RobotControler rbc;
    public float startY = 0;
    
    public void HandelJump()
    {  
        float numberOfFremsToDessertDestination = rbc.NUMBER_OF_FRAMS_IN_FIXED_UPDATE * rbc.timeForAction;

        rbc.framesCount++;

        if (rbc.framesCount >= numberOfFremsToDessertDestination || rbc.transform.position.y <= HeightObjectBelow() && rbc.framesCount >= numberOfFremsToDessertDestination / 2)
        {
            rbc.transform.position = new Vector3(rbc.transform.position.x,HeightObjectBelow(),rbc.transform.position.z);
            startY = rbc.transform.position.y;
    
        }
        else 
        {
            float StartValu = -Mathf.Sqrt(rbc.maxJumpHeight);
            float NextYHight =(-Mathf.Pow((StartValu +((-StartValu * 2) / numberOfFremsToDessertDestination) *rbc.framesCount),2) +rbc.maxJumpHeight) *rbc.scaleMultiplier; // Formule: https://www.geogebra.org/classic/gg8vqdys
            rbc.transform.position = new Vector3(rbc.transform.position.x,NextYHight + startY , rbc.transform.position.z);
        }
    }

    public float HeightObjectBelow()
    {   

        RaycastHit hit;
        Physics.Raycast(rbc.transform.position + new Vector3(0, 1, 0) * rbc.scaleMultiplier ,-rbc.transform.up ,out hit ,(rbc.maxJumpHeight+2)  * rbc.scaleMultiplier ,rbc.layerMask);
        return rbc.transform.position.y - hit.distance + 1 *rbc.scaleMultiplier;
    }

}


