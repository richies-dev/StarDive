#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t460;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t461;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t463;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2672(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t460 *, UnityAction_1_t461 *, UnityAction_1_t461 *, MethodInfo*))ObjectPool_1__ctor_m13153_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m16745(__this, method) (( int32_t (*) (ObjectPool_1_t460 *, MethodInfo*))ObjectPool_1_get_countAll_m13155_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16746(__this, ___value, method) (( void (*) (ObjectPool_1_t460 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13157_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m16747(__this, method) (( int32_t (*) (ObjectPool_1_t460 *, MethodInfo*))ObjectPool_1_get_countActive_m13159_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16748(__this, method) (( int32_t (*) (ObjectPool_1_t460 *, MethodInfo*))ObjectPool_1_get_countInactive_m13161_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2674(__this, method) (( List_1_t463 * (*) (ObjectPool_1_t460 *, MethodInfo*))ObjectPool_1_Get_m13163_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2675(__this, ___element, method) (( void (*) (ObjectPool_1_t460 *, List_1_t463 *, MethodInfo*))ObjectPool_1_Release_m13165_gshared)(__this, ___element, method)
