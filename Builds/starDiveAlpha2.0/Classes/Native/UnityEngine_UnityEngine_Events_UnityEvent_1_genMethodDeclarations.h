﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t256;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2664;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t775;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t248;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m2119(__this, method) (( void (*) (UnityEvent_1_t256 *, MethodInfo*))UnityEvent_1__ctor_m13787_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m13788(__this, ___call, method) (( void (*) (UnityEvent_1_t256 *, UnityAction_1_t2664 *, MethodInfo*))UnityEvent_1_AddListener_m13789_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m13790(__this, ___call, method) (( void (*) (UnityEvent_1_t256 *, UnityAction_1_t2664 *, MethodInfo*))UnityEvent_1_RemoveListener_m13791_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m2689(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t256 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m13792_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m2690(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t775 * (*) (UnityEvent_1_t256 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m13793_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m13794(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t775 * (*) (Object_t * /* static, unused */, UnityAction_1_t2664 *, MethodInfo*))UnityEvent_1_GetDelegate_m13795_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m2122(__this, ___arg0, method) (( void (*) (UnityEvent_1_t256 *, BaseEventData_t248 *, MethodInfo*))UnityEvent_1_Invoke_m13796_gshared)(__this, ___arg0, method)
