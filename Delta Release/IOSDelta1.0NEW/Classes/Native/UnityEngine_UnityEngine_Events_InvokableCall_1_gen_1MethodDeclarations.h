#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2654;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t256;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14157_gshared (InvokableCall_1_t2654 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m14157(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2654 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m14157_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14158_gshared (InvokableCall_1_t2654 * __this, UnityAction_1_t256 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m14158(__this, ___callback, method) (( void (*) (InvokableCall_1_t2654 *, UnityAction_1_t256 *, MethodInfo*))InvokableCall_1__ctor_m14158_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14159_gshared (InvokableCall_1_t2654 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m14159(__this, ___args, method) (( void (*) (InvokableCall_1_t2654 *, ObjectU5BU5D_t148*, MethodInfo*))InvokableCall_1_Invoke_m14159_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14160_gshared (InvokableCall_1_t2654 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m14160(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2654 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m14160_gshared)(__this, ___targetObj, ___method, method)
