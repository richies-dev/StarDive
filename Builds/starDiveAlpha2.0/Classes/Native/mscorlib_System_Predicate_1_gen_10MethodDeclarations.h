﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t2658;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t257;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m13773(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2658 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m12496_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::Invoke(T)
#define Predicate_1_Invoke_m13774(__this, ___obj, method) (( bool (*) (Predicate_1_t2658 *, Entry_t257 *, MethodInfo*))Predicate_1_Invoke_m12497_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m13775(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2658 *, Entry_t257 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m12498_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m13776(__this, ___result, method) (( bool (*) (Predicate_1_t2658 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m12499_gshared)(__this, ___result, method)
