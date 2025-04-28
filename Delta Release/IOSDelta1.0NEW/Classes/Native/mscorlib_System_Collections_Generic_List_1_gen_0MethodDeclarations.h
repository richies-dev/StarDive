#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<SavedData>
struct List_1_t115;
// System.Object
struct Object_t;
// SavedData
struct SavedData_t116;
// System.Collections.Generic.IEnumerator`1<SavedData>
struct IEnumerator_1_t3250;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.ICollection`1<SavedData>
struct ICollection_1_t3251;
// System.Collections.Generic.IEnumerable`1<SavedData>
struct IEnumerable_1_t3252;
// System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>
struct ReadOnlyCollection_1_t2501;
// SavedData[]
struct SavedDataU5BU5D_t2498;
// System.Predicate`1<SavedData>
struct Predicate_1_t2505;
// System.Comparison`1<SavedData>
struct Comparison_1_t2508;
// System.Collections.Generic.List`1/Enumerator<SavedData>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<SavedData>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m622(__this, method) (( void (*) (List_1_t115 *, MethodInfo*))List_1__ctor_m12054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::.ctor(System.Int32)
#define List_1__ctor_m12449(__this, ___capacity, method) (( void (*) (List_1_t115 *, int32_t, MethodInfo*))List_1__ctor_m12056_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<SavedData>::.cctor()
#define List_1__cctor_m12450(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12058_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<SavedData>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12451(__this, method) (( Object_t* (*) (List_1_t115 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12452(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t115 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12062_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<SavedData>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12453(__this, method) (( Object_t * (*) (List_1_t115 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12454(__this, ___item, method) (( int32_t (*) (List_1_t115 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12066_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12455(__this, ___item, method) (( bool (*) (List_1_t115 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12456(__this, ___item, method) (( int32_t (*) (List_1_t115 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12070_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12457(__this, ___index, ___item, method) (( void (*) (List_1_t115 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12458(__this, ___item, method) (( void (*) (List_1_t115 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12074_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12459(__this, method) (( bool (*) (List_1_t115 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12460(__this, method) (( bool (*) (List_1_t115 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12078_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SavedData>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12461(__this, method) (( Object_t * (*) (List_1_t115 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12462(__this, method) (( bool (*) (List_1_t115 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12463(__this, method) (( bool (*) (List_1_t115 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12084_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SavedData>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12464(__this, ___index, method) (( Object_t * (*) (List_1_t115 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12465(__this, ___index, ___value, method) (( void (*) (List_1_t115 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12088_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Add(T)
#define List_1_Add_m625(__this, ___item, method) (( void (*) (List_1_t115 *, SavedData_t116 *, MethodInfo*))List_1_Add_m12089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12466(__this, ___newCount, method) (( void (*) (List_1_t115 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12091_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<SavedData>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12467(__this, ___collection, method) (( void (*) (List_1_t115 *, Object_t*, MethodInfo*))List_1_AddCollection_m12093_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<SavedData>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12468(__this, ___enumerable, method) (( void (*) (List_1_t115 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12095_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<SavedData>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12469(__this, ___collection, method) (( void (*) (List_1_t115 *, Object_t*, MethodInfo*))List_1_AddRange_m12096_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<SavedData>::AsReadOnly()
#define List_1_AsReadOnly_m12470(__this, method) (( ReadOnlyCollection_1_t2501 * (*) (List_1_t115 *, MethodInfo*))List_1_AsReadOnly_m12098_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Clear()
#define List_1_Clear_m12471(__this, method) (( void (*) (List_1_t115 *, MethodInfo*))List_1_Clear_m12100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::Contains(T)
#define List_1_Contains_m12472(__this, ___item, method) (( bool (*) (List_1_t115 *, SavedData_t116 *, MethodInfo*))List_1_Contains_m12102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12473(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t115 *, SavedDataU5BU5D_t2498*, int32_t, MethodInfo*))List_1_CopyTo_m12104_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<SavedData>::Find(System.Predicate`1<T>)
#define List_1_Find_m12474(__this, ___match, method) (( SavedData_t116 * (*) (List_1_t115 *, Predicate_1_t2505 *, MethodInfo*))List_1_Find_m12106_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12475(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2505 *, MethodInfo*))List_1_CheckMatch_m12108_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12476(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t115 *, int32_t, int32_t, Predicate_1_t2505 *, MethodInfo*))List_1_GetIndex_m12110_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SavedData>::GetEnumerator()
#define List_1_GetEnumerator_m634(__this, method) (( Enumerator_t159  (*) (List_1_t115 *, MethodInfo*))List_1_GetEnumerator_m12112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::IndexOf(T)
#define List_1_IndexOf_m12477(__this, ___item, method) (( int32_t (*) (List_1_t115 *, SavedData_t116 *, MethodInfo*))List_1_IndexOf_m12114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12478(__this, ___start, ___delta, method) (( void (*) (List_1_t115 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12116_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12479(__this, ___index, method) (( void (*) (List_1_t115 *, int32_t, MethodInfo*))List_1_CheckIndex_m12118_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Insert(System.Int32,T)
#define List_1_Insert_m12480(__this, ___index, ___item, method) (( void (*) (List_1_t115 *, int32_t, SavedData_t116 *, MethodInfo*))List_1_Insert_m12120_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12481(__this, ___collection, method) (( void (*) (List_1_t115 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12122_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::Remove(T)
#define List_1_Remove_m12482(__this, ___item, method) (( bool (*) (List_1_t115 *, SavedData_t116 *, MethodInfo*))List_1_Remove_m12123_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12483(__this, ___match, method) (( int32_t (*) (List_1_t115 *, Predicate_1_t2505 *, MethodInfo*))List_1_RemoveAll_m12125_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<SavedData>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12484(__this, ___index, method) (( void (*) (List_1_t115 *, int32_t, MethodInfo*))List_1_RemoveAt_m12127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Reverse()
#define List_1_Reverse_m12485(__this, method) (( void (*) (List_1_t115 *, MethodInfo*))List_1_Reverse_m12129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Sort()
#define List_1_Sort_m12486(__this, method) (( void (*) (List_1_t115 *, MethodInfo*))List_1_Sort_m12131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12487(__this, ___comparison, method) (( void (*) (List_1_t115 *, Comparison_1_t2508 *, MethodInfo*))List_1_Sort_m12133_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<SavedData>::ToArray()
#define List_1_ToArray_m12488(__this, method) (( SavedDataU5BU5D_t2498* (*) (List_1_t115 *, MethodInfo*))List_1_ToArray_m12135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::TrimExcess()
#define List_1_TrimExcess_m12489(__this, method) (( void (*) (List_1_t115 *, MethodInfo*))List_1_TrimExcess_m12137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::get_Capacity()
#define List_1_get_Capacity_m12490(__this, method) (( int32_t (*) (List_1_t115 *, MethodInfo*))List_1_get_Capacity_m12139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12491(__this, ___value, method) (( void (*) (List_1_t115 *, int32_t, MethodInfo*))List_1_set_Capacity_m12141_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::get_Count()
#define List_1_get_Count_m12492(__this, method) (( int32_t (*) (List_1_t115 *, MethodInfo*))List_1_get_Count_m12142_gshared)(__this, method)
// T System.Collections.Generic.List`1<SavedData>::get_Item(System.Int32)
#define List_1_get_Item_m12493(__this, ___index, method) (( SavedData_t116 * (*) (List_1_t115 *, int32_t, MethodInfo*))List_1_get_Item_m12143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::set_Item(System.Int32,T)
#define List_1_set_Item_m12494(__this, ___index, ___value, method) (( void (*) (List_1_t115 *, int32_t, SavedData_t116 *, MethodInfo*))List_1_set_Item_m12145_gshared)(__this, ___index, ___value, method)
