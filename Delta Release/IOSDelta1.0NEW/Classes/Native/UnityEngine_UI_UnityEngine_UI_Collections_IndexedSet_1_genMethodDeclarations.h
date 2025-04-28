#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t265;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t268;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t3282;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t2669;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t267;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t266;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m2028(__this, method) (( void (*) (IndexedSet_1_t265 *, MethodInfo*))IndexedSet_1__ctor_m14161_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14162(__this, method) (( Object_t * (*) (IndexedSet_1_t265 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14163_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define IndexedSet_1_Add_m2039(__this, ___item, method) (( void (*) (IndexedSet_1_t265 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m14164_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define IndexedSet_1_Remove_m2041(__this, ___item, method) (( bool (*) (IndexedSet_1_t265 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m14165_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m14166(__this, method) (( Object_t* (*) (IndexedSet_1_t265 *, MethodInfo*))IndexedSet_1_GetEnumerator_m14167_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
#define IndexedSet_1_Clear_m2038(__this, method) (( void (*) (IndexedSet_1_t265 *, MethodInfo*))IndexedSet_1_Clear_m14168_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define IndexedSet_1_Contains_m14169(__this, ___item, method) (( bool (*) (IndexedSet_1_t265 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m14170_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m14171(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t265 *, ICanvasElementU5BU5D_t2669*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m14172_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define IndexedSet_1_get_Count_m2037(__this, method) (( int32_t (*) (IndexedSet_1_t265 *, MethodInfo*))IndexedSet_1_get_Count_m14173_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m14174(__this, method) (( bool (*) (IndexedSet_1_t265 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m14175_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define IndexedSet_1_IndexOf_m14176(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t265 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m14177_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m14178(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t265 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m14179_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m14180(__this, ___index, method) (( void (*) (IndexedSet_1_t265 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m14181_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m2033(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t265 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m14182_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m14183(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t265 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m14184_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m2043(__this, ___match, method) (( void (*) (IndexedSet_1_t265 *, Predicate_1_t267 *, MethodInfo*))IndexedSet_1_RemoveAll_m14185_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m2044(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t265 *, Comparison_1_t266 *, MethodInfo*))IndexedSet_1_Sort_m14186_gshared)(__this, ___sortLayoutFunction, method)
