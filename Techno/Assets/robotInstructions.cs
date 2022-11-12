using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Instructions
{
    public string function;
    public float turnAngel;

    public Instructions(string _Function, float _TurnAngel)
    {
        function =_Function;
        turnAngel = _TurnAngel;
    }
 
    public Instructions(string _Function)
    {
        function =_Function;
    }

 
}

public class robotInstructions : MonoBehaviour
{   
    private robotController robotController;
    
    public List<Instructions> instructions = new List<Instructions>();

    void Awake()
    {
        robotController = GetComponent<robotController>();
    }

    public void OnTurnPrest(float _TurnAngel)
    {   
        instructions.Add(new Instructions("OnTurnPrest", _TurnAngel ));
       
    }

    public void OnMovePrest()
    {     
        instructions.Add(new Instructions("OnMovePrest"));
        
    }

    public void OnJumpPrest()
    {   
        instructions.Add(new Instructions("OnJumpPrest"));
        
    }

    int i;
    public void OnPlayPrest()
    {
        
        if(instructions[i].function  == "OnTurnPrest" ){      robotController.OnTurnPrest(instructions[i].turnAngel); }
        else if (instructions[i].function  == "OnMovePrest" ){robotController.OnMovePrest();}
        else if (instructions[i].function  == "OnJumpPrest" ){robotController.OnJumpPrest();}
        Debug.Log(i);
        if(i <= instructions.Count)i++;
    }

}
