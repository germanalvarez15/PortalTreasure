using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class raycastLaser : MonoBehaviour {

    // Use this for initialization
    Camera cam;
    public GvrPointerInputModule puntero;

    public GameObject canvasLlaveDorada;
    public GameObject canvasLlavePlateada;
    public GameObject tesoroParaAnimator;
    public GameObject particulasFuego;
    public GameObject imagenGano;
    public GameObject canvasDeGano;
<<<<<<< HEAD
    //Look for the Plane Finder gameobject
    public GameObject desactPlaneFinder;
=======
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb

    public bool llaveDoradaObtenida = false;
    public bool llavePlateadaObtenida = false;
    public bool llaveDoradaEnCofre = false;
    public bool llavePlateadaEnCofre = false;

    public int puntaje = 0;

    Animator animatorTesoro;



    TouchPhase touchPhase = TouchPhase.Ended;
    void Start()
    {
        cam = GetComponent<Camera>();
        animatorTesoro = tesoroParaAnimator.GetComponent<Animator>();
        puntero = puntero.GetComponent<GvrPointerInputModule>();
<<<<<<< HEAD
        desactPlaneFinder = GameObject.FindWithTag("PlaneFinder");

=======
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb
    }

    void Update()
    {
        Ray ray = cam.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit))
        {
            //Te dice lo que estas mirando
            //It says the tag of the object that you are looking for
            print("I'm looking at " + hit.transform.tag);

            //If you are looking the golden key and touched the screen, you will get the key.
            if ((hit.transform.tag == "llaveDorada") && ((Input.touchCount > 0 && Input.GetTouch(0).phase == touchPhase || Input.GetMouseButtonDown(0)))) {
                //print("I'm looking at " + hit.transform.name);
                if (!canvasLlaveDorada.activeSelf)
                {
                    canvasLlaveDorada.SetActive(true);
                }
                llaveDoradaObtenida = true;



            }//And if you are looking the silver key and touched the screen, you will get the key.
            else if ((hit.transform.tag == "llavePlateada") && ((Input.touchCount > 0 && Input.GetTouch(0).phase == touchPhase || Input.GetMouseButtonDown(0))))
            {
                //print("I'm looking at " + hit.transform.name);
                if (!canvasLlavePlateada.activeSelf)
                {
                    canvasLlavePlateada.SetActive(true);
                }
                llavePlateadaObtenida = true;
            }
            //Cuando se entrega la llave dorada en el cofre
            //When you have deliver the golden key to the chest
            if ((hit.transform.tag == "tesoro") && ((Input.touchCount > 0 && Input.GetTouch(0).phase == touchPhase || Input.GetMouseButtonDown(0))) && (llaveDoradaObtenida == true))
            {
                llaveDoradaEnCofre = true;
            }//Cuando se entrega la llave plateada en el cofre
             //When you have deliver the silver key to the chest
            if ((hit.transform.tag == "tesoro") && ((Input.touchCount > 0 && Input.GetTouch(0).phase == touchPhase || Input.GetMouseButtonDown(0))) && (llavePlateadaObtenida == true))
            {
                llavePlateadaEnCofre = true;
            }

            //If you touch the chest and you haven't collected all the keys, the chest will shake
            if ((hit.transform.tag == "tesoro") && ((Input.touchCount > 0 && Input.GetTouch(0).phase == touchPhase || Input.GetMouseButtonDown(0))) && ((!llavePlateadaEnCofre == true) || (!llaveDoradaEnCofre == true)))
            {
                animatorTesoro.SetTrigger("sacudeActiva");
                animatorTesoro.SetTrigger("quietoQueda");

            }

            //Se entregaron las dos llaves y ganastes
            //You have deliver all the keys and win
            if ((llavePlateadaEnCofre == true) && (llaveDoradaEnCofre == true)) {
                print("Ganaste");
                animatorTesoro.SetTrigger("abreActiva");
                Destroy(particulasFuego);
                Invoke("muestraCanvasMenuGano", 10);
                if (!imagenGano.activeSelf)
                {
                    imagenGano.SetActive(true);
                }


            }

        }//When you are looking the keys or the chest, the pointer will grown up
        if ((hit.transform.tag == "llaveDorada") || (hit.transform.tag == "llavePlateada") || (hit.transform.tag == "tesoro"))
        {
<<<<<<< HEAD
                puntero.enabled = true;

                if (desactPlaneFinder.activeSelf)
                {
                    desactPlaneFinder.SetActive(false); //If you're in the otherworld you will can't reposition the portal
                }
        }
        else {
            puntero.enabled = false;
            if (desactPlaneFinder != null)
            {
                desactPlaneFinder.SetActive(true);
            }
=======
            puntero.enabled = true;
        }
        else {
            puntero.enabled = false;
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb
        }
    }

    void muestraCanvasMenuGano()
    {
        if (!canvasDeGano.activeSelf)
        {
            canvasDeGano.SetActive(true);
        }
    }

}
