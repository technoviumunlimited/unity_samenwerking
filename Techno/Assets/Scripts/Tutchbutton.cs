using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutchbutton : MonoBehaviour
{
    Camera palyer;
    public float klickDistans = 2;


    void Awake() 
    {
        palyer = GetComponentInChildren<Camera>();
    }

    void Update() 
    {
        if(Input.GetMouseButtonDown(0))
        {
            Klick();
        }
    }

    void Klick()
    {
        RaycastHit hit;
        if(Physics.Raycast(palyer.transform.position, palyer.transform.forward,  out hit, klickDistans))
        {
            Debug.DrawLine(palyer.transform.position, hit.point, Color.green,1);

            if(hit.collider.tag == "Button" && hit.collider != null)
            {     
                hit.collider.GetComponent<Button>().DoIets();
            }
        }
        else Debug.DrawRay(palyer.transform.position, palyer.transform.forward,Color.red,1);
    }
}

