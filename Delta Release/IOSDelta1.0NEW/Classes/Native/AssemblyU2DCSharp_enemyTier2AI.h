#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t65;
// Enemy
#include "AssemblyU2DCSharp_Enemy.h"
// enemyTier2AI
struct  enemyTier2AI_t72  : public Enemy_t61
{
	// System.Int32 enemyTier2AI::checkForActiveEnemies
	int32_t ___checkForActiveEnemies_12;
	// System.Boolean enemyTier2AI::HasSetAllChildrenActive
	bool ___HasSetAllChildrenActive_13;
	// UnityEngine.GameObject[] enemyTier2AI::Children
	GameObjectU5BU5D_t65* ___Children_14;
	// System.Boolean enemyTier2AI::DestroyAll
	bool ___DestroyAll_15;
};
