using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This script control the pause/resume of the game
public class pausaPausado : MonoBehaviour {

    public GameObject canvasPausado;
    public GameObject canvasPausa;

	public void apagaPausado()
    {
        Destroy(canvasPausado);
    }
    public void prendePausado()
    {
        Instantiate(canvasPausado);
    }

    public void apagaPausa()
    {
        Destroy(canvasPausa);
    }
    public void prendePausa()
    {
        Instantiate(canvasPausa);
    }
}
