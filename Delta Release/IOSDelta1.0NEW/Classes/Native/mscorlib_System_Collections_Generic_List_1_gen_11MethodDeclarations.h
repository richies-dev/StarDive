#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t283;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t3299;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t444;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t3300;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2741;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t319;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2745;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2748;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2194_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1__ctor_m2194(__this, method) (( void (*) (List_1_t283 *, MethodInfo*))List_1__ctor_m2194_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3657_gshared (List_1_t283 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m3657(__this, ___capacity, method) (( void (*) (List_1_t283 *, int32_t, MethodInfo*))List_1__ctor_m3657_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m14960_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m14960(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m14960_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14961_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14961(__this, method) (( Object_t* (*) (List_1_t283 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14961_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14962_gshared (List_1_t283 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14962(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t283 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14962_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14963_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14963(__this, method) (( Object_t * (*) (List_1_t283 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14963_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14964_gshared (List_1_t283 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14964(__this, ___item, method) (( int32_t (*) (List_1_t283 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m14964_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14965_gshared (List_1_t283 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14965(__this, ___item, method) (( bool (*) (List_1_t283 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m14965_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14966_gshared (List_1_t283 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14966(__this, ___item, method) (( int32_t (*) (List_1_t283 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m14966_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14967_gshared (List_1_t283 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14967(__this, ___index, ___item, method) (( void (*) (List_1_t283 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m14967_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14968_gshared (List_1_t283 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14968(__this, ___item, method) (( void (*) (List_1_t283 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m14968_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14969_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14969(__this, method) (( bool (*) (List_1_t283 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14970_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14970(__this, method) (( bool (*) (List_1_t283 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14970_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14971_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14971(__this, method) (( Object_t * (*) (List_1_t283 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14971_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14972_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14972(__this, method) (( bool (*) (List_1_t283 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14972_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14973_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14973(__this, method) (( bool (*) (List_1_t283 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14973_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14974_gshared (List_1_t283 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14974(__this, ___index, method) (( Object_t * (*) (List_1_t283 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m14974_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14975_gshared (List_1_t283 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14975(__this, ___index, ___value, method) (( void (*) (List_1_t283 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m14975_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m2080_gshared (List_1_t283 * __this, UIVertex_t301  ___item, MethodInfo* method);
#define List_1_Add_m2080(__this, ___item, method) (( void (*) (List_1_t283 *, UIVertex_t301 , MethodInfo*))List_1_Add_m2080_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14976_gshared (List_1_t283 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m14976(__this, ___newCount, method) (( void (*) (List_1_t283 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m14976_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14977_gshared (List_1_t283 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m14977(__this, ___collection, method) (( void (*) (List_1_t283 *, Object_t*, MethodInfo*))List_1_AddCollection_m14977_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14978_gshared (List_1_t283 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m14978(__this, ___enumerable, method) (( void (*) (List_1_t283 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m14978_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14979_gshared (List_1_t283 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m14979(__this, ___collection, method) (( void (*) (List_1_t283 *, Object_t*, MethodInfo*))List_1_AddRange_m14979_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2741 * List_1_AsReadOnly_m14980_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m14980(__this, method) (( ReadOnlyCollection_1_t2741 * (*) (List_1_t283 *, MethodInfo*))List_1_AsReadOnly_m14980_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m2092_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_Clear_m2092(__this, method) (( void (*) (List_1_t283 *, MethodInfo*))List_1_Clear_m2092_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m14981_gshared (List_1_t283 * __this, UIVertex_t301  ___item, MethodInfo* method);
#define List_1_Contains_m14981(__this, ___item, method) (( bool (*) (List_1_t283 *, UIVertex_t301 , MethodInfo*))List_1_Contains_m14981_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14982_gshared (List_1_t283 * __this, UIVertexU5BU5D_t319* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m14982(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t283 *, UIVertexU5BU5D_t319*, int32_t, MethodInfo*))List_1_CopyTo_m14982_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t301  List_1_Find_m14983_gshared (List_1_t283 * __this, Predicate_1_t2745 * ___match, MethodInfo* method);
#define List_1_Find_m14983(__this, ___match, method) (( UIVertex_t301  (*) (List_1_t283 *, Predicate_1_t2745 *, MethodInfo*))List_1_Find_m14983_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14984_gshared (Object_t * __this /* static, unused */, Predicate_1_t2745 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m14984(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2745 *, MethodInfo*))List_1_CheckMatch_m14984_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14985_gshared (List_1_t283 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2745 * ___match, MethodInfo* method);
#define List_1_GetIndex_m14985(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t283 *, int32_t, int32_t, Predicate_1_t2745 *, MethodInfo*))List_1_GetIndex_m14985_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2740  List_1_GetEnumerator_m14986_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m14986(__this, method) (( Enumerator_t2740  (*) (List_1_t283 *, MethodInfo*))List_1_GetEnumerator_m14986_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14987_gshared (List_1_t283 * __this, UIVertex_t301  ___item, MethodInfo* method);
#define List_1_IndexOf_m14987(__this, ___item, method) (( int32_t (*) (List_1_t283 *, UIVertex_t301 , MethodInfo*))List_1_IndexOf_m14987_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14988_gshared (List_1_t283 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m14988(__this, ___start, ___delta, method) (( void (*) (List_1_t283 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m14988_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14989_gshared (List_1_t283 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m14989(__this, ___index, method) (( void (*) (List_1_t283 *, int32_t, MethodInfo*))List_1_CheckIndex_m14989_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14990_gshared (List_1_t283 * __this, int32_t ___index, UIVertex_t301  ___item, MethodInfo* method);
#define List_1_Insert_m14990(__this, ___index, ___item, method) (( void (*) (List_1_t283 *, int32_t, UIVertex_t301 , MethodInfo*))List_1_Insert_m14990_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14991_gshared (List_1_t283 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m14991(__this, ___collection, method) (( void (*) (List_1_t283 *, Object_t*, MethodInfo*))List_1_CheckCollection_m14991_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m14992_gshared (List_1_t283 * __this, UIVertex_t301  ___item, MethodInfo* method);
#define List_1_Remove_m14992(__this, ___item, method) (( bool (*) (List_1_t283 *, UIVertex_t301 , MethodInfo*))List_1_Remove_m14992_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14993_gshared (List_1_t283 * __this, Predicate_1_t2745 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m14993(__this, ___match, method) (( int32_t (*) (List_1_t283 *, Predicate_1_t2745 *, MethodInfo*))List_1_RemoveAll_m14993_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14994_gshared (List_1_t283 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m14994(__this, ___index, method) (( void (*) (List_1_t283 *, int32_t, MethodInfo*))List_1_RemoveAt_m14994_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m14995_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_Reverse_m14995(__this, method) (( void (*) (List_1_t283 *, MethodInfo*))List_1_Reverse_m14995_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m14996_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_Sort_m14996(__this, method) (( void (*) (List_1_t283 *, MethodInfo*))List_1_Sort_m14996_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14997_gshared (List_1_t283 * __this, Comparison_1_t2748 * ___comparison, MethodInfo* method);
#define List_1_Sort_m14997(__this, ___comparison, method) (( void (*) (List_1_t283 *, Comparison_1_t2748 *, MethodInfo*))List_1_Sort_m14997_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t319* List_1_ToArray_m2282_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_ToArray_m2282(__this, method) (( UIVertexU5BU5D_t319* (*) (List_1_t283 *, MethodInfo*))List_1_ToArray_m2282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m14998_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_TrimExcess_m14998(__this, method) (( void (*) (List_1_t283 *, MethodInfo*))List_1_TrimExcess_m14998_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2102_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_get_Capacity_m2102(__this, method) (( int32_t (*) (List_1_t283 *, MethodInfo*))List_1_get_Capacity_m2102_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2103_gshared (List_1_t283 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m2103(__this, ___value, method) (( void (*) (List_1_t283 *, int32_t, MethodInfo*))List_1_set_Capacity_m2103_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m2239_gshared (List_1_t283 * __this, MethodInfo* method);
#define List_1_get_Count_m2239(__this, method) (( int32_t (*) (List_1_t283 *, MethodInfo*))List_1_get_Count_m2239_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t301  List_1_get_Item_m2462_gshared (List_1_t283 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m2462(__this, ___index, method) (( UIVertex_t301  (*) (List_1_t283 *, int32_t, MethodInfo*))List_1_get_Item_m2462_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m2463_gshared (List_1_t283 * __this, int32_t ___index, UIVertex_t301  ___value, MethodInfo* method);
#define List_1_set_Item_m2463(__this, ___index, ___value, method) (( void (*) (List_1_t283 *, int32_t, UIVertex_t301 , MethodInfo*))List_1_set_Item_m2463_gshared)(__this, ___index, ___value, method)
