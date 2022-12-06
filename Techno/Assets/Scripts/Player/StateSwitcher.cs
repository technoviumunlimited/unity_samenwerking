using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StateSwitcher : MonoBehaviour
{   

    int curentState =1;
    bool isInSetAiria;

    public float MaxsSwitchDistans = 5;
    public GameObject Player;
    public GameObject StaticCamera;
    public GameObject CrosAir;
    public GameObject Tip;
    AudioSource audioSource;
    

    void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }

    void Update() 
    {

        isInSetAiria = (Vector3.Distance(Player.transform.position, transform.position) < MaxsSwitchDistans);

        if(isInSetAiria && curentState == 1)Tip.SetActive(true);
        else Tip.SetActive(false);

        
        if(Input.GetKeyDown(KeyCode.E) && isInSetAiria)
        {
            audioSource.Play();
            switch(curentState)
            {
                case 0: // plyer
                curentState = 1;
                Player.SetActive(true);
                StaticCamera.SetActive(false);
                CrosAir.SetActive(true);
                Cursor.lockState = CursorLockMode.Locked;
                
                break;

                case 1: // stasinai camera
                curentState = 0;
                Player.SetActive(false);
                StaticCamera.SetActive(true);
                CrosAir.SetActive(false);
                Cursor.lockState = CursorLockMode.None;
                break;
            }
        }
    }
    
}
