#pragma once
#include <stdint.h>
// AnimateFrames
struct AnimateFrames_t124;
// Projectile
#include "AssemblyU2DCSharp_Projectile.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// StickyGrenade
struct  StickyGrenade_t135  : public Projectile_t129
{
	// UnityEngine.Vector3 StickyGrenade::Targetpos
	Vector3_t31  ___Targetpos_12;
	// System.Single StickyGrenade::lifeTime
	float ___lifeTime_13;
	// System.Single StickyGrenade::lifeTimeReset
	float ___lifeTimeReset_14;
	// System.Boolean StickyGrenade::StartExplosion
	bool ___StartExplosion_15;
	// System.Boolean StickyGrenade::Moving
	bool ___Moving_16;
	// AnimateFrames StickyGrenade::ExplosionEffect
	AnimateFrames_t124 * ___ExplosionEffect_17;
};
