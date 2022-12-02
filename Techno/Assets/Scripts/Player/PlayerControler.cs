using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControler : MonoBehaviour
{
    [Header("Player Stings")]
    public float walkSpeed = 3;
    public float runSpeed = 6;
    public float grafity = 30;

    [Header("Mous Stings")]
    [Range(0,10)] public float lookSpeedY = 5;
    [Range(0,10)] public float lookSpeedX =5;
    [Range(0,180)] public float upperLookLimit = 80;
    [Range(0,180)] public float lowerLookLimit = 80;


    Camera playerCamera;
    CharacterController characterController;
    
    Vector3 MoveDerection;

    float InputHorizontal;
    float InputVertical;
    float rotationX;

    void Awake() 
    {
        characterController = GetComponent<CharacterController>();
        playerCamera = GetComponentInChildren<Camera>();
        Cursor.lockState = CursorLockMode.Locked;
        //Cursor.visible = false;
    } 
    void Update() 
    {

        HnadelInput();
        HandelMousLook();
        HandelMovment();
    }

    void HnadelInput()
    {
        InputHorizontal = Input.GetAxis("Horizontal");
        InputVertical = Input.GetAxis("Vertical");
    }

    void HandelMousLook()
    {
        rotationX -= Input.GetAxis("Mouse Y") * lookSpeedY;
        rotationX = Mathf.Clamp(rotationX, -lowerLookLimit, upperLookLimit);

        playerCamera.transform.localRotation =  Quaternion.Euler(rotationX ,0 ,0);
        transform.rotation *=  Quaternion.Euler(0 ,Input.GetAxis("Mouse X") * lookSpeedX,0);
    }

    void HandelMovment()
    {
        MoveDerection = ((InputHorizontal * transform.right + InputVertical * transform.forward)).normalized ;

        if(!characterController.isGrounded)
        {
            MoveDerection.y -= grafity;
        }

        characterController.Move(MoveDerection * walkSpeed * Time.deltaTime);
    }


}
