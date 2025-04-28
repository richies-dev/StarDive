#pragma once
#include <stdint.h>
// AnimateFrames
struct AnimateFrames_t57;
// Projectile
#include "AssemblyU2DCSharp_Projectile.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// StickyGrenade
struct  StickyGrenade_t70  : public Projectile_t64
{
	// UnityEngine.Vector3 StickyGrenade::Targetpos
	Vector3_t32  ___Targetpos_7;
	// System.Single StickyGrenade::lifeTime
	float ___lifeTime_8;
	// System.Single StickyGrenade::lifeTimeReset
	float ___lifeTimeReset_9;
	// System.Boolean StickyGrenade::StartExplosion
	bool ___StartExplosion_10;
	// System.Boolean StickyGrenade::Moving
	bool ___Moving_11;
	// AnimateFrames StickyGrenade::ExplosionEffect
	AnimateFrames_t57 * ___ExplosionEffect_12;
};
