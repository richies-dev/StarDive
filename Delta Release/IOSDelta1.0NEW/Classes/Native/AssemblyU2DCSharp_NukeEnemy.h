#pragma once
#include <stdint.h>
// UnityEngine.Transform[]
struct TransformU5BU5D_t58;
// UnityEngine.GameObject
struct GameObject_t59;
// ExplosionFlare
struct ExplosionFlare_t67;
// Enemy
#include "AssemblyU2DCSharp_Enemy.h"
// NukeEnemy
struct  NukeEnemy_t68  : public Enemy_t61
{
	// UnityEngine.Transform[] NukeEnemy::obj
	TransformU5BU5D_t58* ___obj_12;
	// System.Int32 NukeEnemy::i
	int32_t ___i_13;
	// UnityEngine.GameObject NukeEnemy::parent
	GameObject_t59 * ___parent_14;
	// ExplosionFlare NukeEnemy::flare
	ExplosionFlare_t67 * ___flare_15;
};
