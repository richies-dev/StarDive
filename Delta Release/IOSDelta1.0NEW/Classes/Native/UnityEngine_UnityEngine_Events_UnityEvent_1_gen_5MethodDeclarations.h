#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2598;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2545;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t709;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m13552_gshared (UnityEvent_1_t2598 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m13552(__this, method) (( void (*) (UnityEvent_1_t2598 *, MethodInfo*))UnityEvent_1__ctor_m13552_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13554_gshared (UnityEvent_1_t2598 * __this, UnityAction_1_t2545 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m13554(__this, ___call, method) (( void (*) (UnityEvent_1_t2598 *, UnityAction_1_t2545 *, MethodInfo*))UnityEvent_1_AddListener_m13554_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13556_gshared (UnityEvent_1_t2598 * __this, UnityAction_1_t2545 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13556(__this, ___call, method) (( void (*) (UnityEvent_1_t2598 *, UnityAction_1_t2545 *, MethodInfo*))UnityEvent_1_RemoveListener_m13556_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13557_gshared (UnityEvent_1_t2598 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13557(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2598 *, String_t*, Object_t *, MethodInfo*))UnityEvent_1_FindMethod_Impl_m13557_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t709 * UnityEvent_1_GetDelegate_m13558_gshared (UnityEvent_1_t2598 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13558(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t709 * (*) (UnityEvent_1_t2598 *, Object_t *, MethodInfo_t *, MethodInfo*))UnityEvent_1_GetDelegate_m13558_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t709 * UnityEvent_1_GetDelegate_m13560_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2545 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13560(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t709 * (*) (Object_t * /* static, unused */, UnityAction_1_t2545 *, MethodInfo*))UnityEvent_1_GetDelegate_m13560_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m13561_gshared (UnityEvent_1_t2598 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m13561(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2598 *, Object_t *, MethodInfo*))UnityEvent_1_Invoke_m13561_gshared)(__this, ___arg0, method)
