#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>
struct Transform_1_t2995;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t655;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m17105(__this, ___object, ___method, method) (( void (*) (Transform_1_t2995 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14122_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17106(__this, ___key, ___value, method) (( LayoutCache_t655 * (*) (Transform_1_t2995 *, int32_t, LayoutCache_t655 *, MethodInfo*))Transform_1_Invoke_m14123_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17107(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2995 *, int32_t, LayoutCache_t655 *, AsyncCallback_t380 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14124_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17108(__this, ___result, method) (( LayoutCache_t655 * (*) (Transform_1_t2995 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14125_gshared)(__this, ___result, method)
