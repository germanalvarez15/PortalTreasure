using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
<<<<<<< HEAD
using UnityEngine.UI;
=======
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb

//This script load the scenes when the user click each button on the Canvas
public class cargaNivel : MonoBehaviour {

<<<<<<< HEAD
    public Dropdown dispositivo;
    public GameObject letsplayvuforia;
    public GameObject letsplayarkit;


    private void Start()
    {
        dispositivo.onValueChanged.AddListener(delegate {
            dispositivoValueChangedHandler(dispositivo);
        });

    }


    void Destroy()
    {
        dispositivo.onValueChanged.RemoveAllListeners();
    }

    private void dispositivoValueChangedHandler(Dropdown target)
    {
        if ((target.value == 0) || (target.value == 1) || (target.value == 2) || (target.value == 3) || (target.value == 4) || (target.value == 13) || (target.value == 14) || (target.value == 15) || (target.value == 16) || (target.value == 17) || (target.value == 18) || (target.value == 19) || (target.value == 20))
        {
            if (!letsplayvuforia.activeSelf)
            {
                letsplayvuforia.SetActive(true);
            }
        }
        else
        {
            if (!letsplayarkit.activeSelf)
            {
                letsplayarkit.SetActive(true);
            }
        }
    }

    public void cargaEscena()
    {
        SceneManager.LoadScene("arkit");
    }
	public void cargaEscenaVuforia()
	{
		SceneManager.LoadScene("vuforia");
	}
=======
    public void cargaEscena()
    {
        SceneManager.LoadScene("CiudadVieja");
    }
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb
    public void vuelveAlInicio()
    {
        SceneManager.LoadScene("inicio");
    }
}
