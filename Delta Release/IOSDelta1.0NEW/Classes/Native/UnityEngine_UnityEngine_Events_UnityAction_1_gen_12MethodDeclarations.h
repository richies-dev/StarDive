#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3059;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m18105_gshared (UnityAction_1_t3059 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m18105(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t3059 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m18105_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m18106_gshared (UnityAction_1_t3059 * __this, int32_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m18106(__this, ___arg0, method) (( void (*) (UnityAction_1_t3059 *, int32_t, MethodInfo*))UnityAction_1_Invoke_m18106_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m18107_gshared (UnityAction_1_t3059 * __this, int32_t ___arg0, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m18107(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t3059 *, int32_t, AsyncCallback_t311 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m18107_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m18108_gshared (UnityAction_1_t3059 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m18108(__this, ___result, method) (( void (*) (UnityAction_1_t3059 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m18108_gshared)(__this, ___result, method)
