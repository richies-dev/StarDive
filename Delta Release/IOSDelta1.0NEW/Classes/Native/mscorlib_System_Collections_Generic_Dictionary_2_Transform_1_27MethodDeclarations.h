#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct Transform_1_t2796;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15616_gshared (Transform_1_t2796 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m15616(__this, ___object, ___method, method) (( void (*) (Transform_1_t2796 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m15616_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2777  Transform_1_Invoke_m15618_gshared (Transform_1_t2796 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m15618(__this, ___key, ___value, method) (( KeyValuePair_2_t2777  (*) (Transform_1_t2796 *, Object_t *, Object_t *, MethodInfo*))Transform_1_Invoke_m15618_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15620_gshared (Transform_1_t2796 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m15620(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2796 *, Object_t *, Object_t *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m15620_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2777  Transform_1_EndInvoke_m15622_gshared (Transform_1_t2796 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m15622(__this, ___result, method) (( KeyValuePair_2_t2777  (*) (Transform_1_t2796 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m15622_gshared)(__this, ___result, method)
