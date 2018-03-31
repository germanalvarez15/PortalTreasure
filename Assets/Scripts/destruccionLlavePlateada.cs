using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destruccionLlavePlateada : MonoBehaviour {

    public raycastLaser obtencionLlaves;

    // Use this for initialization
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {//If raycast hit with the silver key, the key is destroyed
        if (obtencionLlaves.llavePlateadaObtenida == true)
        {
            Destroy(gameObject);
        }
    }
}

