#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2600;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t178;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m13566(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2600 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m12947_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityAction_1_Invoke_m13567(__this, ___arg0, method) (( void (*) (UnityAction_1_t2600 *, BaseEventData_t178 *, MethodInfo*))UnityAction_1_Invoke_m12948_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m13568(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2600 *, BaseEventData_t178 *, AsyncCallback_t311 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m12949_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m13569(__this, ___result, method) (( void (*) (UnityAction_1_t2600 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m12950_gshared)(__this, ___result, method)
