#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>
struct InvokableCall_1_t2665;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2664;
// System.Object[]
struct ObjectU5BU5D_t219;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
#define InvokableCall_1__ctor_m13805(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2665 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m13797_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
#define InvokableCall_1__ctor_m13806(__this, ___callback, method) (( void (*) (InvokableCall_1_t2665 *, UnityAction_1_t2664 *, MethodInfo*))InvokableCall_1__ctor_m13798_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Invoke(System.Object[])
#define InvokableCall_1_Invoke_m13807(__this, ___args, method) (( void (*) (InvokableCall_1_t2665 *, ObjectU5BU5D_t219*, MethodInfo*))InvokableCall_1_Invoke_m13799_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.EventSystems.BaseEventData>::Find(System.Object,System.Reflection.MethodInfo)
#define InvokableCall_1_Find_m13808(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2665 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m13800_gshared)(__this, ___targetObj, ___method, method)
