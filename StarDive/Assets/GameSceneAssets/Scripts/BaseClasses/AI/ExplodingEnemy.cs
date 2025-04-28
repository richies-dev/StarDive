using UnityEngine;

public class ExplodingEnemy : Enemy
{

    public AnimateFrames ExplosionEffect;

    private Transform[] obj;

    private int i = 0;

    public GameObject parent;

    public override void OnEnable()
    {

        base.OnEnable();

        ExplosionEffect.OffsetValue = 0;

        ExplosionEffect.gameObject.SetActive(false);

        ExplosionEffect.enabled = true;

        obj = parent.GetComponentsInChildren<Transform>(true);

        i = 0;

    }

    public override void Update()
    {

        if (Die)
        {

            while (i < obj.Length)
            {

                if (obj[i].gameObject.activeSelf == true)
                {

                    if (obj[i].GetComponent<Enemy>() != null)
                    {

                        if (!(obj[i].GetComponent<Enemy>() is ExplodingEnemy))
                        {
                            if (!(obj[i].GetComponent<Enemy>() is NukeEnemy))
                            {
                                if (obj[i].GetComponent<Enemy>().EnemysStats.HealthOfEnemy <= 0)
                                {

                                    obj[i].GetComponent<Enemy>().Die = true;

                                }
                                else
                                {

                                    obj[i].GetComponent<Enemy>().EnemysStats.HealthOfEnemy--;

                                }
                            }

                        }

                    }

                }

                i++;

            }

            if (i >= obj.Length)
            {

                if (ExplosionEffect.enabled == false)
                {
                
                    gameObject.SetActive(false);
                
                }
            
            }
            
            ExplosionEffect.gameObject.SetActive(true);
           
            GetComponent<MeshRenderer>().enabled = false;
            
            GetComponent<Collider2D>().enabled = false;

            if (ExplosionEffect.OffsetValue >= ExplosionEffect.OffsetLimit)
            {
            
                ExplosionEffect.enabled = false;
            
            }

        }

    }

}
