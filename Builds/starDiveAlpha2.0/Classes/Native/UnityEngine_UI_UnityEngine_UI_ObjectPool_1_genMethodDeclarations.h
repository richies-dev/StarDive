#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t279;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t281;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t301;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2141(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t279 *, UnityAction_1_t281 *, UnityAction_1_t281 *, MethodInfo*))ObjectPool_1__ctor_m13153_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m13154(__this, method) (( int32_t (*) (ObjectPool_1_t279 *, MethodInfo*))ObjectPool_1_get_countAll_m13155_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13156(__this, ___value, method) (( void (*) (ObjectPool_1_t279 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13157_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m13158(__this, method) (( int32_t (*) (ObjectPool_1_t279 *, MethodInfo*))ObjectPool_1_get_countActive_m13159_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13160(__this, method) (( int32_t (*) (ObjectPool_1_t279 *, MethodInfo*))ObjectPool_1_get_countInactive_m13161_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m13162(__this, method) (( List_1_t301 * (*) (ObjectPool_1_t279 *, MethodInfo*))ObjectPool_1_Get_m13163_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m13164(__this, ___element, method) (( void (*) (ObjectPool_1_t279 *, List_1_t301 *, MethodInfo*))ObjectPool_1_Release_m13165_gshared)(__this, ___element, method)
