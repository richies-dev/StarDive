#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t2552;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t28;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m12635(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2552 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m12496_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::Invoke(T)
#define Predicate_1_Invoke_m12636(__this, ___obj, method) (( bool (*) (Predicate_1_t2552 *, GameObject_t28 *, MethodInfo*))Predicate_1_Invoke_m12497_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.GameObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m12637(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2552 *, GameObject_t28 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12498_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m12638(__this, ___result, method) (( bool (*) (Predicate_1_t2552 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12499_gshared)(__this, ___result, method)
