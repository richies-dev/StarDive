#pragma once
#include <stdint.h>
// CameraShake
struct CameraShake_t84;
// UnityEngine.AudioClip
struct AudioClip_t55;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Projectile
struct  Projectile_t64  : public MonoBehaviour_t11
{
	// System.Int32 Projectile::locbulletStrength
	int32_t ___locbulletStrength_2;
	// CameraShake Projectile::ShakeCameraComponent
	CameraShake_t84 * ___ShakeCameraComponent_3;
	// System.Single Projectile::BulletSpeedModifier
	float ___BulletSpeedModifier_4;
	// UnityEngine.AudioClip Projectile::GunShotSoundEfx
	AudioClip_t55 * ___GunShotSoundEfx_5;
	// UnityEngine.AudioSource Projectile::audsrc
	AudioSource_t54 * ___audsrc_6;
};
