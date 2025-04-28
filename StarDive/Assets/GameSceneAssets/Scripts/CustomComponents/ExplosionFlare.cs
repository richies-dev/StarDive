using UnityEngine;
using System.Collections;
using UnityStandardAssets;
public class ExplosionFlare : MonoBehaviour {
    public float endposition;
    public float resetPosition;
    public float speed = 5f;
    public bool Start = false;
    public bool Fadeback = false;
    public float FadeBackSpeed = 5;
    
	void Update () 
    {
	    if(Start)
        {
            if(transform.position.z < endposition)
            {
                if(Fadeback == false)
                {
                    transform.position += new Vector3(0,0,1) * Time.deltaTime * speed;
                }
            }

            else
            {
                Fadeback = true;
            }

            if(Fadeback == true)
            {

                if (transform.position.z > resetPosition)
                {

                    transform.position -= new Vector3(0, 0, 1) * Time.deltaTime * FadeBackSpeed;

                }
                else 
                {
                    Start = false;
                }
            }

        }

	}

    void OnDisable() 
    {
        transform.position = new Vector3(transform.position.x,transform.position.y,resetPosition);
    }

}
