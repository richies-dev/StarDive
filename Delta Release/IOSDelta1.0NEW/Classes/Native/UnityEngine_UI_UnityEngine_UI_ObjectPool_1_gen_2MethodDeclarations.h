#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t395;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t396;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t385;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2458(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t395 *, UnityAction_1_t396 *, UnityAction_1_t396 *, MethodInfo*))ObjectPool_1__ctor_m12918_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m16538(__this, method) (( int32_t (*) (ObjectPool_1_t395 *, MethodInfo*))ObjectPool_1_get_countAll_m12920_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16539(__this, ___value, method) (( void (*) (ObjectPool_1_t395 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m12922_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m16540(__this, method) (( int32_t (*) (ObjectPool_1_t395 *, MethodInfo*))ObjectPool_1_get_countActive_m12924_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16541(__this, method) (( int32_t (*) (ObjectPool_1_t395 *, MethodInfo*))ObjectPool_1_get_countInactive_m12926_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2460(__this, method) (( List_1_t385 * (*) (ObjectPool_1_t395 *, MethodInfo*))ObjectPool_1_Get_m12928_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2461(__this, ___element, method) (( void (*) (ObjectPool_1_t395 *, List_1_t385 *, MethodInfo*))ObjectPool_1_Release_m12930_gshared)(__this, ___element, method)
