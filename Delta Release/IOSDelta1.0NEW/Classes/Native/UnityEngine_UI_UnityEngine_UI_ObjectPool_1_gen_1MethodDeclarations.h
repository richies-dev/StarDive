#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t391;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t392;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t394;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2453(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t391 *, UnityAction_1_t392 *, UnityAction_1_t392 *, MethodInfo*))ObjectPool_1__ctor_m12918_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m16510(__this, method) (( int32_t (*) (ObjectPool_1_t391 *, MethodInfo*))ObjectPool_1_get_countAll_m12920_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16511(__this, ___value, method) (( void (*) (ObjectPool_1_t391 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m12922_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m16512(__this, method) (( int32_t (*) (ObjectPool_1_t391 *, MethodInfo*))ObjectPool_1_get_countActive_m12924_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16513(__this, method) (( int32_t (*) (ObjectPool_1_t391 *, MethodInfo*))ObjectPool_1_get_countInactive_m12926_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2455(__this, method) (( List_1_t394 * (*) (ObjectPool_1_t391 *, MethodInfo*))ObjectPool_1_Get_m12928_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2456(__this, ___element, method) (( void (*) (ObjectPool_1_t391 *, List_1_t394 *, MethodInfo*))ObjectPool_1_Release_m12930_gshared)(__this, ___element, method)
