using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This script is to control the fire of the chest. Once the fire is up to 2.0 you lose.
public class contador : MonoBehaviour {

    public float tiempoRestante = 120f;
    public float VelocCrecimientoParticulas = 0.00001f;
    public GameObject canvasPerdiste;

    void Update() {
        float milisegundos = VelocCrecimientoParticulas * 0.001f;
        ParticleSystem m_System = GetComponent<ParticleSystem>();
        ParticleSystem.MainModule main = m_System.main;
        main.startSizeMultiplier += milisegundos;
        if(main.startSizeMultiplier >= 2.0f)
        {
            if (!canvasPerdiste.activeSelf)
            {
                canvasPerdiste.SetActive(true);
            }
        }
    }

}
