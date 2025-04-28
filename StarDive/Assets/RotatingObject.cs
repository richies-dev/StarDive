using UnityEngine;
using System.Collections;

public class RotatingObject : MonoBehaviour {
    private Vector3 Rotation;
    private float speed = 5; 
    public Vector3 RotationVector;
    void Start() 
    {
        Rotation = transform.eulerAngles;
    }
	// Update is called once per frame
	void Update () 
    {

        Rotation += RotationVector * speed * Time.deltaTime;
        transform.eulerAngles = Rotation;
	
    }
}
