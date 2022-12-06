using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeDisplay : MonoBehaviour , IDataPerisitans
{
    public float NumberOfDesemols = 1;
    
    TextMeshProUGUI time;
    public TextMeshProUGUI fastisTime;

    
    
    AudioSource clockTick;


    [HideInInspector]public float curentTime;
    float FastisTime = Mathf.Infinity;

    

    void Awake()
    {
        time = GetComponent<TextMeshProUGUI>();
        clockTick = GetComponent<AudioSource> ();
        NumberOfDesemols *=10;

    }

    void FixedUpdate()
    {
        HandelTime();
    }

    void HandelTime()
    {
        if(LevelMagiger.allLeffelsCompleed == false) 
        {
            curentTime += Time.deltaTime;
            time.text = "Time:" + FormatSeconds(curentTime);
            clockTick.enabled = true;

        }
        else
        {   
            if(FastisTime > curentTime && curentTime != 0 ) FastisTime = curentTime ;
            if(FastisTime != Mathf.Infinity) fastisTime.text = "Fastis Time: " + FormatSeconds(FastisTime);
            curentTime = 0;
            clockTick.enabled = false;
        }
    }

    string FormatSeconds(float elapsed)
    {
        int d = (int)(elapsed * 100.0f);
        int minutes = d / (60 * 100);
        int seconds = (d % (60 * 100)) / 100;
        int hundredths = d % 100;
        return string.Format("{0:00}m:{1:00},{2:00}s", minutes, seconds, hundredths);
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
