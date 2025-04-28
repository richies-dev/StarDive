#pragma once
#include <stdint.h>
// AnimateFrames
struct AnimateFrames_t124;
// UnityEngine.Transform[]
struct TransformU5BU5D_t125;
// UnityEngine.GameObject
struct GameObject_t28;
// Enemy
#include "AssemblyU2DCSharp_Enemy.h"
// ExplodingEnemy
struct  ExplodingEnemy_t126  : public Enemy_t127
{
	// AnimateFrames ExplodingEnemy::ExplosionEffect
	AnimateFrames_t124 * ___ExplosionEffect_11;
	// UnityEngine.Transform[] ExplodingEnemy::obj
	TransformU5BU5D_t125* ___obj_12;
	// System.Int32 ExplodingEnemy::i
	int32_t ___i_13;
	// UnityEngine.GameObject ExplodingEnemy::parent
	GameObject_t28 * ___parent_14;
};
