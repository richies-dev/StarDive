#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t320;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2250_gshared (Comparison_1_t320 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m2250(__this, ___object, ___method, method) (( void (*) (Comparison_1_t320 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m2250_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14379_gshared (Comparison_1_t320 * __this, RaycastHit_t225  ___x, RaycastHit_t225  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m14379(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t320 *, RaycastHit_t225 , RaycastHit_t225 , MethodInfo*))Comparison_1_Invoke_m14379_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14380_gshared (Comparison_1_t320 * __this, RaycastHit_t225  ___x, RaycastHit_t225  ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m14380(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t320 *, RaycastHit_t225 , RaycastHit_t225 , AsyncCallback_t380 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m14380_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14381_gshared (Comparison_1_t320 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m14381(__this, ___result, method) (( int32_t (*) (Comparison_1_t320 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m14381_gshared)(__this, ___result, method)
