using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destruccionLlaveDorada : MonoBehaviour {

    public raycastLaser obtencionLlaves;

    // Use this for initialization
    void Start ()
    {
    }

    // Update is called once per frame
    void Update ()
    {//If raycast hit with the golden key, the key is destroyed
        if (obtencionLlaves.llaveDoradaObtenida == true)
        {
            Destroy(gameObject);
        }
    }
}
