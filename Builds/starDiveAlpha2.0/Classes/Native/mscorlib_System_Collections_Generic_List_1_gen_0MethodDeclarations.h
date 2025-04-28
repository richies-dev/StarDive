#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<SavedData>
struct List_1_t181;
// System.Object
struct Object_t;
// SavedData
struct SavedData_t182;
// System.Collections.Generic.IEnumerator`1<SavedData>
struct IEnumerator_1_t3313;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<SavedData>
struct ICollection_1_t3314;
// System.Collections.Generic.IEnumerable`1<SavedData>
struct IEnumerable_1_t3315;
// System.Collections.ObjectModel.ReadOnlyCollection`1<SavedData>
struct ReadOnlyCollection_1_t2568;
// SavedData[]
struct SavedDataU5BU5D_t2565;
// System.Predicate`1<SavedData>
struct Predicate_1_t2572;
// System.Comparison`1<SavedData>
struct Comparison_1_t2575;
// System.Collections.Generic.List`1/Enumerator<SavedData>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<SavedData>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m860(__this, method) (( void (*) (List_1_t181 *, MethodInfo*))List_1__ctor_m12324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::.ctor(System.Int32)
#define List_1__ctor_m12689(__this, ___capacity, method) (( void (*) (List_1_t181 *, int32_t, MethodInfo*))List_1__ctor_m12326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<SavedData>::.cctor()
#define List_1__cctor_m12690(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12328_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<SavedData>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12691(__this, method) (( Object_t* (*) (List_1_t181 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12692(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12332_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<SavedData>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12693(__this, method) (( Object_t * (*) (List_1_t181 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12334_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12694(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12336_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12695(__this, ___item, method) (( bool (*) (List_1_t181 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12338_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12696(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12697(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12342_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12698(__this, ___item, method) (( void (*) (List_1_t181 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12699(__this, method) (( bool (*) (List_1_t181 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12700(__this, method) (( bool (*) (List_1_t181 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12348_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SavedData>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12701(__this, method) (( Object_t * (*) (List_1_t181 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12702(__this, method) (( bool (*) (List_1_t181 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12703(__this, method) (( bool (*) (List_1_t181 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SavedData>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12704(__this, ___index, method) (( Object_t * (*) (List_1_t181 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12705(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Add(T)
#define List_1_Add_m865(__this, ___item, method) (( void (*) (List_1_t181 *, SavedData_t182 *, MethodInfo*))List_1_Add_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12706(__this, ___newCount, method) (( void (*) (List_1_t181 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<SavedData>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12707(__this, ___collection, method) (( void (*) (List_1_t181 *, Object_t*, MethodInfo*))List_1_AddCollection_m12363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<SavedData>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12708(__this, ___enumerable, method) (( void (*) (List_1_t181 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<SavedData>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12709(__this, ___collection, method) (( void (*) (List_1_t181 *, Object_t*, MethodInfo*))List_1_AddRange_m12366_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<SavedData>::AsReadOnly()
#define List_1_AsReadOnly_m12710(__this, method) (( ReadOnlyCollection_1_t2568 * (*) (List_1_t181 *, MethodInfo*))List_1_AsReadOnly_m12368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Clear()
#define List_1_Clear_m12711(__this, method) (( void (*) (List_1_t181 *, MethodInfo*))List_1_Clear_m12370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::Contains(T)
#define List_1_Contains_m12712(__this, ___item, method) (( bool (*) (List_1_t181 *, SavedData_t182 *, MethodInfo*))List_1_Contains_m12372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12713(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, SavedDataU5BU5D_t2565*, int32_t, MethodInfo*))List_1_CopyTo_m12374_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<SavedData>::Find(System.Predicate`1<T>)
#define List_1_Find_m12714(__this, ___match, method) (( SavedData_t182 * (*) (List_1_t181 *, Predicate_1_t2572 *, MethodInfo*))List_1_Find_m12376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12715(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2572 *, MethodInfo*))List_1_CheckMatch_m12378_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12716(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t181 *, int32_t, int32_t, Predicate_1_t2572 *, MethodInfo*))List_1_GetIndex_m12380_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SavedData>::GetEnumerator()
#define List_1_GetEnumerator_m874(__this, method) (( Enumerator_t230  (*) (List_1_t181 *, MethodInfo*))List_1_GetEnumerator_m12382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::IndexOf(T)
#define List_1_IndexOf_m12717(__this, ___item, method) (( int32_t (*) (List_1_t181 *, SavedData_t182 *, MethodInfo*))List_1_IndexOf_m12384_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12718(__this, ___start, ___delta, method) (( void (*) (List_1_t181 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12719(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, MethodInfo*))List_1_CheckIndex_m12388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Insert(System.Int32,T)
#define List_1_Insert_m12720(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, SavedData_t182 *, MethodInfo*))List_1_Insert_m12390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SavedData>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12721(__this, ___collection, method) (( void (*) (List_1_t181 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12392_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<SavedData>::Remove(T)
#define List_1_Remove_m12722(__this, ___item, method) (( bool (*) (List_1_t181 *, SavedData_t182 *, MethodInfo*))List_1_Remove_m12393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12723(__this, ___match, method) (( int32_t (*) (List_1_t181 *, Predicate_1_t2572 *, MethodInfo*))List_1_RemoveAll_m12395_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<SavedData>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12724(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, MethodInfo*))List_1_RemoveAt_m12397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Reverse()
#define List_1_Reverse_m12725(__this, method) (( void (*) (List_1_t181 *, MethodInfo*))List_1_Reverse_m12399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Sort()
#define List_1_Sort_m12726(__this, method) (( void (*) (List_1_t181 *, MethodInfo*))List_1_Sort_m12401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12727(__this, ___comparison, method) (( void (*) (List_1_t181 *, Comparison_1_t2575 *, MethodInfo*))List_1_Sort_m12403_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<SavedData>::ToArray()
#define List_1_ToArray_m12728(__this, method) (( SavedDataU5BU5D_t2565* (*) (List_1_t181 *, MethodInfo*))List_1_ToArray_m12405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::TrimExcess()
#define List_1_TrimExcess_m12729(__this, method) (( void (*) (List_1_t181 *, MethodInfo*))List_1_TrimExcess_m12407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::get_Capacity()
#define List_1_get_Capacity_m12730(__this, method) (( int32_t (*) (List_1_t181 *, MethodInfo*))List_1_get_Capacity_m12409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SavedData>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12731(__this, ___value, method) (( void (*) (List_1_t181 *, int32_t, MethodInfo*))List_1_set_Capacity_m12411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<SavedData>::get_Count()
#define List_1_get_Count_m12732(__this, method) (( int32_t (*) (List_1_t181 *, MethodInfo*))List_1_get_Count_m12412_gshared)(__this, method)
// T System.Collections.Generic.List`1<SavedData>::get_Item(System.Int32)
#define List_1_get_Item_m12733(__this, ___index, method) (( SavedData_t182 * (*) (List_1_t181 *, int32_t, MethodInfo*))List_1_get_Item_m12413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SavedData>::set_Item(System.Int32,T)
#define List_1_set_Item_m12734(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, SavedData_t182 *, MethodInfo*))List_1_set_Item_m12415_gshared)(__this, ___index, ___value, method)
