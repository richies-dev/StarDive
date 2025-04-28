#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Type>
struct Comparison_1_t3026;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m17919(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3026 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m12311_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Type>::Invoke(T,T)
#define Comparison_1_Invoke_m17920(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3026 *, Type_t *, Type_t *, MethodInfo*))Comparison_1_Invoke_m12312_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Type>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m17921(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3026 *, Type_t *, Type_t *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m12313_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Type>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m17922(__this, ___result, method) (( int32_t (*) (Comparison_1_t3026 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m12314_gshared)(__this, ___result, method)
