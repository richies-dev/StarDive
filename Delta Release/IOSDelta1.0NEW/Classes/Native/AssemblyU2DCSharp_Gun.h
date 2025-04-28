#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t4;
// ObjectPool
struct ObjectPool_t107;
// GunStats
struct GunStats_t102;
// UnityEngine.AudioClip
struct AudioClip_t55;
// System.Object
#include "mscorlib_System_Object.h"
// Gun
struct  Gun_t109  : public Object_t
{
	// System.Int32 Gun::SpeedOfBullet
	int32_t ___SpeedOfBullet_0;
	// UnityEngine.Material Gun::TurretSkin
	Material_t4 * ___TurretSkin_1;
	// UnityEngine.Material Gun::BaseSkin
	Material_t4 * ___BaseSkin_2;
	// ObjectPool Gun::BulletObj
	ObjectPool_t107 * ___BulletObj_3;
	// System.Single Gun::BlowBackDist
	float ___BlowBackDist_4;
	// System.Single Gun::BlowBackStrength
	float ___BlowBackStrength_5;
	// System.Single Gun::BlowBackResetStrength
	float ___BlowBackResetStrength_6;
	// GunStats Gun::GunType
	GunStats_t102 * ___GunType_7;
	// UnityEngine.AudioClip Gun::GunshotSoundEfx
	AudioClip_t55 * ___GunshotSoundEfx_8;
};
