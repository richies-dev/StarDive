#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t3083;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t709;

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_2__ctor_m18396_gshared (UnityEvent_2_t3083 * __this, MethodInfo* method);
#define UnityEvent_2__ctor_m18396(__this, method) (( void (*) (UnityEvent_2_t3083 *, MethodInfo*))UnityEvent_2__ctor_m18396_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m18397_gshared (UnityEvent_2_t3083 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m18397(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_2_t3083 *, String_t*, Object_t *, MethodInfo*))UnityEvent_2_FindMethod_Impl_m18397_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t709 * UnityEvent_2_GetDelegate_m18398_gshared (UnityEvent_2_t3083 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_2_GetDelegate_m18398(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t709 * (*) (UnityEvent_2_t3083 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_2_GetDelegate_m18398_gshared)(__this, ___target, ___theFunction, method)
