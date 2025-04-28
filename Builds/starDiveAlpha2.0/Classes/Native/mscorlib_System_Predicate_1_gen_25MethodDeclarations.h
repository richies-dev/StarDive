#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3070;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17962_gshared (Predicate_1_t3070 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m17962(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3070 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m17962_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17963_gshared (Predicate_1_t3070 * __this, UILineInfo_t502  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m17963(__this, ___obj, method) (( bool (*) (Predicate_1_t3070 *, UILineInfo_t502 , MethodInfo*))Predicate_1_Invoke_m17963_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17964_gshared (Predicate_1_t3070 * __this, UILineInfo_t502  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m17964(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3070 *, UILineInfo_t502 , AsyncCallback_t380 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m17964_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17965_gshared (Predicate_1_t3070 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m17965(__this, ___result, method) (( bool (*) (Predicate_1_t3070 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m17965_gshared)(__this, ___result, method)
