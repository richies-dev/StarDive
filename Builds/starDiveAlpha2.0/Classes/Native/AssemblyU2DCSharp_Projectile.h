#pragma once
#include <stdint.h>
// CameraShake
struct CameraShake_t148;
// UnityEngine.AudioClip
struct AudioClip_t149;
// UnityEngine.AudioSource
struct AudioSource_t150;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Projectile
struct  Projectile_t129  : public MonoBehaviour_t24
{
	// System.Int32 Projectile::locbulletStrength
	int32_t ___locbulletStrength_2;
	// CameraShake Projectile::ShakeCameraComponent
	CameraShake_t148 * ___ShakeCameraComponent_3;
	// System.Single Projectile::BulletSpeedModifier
	float ___BulletSpeedModifier_4;
	// UnityEngine.AudioClip Projectile::GunShotSoundEfx
	AudioClip_t149 * ___GunShotSoundEfx_5;
	// UnityEngine.AudioSource Projectile::audsrc
	AudioSource_t150 * ___audsrc_6;
	// UnityEngine.AudioClip Projectile::Rockcrack1
	AudioClip_t149 * ___Rockcrack1_7;
	// UnityEngine.AudioClip Projectile::Rockcrack2
	AudioClip_t149 * ___Rockcrack2_8;
	// UnityEngine.AudioClip Projectile::Rockcrack3
	AudioClip_t149 * ___Rockcrack3_9;
	// UnityEngine.AudioClip Projectile::BigExplosion
	AudioClip_t149 * ___BigExplosion_10;
	// UnityEngine.AudioClip Projectile::SmallExplosion
	AudioClip_t149 * ___SmallExplosion_11;
};
