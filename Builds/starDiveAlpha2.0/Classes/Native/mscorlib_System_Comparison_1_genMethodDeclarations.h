#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t249;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2096_gshared (Comparison_1_t249 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m2096(__this, ___object, ___method, method) (( void (*) (Comparison_1_t249 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m2096_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12996_gshared (Comparison_1_t249 * __this, RaycastResult_t254  ___x, RaycastResult_t254  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m12996(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t249 *, RaycastResult_t254 , RaycastResult_t254 , MethodInfo*))Comparison_1_Invoke_m12996_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12997_gshared (Comparison_1_t249 * __this, RaycastResult_t254  ___x, RaycastResult_t254  ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m12997(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t249 *, RaycastResult_t254 , RaycastResult_t254 , AsyncCallback_t380 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m12997_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12998_gshared (Comparison_1_t249 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m12998(__this, ___result, method) (( int32_t (*) (Comparison_1_t249 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m12998_gshared)(__this, ___result, method)
