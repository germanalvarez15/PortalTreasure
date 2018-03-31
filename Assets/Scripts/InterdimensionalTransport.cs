using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

//DEPRECATED SCRIPT!! using Portal script instead.
public class InterdimensionalTransport : MonoBehaviour {

    public Material[] materials;


	// Use this for initialization
	void Start () {
        foreach (var mat in materials)
        {
            mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.name != "Main Camera") 
            return;
        
        //Afuera del mundo 3D
        if(transform.position.z > other.transform.position.z)
        {
            Debug.Log("Fuera del mundo 3D");
            foreach(var mat in materials)
            {
                mat.SetInt("_StencilTest", (int)CompareFunction.Equal);
            }
        //Dentro del mundo 3D
        }
        else
        {
            Debug.Log("Dentro del mundo 3D");
            foreach(var mat in materials)
            {
                mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
            }

        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.name != "Main Camera")
            return;

        //Afuera del mundo 3D
        if (transform.position.z > other.transform.position.z)
        {
            Debug.Log("Fuera del mundo 3D");
            foreach (var mat in materials)
            {
                mat.SetInt("_StencilTest", (int)CompareFunction.Equal);
            }
            //Dentro del mundo 3D
        }
        else
        {
            Debug.Log("Dentro del mundo 3D");
            foreach (var mat in materials)
            {
                mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
            }

        }
    }

    private void OnDestroy()
    {
        foreach (var mat in materials)
        {
            mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
        }
    }

    // Update is called once per frame
    void Update () {
		
	}
}
