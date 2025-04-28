#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t510;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2526_gshared (UnityAction_1_t510 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m2526(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t510 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m2526_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15904_gshared (UnityAction_1_t510 * __this, float ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m15904(__this, ___arg0, method) (( void (*) (UnityAction_1_t510 *, float, MethodInfo*))UnityAction_1_Invoke_m15904_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15905_gshared (UnityAction_1_t510 * __this, float ___arg0, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15905(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t510 *, float, AsyncCallback_t380 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m15905_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15906_gshared (UnityAction_1_t510 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m15906(__this, ___result, method) (( void (*) (UnityAction_1_t510 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m15906_gshared)(__this, ___result, method)
