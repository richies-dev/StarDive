#pragma once
#include <stdint.h>
// AnimateFrames
struct AnimateFrames_t57;
// UnityEngine.Transform[]
struct TransformU5BU5D_t58;
// UnityEngine.GameObject
struct GameObject_t59;
// Enemy
#include "AssemblyU2DCSharp_Enemy.h"
// ExplodingEnemy
struct  ExplodingEnemy_t60  : public Enemy_t61
{
	// AnimateFrames ExplodingEnemy::ExplosionEffect
	AnimateFrames_t57 * ___ExplosionEffect_12;
	// UnityEngine.Transform[] ExplodingEnemy::obj
	TransformU5BU5D_t58* ___obj_13;
	// System.Int32 ExplodingEnemy::i
	int32_t ___i_14;
	// UnityEngine.GameObject ExplodingEnemy::parent
	GameObject_t59 * ___parent_15;
};
