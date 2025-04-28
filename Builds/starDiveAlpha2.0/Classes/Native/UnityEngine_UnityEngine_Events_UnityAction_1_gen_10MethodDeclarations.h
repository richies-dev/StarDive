#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Byte>
struct UnityAction_1_t2921;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m16403_gshared (UnityAction_1_t2921 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_1__ctor_m16403(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2921 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m16403_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16404_gshared (UnityAction_1_t2921 * __this, uint8_t ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m16404(__this, ___arg0, method) (( void (*) (UnityAction_1_t2921 *, uint8_t, MethodInfo*))UnityAction_1_Invoke_m16404_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Byte>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16405_gshared (UnityAction_1_t2921 * __this, uint8_t ___arg0, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16405(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2921 *, uint8_t, AsyncCallback_t380 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m16405_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16406_gshared (UnityAction_1_t2921 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m16406(__this, ___result, method) (( void (*) (UnityAction_1_t2921 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m16406_gshared)(__this, ___result, method)
