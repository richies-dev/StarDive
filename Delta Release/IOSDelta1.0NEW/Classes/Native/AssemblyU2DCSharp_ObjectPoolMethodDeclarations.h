#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ObjectPool
struct ObjectPool_t107;
// UnityEngine.GameObject
struct GameObject_t59;

// System.Void ObjectPool::.ctor()
extern "C" void ObjectPool__ctor_m292 (ObjectPool_t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::Update()
extern "C" void ObjectPool_Update_m293 (ObjectPool_t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::SetAllInactive()
extern "C" void ObjectPool_SetAllInactive_m294 (ObjectPool_t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::ReturnInactiveObject()
extern "C" GameObject_t59 * ObjectPool_ReturnInactiveObject_m295 (ObjectPool_t107 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
