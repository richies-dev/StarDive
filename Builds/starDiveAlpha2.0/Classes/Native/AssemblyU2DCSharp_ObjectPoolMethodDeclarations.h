#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ObjectPool
struct ObjectPool_t173;
// UnityEngine.GameObject
struct GameObject_t28;

// System.Void ObjectPool::.ctor()
extern "C" void ObjectPool__ctor_m557 (ObjectPool_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::Update()
extern "C" void ObjectPool_Update_m558 (ObjectPool_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPool::SetAllInactive()
extern "C" void ObjectPool_SetAllInactive_m559 (ObjectPool_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjectPool::ReturnInactiveObject()
extern "C" GameObject_t28 * ObjectPool_ReturnInactiveObject_m560 (ObjectPool_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
