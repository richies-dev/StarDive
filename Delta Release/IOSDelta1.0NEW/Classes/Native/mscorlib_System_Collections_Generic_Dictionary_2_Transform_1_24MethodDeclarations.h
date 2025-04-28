#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Transform_1_t2794;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t426;
// UnityEngine.Canvas
struct Canvas_t278;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13MethodDeclarations.h"
#define Transform_1__ctor_m15607(__this, ___object, ___method, method) (( void (*) (Transform_1_t2794 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m14668_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m15608(__this, ___key, ___value, method) (( IndexedSet_1_t426 * (*) (Transform_1_t2794 *, Canvas_t278 *, IndexedSet_1_t426 *, MethodInfo*))Transform_1_Invoke_m14669_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m15609(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2794 *, Canvas_t278 *, IndexedSet_1_t426 *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m14670_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m15610(__this, ___result, method) (( IndexedSet_1_t426 * (*) (Transform_1_t2794 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m14671_gshared)(__this, ___result, method)
