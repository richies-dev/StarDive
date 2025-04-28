#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2657;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t168;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Predicate`1<System.Object>
struct Predicate_1_t2466;
// System.Comparison`1<System.Object>
struct Comparison_1_t2478;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14161_gshared (IndexedSet_1_t2657 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m14161(__this, method) (( void (*) (IndexedSet_1_t2657 *, MethodInfo*))IndexedSet_1__ctor_m14161_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14163_gshared (IndexedSet_1_t2657 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14163(__this, method) (( Object_t * (*) (IndexedSet_1_t2657 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14163_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14164_gshared (IndexedSet_1_t2657 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m14164(__this, ___item, method) (( void (*) (IndexedSet_1_t2657 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m14164_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14165_gshared (IndexedSet_1_t2657 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m14165(__this, ___item, method) (( bool (*) (IndexedSet_1_t2657 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m14165_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14167_gshared (IndexedSet_1_t2657 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14167(__this, method) (( Object_t* (*) (IndexedSet_1_t2657 *, MethodInfo*))IndexedSet_1_GetEnumerator_m14167_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14168_gshared (IndexedSet_1_t2657 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m14168(__this, method) (( void (*) (IndexedSet_1_t2657 *, MethodInfo*))IndexedSet_1_Clear_m14168_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14170_gshared (IndexedSet_1_t2657 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m14170(__this, ___item, method) (( bool (*) (IndexedSet_1_t2657 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m14170_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14172_gshared (IndexedSet_1_t2657 * __this, ObjectU5BU5D_t148* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m14172(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2657 *, ObjectU5BU5D_t148*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m14172_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14173_gshared (IndexedSet_1_t2657 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m14173(__this, method) (( int32_t (*) (IndexedSet_1_t2657 *, MethodInfo*))IndexedSet_1_get_Count_m14173_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14175_gshared (IndexedSet_1_t2657 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14175(__this, method) (( bool (*) (IndexedSet_1_t2657 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m14175_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14177_gshared (IndexedSet_1_t2657 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m14177(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2657 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m14177_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14179_gshared (IndexedSet_1_t2657 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m14179(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2657 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m14179_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14181_gshared (IndexedSet_1_t2657 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14181(__this, ___index, method) (( void (*) (IndexedSet_1_t2657 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m14181_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14182_gshared (IndexedSet_1_t2657 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m14182(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2657 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m14182_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14184_gshared (IndexedSet_1_t2657 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m14184(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2657 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m14184_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14185_gshared (IndexedSet_1_t2657 * __this, Predicate_1_t2466 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14185(__this, ___match, method) (( void (*) (IndexedSet_1_t2657 *, Predicate_1_t2466 *, MethodInfo*))IndexedSet_1_RemoveAll_m14185_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14186_gshared (IndexedSet_1_t2657 * __this, Comparison_1_t2478 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m14186(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2657 *, Comparison_1_t2478 *, MethodInfo*))IndexedSet_1_Sort_m14186_gshared)(__this, ___sortLayoutFunction, method)
