#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2998;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17590_gshared (Predicate_1_t2998 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m17590(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2998 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m17590_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17591_gshared (Predicate_1_t2998 * __this, UICharInfo_t435  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m17591(__this, ___obj, method) (( bool (*) (Predicate_1_t2998 *, UICharInfo_t435 , MethodInfo*))Predicate_1_Invoke_m17591_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17592_gshared (Predicate_1_t2998 * __this, UICharInfo_t435  ___obj, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m17592(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2998 *, UICharInfo_t435 , AsyncCallback_t311 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m17592_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17593_gshared (Predicate_1_t2998 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m17593(__this, ___result, method) (( bool (*) (Predicate_1_t2998 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m17593_gshared)(__this, ___result, method)
