#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2635;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m13489_gshared (Predicate_1_t2635 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m13489(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2635 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m13489_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13490_gshared (Predicate_1_t2635 * __this, RaycastResult_t254  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m13490(__this, ___obj, method) (( bool (*) (Predicate_1_t2635 *, RaycastResult_t254 , MethodInfo*))Predicate_1_Invoke_m13490_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m13491_gshared (Predicate_1_t2635 * __this, RaycastResult_t254  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m13491(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2635 *, RaycastResult_t254 , AsyncCallback_t380 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m13491_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13492_gshared (Predicate_1_t2635 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m13492(__this, ___result, method) (( bool (*) (Predicate_1_t2635 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m13492_gshared)(__this, ___result, method)
