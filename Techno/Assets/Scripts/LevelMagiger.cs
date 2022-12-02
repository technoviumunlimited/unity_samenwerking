using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelMagiger : MonoBehaviour
{
    public List<GameObject> levels = new List<GameObject>();
    public Transform instantiateLocation;

    public int curentLevelInt = -1;


    GameObject curentLevelGameObject;


    void Awake()
    {
        OnChangeLefel();
    }

    public void OnChangeLefel()
    {
        if(curentLevelGameObject != null) Destroy(curentLevelGameObject);
        if( curentLevelInt < levels.Count -1) curentLevelInt++;
        else curentLevelInt = 0;
        
        curentLevelGameObject = Instantiate(levels[curentLevelInt], instantiateLocation);
    }

}




