#pragma once
#include <stdint.h>
// Gun
struct Gun_t175;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.GameObject
struct GameObject_t28;
// ObjectPool
struct ObjectPool_t173;
// UnityEngine.AudioSource
struct AudioSource_t150;
// UnityEngine.AudioClip
struct AudioClip_t149;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EquippedWeapon
struct  EquippedWeapon_t176  : public MonoBehaviour_t24
{
	// Gun EquippedWeapon::StarterTurret
	Gun_t175 * ___StarterTurret_2;
	// Gun EquippedWeapon::AdvancedTurret
	Gun_t175 * ___AdvancedTurret_3;
	// Gun EquippedWeapon::LegendaryTurret
	Gun_t175 * ___LegendaryTurret_4;
	// Gun EquippedWeapon::MissileTurret
	Gun_t175 * ___MissileTurret_5;
	// UnityEngine.Material EquippedWeapon::DefaultBaseSkin
	Material_t4 * ___DefaultBaseSkin_6;
	// UnityEngine.GameObject EquippedWeapon::TurretObject
	GameObject_t28 * ___TurretObject_7;
	// UnityEngine.GameObject EquippedWeapon::TurretBaseObject
	GameObject_t28 * ___TurretBaseObject_8;
	// ObjectPool EquippedWeapon::NormalBullet
	ObjectPool_t173 * ___NormalBullet_9;
	// ObjectPool EquippedWeapon::NormalBulletMultiShotII
	ObjectPool_t173 * ___NormalBulletMultiShotII_10;
	// ObjectPool EquippedWeapon::NormalBulletMultiShotIII
	ObjectPool_t173 * ___NormalBulletMultiShotIII_11;
	// ObjectPool EquippedWeapon::Missile
	ObjectPool_t173 * ___Missile_12;
	// System.Int32 EquippedWeapon::gunEquipped
	int32_t ___gunEquipped_13;
	// UnityEngine.AudioSource EquippedWeapon::AudSrc
	AudioSource_t150 * ___AudSrc_15;
	// UnityEngine.AudioClip EquippedWeapon::SwitchedTurretSound
	AudioClip_t149 * ___SwitchedTurretSound_16;
};
struct EquippedWeapon_t176_StaticFields{
	// Gun EquippedWeapon::TurretEquipped
	Gun_t175 * ___TurretEquipped_14;
};
