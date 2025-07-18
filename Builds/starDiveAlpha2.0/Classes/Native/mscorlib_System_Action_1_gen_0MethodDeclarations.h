﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t609;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m16801(__this, ___object, ___method, method) (( void (*) (Action_1_t609 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m16802_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m3831(__this, ___obj, method) (( void (*) (Action_1_t609 *, bool, MethodInfo*))Action_1_Invoke_m16803_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m16804(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t609 *, bool, AsyncCallback_t380 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m16805_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m16806(__this, ___result, method) (( void (*) (Action_1_t609 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m16807_gshared)(__this, ___result, method)
