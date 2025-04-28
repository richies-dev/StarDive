#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t1295;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeFieldHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeFieldHandle__ctor_m6873 (RuntimeFieldHandle_t1295 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
extern "C" IntPtr_t RuntimeFieldHandle_get_Value_m6874 (RuntimeFieldHandle_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeFieldHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeFieldHandle_GetObjectData_m6875 (RuntimeFieldHandle_t1295 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeFieldHandle::Equals(System.Object)
extern "C" bool RuntimeFieldHandle_Equals_m6876 (RuntimeFieldHandle_t1295 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeFieldHandle::GetHashCode()
extern "C" int32_t RuntimeFieldHandle_GetHashCode_m6877 (RuntimeFieldHandle_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
