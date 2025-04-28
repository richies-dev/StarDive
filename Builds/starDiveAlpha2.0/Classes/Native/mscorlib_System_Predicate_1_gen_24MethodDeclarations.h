#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3061;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17820_gshared (Predicate_1_t3061 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m17820(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3061 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m17820_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17821_gshared (Predicate_1_t3061 * __this, UICharInfo_t504  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m17821(__this, ___obj, method) (( bool (*) (Predicate_1_t3061 *, UICharInfo_t504 , MethodInfo*))Predicate_1_Invoke_m17821_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17822_gshared (Predicate_1_t3061 * __this, UICharInfo_t504  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m17822(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3061 *, UICharInfo_t504 , AsyncCallback_t380 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m17822_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17823_gshared (Predicate_1_t3061 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m17823(__this, ___result, method) (( bool (*) (Predicate_1_t3061 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m17823_gshared)(__this, ___result, method)
