#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2808;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2807;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15683_gshared (InvokableCall_1_t2808 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m15683(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2808 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m15683_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15684_gshared (InvokableCall_1_t2808 * __this, UnityAction_1_t2807 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m15684(__this, ___callback, method) (( void (*) (InvokableCall_1_t2808 *, UnityAction_1_t2807 *, MethodInfo*))InvokableCall_1__ctor_m15684_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15685_gshared (InvokableCall_1_t2808 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m15685(__this, ___args, method) (( void (*) (InvokableCall_1_t2808 *, ObjectU5BU5D_t148*, MethodInfo*))InvokableCall_1_Invoke_m15685_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15686_gshared (InvokableCall_1_t2808 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m15686(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2808 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m15686_gshared)(__this, ___targetObj, ___method, method)
