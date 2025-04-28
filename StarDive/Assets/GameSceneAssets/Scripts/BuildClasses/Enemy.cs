using UnityEngine;
using System.Collections;

[System.Serializable]
public class Enemy : MonoBehaviour{
    
    public EnemyStats EnemysStats = new EnemyStats(4,10,0,0);
    
    public bool isChild = false;

    public int HealthResetValue = 2;

    public bool Die;

    public float deathTimer = 0;

    public int rotRandom;

    public bool addLife = false;

    public static float EnemyStaticSpeed = 1;

    private bool hasEmited = false;

    public int ParticleAmount = 10;

    public virtual void OnEnable() 
    {
        
        hasEmited = false;

        if (isChild)
        {

            EnemysStats.EnemySpeed = 0;

        }

        EnemysStats.ZRotationOfEnemy = Random.Range(0, 360);

        rotRandom = Random.Range(0, 2);

        GetComponent<MeshRenderer>().enabled = true;

        if (GetComponent<ParticleSystem>() != null)
        {
            ParticleSystem.EmissionModule em = GetComponent<ParticleSystem>().emission;
            em.enabled = false;
            deathTimer = GetComponent<ParticleSystem>().startLifetime;
        }

        GetComponent<Collider2D>().enabled = true;


        Die = false;

    }
    
    public virtual void Update() 
    {

        if (Die)
        {

            GetComponent<MeshRenderer>().enabled = false;

            if(hasEmited == false)
            {
              GetComponent<ParticleSystem>().Emit(ParticleAmount);
              hasEmited = true;
            }

            deathTimer -= Time.deltaTime;

            GetComponent<Collider2D>().enabled = false;

            if (deathTimer <= 0)
            {

                gameObject.SetActive(false);
            }


        }

    }

    public virtual void FixedUpdate()
    {

        if (rotRandom == 1)
        {

            EnemysStats.ZRotationOfEnemy += Time.deltaTime * EnemysStats.EnemyRotationSpeed;

        }

        if (rotRandom == 0)
        {

            EnemysStats.ZRotationOfEnemy -= Time.deltaTime * EnemysStats.EnemyRotationSpeed;

        }

        transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, EnemysStats.ZRotationOfEnemy);

        transform.position -= Vector3.up *( Time.deltaTime * EnemysStats.EnemySpeed * EnemyStaticSpeed);
    }

}

