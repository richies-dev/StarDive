#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<SavedData>
struct Comparison_1_t2575;
// System.Object
struct Object_t;
// SavedData
struct SavedData_t182;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<SavedData>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m12828(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2575 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m12551_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<SavedData>::Invoke(T,T)
#define Comparison_1_Invoke_m12829(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2575 *, SavedData_t182 *, SavedData_t182 *, MethodInfo*))Comparison_1_Invoke_m12552_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<SavedData>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m12830(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2575 *, SavedData_t182 *, SavedData_t182 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m12553_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<SavedData>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m12831(__this, ___result, method) (( int32_t (*) (Comparison_1_t2575 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m12554_gshared)(__this, ___result, method)
