using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Used for the rotation of the keys
public class AutoRotate : MonoBehaviour {

	public float velocidad = 10f;
	
	// Update is called once per frame
	void Update () {
		transform.Rotate (Vector3.up, velocidad * Time.deltaTime);
		
	}
}
