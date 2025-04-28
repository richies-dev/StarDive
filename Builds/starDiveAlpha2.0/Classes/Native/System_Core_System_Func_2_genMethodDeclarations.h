#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t431;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t428;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"
#define Func_2__ctor_m2610(__this, ___object, ___method, method) (( void (*) (Func_2_t431 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m16569_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m16570(__this, ___arg1, method) (( bool (*) (Func_2_t431 *, Toggle_t428 *, MethodInfo*))Func_2_Invoke_m16571_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m16572(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t431 *, Toggle_t428 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m16573_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m16574(__this, ___result, method) (( bool (*) (Func_2_t431 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m16575_gshared)(__this, ___result, method)
