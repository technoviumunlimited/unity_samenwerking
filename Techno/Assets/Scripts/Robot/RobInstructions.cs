using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobInstructions 
{
    RobotControler rbc = GameObject.FindGameObjectWithTag("Player").GetComponent<RobotControler>();
    List<Instructions> instructions = new List<Instructions>();
    
    bool isPlayeing = false;

    int curentInstruction =0;
    int instructionsCount;

    Vector3 startPosition;
    Quaternion startRotation;


    public void Awake()
    {   
        ResetInstructions();
    }

    public void ResetInstructions()
    {
        instructions = new List<Instructions>();
        rbc.animator.SetInteger("CurentState",0 );
        Hexagon1.isResetting = true;
        rbc.transform.position = startPosition;
        rbc.transform.rotation = startRotation;
        
    }

    public void OnChangeInstruction(int i, string _Name)
    {
        if(i  -1>= instructions.Count)
        {
            instructions.Add(new Instructions(_Name));
        }
        else 
        {
            instructions[i -1].Name = _Name; 
        }
    }

    public void OnPlayPrest()
    {
        if(!isPlayeing)
        {
            HandelPlay();
            isPlayeing = true;
            startPosition = rbc.transform.position;
            startRotation = rbc.transform.rotation;
        }

    }

    public void HandelPlay()
    {
        if((curentInstruction <  instructions.Count)) // x tijdelijk
        {        
            rbc.OnChangeFunction(instructions[curentInstruction].Name);
            curentInstruction++; 
        }
        else
        {   
            rbc.transform.position = startPosition;
            rbc.transform.rotation = startRotation;
            isPlayeing = false;
            curentInstruction=0;
        }
    }


}


public class Instructions
{
    public string Name;

    public Instructions(string _Name)
    {
        Name = _Name;
    }
}
