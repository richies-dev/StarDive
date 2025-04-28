#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2748;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15094_gshared (Comparison_1_t2748 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m15094(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2748 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m15094_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15095_gshared (Comparison_1_t2748 * __this, UIVertex_t301  ___x, UIVertex_t301  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15095(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2748 *, UIVertex_t301 , UIVertex_t301 , MethodInfo*))Comparison_1_Invoke_m15095_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15096_gshared (Comparison_1_t2748 * __this, UIVertex_t301  ___x, UIVertex_t301  ___y, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15096(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2748 *, UIVertex_t301 , UIVertex_t301 , AsyncCallback_t311 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15096_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15097_gshared (Comparison_1_t2748 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15097(__this, ___result, method) (( int32_t (*) (Comparison_1_t2748 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15097_gshared)(__this, ___result, method)
