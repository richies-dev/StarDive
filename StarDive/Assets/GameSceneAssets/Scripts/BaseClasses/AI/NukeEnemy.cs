using UnityEngine;
using System.Collections;

public class NukeEnemy : Enemy {
    
    private Transform[] obj;

    private int i = 0;

    public GameObject parent;

    public ExplosionFlare flare;

    public override void OnEnable()
    {

        base.OnEnable();

        obj = parent.GetComponentsInChildren<Transform>(true);

        i = 0;

        flare.enabled = false;

        flare.Start = true;

        flare.Fadeback = false;
    }
    void OnDisable() 
    {

        EnemyStaticSpeed = 1;
        EnemyController.SpawnEnabled = true;

    }
    public override void Update()
    {

        if (Die)
        {

            EnemyController.SpawnEnabled = false;

            EnemyStaticSpeed = 0f;
            
            while (i < obj.Length)
            {
                if (obj[i].GetComponent<NukeEnemy>() == null)
                {
                    
                    if (obj[i].gameObject.activeSelf == true)
                    {

                        if (obj[i].GetComponent<Enemy>() != null)
                        {

                            if(obj[i].GetComponent<enemyTier2AI>() != null)
                            {

                                obj[i].GetComponent<enemyTier2AI>().DestroyAll = true;

                            }

                            if (obj[i].GetComponent<enemyTier4AI>() != null)
                            {

                                obj[i].GetComponent<enemyTier4AI>().DestroyAll = true;

                            }

                            SavedData.current.PlayerStats.Money++;

                            obj[i].GetComponent<Enemy>().Die = true;

                        }

                    }
                }

                i++;

            }
            if (i >= obj.Length)
            {
                flare.enabled = true;

                if(flare.Start == false)
                {
                    gameObject.SetActive(false);
                }

            }


            GetComponent<MeshRenderer>().enabled = false;

            GetComponent<Collider2D>().enabled = false;


        }

    }

}
