using UnityEngine;
using System.Collections;

public class EquippedWeapon : MonoBehaviour{

	public Gun StarterTurret;

	public Gun AdvancedTurret;

	public Gun LegendaryTurret;

    public Gun MissileTurret;

	public Material DefaultBaseSkin;

	public GameObject TurretObject;

	public GameObject TurretBaseObject;

    public ObjectPool NormalBullet;

    public ObjectPool NormalBulletMultiShotII;

    public ObjectPool NormalBulletMultiShotIII;

    public ObjectPool Missile;

    private int gunEquipped;

    public static Gun TurretEquipped = new Gun(0,null,null,null,0,0,0,null,null);

    public AudioSource AudSrc;

    public AudioClip SwitchedTurretSound;


	void Update () {

        StarterTurret = new Gun(StarterTurret.SpeedOfBullet, StarterTurret.TurretSkin, StarterTurret.BaseSkin, NormalBullet, StarterTurret.BlowBackDist, StarterTurret.BlowBackStrength, StarterTurret.BlowBackResetStrength,SavedData.current.StarterTurret,StarterTurret.GunshotSoundEfx);

        AdvancedTurret = new Gun(AdvancedTurret.SpeedOfBullet, AdvancedTurret.TurretSkin, AdvancedTurret.BaseSkin, NormalBullet,AdvancedTurret.BlowBackDist,AdvancedTurret.BlowBackStrength,AdvancedTurret.BlowBackResetStrength,SavedData.current.AdvancedTurret,AdvancedTurret.GunshotSoundEfx);
        
        LegendaryTurret = new Gun(LegendaryTurret.SpeedOfBullet, LegendaryTurret.TurretSkin, LegendaryTurret.BaseSkin, NormalBullet,LegendaryTurret.BlowBackDist,LegendaryTurret.BlowBackStrength,LegendaryTurret.BlowBackResetStrength,SavedData.current.LegendaryTurret, LegendaryTurret.GunshotSoundEfx);

        MissileTurret = new Gun(MissileTurret.SpeedOfBullet, MissileTurret.TurretSkin, MissileTurret.BaseSkin, Missile, MissileTurret.BlowBackDist, MissileTurret.BlowBackStrength, MissileTurret.BlowBackResetStrength,SavedData.current.MissileLauncher, MissileTurret.GunshotSoundEfx);


		if(SavedData.current.GunSelected == 0)
		{

			TurretEquipped = StarterTurret;
			
		}
		else if(SavedData.current.GunSelected == 1)
		{

            TurretEquipped = AdvancedTurret;

            if(SavedData.current.AdvancedTurret.MultiShot == 0)
            {

                AdvancedTurret.BulletObj = NormalBullet;

            }

            if (SavedData.current.AdvancedTurret.MultiShot == 1)
            {
                if(TurretEquipped.GunType.Ammo >= 2)
                {
                    AdvancedTurret.BulletObj = NormalBulletMultiShotII;
                }
                else
                {
                    AdvancedTurret.BulletObj = NormalBullet;
                }

            }

            if (SavedData.current.AdvancedTurret.MultiShot == 2)
            {
                if (TurretEquipped.GunType.Ammo > 2)
                {
                    AdvancedTurret.BulletObj = NormalBulletMultiShotIII;
                }
                else if (TurretEquipped.GunType.Ammo == 2)
                {
                    AdvancedTurret.BulletObj = NormalBulletMultiShotII;
                }
                else
                {
                    AdvancedTurret.BulletObj = NormalBullet;
                }

            }

		}
		else if (SavedData.current.GunSelected == 2)
		{

            TurretEquipped = LegendaryTurret;

		}
        else if (SavedData.current.GunSelected == 3)
        {

            TurretEquipped = MissileTurret;

        }

        if (TurretEquipped.GunType.Ammo <= 0)
        {

            if (ActivityController.ThisGamestate == GameState.IsPlaying)
            {
                if (SavedData.current.GunSelected != 0)
                {
                    
                    TurretEquipped = StarterTurret;

                    SavedData.current.GunSelected = 0;

                }
            }

        }



        if (gunEquipped != SavedData.current.GunSelected)
        {
            if (TurretEquipped.TurretSkin != null)
            {
                TurretObject.GetComponent<Renderer>().material = TurretEquipped.TurretSkin;
            }

            if (TurretEquipped.BaseSkin != null)
            {
                TurretBaseObject.GetComponent<Renderer>().material = TurretEquipped.BaseSkin;
            }
            if(ActivityController.ThisGamestate != GameState.IsDead)
            {
                AudSrc.PlayOneShot(SwitchedTurretSound);
            }
            gunEquipped = SavedData.current.GunSelected;

        }

	}

}
