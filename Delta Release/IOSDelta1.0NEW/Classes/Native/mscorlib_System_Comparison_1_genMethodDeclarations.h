#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t179;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1858_gshared (Comparison_1_t179 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m1858(__this, ___object, ___method, method) (( void (*) (Comparison_1_t179 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m1858_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12761_gshared (Comparison_1_t179 * __this, RaycastResult_t184  ___x, RaycastResult_t184  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m12761(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t179 *, RaycastResult_t184 , RaycastResult_t184 , MethodInfo*))Comparison_1_Invoke_m12761_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12762_gshared (Comparison_1_t179 * __this, RaycastResult_t184  ___x, RaycastResult_t184  ___y, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m12762(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t179 *, RaycastResult_t184 , RaycastResult_t184 , AsyncCallback_t311 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m12762_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12763_gshared (Comparison_1_t179 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m12763(__this, ___result, method) (( int32_t (*) (Comparison_1_t179 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m12763_gshared)(__this, ___result, method)
