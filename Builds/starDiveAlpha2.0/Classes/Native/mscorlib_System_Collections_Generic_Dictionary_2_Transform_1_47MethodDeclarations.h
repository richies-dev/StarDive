﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
struct Transform_1_t3169;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_44MethodDeclarations.h"
#define Transform_1__ctor_m18836(__this, ___object, ___method, method) (( void (*) (Transform_1_t3169 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18765_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m18837(__this, ___key, ___value, method) (( bool (*) (Transform_1_t3169 *, String_t*, bool, MethodInfo*))Transform_1_Invoke_m18766_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m18838(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3169 *, String_t*, bool, AsyncCallback_t380 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18767_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m18839(__this, ___result, method) (( bool (*) (Transform_1_t3169 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18768_gshared)(__this, ___result, method)
