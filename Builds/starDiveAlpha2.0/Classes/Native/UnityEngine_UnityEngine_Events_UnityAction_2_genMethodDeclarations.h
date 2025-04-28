#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3114;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_2__ctor_m18309_gshared (UnityAction_2_t3114 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_2__ctor_m18309(__this, ___object, ___method, method) (( void (*) (UnityAction_2_t3114 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_2__ctor_m18309_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C" void UnityAction_2_Invoke_m18310_gshared (UnityAction_2_t3114 * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method);
#define UnityAction_2_Invoke_m18310(__this, ___arg0, ___arg1, method) (( void (*) (UnityAction_2_t3114 *, Object_t *, Object_t *, MethodInfo*))UnityAction_2_Invoke_m18310_gshared)(__this, ___arg0, ___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_2_BeginInvoke_m18311_gshared (UnityAction_2_t3114 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_2_BeginInvoke_m18311(__this, ___arg0, ___arg1, ___callback, ___object, method) (( Object_t * (*) (UnityAction_2_t3114 *, Object_t *, Object_t *, AsyncCallback_t380 *, Object_t *, MethodInfo*))UnityAction_2_BeginInvoke_m18311_gshared)(__this, ___arg0, ___arg1, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_2_EndInvoke_m18312_gshared (UnityAction_2_t3114 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_2_EndInvoke_m18312(__this, ___result, method) (( void (*) (UnityAction_2_t3114 *, Object_t *, MethodInfo*))UnityAction_2_EndInvoke_m18312_gshared)(__this, ___result, method)
