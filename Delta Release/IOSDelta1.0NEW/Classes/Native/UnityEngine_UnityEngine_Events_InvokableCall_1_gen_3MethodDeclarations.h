#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2806;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t441;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15672_gshared (InvokableCall_1_t2806 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m15672(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2806 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m15672_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15673_gshared (InvokableCall_1_t2806 * __this, UnityAction_1_t441 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m15673(__this, ___callback, method) (( void (*) (InvokableCall_1_t2806 *, UnityAction_1_t441 *, MethodInfo*))InvokableCall_1__ctor_m15673_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15674_gshared (InvokableCall_1_t2806 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m15674(__this, ___args, method) (( void (*) (InvokableCall_1_t2806 *, ObjectU5BU5D_t148*, MethodInfo*))InvokableCall_1_Invoke_m15674_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15675_gshared (InvokableCall_1_t2806 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m15675(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2806 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m15675_gshared)(__this, ___targetObj, ___method, method)
