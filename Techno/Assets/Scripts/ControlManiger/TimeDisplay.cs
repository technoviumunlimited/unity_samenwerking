using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeDisplay : MonoBehaviour , IDataPerisitans
{
    TextMeshProUGUI time;
    public TextMeshProUGUI fastisTime;
    public float NumberOfDesemols = 1;

    float FastisTime = Mathf.Infinity;
    [HideInInspector]public float curentTime;
    void Awake()
    {
        time = GetComponent<TextMeshProUGUI>();
        NumberOfDesemols *=10;

        
    }

    void Start()
    {   

    }

    void FixedUpdate()
    {
        
        if(LevelMagiger.allLeffelsCompleed == false) 
        {
            curentTime += Time.deltaTime;
            time.text = "Time:" + Mathf.Round(curentTime* NumberOfDesemols)/ NumberOfDesemols;

        }
        else
        {
            if(FastisTime > curentTime && curentTime != 0) FastisTime = curentTime ;
            fastisTime.text = "Fastis Time: " + Mathf.Round(FastisTime* NumberOfDesemols)/NumberOfDesemols;
            curentTime = 0;
            
        }



    }

    public void LoadData(GameData data)
    {   
        this.FastisTime = data.fastisTime;
        fastisTime.text = "Fastis Time: " + Mathf.Round(FastisTime* NumberOfDesemols)/NumberOfDesemols;
    }

    public void SaveData(ref GameData data)
    {
        Debug.Log(FastisTime);
        
        data.fastisTime = this.FastisTime;
    }
}
