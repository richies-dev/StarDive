#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t330;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t441;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t709;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m2288_gshared (UnityEvent_1_t330 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m2288(__this, method) (( void (*) (UnityEvent_1_t330 *, MethodInfo*))UnityEvent_1__ctor_m2288_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2322_gshared (UnityEvent_1_t330 * __this, UnityAction_1_t441 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m2322(__this, ___call, method) (( void (*) (UnityEvent_1_t330 *, UnityAction_1_t441 *, MethodInfo*))UnityEvent_1_AddListener_m2322_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2321_gshared (UnityEvent_1_t330 * __this, UnityAction_1_t441 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2321(__this, ___call, method) (( void (*) (UnityEvent_1_t330 *, UnityAction_1_t441 *, MethodInfo*))UnityEvent_1_RemoveListener_m2321_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2522_gshared (UnityEvent_1_t330 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2522(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t330 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m2522_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t709 * UnityEvent_1_GetDelegate_m2523_gshared (UnityEvent_1_t330 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2523(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t709 * (*) (UnityEvent_1_t330 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m2523_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t709 * UnityEvent_1_GetDelegate_m15668_gshared (Object_t * __this /* static, unused */, UnityAction_1_t441 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m15668(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t709 * (*) (Object_t * /* static, unused */, UnityAction_1_t441 *, MethodInfo*))UnityEvent_1_GetDelegate_m15668_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2299_gshared (UnityEvent_1_t330 * __this, float ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m2299(__this, ___arg0, method) (( void (*) (UnityEvent_1_t330 *, float, MethodInfo*))UnityEvent_1_Invoke_m2299_gshared)(__this, ___arg0, method)
