#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t821;
// UnityEngine.Object
struct Object_t93;
struct Object_t93_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t219;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3948_gshared (CachedInvokableCall_1_t821 * __this, Object_t93 * ___target, MethodInfo_t * ___theFunction, float ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3948(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t821 *, Object_t93 *, MethodInfo_t *, float, MethodInfo*))CachedInvokableCall_1__ctor_m3948_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18329_gshared (CachedInvokableCall_1_t821 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18329(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t821 *, ObjectU5BU5D_t219*, MethodInfo*))CachedInvokableCall_1_Invoke_m18329_gshared)(__this, ___args, method)
