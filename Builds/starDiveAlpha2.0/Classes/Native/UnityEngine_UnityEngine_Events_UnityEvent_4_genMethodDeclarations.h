#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t3148;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t775;

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_4__ctor_m18632_gshared (UnityEvent_4_t3148 * __this, MethodInfo* method);
#define UnityEvent_4__ctor_m18632(__this, method) (( void (*) (UnityEvent_4_t3148 *, MethodInfo*))UnityEvent_4__ctor_m18632_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m18633_gshared (UnityEvent_4_t3148 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m18633(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_4_t3148 *, String_t*, Object_t *, MethodInfo*))UnityEvent_4_FindMethod_Impl_m18633_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t775 * UnityEvent_4_GetDelegate_m18634_gshared (UnityEvent_4_t3148 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_4_GetDelegate_m18634(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t775 * (*) (UnityEvent_4_t3148 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_4_GetDelegate_m18634_gshared)(__this, ___target, ___theFunction, method)
