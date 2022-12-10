using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
# endif




[ExecuteInEditMode]
public class LevelMagiger : MonoBehaviour
{
    public Transform instantiateLocation;
    public GameObject curentLevelGameObject;
    Levels levels;
    [HideInInspector]public int curentLevelInt = 0;
    public static bool allLeffelsCompleed;


    void Awake()
    {
        allLeffelsCompleed = true;
        levels = GetComponent<Levels>();

        # if !UNITY_EDITOR
            curentLevelInt = -1;
            OnChangeLefel();
        # endif
    }


    public void OnChangeLefel()
    {
        
        
        if(curentLevelGameObject != null) DestroyImmediate(curentLevelGameObject);
        if( curentLevelInt < levels.levels.Count  -1) curentLevelInt++;
        else 
        {
            curentLevelInt = 0;
            allLeffelsCompleed = true;

        }
        
        curentLevelGameObject = Instantiate(levels.levels[curentLevelInt], instantiateLocation);
        
    }

}
#if UNITY_EDITOR
[CustomEditor(typeof(LevelMagiger))]
class LevelMagigerlEditor: Editor 
{
    public override void OnInspectorGUI()
    {
        var levelMagiger = (LevelMagiger)target;
        if(levelMagiger == null) return;
        
        if(GUILayout.Button("OnChangeLefel"))
        {   
            levelMagiger.OnChangeLefel();
        }
    }
}
# endif




