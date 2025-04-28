using UnityEngine;
using System.Collections;

public class TeleportingEnemy : Enemy {

    private int lastLife;

    private bool startTimer = false;

    private float timer = .5f;

    public bool Timer() 
    {
        bool val = false;

        if(timer > 0)
        {

            timer -= Time.deltaTime;
        
        }
        else 
        {

            val = true;
        
        }

        return val;

    }

    public override void OnEnable()
    {
        EnemysStats.HealthOfEnemy = Random.Range(3,8);
        lastLife = EnemysStats.HealthOfEnemy;
        GetComponent<Renderer>().enabled = true;
        GetComponent<Collider2D>().enabled = true;
        EnemysStats.EnemySpeed = 4;
        EnemysStats.ZRotationOfEnemy = Random.Range(0, 360);
        rotRandom = Random.Range(0, 2);
        timer = GetComponent<ParticleSystem>().startLifetime;
    }

	public override void Update () {
        
        if (lastLife != EnemysStats.HealthOfEnemy)
        {
            OnLifeChange(); /* Or Hit */
            lastLife = EnemysStats.HealthOfEnemy;
        }

        if(startTimer)
        {
            if(Timer())
            {
                if (lastLife <= 0)
                {
                    this.gameObject.SetActive(false);
                    startTimer = false;
                }
                else
                {
                    RockCrackSound.PlayTeleportSound();
                    EnemysStats.EnemySpeed = 4;
                    transform.localPosition = new Vector3(Random.Range(-5, 5), Random.Range(7, 9));



                    ParticleSystem.EmissionModule emission = GetComponent<ParticleSystem>().emission;

                    emission.enabled = true;                    
                    GetComponent<ParticleSystem>().Emit(ParticleAmount);
                    emission.enabled = false;


                    GetComponent<Renderer>().enabled = true;
                    GetComponent<Collider2D>().enabled = true;
                    startTimer = false;
                    timer = GetComponent<ParticleSystem>().startLifetime;
                }
            }
        }


	}

    void OnLifeChange() 
    {

        RockCrackSound.PlayTeleportSound();

        EnemysStats.EnemySpeed = 0;

        GetComponent<Renderer>().enabled = false;

        ParticleSystem.EmissionModule emission = GetComponent<ParticleSystem>().emission;

        emission.enabled = true;

        emission.enabled = true;
        GetComponent<ParticleSystem>().Emit(ParticleAmount);
        emission.enabled = false;

        GetComponent<Collider2D>().enabled = false;
        
        startTimer = true;
        
        /*
         *disappear
         *Show particles
         *wait ~.5 seconds
         *reappear & show particles simultaneously
         *
         */


    }


    public override void FixedUpdate()
    {
        base.FixedUpdate();
    }

}
