using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MousClick : MonoBehaviour
{
    new Camera camera;
    void Start()
    {   
        camera = GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {

        if(Input.GetMouseButtonDown(0)) Klick();
    }

    void Klick()
    {
        RaycastHit hit;
        if(Physics.Raycast(camera.ScreenPointToRay(Input.mousePosition), out hit))
        {
            
            if(hit.collider.tag == "Button" && hit.collider != null)
            {   
                Debug.DrawLine(transform.position, hit.point, Color.green,1);  
                hit.collider.GetComponent<Button>().DoIets();
            }
            else Debug.DrawLine(transform.position, hit.point, Color.red,1);  
        }
    }
}


