﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t2700;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14668_gshared (Transform_1_t2700 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m14668(__this, ___object, ___method, method) (( void (*) (Transform_1_t2700 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14668_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m14669_gshared (Transform_1_t2700 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m14669(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2700 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m14669_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14670_gshared (Transform_1_t2700 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m14670(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2700 *, Object_t *, Object_t *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14670_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m14671_gshared (Transform_1_t2700 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m14671(__this, ___result, method) (( Object_t * (*) (Transform_1_t2700 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14671_gshared)(__this, ___result, method)
