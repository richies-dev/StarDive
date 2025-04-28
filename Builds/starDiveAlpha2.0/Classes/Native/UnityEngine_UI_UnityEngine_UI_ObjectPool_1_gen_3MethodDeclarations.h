#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2610;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2609;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m13153_gshared (ObjectPool_1_t2610 * __this, UnityAction_1_t2609 * ___actionOnGet, UnityAction_1_t2609 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m13153(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2610 *, UnityAction_1_t2609 *, UnityAction_1_t2609 *, MethodInfo*))ObjectPool_1__ctor_m13153_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m13155_gshared (ObjectPool_1_t2610 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m13155(__this, method) (( int32_t (*) (ObjectPool_1_t2610 *, MethodInfo*))ObjectPool_1_get_countAll_m13155_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m13157_gshared (ObjectPool_1_t2610 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m13157(__this, ___value, method) (( void (*) (ObjectPool_1_t2610 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m13157_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m13159_gshared (ObjectPool_1_t2610 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m13159(__this, method) (( int32_t (*) (ObjectPool_1_t2610 *, MethodInfo*))ObjectPool_1_get_countActive_m13159_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m13161_gshared (ObjectPool_1_t2610 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m13161(__this, method) (( int32_t (*) (ObjectPool_1_t2610 *, MethodInfo*))ObjectPool_1_get_countInactive_m13161_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m13163_gshared (ObjectPool_1_t2610 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m13163(__this, method) (( Object_t * (*) (ObjectPool_1_t2610 *, MethodInfo*))ObjectPool_1_Get_m13163_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m13165_gshared (ObjectPool_1_t2610 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m13165(__this, ___element, method) (( void (*) (ObjectPool_1_t2610 *, Object_t *, MethodInfo*))ObjectPool_1_Release_m13165_gshared)(__this, ___element, method)
