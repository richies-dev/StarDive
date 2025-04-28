#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3007;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17732_gshared (Predicate_1_t3007 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m17732(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3007 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m17732_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17733_gshared (Predicate_1_t3007 * __this, UILineInfo_t433  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m17733(__this, ___obj, method) (( bool (*) (Predicate_1_t3007 *, UILineInfo_t433 , MethodInfo*))Predicate_1_Invoke_m17733_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17734_gshared (Predicate_1_t3007 * __this, UILineInfo_t433  ___obj, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m17734(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3007 *, UILineInfo_t433 , AsyncCallback_t311 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m17734_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17735_gshared (Predicate_1_t3007 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m17735(__this, ___result, method) (( bool (*) (Predicate_1_t3007 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m17735_gshared)(__this, ___result, method)
