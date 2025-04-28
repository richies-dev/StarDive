using UnityEngine;

public class TurretShooting : MonoBehaviour {

    public ObjectPool bulletpool;
    
    private bool ShootingBullet = false;

    private bool JustShot = false;

    private GameObject BulletToShoot;

    public static bool Reloaded = false;

    public GameObject BulletSpawnLocationObject;

    public GameObject MuzzleLightEffect;

    public Vector3 BarrelLocationOnStart;

    public ParticleSystem BulletShells;

    public ParticleSystem SmokePuffParticles;

    private float reloadTimer = 0f;

    public AudioSource audsrc;


    void Start()
    {

        BarrelLocationOnStart = this.transform.position;

        EquippedWeapon.TurretEquipped.BulletObj = bulletpool;

    }

    public static bool Timer() 
    {
        bool x = false;
        
        if(timer > 0)
        {
            timer -= Time.deltaTime;
        }
        else 
        {
            x = true;
        }
            
        return x;
    }
    public static float timer;
    void Update()
    {


        if (EquippedWeapon.TurretEquipped.BulletObj != bulletpool)
        {

            if (EquippedWeapon.TurretEquipped.BulletObj != null)
            {

                bulletpool = EquippedWeapon.TurretEquipped.BulletObj;
                BulletToShoot = null; 
                reloadTimer = 1 / EquippedWeapon.TurretEquipped.GunType.RateOfFire;


            }

        }



        if (ActivityController.ThisGamestate != GameState.IsInShop && ActivityController.ThisGamestate != GameState.IsDead && NewEnemyNotification.ShowingNewEnemyNotification == false && NewEnemyNotification.AboutToShowNotification == false && Timer())
        {
            
            if (Input.GetMouseButton(0))
            {

                if (EquippedWeapon.TurretEquipped.GunType.Ammo > 0 && Reloaded)
                {

                    if (BulletToShoot != null)
                    {

                        ShootingBullet = true;

                    }

                    TurretMovement.DoneRotating = false;

                    Reloaded = false;
                                  
                }                         

            }
            
        }
        else 
        {

            ShootingBullet = false;
            
            BulletToShoot = null;
            
            reloadTimer = 1 / EquippedWeapon.TurretEquipped.GunType.RateOfFire;

        }

        FindInactiveBullet();

        Reload();

    }

    void FixedUpdate()
    {
        
        ShootingBulletMethod();
        
        AfterShootingMethod();
            
        FadeEffectsAfterShooting();
        
    }
    
    void Reload()
    {

        if (Reloaded == false)
        {

            reloadTimer -= Time.deltaTime;

        }

        if (reloadTimer <= 0)
        {

            Reloaded = true;

            reloadTimer = 1 / EquippedWeapon.TurretEquipped.GunType.RateOfFire;

        }

    }

    void FindInactiveBullet()
    {

        if (BulletToShoot == null)
        {

              BulletToShoot = bulletpool.ReturnInactiveObject();

        }
        
    }

    void ShootingBulletMethod()
    {
        if (ShootingBullet)
        {
            if (TurretMovement.Hold)
            {

                JustShot = true;

                BulletToShoot.SetActive(true);

                BulletToShoot.transform.position = BulletSpawnLocationObject.transform.position;

                BulletToShoot.transform.eulerAngles = new Vector3(0, 0, TurretMovement.PlayerRotation.z - 90);

                ShootingBullet = false;
                
                BulletToShoot = null;

                SubtractBullet();

            }

            if (TurretMovement.Hold == false)
            {

                if (TurretMovement.DoneRotating)
                {

                    JustShot = true;

                    BulletToShoot.SetActive(true);

                    BulletToShoot.transform.position = BulletSpawnLocationObject.transform.position;

                    BulletToShoot.transform.eulerAngles = new Vector3(0, 0, transform.eulerAngles.z - 90);

                    ShootingBullet = false;

                    BulletToShoot = null;

                    SubtractBullet();

                }

            }

        }

    }

