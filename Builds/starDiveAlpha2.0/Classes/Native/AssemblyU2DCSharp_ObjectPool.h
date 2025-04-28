#pragma once
#include <stdint.h>
// NotificationStats
struct NotificationStats_t172;
// UnityEngine.Transform
struct Transform_t48;
// UnityEngine.GameObject
struct GameObject_t28;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t163;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ObjectPool
struct  ObjectPool_t173  : public MonoBehaviour_t24
{
	// NotificationStats ObjectPool::InstantiatedStats
	NotificationStats_t172 * ___InstantiatedStats_2;
	// UnityEngine.Transform ObjectPool::Parent
	Transform_t48 * ___Parent_3;
	// UnityEngine.GameObject ObjectPool::pooledObject
	GameObject_t28 * ___pooledObject_4;
	// System.Int32 ObjectPool::pooledAmount
	int32_t ___pooledAmount_5;
	// System.Int32 ObjectPool::amountSpawned
	int32_t ___amountSpawned_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPool::pooledObjects
	List_1_t163 * ___pooledObjects_7;
	// System.Int32 ObjectPool::SetActiveThisRound
	int32_t ___SetActiveThisRound_8;
};
