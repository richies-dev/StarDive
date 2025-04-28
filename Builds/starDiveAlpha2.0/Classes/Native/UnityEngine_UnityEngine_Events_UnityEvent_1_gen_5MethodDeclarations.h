#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2662;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2609;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t775;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m13787_gshared (UnityEvent_1_t2662 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m13787(__this, method) (( void (*) (UnityEvent_1_t2662 *, MethodInfo*))UnityEvent_1__ctor_m13787_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13789_gshared (UnityEvent_1_t2662 * __this, UnityAction_1_t2609 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m13789(__this, ___call, method) (( void (*) (UnityEvent_1_t2662 *, UnityAction_1_t2609 *, MethodInfo*))UnityEvent_1_AddListener_m13789_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13791_gshared (UnityEvent_1_t2662 * __this, UnityAction_1_t2609 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13791(__this, ___call, method) (( void (*) (UnityEvent_1_t2662 *, UnityAction_1_t2609 *, MethodInfo*))UnityEvent_1_RemoveListener_m13791_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13792_gshared (UnityEvent_1_t2662 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13792(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2662 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m13792_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t775 * UnityEvent_1_GetDelegate_m13793_gshared (UnityEvent_1_t2662 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13793(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t775 * (*) (UnityEvent_1_t2662 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m13793_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t775 * UnityEvent_1_GetDelegate_m13795_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2609 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13795(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t775 * (*) (Object_t * /* static, unused */, UnityAction_1_t2609 *, MethodInfo*))UnityEvent_1_GetDelegate_m13795_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m13796_gshared (UnityEvent_1_t2662 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m13796(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2662 *, Object_t *, MethodInfo*))UnityEvent_1_Invoke_m13796_gshared)(__this, ___arg0, method)
