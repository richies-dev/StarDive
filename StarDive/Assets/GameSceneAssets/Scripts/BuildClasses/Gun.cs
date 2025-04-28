using UnityEngine;

[System.Serializable]
public class Gun {


	public int SpeedOfBullet;
    
	public Material TurretSkin;

	public Material BaseSkin;

    public ObjectPool BulletObj;

    public float BlowBackDist;

    public float BlowBackStrength;

    public float BlowBackResetStrength;

    public GunStats GunType;

    public AudioClip GunshotSoundEfx;


    public Gun( int speedOfBullet, Material turretSkin, Material baseSkin, ObjectPool Bulletobj, float blowBackDist, float blowBackStrength, float blowBackResetStrength,GunStats gunType,AudioClip gunshotSoundEfx )
	{


		SpeedOfBullet = speedOfBullet;

        BulletObj = Bulletobj;
        
		TurretSkin = turretSkin;

		BaseSkin = baseSkin;

        BlowBackDist = blowBackDist;

        BlowBackResetStrength = blowBackResetStrength;

        BlowBackStrength = blowBackStrength;

        GunType = gunType;

        GunshotSoundEfx = gunshotSoundEfx;


	}

}
