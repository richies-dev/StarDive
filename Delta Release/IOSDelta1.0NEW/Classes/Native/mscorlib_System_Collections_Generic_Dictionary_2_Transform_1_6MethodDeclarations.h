#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
struct Transform_1_t2665;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14272_gshared (Transform_1_t2665 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m14272(__this, ___object, ___method, method) (( void (*) (Transform_1_t2665 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14272_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m14273_gshared (Transform_1_t2665 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Transform_1_Invoke_m14273(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2665 *, Object_t *, int32_t, MethodInfo*))Transform_1_Invoke_m14273_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14274_gshared (Transform_1_t2665 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m14274(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2665 *, Object_t *, int32_t, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14274_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m14275_gshared (Transform_1_t2665 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m14275(__this, ___result, method) (( int32_t (*) (Transform_1_t2665 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14275_gshared)(__this, ___result, method)
