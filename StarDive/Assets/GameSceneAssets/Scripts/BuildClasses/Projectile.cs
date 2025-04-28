using UnityEngine;

public class Projectile : MonoBehaviour {
    [SerializeField]
    private int locbulletStrength;

    public CameraShake ShakeCameraComponent;

    public float BulletSpeedModifier = 1;

    public AudioClip GunShotSoundEfx;

    public AudioSource audsrc;
    

    public virtual void NormalMovement()
    {

        transform.Translate(Vector3.up * Time.deltaTime * EquippedWeapon.TurretEquipped.SpeedOfBullet * BulletSpeedModifier);

    }

    public void ShakeCamera(float shake, float decreseFactor, float shakeIntesity, float smoothness = 2)
    {

        ShakeCameraComponent.shake = shake;
        ShakeCameraComponent.decreaseFactor = decreseFactor;
        ShakeCameraComponent.ShakeIntensity = shakeIntesity;
        ShakeCameraComponent.Smoothness = smoothness;

    }

    public void HitEnemy(int MoneyToAdd, int SubtractBulletStrength)
    {
        
        locbulletStrength -= SubtractBulletStrength;

        SavedData.current.PlayerStats.Money += MoneyToAdd;

        SavedData.current.PlayerStats.Score += 1;

    }

    public virtual void BulletDeath()
    {

        if (locbulletStrength <= 0)
        {
            gameObject.SetActive(false);
        }

        if (transform.position.x > 20)
        {
            gameObject.SetActive(false);
        }
        if (transform.position.x < -20)
        {
            gameObject.SetActive(false);
        }
        if (transform.position.y < -20)
        {
            gameObject.SetActive(false);
        }
        if (transform.position.y > 20)
        {
            gameObject.SetActive(false);
        }

    }

    public virtual void OnEnableBullet()    
    {

        locbulletStrength = EquippedWeapon.TurretEquipped.GunType.Power + 1;


        audsrc.PlayOneShot(EquippedWeapon.TurretEquipped.GunshotSoundEfx);
    }

    public virtual void OnEnable()
    {

        OnEnableBullet();

    }

    public virtual void FixedUpdate()
    {

        NormalMovement();

    }

    public virtual void Update()
    {

        BulletDeath();

    }

    public virtual void OnTriggerEnter2D(Collider2D other)
    {
        if(other.GetComponent<Enemy>() != null)
        {
            ShakeCamera(.3f, 1f, 2f);




            if(other.GetComponent<ParticleSystem>() != null)
            {
                ParticleSystem.EmissionModule emission = other.GetComponent<ParticleSystem>().emission;

                emission.enabled = true;
                other.GetComponent<ParticleSystem>().Emit(2);
                emission.enabled = false;
            }


            if (other.gameObject.tag == "TierOneEnemy")
            {
                if(other.GetComponent<Enemy>().addLife == true)
                {

                    if (SavedData.current.PlayerStats.Health < 3)
                    {
                        SavedData.current.PlayerStats.Health++;
                    }
                    else 
                    {
                        SavedData.current.PlayerStats.Money += 10;
                    }

                }

                HitEnemy(1, 1);


                other.gameObject.GetComponent<Enemy>().Die = true;

            }

            if (other.gameObject.tag == "TierTwoEnemy")
            {

                HitEnemy(1, 1);
            

                other.gameObject.GetComponent<enemyTier2AI>().Die = true;

            }

            if (other.gameObject.tag == "TierThreeEnemy")
            {


               if (locbulletStrength > other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy)
               {

                   HitEnemy(1, other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy);
                   other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy = 0;
               }
               else 
               {

                   other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy -= locbulletStrength;
                   HitEnemy(1,locbulletStrength);

               }
                
            }
            if (other.gameObject.tag == "ExplodingEnemy")
            {

                HitEnemy(1, 1);


                ShakeCamera(1f, 1f, 1.4f);

                other.gameObject.GetComponent<ExplodingEnemy>().Die = true;

                RockCrackSound.PlaySmallExplosion();

            }

            if (other.gameObject.tag == "TierFourEnemy")
            {

                if (locbulletStrength > other.GetComponent<enemyTier4AI>().EnemysStats.HealthOfEnemy)
                {

                    HitEnemy(1, other.GetComponent<enemyTier4AI>().EnemysStats.HealthOfEnemy);
                    other.GetComponent<enemyTier4AI>().EnemysStats.HealthOfEnemy = 0;
                }
                else
                {

                    other.GetComponent<enemyTier4AI>().EnemysStats.HealthOfEnemy -= locbulletStrength;
                    HitEnemy(1, locbulletStrength);

                }
                
            }
            if (other.gameObject.tag == "Tier7Enemy")
            {

                if (locbulletStrength > other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy)
                {

                    HitEnemy(2, other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy);
                    other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy = 0;
                }
                else
                {

                    other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy -= locbulletStrength;
                    HitEnemy(2, locbulletStrength);

                }
                other.gameObject.GetComponent<Rigidbody2D>().velocity += new Vector2 (0,3);



            }
            if (other.gameObject.tag == "Tier8Enemy")
            {


                if (locbulletStrength > other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy)
                {

                    HitEnemy(1, other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy);
                    other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy = 0;
                }
                else
                {

                    other.GetComponent<enemyTier3AI>().EnemysStats.HealthOfEnemy -= locbulletStrength;
                    HitEnemy(1, locbulletStrength);

                }

            }
            if (other.gameObject.tag == "TeleportationEnemy")
            {

                other.GetComponent<TeleportingEnemy>().EnemysStats.HealthOfEnemy -= 1;

                HitEnemy(1, locbulletStrength);                               

            }
            if (other.gameObject.tag == "Nuke")
            {

                HitEnemy(1, 1);

                ShakeCamera(3f, 1f, 3);

                other.gameObject.GetComponent<NukeEnemy>().Die = true;

                RockCrackSound.PlayBigExplosion();

            }
            RockCrackSound.PlayRandom();
            if (other.GetComponent<Enemy>().EnemysStats.HealthOfEnemy > 0)
            {      
                               
                other.GetComponent<Enemy>().EnemysStats.ZRotationOfEnemy = Random.Range(other.GetComponent<Enemy>().EnemysStats.ZRotationOfEnemy - 40, other.GetComponent<Enemy>().EnemysStats.ZRotationOfEnemy + 40);
                
                if (other.GetComponent<ParticleSystem>() != null)
                {
                    ParticleSystem.EmissionModule emission = other.GetComponent<ParticleSystem>().emission;


                    emission.enabled = true;

                    other.GetComponent<ParticleSystem>().Emit(3);

                    emission.enabled = false;

                }
            
            }
               
        }
  
    }

}
