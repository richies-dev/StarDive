#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t465;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t454;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m2676(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t465 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_1__ctor_m13182_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Invoke(T0)
#define UnityAction_1_Invoke_m16798(__this, ___arg0, method) (( void (*) (UnityAction_1_t465 *, List_1_t454 *, MethodInfo*))UnityAction_1_Invoke_m13183_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m16799(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t465 *, List_1_t454 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))UnityAction_1_BeginInvoke_m13184_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m16800(__this, ___result, method) (( void (*) (UnityAction_1_t465 *, Object_t *, MethodInfo*))UnityAction_1_EndInvoke_m13185_gshared)(__this, ___result, method)
