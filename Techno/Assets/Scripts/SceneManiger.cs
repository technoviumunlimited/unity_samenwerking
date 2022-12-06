using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneManiger 
{
    public static void ChangeScen()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public static void ChangeScen(int i)
    {   
        
        if(SceneManager.GetActiveScene().buildIndex >= SceneManager.sceneCountInBuildSettings -1) SceneManager.LoadScene(0);
        else SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex +i);
    }
}
