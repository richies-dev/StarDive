#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t233;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t235;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t3266;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t3267;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t3268;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t2578;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t2574;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t2582;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t2585;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m1930(__this, method) (( void (*) (List_1_t233 *, MethodInfo*))List_1__ctor_m12054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m13264(__this, ___capacity, method) (( void (*) (List_1_t233 *, int32_t, MethodInfo*))List_1__ctor_m12056_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m13265(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12058_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13266(__this, method) (( Object_t* (*) (List_1_t233 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13267(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t233 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12062_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13268(__this, method) (( Object_t * (*) (List_1_t233 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13269(__this, ___item, method) (( int32_t (*) (List_1_t233 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12066_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13270(__this, ___item, method) (( bool (*) (List_1_t233 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13271(__this, ___item, method) (( int32_t (*) (List_1_t233 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12070_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13272(__this, ___index, ___item, method) (( void (*) (List_1_t233 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13273(__this, ___item, method) (( void (*) (List_1_t233 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12074_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13274(__this, method) (( bool (*) (List_1_t233 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13275(__this, method) (( bool (*) (List_1_t233 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12078_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13276(__this, method) (( Object_t * (*) (List_1_t233 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13277(__this, method) (( bool (*) (List_1_t233 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13278(__this, method) (( bool (*) (List_1_t233 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12084_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13279(__this, ___index, method) (( Object_t * (*) (List_1_t233 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13280(__this, ___index, ___value, method) (( void (*) (List_1_t233 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12088_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m1932(__this, ___item, method) (( void (*) (List_1_t233 *, BaseRaycaster_t235 *, MethodInfo*))List_1_Add_m12089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13281(__this, ___newCount, method) (( void (*) (List_1_t233 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12091_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13282(__this, ___collection, method) (( void (*) (List_1_t233 *, Object_t*, MethodInfo*))List_1_AddCollection_m12093_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13283(__this, ___enumerable, method) (( void (*) (List_1_t233 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12095_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13284(__this, ___collection, method) (( void (*) (List_1_t233 *, Object_t*, MethodInfo*))List_1_AddRange_m12096_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m13285(__this, method) (( ReadOnlyCollection_1_t2578 * (*) (List_1_t233 *, MethodInfo*))List_1_AsReadOnly_m12098_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m13286(__this, method) (( void (*) (List_1_t233 *, MethodInfo*))List_1_Clear_m12100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m1931(__this, ___item, method) (( bool (*) (List_1_t233 *, BaseRaycaster_t235 *, MethodInfo*))List_1_Contains_m12102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13287(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t233 *, BaseRaycasterU5BU5D_t2574*, int32_t, MethodInfo*))List_1_CopyTo_m12104_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m13288(__this, ___match, method) (( BaseRaycaster_t235 * (*) (List_1_t233 *, Predicate_1_t2582 *, MethodInfo*))List_1_Find_m12106_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13289(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2582 *, MethodInfo*))List_1_CheckMatch_m12108_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13290(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t233 *, int32_t, int32_t, Predicate_1_t2582 *, MethodInfo*))List_1_GetIndex_m12110_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
#define List_1_GetEnumerator_m13291(__this, method) (( Enumerator_t2576  (*) (List_1_t233 *, MethodInfo*))List_1_GetEnumerator_m12112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m13292(__this, ___item, method) (( int32_t (*) (List_1_t233 *, BaseRaycaster_t235 *, MethodInfo*))List_1_IndexOf_m12114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13293(__this, ___start, ___delta, method) (( void (*) (List_1_t233 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12116_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13294(__this, ___index, method) (( void (*) (List_1_t233 *, int32_t, MethodInfo*))List_1_CheckIndex_m12118_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m13295(__this, ___index, ___item, method) (( void (*) (List_1_t233 *, int32_t, BaseRaycaster_t235 *, MethodInfo*))List_1_Insert_m12120_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13296(__this, ___collection, method) (( void (*) (List_1_t233 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12122_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m1933(__this, ___item, method) (( bool (*) (List_1_t233 *, BaseRaycaster_t235 *, MethodInfo*))List_1_Remove_m12123_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13297(__this, ___match, method) (( int32_t (*) (List_1_t233 *, Predicate_1_t2582 *, MethodInfo*))List_1_RemoveAll_m12125_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13298(__this, ___index, method) (( void (*) (List_1_t233 *, int32_t, MethodInfo*))List_1_RemoveAt_m12127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m13299(__this, method) (( void (*) (List_1_t233 *, MethodInfo*))List_1_Reverse_m12129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m13300(__this, method) (( void (*) (List_1_t233 *, MethodInfo*))List_1_Sort_m12131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13301(__this, ___comparison, method) (( void (*) (List_1_t233 *, Comparison_1_t2585 *, MethodInfo*))List_1_Sort_m12133_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m13302(__this, method) (( BaseRaycasterU5BU5D_t2574* (*) (List_1_t233 *, MethodInfo*))List_1_ToArray_m12135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m13303(__this, method) (( void (*) (List_1_t233 *, MethodInfo*))List_1_TrimExcess_m12137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m13304(__this, method) (( int32_t (*) (List_1_t233 *, MethodInfo*))List_1_get_Capacity_m12139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13305(__this, ___value, method) (( void (*) (List_1_t233 *, int32_t, MethodInfo*))List_1_set_Capacity_m12141_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m1870(__this, method) (( int32_t (*) (List_1_t233 *, MethodInfo*))List_1_get_Count_m12142_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m1868(__this, ___index, method) (( BaseRaycaster_t235 * (*) (List_1_t233 *, int32_t, MethodInfo*))List_1_get_Item_m12143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m13306(__this, ___index, ___value, method) (( void (*) (List_1_t233 *, int32_t, BaseRaycaster_t235 *, MethodInfo*))List_1_set_Item_m12145_gshared)(__this, ___index, ___value, method)
