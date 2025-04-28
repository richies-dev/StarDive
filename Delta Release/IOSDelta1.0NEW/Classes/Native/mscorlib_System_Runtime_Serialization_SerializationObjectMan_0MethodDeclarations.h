#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t1688;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationObjectManager::.ctor(System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationObjectManager__ctor_m9463 (SerializationObjectManager_t1688 * __this, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RegisterObject(System.Object)
extern "C" void SerializationObjectManager_RegisterObject_m9464 (SerializationObjectManager_t1688 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RaiseOnSerializedEvent()
extern "C" void SerializationObjectManager_RaiseOnSerializedEvent_m9465 (SerializationObjectManager_t1688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
