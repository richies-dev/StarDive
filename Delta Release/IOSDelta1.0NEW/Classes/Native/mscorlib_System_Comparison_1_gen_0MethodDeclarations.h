#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t250;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2017_gshared (Comparison_1_t250 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m2017(__this, ___object, ___method, method) (( void (*) (Comparison_1_t250 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m2017_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14144_gshared (Comparison_1_t250 * __this, RaycastHit_t154  ___x, RaycastHit_t154  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m14144(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t250 *, RaycastHit_t154 , RaycastHit_t154 , MethodInfo*))Comparison_1_Invoke_m14144_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14145_gshared (Comparison_1_t250 * __this, RaycastHit_t154  ___x, RaycastHit_t154  ___y, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m14145(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t250 *, RaycastHit_t154 , RaycastHit_t154 , AsyncCallback_t311 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m14145_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14146_gshared (Comparison_1_t250 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m14146(__this, ___result, method) (( int32_t (*) (Comparison_1_t250 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m14146_gshared)(__this, ___result, method)
