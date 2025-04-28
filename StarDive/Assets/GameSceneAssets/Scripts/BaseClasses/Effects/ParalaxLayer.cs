using UnityEngine;
public class ParalaxLayer : MonoBehaviour {

	public float speed;

	public static float speedModifier;

	public float ParalaxResetPosition = 30;

	public float ParalaxResetPositionTrigger = -60;

	void FixedUpdate () 
    {

        if(transform.position.y > ParalaxResetPositionTrigger)
        {

            transform.position -= new Vector3(0,1,0) * speed * Time.deltaTime * speedModifier;
        
        }
		else
		{

			transform.position = new Vector3(transform.position.x,ParalaxResetPosition,transform.position.z);

		}

	}

}
