﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t209;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t211;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t231;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1904(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t209 *, UnityAction_1_t211 *, UnityAction_1_t211 *, MethodInfo*))ObjectPool_1__ctor_m12918_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m12919(__this, method) (( int32_t (*) (ObjectPool_1_t209 *, MethodInfo*))ObjectPool_1_get_countAll_m12920_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m12921(__this, ___value, method) (( void (*) (ObjectPool_1_t209 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m12922_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m12923(__this, method) (( int32_t (*) (ObjectPool_1_t209 *, MethodInfo*))ObjectPool_1_get_countActive_m12924_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m12925(__this, method) (( int32_t (*) (ObjectPool_1_t209 *, MethodInfo*))ObjectPool_1_get_countInactive_m12926_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m12927(__this, method) (( List_1_t231 * (*) (ObjectPool_1_t209 *, MethodInfo*))ObjectPool_1_Get_m12928_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m12929(__this, ___element, method) (( void (*) (ObjectPool_1_t209 *, List_1_t231 *, MethodInfo*))ObjectPool_1_Release_m12930_gshared)(__this, ___element, method)
