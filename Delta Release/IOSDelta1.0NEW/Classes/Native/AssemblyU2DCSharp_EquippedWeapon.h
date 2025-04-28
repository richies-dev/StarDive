#pragma once
#include <stdint.h>
// Gun
struct Gun_t109;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.GameObject
struct GameObject_t59;
// ObjectPool
struct ObjectPool_t107;
// UnityEngine.AudioSource
struct AudioSource_t54;
// UnityEngine.AudioClip
struct AudioClip_t55;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EquippedWeapon
struct  EquippedWeapon_t110  : public MonoBehaviour_t11
{
	// Gun EquippedWeapon::StarterTurret
	Gun_t109 * ___StarterTurret_2;
	// Gun EquippedWeapon::AdvancedTurret
	Gun_t109 * ___AdvancedTurret_3;
	// Gun EquippedWeapon::LegendaryTurret
	Gun_t109 * ___LegendaryTurret_4;
	// Gun EquippedWeapon::MissileTurret
	Gun_t109 * ___MissileTurret_5;
	// UnityEngine.Material EquippedWeapon::DefaultBaseSkin
	Material_t4 * ___DefaultBaseSkin_6;
	// UnityEngine.GameObject EquippedWeapon::TurretObject
	GameObject_t59 * ___TurretObject_7;
	// UnityEngine.GameObject EquippedWeapon::TurretBaseObject
	GameObject_t59 * ___TurretBaseObject_8;
	// ObjectPool EquippedWeapon::NormalBullet
	ObjectPool_t107 * ___NormalBullet_9;
	// ObjectPool EquippedWeapon::NormalBulletMultiShotII
	ObjectPool_t107 * ___NormalBulletMultiShotII_10;
	// ObjectPool EquippedWeapon::NormalBulletMultiShotIII
	ObjectPool_t107 * ___NormalBulletMultiShotIII_11;
	// ObjectPool EquippedWeapon::Missile
	ObjectPool_t107 * ___Missile_12;
	// System.Int32 EquippedWeapon::gunEquipped
	int32_t ___gunEquipped_13;
	// UnityEngine.AudioSource EquippedWeapon::AudSrc
	AudioSource_t54 * ___AudSrc_15;
	// UnityEngine.AudioClip EquippedWeapon::SwitchedTurretSound
	AudioClip_t55 * ___SwitchedTurretSound_16;
};
struct EquippedWeapon_t110_StaticFields{
	// Gun EquippedWeapon::TurretEquipped
	Gun_t109 * ___TurretEquipped_14;
};
