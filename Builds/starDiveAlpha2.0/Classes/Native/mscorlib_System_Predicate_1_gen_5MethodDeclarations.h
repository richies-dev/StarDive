#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<SavedData>
struct Predicate_1_t2572;
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

// System.Void System.Predicate`1<SavedData>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m12818(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2572 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m12496_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<SavedData>::Invoke(T)
#define Predicate_1_Invoke_m12819(__this, ___obj, method) (( bool (*) (Predicate_1_t2572 *, SavedData_t182 *, MethodInfo*))Predicate_1_Invoke_m12497_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<SavedData>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12820(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2572 *, SavedData_t182 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12498_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<SavedData>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12821(__this, ___result, method) (( bool (*) (Predicate_1_t2572 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12499_gshared)(__this, ___result, method)
