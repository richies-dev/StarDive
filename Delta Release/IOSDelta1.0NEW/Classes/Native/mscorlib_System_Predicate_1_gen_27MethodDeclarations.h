#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t3068;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t712;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m18243(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3068 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m12256_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::Invoke(T)
#define Predicate_1_Invoke_m18244(__this, ___obj, method) (( bool (*) (Predicate_1_t3068 *, PersistentCall_t712 *, MethodInfo*))Predicate_1_Invoke_m12257_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m18245(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3068 *, PersistentCall_t712 *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12258_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m18246(__this, ___result, method) (( bool (*) (Predicate_1_t3068 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12259_gshared)(__this, ___result, method)
