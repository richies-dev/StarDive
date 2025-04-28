#pragma once
#include <stdint.h>
// NotificationStats
struct NotificationStats_t106;
// UnityEngine.Transform
struct Transform_t62;
// UnityEngine.GameObject
struct GameObject_t59;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t97;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ObjectPool
struct  ObjectPool_t107  : public MonoBehaviour_t11
{
	// NotificationStats ObjectPool::InstantiatedStats
	NotificationStats_t106 * ___InstantiatedStats_2;
	// UnityEngine.Transform ObjectPool::Parent
	Transform_t62 * ___Parent_3;
	// UnityEngine.GameObject ObjectPool::pooledObject
	GameObject_t59 * ___pooledObject_4;
	// System.Int32 ObjectPool::pooledAmount
	int32_t ___pooledAmount_5;
	// System.Int32 ObjectPool::amountSpawned
	int32_t ___amountSpawned_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPool::pooledObjects
	List_1_t97 * ___pooledObjects_7;
	// System.Int32 ObjectPool::SetActiveThisRound
	int32_t ___SetActiveThisRound_8;
};
