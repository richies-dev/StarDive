using UnityEngine;
using System.Collections;

public class StickyGrenade : Projectile {
    private Vector3 Targetpos = new Vector3(0,0,0);
    public float lifeTime = 15;
    public float lifeTimeReset = 15;
    public bool StartExplosion = false;
    private bool Moving = true;

    public AnimateFrames ExplosionEffect;
    public void OnDisable()
    {

        Targetpos = new Vector3(0,0,0);
        lifeTime = lifeTimeReset;

    }
    public override void OnEnable()
    {
        base.OnEnable();

        ExplosionEffect.enabled = true;

        ExplosionEffect.OffsetValue = 0;

        ExplosionEffect.gameObject.SetActive(false);

        ExplosionEffect.gameObject.transform.eulerAngles = new Vector3(0,0,Random.Range(0f,360f));

        StartExplosion = false;

        Moving = true;
    }

    public override void OnTriggerEnter2D(Collider2D other)
    {
        base.OnTriggerEnter2D(other);
        if(other.GetComponent<Enemy>()!= null)
        {            
            StartExplosion = true;
            Moving = false;
        }
    }

    public override void FixedUpdate()
    {
        
        if(Targetpos != new Vector3(0,0,0))
        {
            if(Moving)
            {
                transform.position = Vector3.Lerp(transform.position,Targetpos,Time.deltaTime * 5);
            }
        }
        else 
        {
            Targetpos =  TurretMovement.mousePositionToWorldCoords;
        }

        lifeTime -= Time.deltaTime;
        if (lifeTime <= 0)
        {
            Moving = false;
            StartExplosion = true;
        }
     //   if (ActivityController.ThisGamestate == GameState.IsInShop || ActivityController.ThisGamestate == GameState.IsDead)
      //  {
      //      StartExplosion = true;
      //      Moving = false;
       // }


    }
    public override void Update()
    {
       // base.Update();
        if(StartExplosion)
        {
            Explode();
        }
    }

    void Explode() 
    {

        ExplosionEffect.gameObject.SetActive(true);

        GetComponent<MeshRenderer>().enabled = false;

        GetComponent<Collider2D>().enabled = false;

        if (ExplosionEffect.OffsetValue >= ExplosionEffect.OffsetLimit)
        {

            ExplosionEffect.enabled = false;

        }    

    }


}
