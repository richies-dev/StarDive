﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t357;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2859;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t709;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"
#define UnityEvent_1__ctor_m2377(__this, method) (( void (*) (UnityEvent_1_t357 *, MethodInfo*))UnityEvent_1__ctor_m16158_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m16159(__this, ___call, method) (( void (*) (UnityEvent_1_t357 *, UnityAction_1_t2859 *, MethodInfo*))UnityEvent_1_AddListener_m16160_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m16161(__this, ___call, method) (( void (*) (UnityEvent_1_t357 *, UnityAction_1_t2859 *, MethodInfo*))UnityEvent_1_RemoveListener_m16162_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m2532(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t357 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m16163_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m2533(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t709 * (*) (UnityEvent_1_t357 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m16164_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m16165(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t709 * (*) (Object_t * /* static, unused */, UnityAction_1_t2859 *, MethodInfo*))UnityEvent_1_GetDelegate_m16166_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
#define UnityEvent_1_Invoke_m2378(__this, ___arg0, method) (( void (*) (UnityEvent_1_t357 *, bool, MethodInfo*))UnityEvent_1_Invoke_m16167_gshared)(__this, ___arg0, method)
