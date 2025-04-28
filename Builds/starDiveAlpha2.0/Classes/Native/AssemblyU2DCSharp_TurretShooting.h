#pragma once
#include <stdint.h>
// ObjectPool
struct ObjectPool_t173;
// UnityEngine.GameObject
struct GameObject_t28;
// UnityEngine.ParticleSystem
struct ParticleSystem_t178;
// UnityEngine.AudioSource
struct AudioSource_t150;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TurretShooting
struct  TurretShooting_t179  : public MonoBehaviour_t24
{
	// ObjectPool TurretShooting::bulletpool
	ObjectPool_t173 * ___bulletpool_2;
	// System.Boolean TurretShooting::ShootingBullet
	bool ___ShootingBullet_3;
	// System.Boolean TurretShooting::JustShot
	bool ___JustShot_4;
	// UnityEngine.GameObject TurretShooting::BulletToShoot
	GameObject_t28 * ___BulletToShoot_5;
	// UnityEngine.GameObject TurretShooting::BulletSpawnLocationObject
	GameObject_t28 * ___BulletSpawnLocationObject_7;
	// UnityEngine.GameObject TurretShooting::MuzzleLightEffect
	GameObject_t28 * ___MuzzleLightEffect_8;
	// UnityEngine.Vector3 TurretShooting::BarrelLocationOnStart
	Vector3_t31  ___BarrelLocationOnStart_9;
	// UnityEngine.ParticleSystem TurretShooting::BulletShells
	ParticleSystem_t178 * ___BulletShells_10;
	// UnityEngine.ParticleSystem TurretShooting::SmokePuffParticles
	ParticleSystem_t178 * ___SmokePuffParticles_11;
	// System.Single TurretShooting::reloadTimer
	float ___reloadTimer_12;
	// UnityEngine.AudioSource TurretShooting::audsrc
	AudioSource_t150 * ___audsrc_13;
	// System.Boolean TurretShooting::PlayedBlowBackSound
	bool ___PlayedBlowBackSound_14;
};
struct TurretShooting_t179_StaticFields{
	// System.Boolean TurretShooting::Reloaded
	bool ___Reloaded_6;
	// System.Single TurretShooting::timer
	float ___timer_15;
};
