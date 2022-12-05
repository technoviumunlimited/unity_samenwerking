using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeDisplay : MonoBehaviour , IDataPerisitans
{
    TextMeshProUGUI time;
    public TextMeshProUGUI fastisTime;
    public float NumberOfDesemols = 1;
    AudioSource clockTick;

    float FastisTime = Mathf.Infinity;
    [HideInInspector]public float curentTime;
    void Awake()
    {
        time = GetComponent<TextMeshProUGUI>();
        clockTick = GetComponent<AudioSource> ();
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
            clockTick.enabled = true;

        }
        else
        {   
            if(FastisTime > curentTime && curentTime != 0 ) FastisTime = curentTime ;
            if(FastisTime != Mathf.Infinity) fastisTime.text = "Fastis Time: " + Mathf.Round(FastisTime* NumberOfDesemols)/NumberOfDesemols;
            curentTime = 0;
            clockTick.enabled = false;
            
        }


    }

    public void LoadData(GameData data)
    {   
        this.FastisTime = data.fastisTime;
        if(FastisTime != Mathf.Infinity)fastisTime.text = "Fastis Time: " + Mathf.Round(FastisTime* NumberOfDesemols)/NumberOfDesemols;
        
    }

    public void SaveData(ref GameData data)
    {
        data.fastisTime = this.FastisTime;
    }
}
