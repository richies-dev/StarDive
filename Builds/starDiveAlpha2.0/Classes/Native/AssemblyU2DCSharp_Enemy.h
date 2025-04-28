#pragma once
#include <stdint.h>
// EnemyStats
struct EnemyStats_t185;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Enemy
struct  Enemy_t127  : public MonoBehaviour_t24
{
	// EnemyStats Enemy::EnemysStats
	EnemyStats_t185 * ___EnemysStats_2;
	// System.Boolean Enemy::isChild
	bool ___isChild_3;
	// System.Int32 Enemy::HealthResetValue
	int32_t ___HealthResetValue_4;
	// System.Boolean Enemy::Die
	bool ___Die_5;
	// System.Single Enemy::deathTimer
	float ___deathTimer_6;
	// System.Int32 Enemy::rotRandom
	int32_t ___rotRandom_7;
	// System.Boolean Enemy::addLife
	bool ___addLife_8;
	// System.Boolean Enemy::hasEmited
	bool ___hasEmited_10;
};
struct Enemy_t127_StaticFields{
	// System.Single Enemy::EnemyStaticSpeed
	float ___EnemyStaticSpeed_9;
};
