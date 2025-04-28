#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t256;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2089_gshared (UnityAction_1_t256 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m2089(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t256 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m2089_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m14154_gshared (UnityAction_1_t256 * __this, Color_t30  ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m14154(__this, ___arg0, method) (( void (*) (UnityAction_1_t256 *, Color_t30 , MethodInfo*))UnityAction_1_Invoke_m14154_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m14155_gshared (UnityAction_1_t256 * __this, Color_t30  ___arg0, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14155(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t256 *, Color_t30 , AsyncCallback_t311 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m14155_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m14156_gshared (UnityAction_1_t256 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m14156(__this, ___result, method) (( void (*) (UnityAction_1_t256 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m14156_gshared)(__this, ___result, method)
