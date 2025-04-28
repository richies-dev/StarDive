#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t192;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerEnterHandler
struct IPointerEnterHandler_t213;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t178;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1MethodDeclarations.h"
#define EventFunction_1__ctor_m1886(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t192 *, Object_t *, IntPtr_t, MethodInfo*))EventFunction_1__ctor_m12764_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m13574(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t192 *, Object_t *, BaseEventData_t178 *, MethodInfo*))EventFunction_1_Invoke_m12766_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m13575(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t192 *, Object_t *, BaseEventData_t178 *, AsyncCallback_t311 *, Object_t *, MethodInfo*))EventFunction_1_BeginInvoke_m12768_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m13576(__this, ___result, method) (( void (*) (EventFunction_1_t192 *, Object_t *, MethodInfo*))EventFunction_1_EndInvoke_m12770_gshared)(__this, ___result, method)
