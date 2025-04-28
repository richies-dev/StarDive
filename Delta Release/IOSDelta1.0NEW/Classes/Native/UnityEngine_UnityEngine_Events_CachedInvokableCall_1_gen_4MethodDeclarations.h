#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
struct CachedInvokableCall_1_t3060;
// UnityEngine.Object
struct Object_t29;
struct Object_t29_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m18110_gshared (CachedInvokableCall_1_t3060 * __this, Object_t29 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m18110(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t3060 *, Object_t29 *, MethodInfo_t *, uint8_t, MethodInfo*))CachedInvokableCall_1__ctor_m18110_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18112_gshared (CachedInvokableCall_1_t3060 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18112(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t3060 *, ObjectU5BU5D_t148*, MethodInfo*))CachedInvokableCall_1_Invoke_m18112_gshared)(__this, ___args, method)
