#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2807;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m15679_gshared (UnityAction_1_t2807 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m15679(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2807 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m15679_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15680_gshared (UnityAction_1_t2807 * __this, Vector2_t16  ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m15680(__this, ___arg0, method) (( void (*) (UnityAction_1_t2807 *, Vector2_t16 , MethodInfo*))UnityAction_1_Invoke_m15680_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15681_gshared (UnityAction_1_t2807 * __this, Vector2_t16  ___arg0, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15681(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2807 *, Vector2_t16 , AsyncCallback_t311 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m15681_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15682_gshared (UnityAction_1_t2807 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m15682(__this, ___result, method) (( void (*) (UnityAction_1_t2807 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m15682_gshared)(__this, ___result, method)
