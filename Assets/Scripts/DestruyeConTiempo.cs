using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This script destroy the "CanvasIntro" in 10 seconds
public class DestruyeConTiempo : MonoBehaviour {

    public float tiempo = 10.0f;

    void Start()
    {
        Destroy(gameObject, tiempo);
    }
}
