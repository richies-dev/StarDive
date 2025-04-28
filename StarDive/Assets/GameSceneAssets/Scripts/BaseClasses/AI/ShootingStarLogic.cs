using UnityEngine;

public class ShootingStarLogic : MonoBehaviour {
    public float speed = 5;
    public bool move;
    public float GoBackToStartPositionTimer = 0;
    public int timerRangeMin = 5;
    public int timerRangeMax = 100;
    void Start(){

        GoBackToStartPositionTimer = Random.Range(timerRangeMin, timerRangeMax);

        speed = Random.Range(5, 12);
    }

	void FixedUpdate () {

	    transform.Translate(Vector3.left * Time.deltaTime * speed);

        if(move)
        {

           transform.localPosition = new Vector3(23, Random.Range(-5f, 10f), transform.position.z);

           GoBackToStartPositionTimer = Random.Range(timerRangeMin,timerRangeMax);

           speed = Random.Range(5,12);

           move = false;

        }

        if(transform.localPosition.x <= -23)
        {
            speed = 0;
            GoBackToStartPositionTimer -= Time.deltaTime;

            if(GoBackToStartPositionTimer <= 0)
            {

                move = true;

            }     
       
        }

	}

}
