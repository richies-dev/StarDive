#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Byte>
struct InvokableCall_1_t2858;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t2857;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m16172_gshared (InvokableCall_1_t2858 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m16172(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2858 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m16172_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m16173_gshared (InvokableCall_1_t2858 * __this, UnityAction_1_t2857 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m16173(__this, ___callback, method) (( void (*) (InvokableCall_1_t2858 *, UnityAction_1_t2857 *, MethodInfo*))InvokableCall_1__ctor_m16173_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m16174_gshared (InvokableCall_1_t2858 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m16174(__this, ___args, method) (( void (*) (InvokableCall_1_t2858 *, ObjectU5BU5D_t148*, MethodInfo*))InvokableCall_1_Invoke_m16174_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m16175_gshared (InvokableCall_1_t2858 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m16175(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2858 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m16175_gshared)(__this, ___targetObj, ___method, method)
