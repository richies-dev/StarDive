#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t382;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1350;
// System.Delegate
struct Delegate_t493;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m2697 (MulticastDelegate_t382 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m2695 (MulticastDelegate_t382 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m2696 (MulticastDelegate_t382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1350* MulticastDelegate_GetInvocationList_m2699 (MulticastDelegate_t382 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t493 * MulticastDelegate_CombineImpl_m2700 (MulticastDelegate_t382 * __this, Delegate_t493 * ___follow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6892 (MulticastDelegate_t382 * __this, MulticastDelegate_t382 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t382 * MulticastDelegate_KPM_m6893 (Object_t * __this /* static, unused */, MulticastDelegate_t382 * ___needle, MulticastDelegate_t382 * ___haystack, MulticastDelegate_t382 ** ___tail, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t493 * MulticastDelegate_RemoveImpl_m2701 (MulticastDelegate_t382 * __this, Delegate_t493 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
