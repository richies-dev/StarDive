#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t274;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.ISelectHandler
struct ISelectHandler_t295;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t248;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1MethodDeclarations.h"
#define EventFunction_1__ctor_m2135(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t274 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m12999_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m13358(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t274 *, Object_t *, BaseEventData_t248 *, MethodInfo*))EventFunction_1_Invoke_m13001_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m13359(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t274 *, Object_t *, BaseEventData_t248 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m13003_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m13360(__this, ___result, method) (( void (*) (EventFunction_1_t274 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m13005_gshared)(__this, ___result, method)
