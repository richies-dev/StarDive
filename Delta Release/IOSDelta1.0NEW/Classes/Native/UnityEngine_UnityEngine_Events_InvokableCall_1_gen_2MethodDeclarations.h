#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t2805;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t2804;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m15664(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2805 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m13562_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m15665(__this, ___callback, method) (( void (*) (InvokableCall_1_t2805 *, UnityAction_1_t2804 *, MethodInfo*))InvokableCall_1__ctor_m13563_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.String>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m15666(__this, ___args, method) (( void (*) (InvokableCall_1_t2805 *, ObjectU5BU5D_t148*, MethodInfo*))InvokableCall_1_Invoke_m13564_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.String>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m15667(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2805 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m13565_gshared)(__this, ___targetObj, ___method, method)
