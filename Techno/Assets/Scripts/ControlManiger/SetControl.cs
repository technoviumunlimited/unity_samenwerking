using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
# endif

[ExecuteInEditMode]
public class SetControl : MonoBehaviour
{

    public  List<GameObject> controlPannels=new List<GameObject>();
    public RobotControler robotControler;

}
#if UNITY_EDITOR


[CustomEditor(typeof(SetControl))]
class SetControlEditor: Editor 
{
    public override void OnInspectorGUI()
    {
        var setControl = (SetControl)target;
        if(setControl == null) return;

        
        
        if(GUILayout.Button("SetControl"))
        {

            
            GetControl getControl = setControl.GetComponent<GetControl>();
            setControl.robotControler = GameObject.Find("Jammo").GetComponent<RobotControler>();

            if(setControl.controlPannels.Count > 0)
            {   
                for (int i = 0; i <setControl.controlPannels.Count; i++)
                {
                    DestroyImmediate(setControl.controlPannels[i]);
                }
                setControl.controlPannels = new List<GameObject>();
            }
        
            for (int i = 0; i < getControl.NUMBER_OF_COLOMS; i++)
            {
                    Vector3 ColomOfset = -getControl.startLocation.transform.forward *getControl.colomOfset * (i -1);
                    
                for (int y = 0; y < getControl.NUMBER_OF_ROWS; y++)
                {   
                    
                    Vector3 RowOfset = getControl.startLocation.transform.right * getControl.rowOfset * (y -1) ;
                    var obj = Instantiate(getControl.rotationPannel, getControl.startLocation.transform.position + RowOfset + ColomOfset, getControl.startLocation.transform.rotation);
                    Hexagon1 hex =  obj.GetComponentInChildren<Hexagon1>();
                    obj.transform.SetParent(setControl.transform);
                    hex.timeForRotation = getControl.timeForTurn;
                    hex.CurentActionControler = setControl.controlPannels.Count +1;
                    hex.robotControler = setControl.robotControler;
                    setControl.controlPannels.Add(obj);
                    
                }
        
            }
        }

    }
}
# endif
