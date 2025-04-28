#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct Transform_1_t2954;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t580;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_35MethodDeclarations.h"
#define Transform_1__ctor_m17135(__this, ___object, ___method, method) (( void (*) (Transform_1_t2954 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m17136_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m17137(__this, ___key, ___value, method) (( KeyValuePair_2_t2950  (*) (Transform_1_t2954 *, String_t*, GUIStyle_t580 *, MethodInfo*))Transform_1_Invoke_m17138_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m17139(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2954 *, String_t*, GUIStyle_t580 *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m17140_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m17141(__this, ___result, method) (( KeyValuePair_2_t2950  (*) (Transform_1_t2954 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m17142_gshared)(__this, ___result, method)
