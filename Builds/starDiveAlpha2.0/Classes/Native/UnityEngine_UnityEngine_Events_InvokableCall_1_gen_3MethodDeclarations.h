#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2870;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t510;
// System.Object[]
struct ObjectU5BU5D_t219;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15907_gshared (InvokableCall_1_t2870 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m15907(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2870 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m15907_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15908_gshared (InvokableCall_1_t2870 * __this, UnityAction_1_t510 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m15908(__this, ___callback, method) (( void (*) (InvokableCall_1_t2870 *, UnityAction_1_t510 *, MethodInfo*))InvokableCall_1__ctor_m15908_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15909_gshared (InvokableCall_1_t2870 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m15909(__this, ___args, method) (( void (*) (InvokableCall_1_t2870 *, ObjectU5BU5D_t219*, MethodInfo*))InvokableCall_1_Invoke_m15909_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15910_gshared (InvokableCall_1_t2870 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m15910(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2870 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m15910_gshared)(__this, ___targetObj, ___method, method)
