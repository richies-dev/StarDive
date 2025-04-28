#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2745;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15084_gshared (Predicate_1_t2745 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m15084(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2745 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15084_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15085_gshared (Predicate_1_t2745 * __this, UIVertex_t301  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m15085(__this, ___obj, method) (( bool (*) (Predicate_1_t2745 *, UIVertex_t301 , MethodInfo*))Predicate_1_Invoke_m15085_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15086_gshared (Predicate_1_t2745 * __this, UIVertex_t301  ___obj, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m15086(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2745 *, UIVertex_t301 , AsyncCallback_t311 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15086_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15087_gshared (Predicate_1_t2745 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m15087(__this, ___result, method) (( bool (*) (Predicate_1_t2745 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15087_gshared)(__this, ___result, method)
