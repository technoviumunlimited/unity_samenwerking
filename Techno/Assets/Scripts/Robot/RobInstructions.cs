using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobInstructions 
{
    RobotControler rbc = GameObject.FindGameObjectWithTag("Player").GetComponent<RobotControler>();
    List<Instructions> instructions = new List<Instructions>();
    
    public static bool  isPlayeing = false;

    int curentInstruction =0;
    int instructionsCount;


    public Vector3 startPosition;
    public Quaternion startRotation;


    public void Awake()
    {   
        ResetInstructions();

    }
    public void ResetInstructions()
    {   
        instructionsCount=0;
        instructions = new List<Instructions>();
        rbc.animator.SetInteger("CurentState",0 );
        Hexagon1.isResetting = true;
        rbc.transform.position = startPosition;
        rbc.transform.rotation = startRotation;
        isPlayeing = false;
    }

    public void OnChangeInstruction(int i, string _Name)
    {
    
        if(instructions.Count < rbc.getControl.NUMBER_OF_COLOMS * rbc.getControl.NUMBER_OF_ROWS)
        {
            instructions.Add(new Instructions(_Name));

            
        }
        else 
        {   
            
            if( _Name !="Emty")
            {
                if(LevelMagiger.allLeffelsCompleed == true) LevelMagiger.allLeffelsCompleed = false;
                if(instructions[i-1].Name == "Emty" ) instructionsCount ++;
                
            }
            else if( instructions[i-1].Name != "Emty" &&_Name == "Emty")instructionsCount --;
            
            instructions[i -1].Name = _Name; 
        }

    }

                

    public void OnPlayPrest()
    {
        if(!isPlayeing && instructionsCount > 0 )
        {
            HandelPlay();
            isPlayeing = true;
            startPosition = rbc.transform.position;
            startRotation = rbc.transform.rotation;
            rbc.robotJump.startY = rbc.transform.position.y;
        }

    }

    public void HandelPlay()
    {   

     
            
        if((curentInstruction <  instructions.Count)) 
        {       

                try
                {
                    while(instructions[curentInstruction].Name == "Emty") 
                        {
                        
                        if(curentInstruction >=  instructions.Count) 
                        {   
                            rbc.transform.position = startPosition;
                            rbc.transform.rotation = startRotation;
                            isPlayeing = false;
                            curentInstruction=0;
                            return;
                        }
                        else curentInstruction++;
                    }
                }
                catch
                {
                    Debug.LogError("Oud of range");
                }

            rbc.setControl.controlPannels[curentInstruction].GetComponent<ParticleSystem>().Play();
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
