#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2859;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"
#define UnityAction_1__ctor_m16176(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2859 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m16168_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
#define UnityAction_1_Invoke_m16177(__this, ___arg0, method) (( void (*) (UnityAction_1_t2859 *, bool, MethodInfo*))UnityAction_1_Invoke_m16169_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m16178(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2859 *, bool, AsyncCallback_t311 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m16170_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m16179(__this, ___result, method) (( void (*) (UnityAction_1_t2859 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m16171_gshared)(__this, ___result, method)
