using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class RobInstructions 
{
    public RobotControler rbc;

    List<String> instructions =  new List<string>();
    
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
        instructions = new List<String>();
        Hexagon1.isResetting = true;
        StartOver();
        instructionsCount=0;
    }

    void StartOver()
    {
        rbc.transform.position = startPosition;
        rbc.transform.rotation = startRotation;
        
        curentInstruction=0;
        isPlayeing = false;
    }

    public void OnChangeInstruction(int i, string _Name)
    {
    
        if(instructions.Count < rbc.getControl.NUMBER_OF_COLOMS * rbc.getControl.NUMBER_OF_ROWS)
        {
            instructions.Add(new String(_Name));            
        }
        else 
        {   
            
            if( _Name !="Emty")
            {
                if(LevelMagiger.allLeffelsCompleed == true) LevelMagiger.allLeffelsCompleed = false;
                if(instructions[i-1] == "Emty" ) instructionsCount ++;
                
            }
            else if( instructions[i-1] != "Emty" &&_Name == "Emty")instructionsCount --;
            

            
            instructions[i -1] = _Name; 
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
                    while(instructions[curentInstruction] == "Emty") 
                        {
                        
                        if(curentInstruction >=  instructions.Count -1) 
                        {   
                            StartOver();
                            return;
                        }
                        else curentInstruction++;
                    }

                    rbc.setControl.controlPannels[curentInstruction].GetComponent<ParticleSystem>().Play();
                    rbc.OnChangeFunction(instructions[curentInstruction]);
                    curentInstruction++; 
                }
                catch (Exception e)
                {
                    Debug.LogError("Oud of range" + e);
                }


            
        }
        else
        {   
            StartOver();
        }
    }


}