    void SubtractBullet() 
    {
            if (SavedData.current.GunSelected == 0)
            {
                return;
            }
            if (EquippedWeapon.TurretEquipped.GunType.MultiShot <= 0)
            {
                EquippedWeapon.TurretEquipped.GunType.Ammo--;
            }
            else if (EquippedWeapon.TurretEquipped.GunType.MultiShot == 1)
            {   
                if(EquippedWeapon.TurretEquipped.GunType.Ammo >= 2)                
                {
                    EquippedWeapon.TurretEquipped.GunType.Ammo -= 2;
                    return;
                }
                else
                {
                    EquippedWeapon.TurretEquipped.GunType.Ammo -= 1;
                    return;
                }
            }
            else if (EquippedWeapon.TurretEquipped.GunType.MultiShot == 2)
            {
                if (EquippedWeapon.TurretEquipped.GunType.Ammo >= 3)
                {
                    EquippedWeapon.TurretEquipped.GunType.Ammo -= 3; 
                    return;
                }
                else if (EquippedWeapon.TurretEquipped.GunType.Ammo == 2)
                {
                    EquippedWeapon.TurretEquipped.GunType.Ammo -= 2;
                    return;
                }
                else
                {
                    EquippedWeapon.TurretEquipped.GunType.Ammo -= 1; 
                    return;
                }
            }

            

    }

    void AfterShootingMethod()
    {

        if (JustShot)
        {
            
            MuzzleFlashSetDefault();

            ParticleSystem.EmissionModule em = BulletShells.emission;
            em.enabled = true;

            if (Vector3.Distance(this.transform.position, BarrelLocationOnStart) < EquippedWeapon.TurretEquipped.BlowBackDist)
            {

                this.transform.Translate(Vector3.left * Time.deltaTime * EquippedWeapon.TurretEquipped.BlowBackStrength);

            }

            if (Vector3.Distance(this.transform.position, BarrelLocationOnStart) >= EquippedWeapon.TurretEquipped.BlowBackDist)
            {
                if (EquippedWeapon.TurretEquipped.GunType.MultiShot <= 0)
                {
                    BulletShells.Emit(1);
                }

                else if (EquippedWeapon.TurretEquipped.GunType.MultiShot == 1)
                {
                    BulletShells.Emit(2);
                }
                else if (EquippedWeapon.TurretEquipped.GunType.MultiShot == 2)
                {
                    BulletShells.Emit(3);
                }

                SmokePuffParticles.Emit(4);

                JustShot = false;

            }

        }

    }

    void FadeEffectsAfterShooting()
    {
        if (JustShot == false)
        {
            ParticleSystem.EmissionModule em = BulletShells.emission;
            em.enabled = false;

            if (Vector3.Distance(this.transform.position, BarrelLocationOnStart) > .05f)
            {

                this.transform.position = Vector3.Lerp(this.transform.position, BarrelLocationOnStart, Time.deltaTime * EquippedWeapon.TurretEquipped.BlowBackResetStrength);

            }

            MuzzleFlashFadeOut();
          
        }

    }


    void MuzzleFlashFadeOut()
    {

        MuzzleLightEffect.GetComponent<Renderer>().material.SetColor("_TintColor", Color.Lerp(MuzzleLightEffect.GetComponent<Renderer>().material.GetColor("_TintColor"), new Color(MuzzleLightEffect.GetComponent<Renderer>().material.GetColor("_TintColor").r, MuzzleLightEffect.GetComponent<Renderer>().material.GetColor("_TintColor").g, MuzzleLightEffect.GetComponent<Renderer>().material.GetColor("_TintColor").b, 0), Time.deltaTime * 20));

    }
    void MuzzleFlashSetDefault() 
    {

        MuzzleLightEffect.GetComponent<Renderer>().material.SetColor("_TintColor", new Color(MuzzleLightEffect.GetComponent<Renderer>().material.GetColor("_TintColor").r, MuzzleLightEffect.GetComponent<Renderer>().material.GetColor("_TintColor").g, MuzzleLightEffect.GetComponent<Renderer>().material.GetColor("_TintColor").b, 1f));
    
    }

}
