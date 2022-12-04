using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetRobotStartPosition : MonoBehaviour
{
    public Transform startPosition;
    void Start()
    {
        GameObject.FindGameObjectWithTag("Player").transform.localPosition = startPosition.position;
    }


}
