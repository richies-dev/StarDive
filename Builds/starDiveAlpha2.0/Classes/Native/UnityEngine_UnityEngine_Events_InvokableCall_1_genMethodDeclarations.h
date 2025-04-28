#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2663;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2609;
// System.Object[]
struct ObjectU5BU5D_t219;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13797_gshared (InvokableCall_1_t2663 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m13797(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2663 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m13797_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13798_gshared (InvokableCall_1_t2663 * __this, UnityAction_1_t2609 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m13798(__this, ___callback, method) (( void (*) (InvokableCall_1_t2663 *, UnityAction_1_t2609 *, MethodInfo*))InvokableCall_1__ctor_m13798_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13799_gshared (InvokableCall_1_t2663 * __this, ObjectU5BU5D_t219* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m13799(__this, ___args, method) (( void (*) (InvokableCall_1_t2663 *, ObjectU5BU5D_t219*, MethodInfo*))InvokableCall_1_Invoke_m13799_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13800_gshared (InvokableCall_1_t2663 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m13800(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2663 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m13800_gshared)(__this, ___targetObj, ___method, method)
