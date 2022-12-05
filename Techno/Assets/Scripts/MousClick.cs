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
        RaycastHit hit;
        
        if(Physics.Raycast(camera.ScreenPointToRay(Input.mousePosition), out hit) && Input.GetMouseButtonDown(0))
        {
            if(hit.collider.tag == "Button")
            {
                hit.collider.GetComponent<Button>().DoIets();
            }
        }
    }
}
