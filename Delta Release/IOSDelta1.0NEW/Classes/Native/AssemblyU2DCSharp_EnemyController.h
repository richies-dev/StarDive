#pragma once
#include <stdint.h>
// ObjectPool[]
struct ObjectPoolU5BU5D_t104;
// UnityEngine.GameObject
struct GameObject_t59;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EnemyController
struct  EnemyController_t105  : public MonoBehaviour_t11
{
	// ObjectPool[] EnemyController::EnemyObjectPools
	ObjectPoolU5BU5D_t104* ___EnemyObjectPools_2;
	// System.Single EnemyController::TimeUntilNextEnemy
	float ___TimeUntilNextEnemy_3;
	// System.Single EnemyController::TimeUntilNextEnemyResetValue
	float ___TimeUntilNextEnemyResetValue_4;
	// System.Boolean EnemyController::SpawnNextEnemyFromPool
	bool ___SpawnNextEnemyFromPool_5;
	// System.Int32 EnemyController::locHealth
	int32_t ___locHealth_6;
	// UnityEngine.GameObject EnemyController::Shop
	GameObject_t59 * ___Shop_9;
};
struct EnemyController_t105_StaticFields{
	// System.Boolean EnemyController::SpawnEnabled
	bool ___SpawnEnabled_7;
	// System.Boolean EnemyController::IsSpawning
	bool ___IsSpawning_8;
};
