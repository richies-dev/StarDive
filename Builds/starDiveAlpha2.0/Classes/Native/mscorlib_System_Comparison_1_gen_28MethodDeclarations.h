#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t3145;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t775;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m18622(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3145 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m12551_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m18623(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3145 *, BaseInvokableCall_t775 *, BaseInvokableCall_t775 *, MethodInfo*))Comparison_1_Invoke_m12552_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m18624(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3145 *, BaseInvokableCall_t775 *, BaseInvokableCall_t775 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m12553_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m18625(__this, ___result, method) (( int32_t (*) (Comparison_1_t3145 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m12554_gshared)(__this, ___result, method)
