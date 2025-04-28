#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t783;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t775;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t3420;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t3421;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t3422;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t3139;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3135;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t828;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t3145;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m3961(__this, method) (( void (*) (List_1_t783 *, MethodInfo*))List_1__ctor_m12324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m18487(__this, ___capacity, method) (( void (*) (List_1_t783 *, int32_t, MethodInfo*))List_1__ctor_m12326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m18488(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12328_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18489(__this, method) (( Object_t* (*) (List_1_t783 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18490(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t783 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12332_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18491(__this, method) (( Object_t * (*) (List_1_t783 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12334_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18492(__this, ___item, method) (( int32_t (*) (List_1_t783 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12336_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18493(__this, ___item, method) (( bool (*) (List_1_t783 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12338_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18494(__this, ___item, method) (( int32_t (*) (List_1_t783 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18495(__this, ___index, ___item, method) (( void (*) (List_1_t783 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12342_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18496(__this, ___item, method) (( void (*) (List_1_t783 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18497(__this, method) (( bool (*) (List_1_t783 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18498(__this, method) (( bool (*) (List_1_t783 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12348_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18499(__this, method) (( Object_t * (*) (List_1_t783 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18500(__this, method) (( bool (*) (List_1_t783 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18501(__this, method) (( bool (*) (List_1_t783 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18502(__this, ___index, method) (( Object_t * (*) (List_1_t783 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18503(__this, ___index, ___value, method) (( void (*) (List_1_t783 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m3962(__this, ___item, method) (( void (*) (List_1_t783 *, BaseInvokableCall_t775 *, MethodInfo*))List_1_Add_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18504(__this, ___newCount, method) (( void (*) (List_1_t783 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18505(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, MethodInfo*))List_1_AddCollection_m12363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18506(__this, ___enumerable, method) (( void (*) (List_1_t783 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3971(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, MethodInfo*))List_1_AddRange_m12366_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m18507(__this, method) (( ReadOnlyCollection_1_t3139 * (*) (List_1_t783 *, MethodInfo*))List_1_AsReadOnly_m12368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m3968(__this, method) (( void (*) (List_1_t783 *, MethodInfo*))List_1_Clear_m12370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m3966(__this, ___item, method) (( bool (*) (List_1_t783 *, BaseInvokableCall_t775 *, MethodInfo*))List_1_Contains_m12372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18508(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t783 *, BaseInvokableCallU5BU5D_t3135*, int32_t, MethodInfo*))List_1_CopyTo_m12374_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m18509(__this, ___match, method) (( BaseInvokableCall_t775 * (*) (List_1_t783 *, Predicate_1_t828 *, MethodInfo*))List_1_Find_m12376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18510(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t828 *, MethodInfo*))List_1_CheckMatch_m12378_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18511(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t783 *, int32_t, int32_t, Predicate_1_t828 *, MethodInfo*))List_1_GetIndex_m12380_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m18512(__this, method) (( Enumerator_t3137  (*) (List_1_t783 *, MethodInfo*))List_1_GetEnumerator_m12382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m18513(__this, ___item, method) (( int32_t (*) (List_1_t783 *, BaseInvokableCall_t775 *, MethodInfo*))List_1_IndexOf_m12384_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18514(__this, ___start, ___delta, method) (( void (*) (List_1_t783 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18515(__this, ___index, method) (( void (*) (List_1_t783 *, int32_t, MethodInfo*))List_1_CheckIndex_m12388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m18516(__this, ___index, ___item, method) (( void (*) (List_1_t783 *, int32_t, BaseInvokableCall_t775 *, MethodInfo*))List_1_Insert_m12390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18517(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12392_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m18518(__this, ___item, method) (( bool (*) (List_1_t783 *, BaseInvokableCall_t775 *, MethodInfo*))List_1_Remove_m12393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m3970(__this, ___match, method) (( int32_t (*) (List_1_t783 *, Predicate_1_t828 *, MethodInfo*))List_1_RemoveAll_m12395_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18519(__this, ___index, method) (( void (*) (List_1_t783 *, int32_t, MethodInfo*))List_1_RemoveAt_m12397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m18520(__this, method) (( void (*) (List_1_t783 *, MethodInfo*))List_1_Reverse_m12399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m18521(__this, method) (( void (*) (List_1_t783 *, MethodInfo*))List_1_Sort_m12401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18522(__this, ___comparison, method) (( void (*) (List_1_t783 *, Comparison_1_t3145 *, MethodInfo*))List_1_Sort_m12403_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m18523(__this, method) (( BaseInvokableCallU5BU5D_t3135* (*) (List_1_t783 *, MethodInfo*))List_1_ToArray_m12405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m18524(__this, method) (( void (*) (List_1_t783 *, MethodInfo*))List_1_TrimExcess_m12407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m18525(__this, method) (( int32_t (*) (List_1_t783 *, MethodInfo*))List_1_get_Capacity_m12409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18526(__this, ___value, method) (( void (*) (List_1_t783 *, int32_t, MethodInfo*))List_1_set_Capacity_m12411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m3965(__this, method) (( int32_t (*) (List_1_t783 *, MethodInfo*))List_1_get_Count_m12412_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m3963(__this, ___index, method) (( BaseInvokableCall_t775 * (*) (List_1_t783 *, int32_t, MethodInfo*))List_1_get_Item_m12413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m18527(__this, ___index, ___value, method) (( void (*) (List_1_t783 *, int32_t, BaseInvokableCall_t775 *, MethodInfo*))List_1_set_Item_m12415_gshared)(__this, ___index, ___value, method)
