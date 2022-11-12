using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[System.Serializable]
public class Instructions
{
    public string function;

    public float turnAngel;

    public Instructions(string _Function, float _TurnAngel)
    {
        function = _Function;
        turnAngel = _TurnAngel;
    }

    public Instructions(string _Function)
    {
        function = _Function;
    }

    
}

public class robotInstructions : MonoBehaviour
{   
    public List<Instructions> instructions = new List<Instructions>();
    public List<TextMeshProUGUI> instructionsText = new List<TextMeshProUGUI>();
    private robotController robotController;
    int curentInstructionsCount;
    
    void Awake()
    {   
        robotController = GetComponent<robotController>();
        
    }

    public void OnTurnPrest(float _TurnAngel)
    {
        
        instructions.Add(new Instructions("Turn", _TurnAngel));
        EditUI(instructions.Count-1);

    }
    public void OnMovePrest()
    {
        
        instructions.Add(new Instructions("move"));
        EditUI(instructions.Count-1);
    }
    public void OnJumpPrest()
    {
        
        instructions.Add(new Instructions("jump"));
        EditUI(instructions.Count-1);
    }
    public void onFinichPrest()
    {
        instructions.Add(new Instructions("Finich"));
        EditUI(instructions.Count-1);
    }
    public void OnResetPrest()
    {
        SceneManiger.ChangeScen();
    }

    void EditUI(int _I)
    {   
        instructionsText[_I].text = instructions[_I].function;
        
    }
    void ResetInstructions()
    {
            for (int i = 0; i < instructions.Count; i++)
            {
                instructionsText[i].color = Color.black;
                instructionsText[i].text = " ";
            }  
            curentInstructionsCount =0; instructions= new List<Instructions>();
    }

    public void OnPlayPrest()
    {   


        if(curentInstructionsCount >= instructions.Count) ResetInstructions();
        else if(curentInstructionsCount < instructions.Count)  StartCoroutine(PlayActions()); 
        
    }

    IEnumerator PlayActions()
    {   
        yield return new WaitForSeconds(robotController.timeBetweenActions);

        if (instructions[curentInstructionsCount].function == "Turn")
        {
            robotController.ActionTurrn(instructions[curentInstructionsCount].turnAngel);
        }
        else if (instructions[curentInstructionsCount].function == "move")
        {
            robotController.ActionMove();
        }
        else if (instructions[curentInstructionsCount].function == "jump")
        {
            robotController.ActionJump();
        }
        else if (instructions[curentInstructionsCount].function == "Finich")
        {   
            robotController.onFinichPrest();
        }


        instructionsText[curentInstructionsCount].color = Color.red;

        if (curentInstructionsCount < instructions.Count) curentInstructionsCount++;
        
        
    }
}
