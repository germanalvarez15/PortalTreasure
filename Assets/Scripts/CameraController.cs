using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Used to control the camera without using ARKit Remote
public class CameraController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
       transform.Translate(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));

        float rotation = 0;
        float rotationVert = 0;

        if (Input.GetKey(KeyCode.Q))
        {
            rotation -= 1;
        }
        if (Input.GetKey(KeyCode.E))
        {
            rotation += 1;
        }
        if (Input.GetKey(KeyCode.L))
        {
            rotationVert += 1;
        }
        if (Input.GetKey(KeyCode.P))
        {
            rotationVert -= 1;
        }
        transform.Rotate(0, rotation, 0);
        transform.Rotate(rotationVert, 0, 0);
	}
}
