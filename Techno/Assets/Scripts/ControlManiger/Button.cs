using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Button : MonoBehaviour
{

    private Animator animator;
    public UnityEvent unityEvent;
    AudioSource audioSource;

    void Awake() 
    {
        animator = GetComponent<Animator>();
        audioSource=GetComponent<AudioSource>();
    }
    public void DoIets()
    {
        animator.SetTrigger("ButtonPrest");
        unityEvent.Invoke();
        audioSource.Play();
    }
}
