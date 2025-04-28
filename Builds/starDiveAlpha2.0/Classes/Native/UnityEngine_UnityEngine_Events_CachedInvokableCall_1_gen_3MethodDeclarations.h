#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t3120;
// UnityEngine.Object
struct Object_t93;
struct Object_t93_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t219;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m18327_gshared (CachedInvokableCall_1_t3120 * __this, Object_t93 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m18327(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t3120 *, Object_t93 *, MethodInfo_t *, Object_t *, MethodInfo*))CachedInvokableCall_1__ctor_m18327_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18328_gshared (CachedInvokableCall_1_t3120 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18328(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t3120 *, ObjectU5BU5D_t219*, MethodInfo*))CachedInvokableCall_1_Invoke_m18328_gshared)(__this, ___args, method)
