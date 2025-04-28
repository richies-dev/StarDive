#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t3199;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m19152_gshared (StaticGetter_1_t3199 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define StaticGetter_1__ctor_m19152(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t3199 *, Object_t *, IntPtr_t, MethodInfo*))StaticGetter_1__ctor_m19152_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m19153_gshared (StaticGetter_1_t3199 * __this, MethodInfo* method);
#define StaticGetter_1_Invoke_m19153(__this, method) (( Object_t * (*) (StaticGetter_1_t3199 *, MethodInfo*))StaticGetter_1_Invoke_m19153_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m19154_gshared (StaticGetter_1_t3199 * __this, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m19154(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t3199 *, AsyncCallback_t311 *, Object_t *, MethodInfo*))StaticGetter_1_BeginInvoke_m19154_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m19155_gshared (StaticGetter_1_t3199 * __this, Object_t * ___result, MethodInfo* method);
#define StaticGetter_1_EndInvoke_m19155(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t3199 *, Object_t *, MethodInfo*))StaticGetter_1_EndInvoke_m19155_gshared)(__this, ___result, method)
