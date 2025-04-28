using UnityEngine;

public class enemyTier3AI : Enemy {


    public offsetValue[] RocksHealthTextureOffset;

    public float LastHealth;

    public Vector2 TextureOffset = new Vector2();

    public override void OnEnable ()
    {
        base.OnEnable();

        TextureOffset = new Vector2(0,0);

        EnemysStats.HealthOfEnemy = HealthResetValue;
    }

    public void MaterialOffset(offsetValue[] x)
    {
        
        for (int i = 0; i < x.Length; i++)
        {

            if (EnemysStats.HealthOfEnemy == i)
            {

                TextureOffset.x = x[i].OffsetValue;

                break;
            
            }

        }


        GetComponent<Renderer>().material.mainTextureOffset = TextureOffset;
        
    }

    public override void Update()
    {

        base.Update();

        if(LastHealth != EnemysStats.HealthOfEnemy)
        {
            MaterialOffset(RocksHealthTextureOffset);
            LastHealth = EnemysStats.HealthOfEnemy;
        }


        if (EnemysStats.HealthOfEnemy <= 0)
        {
            Die = true;
        }          
        
    }



}
