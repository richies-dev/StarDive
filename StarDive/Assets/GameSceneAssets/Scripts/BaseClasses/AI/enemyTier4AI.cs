using UnityEngine;

public class enemyTier4AI : enemyTier3AI {

    private int checkForActiveEnemies = 0;

    public bool HasSetAllChildrenActive = false;

    public GameObject[] Children;

    public bool DestroyAll = false;
    
	public override void OnEnable()
	{

        TextureOffset = new Vector2(0, 0);

        DestroyAll = false;

        EnemysStats.HealthOfEnemy = HealthResetValue;

        checkForActiveEnemies = 0;

        rotRandom = Random.Range(0, 2);

        GetComponent<MeshRenderer>().enabled = true;

        GetComponent<Collider2D>().enabled = true;

        Die = false;

        if (HasSetAllChildrenActive)
        {

            int i = 0;

            while (i < Children.Length)
            {

                Children[i].SetActive(false);

                i++;

            }

            if (i >= Children.Length)
            {

                HasSetAllChildrenActive = false;

            }

        }

	}
    
    public void CompleteDeath()
    {
        Die = true;
        for (int x = 0; x < Children.Length; x++)
        {
            Children[x].GetComponent<Enemy>().Die = true;
        }

    }

    public override	void Update()
    {

        if (LastHealth != EnemysStats.HealthOfEnemy)
        {

            MaterialOffset(RocksHealthTextureOffset);

            LastHealth = EnemysStats.HealthOfEnemy;

        }


        if (DestroyAll)
        {

            CompleteDeath();
        
        }

        if (Die)
        {

            GetComponent<MeshRenderer>().enabled = false;

            GetComponent<Collider2D>().enabled = false;

            if (HasSetAllChildrenActive == false)
            {

                    int i = 0;

                    while (i < Children.Length)
                    {

                        Children[i].SetActive(true);

                        i++;

                    }

                    if (i >= Children.Length)
                    {

                        HasSetAllChildrenActive = true;

                    }

                }


            if (HasSetAllChildrenActive == true)
            {

                if (checkForActiveEnemies < Children.Length)
                {

                    if (Children[checkForActiveEnemies].activeSelf == true)
                    {

                        checkForActiveEnemies = 0;

                    }
                    if (Children[checkForActiveEnemies].activeSelf == false)
                    {

                        checkForActiveEnemies++;

                    }


                }

                if (checkForActiveEnemies >= Children.Length)
                {

                    gameObject.SetActive(false);

                }

            }

        }

        if (EnemysStats.HealthOfEnemy <= 0)
        {
            Die = true;
        }          
	}


}
