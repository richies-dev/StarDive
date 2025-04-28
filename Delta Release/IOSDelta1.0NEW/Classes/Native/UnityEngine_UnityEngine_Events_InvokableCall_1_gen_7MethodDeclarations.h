﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t3058;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3059;
// System.Object[]
struct ObjectU5BU5D_t148;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m18101_gshared (InvokableCall_1_t3058 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m18101(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3058 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1__ctor_m18101_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m18102_gshared (InvokableCall_1_t3058 * __this, UnityAction_1_t3059 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m18102(__this, ___callback, method) (( void (*) (InvokableCall_1_t3058 *, UnityAction_1_t3059 *, MethodInfo*))InvokableCall_1__ctor_m18102_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m18103_gshared (InvokableCall_1_t3058 * __this, ObjectU5BU5D_t148* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m18103(__this, ___args, method) (( void (*) (InvokableCall_1_t3058 *, ObjectU5BU5D_t148*, MethodInfo*))InvokableCall_1_Invoke_m18103_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m18104_gshared (InvokableCall_1_t3058 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m18104(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3058 *, Object_t *, MethodInfo_t *, MethodInfo*))InvokableCall_1_Find_m18104_gshared)(__this, ___targetObj, ___method, method)
