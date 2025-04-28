#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
struct Transform_1_t2728;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14910_gshared (Transform_1_t2728 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m14910(__this, ___object, ___method, method) (( void (*) (Transform_1_t2728 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14910_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2703  Transform_1_Invoke_m14912_gshared (Transform_1_t2728 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m14912(__this, ___key, ___value, method) (( KeyValuePair_2_t2703  (*) (Transform_1_t2728 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m14912_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14914_gshared (Transform_1_t2728 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m14914(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2728 *, Object_t *, Object_t *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14914_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2703  Transform_1_EndInvoke_m14916_gshared (Transform_1_t2728 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m14916(__this, ___result, method) (( KeyValuePair_2_t2703  (*) (Transform_1_t2728 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14916_gshared)(__this, ___result, method)
