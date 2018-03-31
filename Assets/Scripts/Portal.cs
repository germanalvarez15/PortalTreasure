/* THIS SCRIPT IT'S BASED FROM A YOUTUBE VIDEO FROM THE YOUTUBE CHANNEL CALLED "Pirates Just AR", AND THEN
 * MODIFIED BY ME.
 * This Class handles flipping the global _StencilTest property when the device
 * moves throught the portal, from any direction
 */



using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class Portal : MonoBehaviour
{

<<<<<<< HEAD
    public Transform device;
    public Material[] materials;

	public GameObject[] ObjetosReales;
    public Transform cameraParent;

    public GameObject[] Particulas;

    public GameObject cofreFake;

    //Look for the Plane Finder gameobject
    public GameObject desactPlaneFinder;
=======
    public Transform device;
    public Material[] materials;

	public GameObject[] ObjetosReales;
    public Transform cameraParent;

    public GameObject[] Particulas;

    public GameObject cofreFake;
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb

    //bool for checking if the device is not in the same direction as it was
    bool wasInFront;
    //bool for knowing that on the next change of state, what to set the stencil test
    public bool inOtherWorld;

    //This bool is on while device colliding, done so we ensure the shaders are being updated before render frames
    //Avoids flickering
    bool isColliding;

    void Start()
    {
        //start outside other world
        SetMaterials(false);
        ObjetosReales = GameObject.FindGameObjectsWithTag("Reales");
<<<<<<< HEAD
        desactPlaneFinder = GameObject.FindWithTag("PlaneFinder");

        //Esto es para ignorar la colision entre la camara y el portal para que si pueda colisionar con las demas cosas
        //This is to ignorer the collision between the camera and the portal, so that the camera can collide with the others objects
=======

        //Esto es para ignorar la colision entre la camara y el portal para que si pueda colisionar con las demas cosas
        //This is to ignorer the collision between the camera and the portal, so that the camera can collide with the others objects
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb
        Physics.IgnoreCollision(cameraParent.GetComponent<Collider>(), GetComponent<Collider>());
    }

    void SetMaterials(bool fullRender)
    {
        var stencilTest = fullRender ? CompareFunction.NotEqual : CompareFunction.Equal;
        Shader.SetGlobalInt("_StencilTest", (int)stencilTest);

		foreach (var mat in materials) {
			mat.SetInt ("_StencilTest", (int)stencilTest);
		}
    }

    bool GetIsInFront()
    {
        Vector3 worldPos = device.position + device.forward * Camera.main.nearClipPlane;

        Vector3 pos = transform.InverseTransformPoint(worldPos);
        return pos.z >= 0 ? true : false;
    }


    //This technique registeres if the device has hit the portal, flipping the bool

    void OnTriggerEnter(Collider other)
    {
        if (other.transform != device)
            return;
        //Important to do this for if the user re-enters the portal from the same side
        wasInFront = GetIsInFront();
<<<<<<< HEAD
        isColliding = true;
        /*Si los objetos en el mundo real estan activados, se desactivan cuando cruzas el portal. 
         Esto es para que no aparezcan en ambos mundos*/
        /*If the objects in the real world are activated, it will deactivated when you cross the portal.
         This is to avoid than the objects not appear in both worlds*/
        foreach (GameObject i in ObjetosReales)
        {
            if (i != null)
            {
                if (i.activeSelf)
                {
                    i.SetActive(false);
                    cofreFake.SetActive(true);

                }
                else if (!i.activeSelf)
                {
                    i.SetActive(true);
                    cofreFake.SetActive(false);

                }
            }
        }
        foreach (GameObject a in Particulas)
        {
            if (a != null)
            {
                if (!a.activeSelf)
                {
                    a.SetActive(true);
                }
                else if (a.activeSelf)
                {
                    a.SetActive(false);
                }
            }
        }
=======
        isColliding = true;
        /*Si los objetos en el mundo real estan activados, se desactivan cuando cruzas el portal. 
         Esto es para que no aparezcan en ambos mundos*/
        /*If the objects in the real world are activated, it will deactivated when you cross the portal.
         This is to avoid than the objects not appear in both worlds*/
        foreach (GameObject i in ObjetosReales)
        {
            if (i != null)
            {
                if (i.activeSelf)
                {
                    i.SetActive(false);
                    cofreFake.SetActive(true);

                }
                else if (!i.activeSelf)
                {
                    i.SetActive(true);
                    cofreFake.SetActive(false);

                }
            }
        }
        foreach (GameObject a in Particulas)
        {
            if (a != null)
            {
                if (!a.activeSelf)
                {
                    a.SetActive(true);
                }
                else if (a.activeSelf)
                {
                    a.SetActive(false);
                }
            }
        }
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb
    }
    void OnTriggerExit(Collider other)
    {
        if (other.transform != device)
            return;
        isColliding = false;
    }


    /*If there has been a change in the relative position of the device to the portal, flip the
     *Stencil Test
     */

    void WhileCameraColliding()
    {
        if (!isColliding)
            return;
        bool isInFront = GetIsInFront();
        if ((isInFront && !wasInFront) || (wasInFront && !isInFront))
        {
            inOtherWorld = !inOtherWorld;
            SetMaterials(inOtherWorld);
        }
        wasInFront = isInFront;
    }

    void OnDestroy()
    {
        //ensure geometry renders in the editor
        SetMaterials(true);
    }


    void Update()
    {
        WhileCameraColliding();
<<<<<<< HEAD
        if (inOtherWorld == true) {
            foreach (GameObject b in ObjetosReales)
            {
                if (b != null)
                {
                    if (b.activeSelf)
                    {
                        b.SetActive(false);
                        cofreFake.SetActive(true);

                    }
                }
            }

            foreach (GameObject d in Particulas)
            {
                if (d != null)
                {
                    if (!d.activeSelf)
                    {
                        d.SetActive(true);
                    }
                }    
            }
            if (desactPlaneFinder.activeSelf)
            {
                desactPlaneFinder.SetActive(false); //If you're in the otherworld you will can't reposition the portal
            }
        }
        if (inOtherWorld == false)
        {
            foreach(GameObject c in ObjetosReales)
            {
                if (c != null)
                {
                    if (!c.activeSelf)
                    {
                        c.SetActive(true);
                        cofreFake.SetActive(false);
                    }
                }
            }
            foreach (GameObject e in Particulas)
            {
                if (e != null)
                {
                    if (e.activeSelf)
                    {
                        e.SetActive(false);
                    }
                }
            }
            if (desactPlaneFinder != null)
            {
                desactPlaneFinder.SetActive(true); //If you aren't in the otherworld you will can reposition the portal
=======
        if (inOtherWorld == true) {
            foreach (GameObject b in ObjetosReales)
            {
                if (b != null)
                {
                    if (b.activeSelf)
                    {
                        b.SetActive(false);
                        cofreFake.SetActive(true);

                    }
                }
            }

            foreach (GameObject d in Particulas)
            {
                if (d != null)
                {
                    if (!d.activeSelf)
                    {
                        d.SetActive(true);
                    }
                }    
            }

        }
        if (inOtherWorld == false)
        {
            foreach(GameObject c in ObjetosReales)
            {
                if (c != null)
                {
                    if (!c.activeSelf)
                    {
                        c.SetActive(true);
                        cofreFake.SetActive(false);
                    }
                }
            }
            foreach (GameObject e in Particulas)
            {
                if (e != null)
                {
                    if (e.activeSelf)
                    {
                        e.SetActive(false);
                    }
                }
>>>>>>> 7eeff62c64c32d79a5f8681037e7e3e245c00deb
            }
        }
    }
}
