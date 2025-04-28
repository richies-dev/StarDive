#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2546;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2545;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m12918_gshared (ObjectPool_1_t2546 * __this, UnityAction_1_t2545 * ___actionOnGet, UnityAction_1_t2545 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m12918(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2546 *, UnityAction_1_t2545 *, UnityAction_1_t2545 *, MethodInfo*))ObjectPool_1__ctor_m12918_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m12920_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m12920(__this, method) (( int32_t (*) (ObjectPool_1_t2546 *, MethodInfo*))ObjectPool_1_get_countAll_m12920_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m12922_gshared (ObjectPool_1_t2546 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m12922(__this, ___value, method) (( void (*) (ObjectPool_1_t2546 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m12922_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m12924_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m12924(__this, method) (( int32_t (*) (ObjectPool_1_t2546 *, MethodInfo*))ObjectPool_1_get_countActive_m12924_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m12926_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m12926(__this, method) (( int32_t (*) (ObjectPool_1_t2546 *, MethodInfo*))ObjectPool_1_get_countInactive_m12926_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m12928_gshared (ObjectPool_1_t2546 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m12928(__this, method) (( Object_t * (*) (ObjectPool_1_t2546 *, MethodInfo*))ObjectPool_1_Get_m12928_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m12930_gshared (ObjectPool_1_t2546 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m12930(__this, ___element, method) (( void (*) (ObjectPool_1_t2546 *, Object_t *, MethodInfo*))ObjectPool_1_Release_m12930_gshared)(__this, ___element, method)
