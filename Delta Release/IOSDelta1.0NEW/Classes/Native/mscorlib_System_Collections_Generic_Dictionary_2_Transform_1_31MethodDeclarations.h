#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct Transform_1_t2933;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16879_gshared (Transform_1_t2933 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m16879(__this, ___object, ___method, method) (( void (*) (Transform_1_t2933 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m16879_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2925  Transform_1_Invoke_m16881_gshared (Transform_1_t2933 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m16881(__this, ___key, ___value, method) (( KeyValuePair_2_t2925  (*) (Transform_1_t2933 *, int32_t, Object_t *, MethodInfo*))Transform_1_Invoke_m16881_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16883_gshared (Transform_1_t2933 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m16883(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2933 *, int32_t, Object_t *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m16883_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2925  Transform_1_EndInvoke_m16885_gshared (Transform_1_t2933 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m16885(__this, ___result, method) (( KeyValuePair_2_t2925  (*) (Transform_1_t2933 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m16885_gshared)(__this, ___result, method)
