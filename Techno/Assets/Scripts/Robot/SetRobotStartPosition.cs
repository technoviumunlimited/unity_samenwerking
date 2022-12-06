using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetRobotStartPosition : MonoBehaviour
{
    public Transform startPosition;
    public int moveDistance = 1;
    void Start()
    {
        var player = GameObject.FindGameObjectWithTag("Player");
        player.transform.localPosition = startPosition.position;
        //player.GetComponent<RobotControler>().moveDistance = moveDistance;
        
    }


}
