﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t447;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m16341(__this, ___object, ___method, method) (( void (*) (Func_2_t447 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m16334_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m16342(__this, ___arg1, method) (( bool (*) (Func_2_t447 *, Object_t *, MethodInfo*))Func_2_Invoke_m16336_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m16343(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t447 *, Object_t *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m16338_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m16344(__this, ___result, method) (( bool (*) (Func_2_t447 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m16340_gshared)(__this, ___result, method)
