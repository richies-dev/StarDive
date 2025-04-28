#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t464;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t465;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t454;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2677(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t464 *, UnityAction_1_t465 *, UnityAction_1_t465 *, MethodInfo*))ObjectPool_1__ctor_m13153_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m16773(__this, method) (( int32_t (*) (ObjectPool_1_t464 *, MethodInfo*))ObjectPool_1_get_countAll_m13155_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16774(__this, ___value, method) (( void (*) (ObjectPool_1_t464 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13157_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m16775(__this, method) (( int32_t (*) (ObjectPool_1_t464 *, MethodInfo*))ObjectPool_1_get_countActive_m13159_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16776(__this, method) (( int32_t (*) (ObjectPool_1_t464 *, MethodInfo*))ObjectPool_1_get_countInactive_m13161_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2679(__this, method) (( List_1_t454 * (*) (ObjectPool_1_t464 *, MethodInfo*))ObjectPool_1_Get_m13163_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2680(__this, ___element, method) (( void (*) (ObjectPool_1_t464 *, List_1_t454 *, MethodInfo*))ObjectPool_1_Release_m13165_gshared)(__this, ___element, method)
