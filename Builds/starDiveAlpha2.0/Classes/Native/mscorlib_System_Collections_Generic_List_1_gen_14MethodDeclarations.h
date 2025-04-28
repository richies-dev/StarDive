#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t411;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t331;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Selectable>
struct IEnumerator_1_t3374;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Selectable>
struct ICollection_1_t3375;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Selectable>
struct IEnumerable_1_t3376;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Selectable>
struct ReadOnlyCollection_1_t2884;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t2873;
// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t2888;
// System.Comparison`1<UnityEngine.UI.Selectable>
struct Comparison_1_t2891;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Selectable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m2550(__this, method) (( void (*) (List_1_t411 *, MethodInfo*))List_1__ctor_m12324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.ctor(System.Int32)
#define List_1__ctor_m15922(__this, ___capacity, method) (( void (*) (List_1_t411 *, int32_t, MethodInfo*))List_1__ctor_m12326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::.cctor()
#define List_1__cctor_m15923(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12328_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15924(__this, method) (( Object_t* (*) (List_1_t411 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15925(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t411 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12332_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15926(__this, method) (( Object_t * (*) (List_1_t411 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12334_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15927(__this, ___item, method) (( int32_t (*) (List_1_t411 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12336_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15928(__this, ___item, method) (( bool (*) (List_1_t411 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12338_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15929(__this, ___item, method) (( int32_t (*) (List_1_t411 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15930(__this, ___index, ___item, method) (( void (*) (List_1_t411 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12342_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15931(__this, ___item, method) (( void (*) (List_1_t411 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15932(__this, method) (( bool (*) (List_1_t411 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15933(__this, method) (( bool (*) (List_1_t411 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12348_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15934(__this, method) (( Object_t * (*) (List_1_t411 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15935(__this, method) (( bool (*) (List_1_t411 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15936(__this, method) (( bool (*) (List_1_t411 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15937(__this, ___index, method) (( Object_t * (*) (List_1_t411 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15938(__this, ___index, ___value, method) (( void (*) (List_1_t411 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Add(T)
#define List_1_Add_m2554(__this, ___item, method) (( void (*) (List_1_t411 *, Selectable_t331 *, MethodInfo*))List_1_Add_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15939(__this, ___newCount, method) (( void (*) (List_1_t411 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15940(__this, ___collection, method) (( void (*) (List_1_t411 *, Object_t*, MethodInfo*))List_1_AddCollection_m12363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15941(__this, ___enumerable, method) (( void (*) (List_1_t411 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15942(__this, ___collection, method) (( void (*) (List_1_t411 *, Object_t*, MethodInfo*))List_1_AddRange_m12366_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::AsReadOnly()
#define List_1_AsReadOnly_m15943(__this, method) (( ReadOnlyCollection_1_t2884 * (*) (List_1_t411 *, MethodInfo*))List_1_AsReadOnly_m12368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Clear()
#define List_1_Clear_m15944(__this, method) (( void (*) (List_1_t411 *, MethodInfo*))List_1_Clear_m12370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Contains(T)
#define List_1_Contains_m15945(__this, ___item, method) (( bool (*) (List_1_t411 *, Selectable_t331 *, MethodInfo*))List_1_Contains_m12372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15946(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t411 *, SelectableU5BU5D_t2873*, int32_t, MethodInfo*))List_1_CopyTo_m12374_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Find(System.Predicate`1<T>)
#define List_1_Find_m15947(__this, ___match, method) (( Selectable_t331 * (*) (List_1_t411 *, Predicate_1_t2888 *, MethodInfo*))List_1_Find_m12376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15948(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2888 *, MethodInfo*))List_1_CheckMatch_m12378_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15949(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t411 *, int32_t, int32_t, Predicate_1_t2888 *, MethodInfo*))List_1_GetIndex_m12380_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::GetEnumerator()
#define List_1_GetEnumerator_m15950(__this, method) (( Enumerator_t2882  (*) (List_1_t411 *, MethodInfo*))List_1_GetEnumerator_m12382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::IndexOf(T)
#define List_1_IndexOf_m15951(__this, ___item, method) (( int32_t (*) (List_1_t411 *, Selectable_t331 *, MethodInfo*))List_1_IndexOf_m12384_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15952(__this, ___start, ___delta, method) (( void (*) (List_1_t411 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15953(__this, ___index, method) (( void (*) (List_1_t411 *, int32_t, MethodInfo*))List_1_CheckIndex_m12388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Insert(System.Int32,T)
#define List_1_Insert_m15954(__this, ___index, ___item, method) (( void (*) (List_1_t411 *, int32_t, Selectable_t331 *, MethodInfo*))List_1_Insert_m12390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15955(__this, ___collection, method) (( void (*) (List_1_t411 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12392_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Remove(T)
#define List_1_Remove_m2555(__this, ___item, method) (( bool (*) (List_1_t411 *, Selectable_t331 *, MethodInfo*))List_1_Remove_m12393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15956(__this, ___match, method) (( int32_t (*) (List_1_t411 *, Predicate_1_t2888 *, MethodInfo*))List_1_RemoveAll_m12395_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15957(__this, ___index, method) (( void (*) (List_1_t411 *, int32_t, MethodInfo*))List_1_RemoveAt_m12397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Reverse()
#define List_1_Reverse_m15958(__this, method) (( void (*) (List_1_t411 *, MethodInfo*))List_1_Reverse_m12399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort()
#define List_1_Sort_m15959(__this, method) (( void (*) (List_1_t411 *, MethodInfo*))List_1_Sort_m12401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15960(__this, ___comparison, method) (( void (*) (List_1_t411 *, Comparison_1_t2891 *, MethodInfo*))List_1_Sort_m12403_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::ToArray()
#define List_1_ToArray_m15961(__this, method) (( SelectableU5BU5D_t2873* (*) (List_1_t411 *, MethodInfo*))List_1_ToArray_m12405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::TrimExcess()
#define List_1_TrimExcess_m15962(__this, method) (( void (*) (List_1_t411 *, MethodInfo*))List_1_TrimExcess_m12407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Capacity()
#define List_1_get_Capacity_m15963(__this, method) (( int32_t (*) (List_1_t411 *, MethodInfo*))List_1_get_Capacity_m12409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15964(__this, ___value, method) (( void (*) (List_1_t411 *, int32_t, MethodInfo*))List_1_set_Capacity_m12411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Count()
#define List_1_get_Count_m2562(__this, method) (( int32_t (*) (List_1_t411 *, MethodInfo*))List_1_get_Count_m12412_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::get_Item(System.Int32)
#define List_1_get_Item_m2560(__this, ___index, method) (( Selectable_t331 * (*) (List_1_t411 *, int32_t, MethodInfo*))List_1_get_Item_m12413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Selectable>::set_Item(System.Int32,T)
#define List_1_set_Item_m15965(__this, ___index, ___value, method) (( void (*) (List_1_t411 *, int32_t, Selectable_t331 *, MethodInfo*))List_1_set_Item_m12415_gshared)(__this, ___index, ___value, method)
