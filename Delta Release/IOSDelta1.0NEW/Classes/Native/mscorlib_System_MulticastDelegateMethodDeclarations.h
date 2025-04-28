#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t313;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1283;
// System.Delegate
struct Delegate_t424;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m2478 (MulticastDelegate_t313 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m2476 (MulticastDelegate_t313 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m2477 (MulticastDelegate_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1283* MulticastDelegate_GetInvocationList_m2480 (MulticastDelegate_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t424 * MulticastDelegate_CombineImpl_m2481 (MulticastDelegate_t313 * __this, Delegate_t424 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6656 (MulticastDelegate_t313 * __this, MulticastDelegate_t313 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t313 * MulticastDelegate_KPM_m6657 (Object_t * __this /* static, unused */, MulticastDelegate_t313 * ___needle, MulticastDelegate_t313 * ___haystack, MulticastDelegate_t313 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t424 * MulticastDelegate_RemoveImpl_m2482 (MulticastDelegate_t313 * __this, Delegate_t424 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
