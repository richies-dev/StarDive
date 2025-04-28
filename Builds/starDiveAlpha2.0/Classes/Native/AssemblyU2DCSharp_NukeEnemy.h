#pragma once
#include <stdint.h>
// UnityEngine.Transform[]
struct TransformU5BU5D_t125;
// UnityEngine.GameObject
struct GameObject_t28;
// ExplosionFlare
struct ExplosionFlare_t132;
// Enemy
#include "AssemblyU2DCSharp_Enemy.h"
// NukeEnemy
struct  NukeEnemy_t133  : public Enemy_t127
{
	// UnityEngine.Transform[] NukeEnemy::obj
	TransformU5BU5D_t125* ___obj_11;
	// System.Int32 NukeEnemy::i
	int32_t ___i_12;
	// UnityEngine.GameObject NukeEnemy::parent
	GameObject_t28 * ___parent_13;
	// ExplosionFlare NukeEnemy::flare
	ExplosionFlare_t132 * ___flare_14;
};
