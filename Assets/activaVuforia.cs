using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class activaVuforia : MonoBehaviour {

    public bool VuforiaOn = false;
	// Use this for initialization
	void Start () {
        GetComponent<VuforiaBehaviour>().enabled = false;
        GetComponent<DefaultInitializationErrorHandler>().enabled = false;

    }
    void Update()
    {
    }

}
