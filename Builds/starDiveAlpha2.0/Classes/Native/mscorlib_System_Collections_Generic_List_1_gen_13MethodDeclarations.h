#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t354;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t351;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t3367;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t494;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>
struct IEnumerable_1_t3368;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Graphic>
struct ReadOnlyCollection_1_t2831;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2829;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2835;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t355;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Graphic>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m2339(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1__ctor_m12324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.ctor(System.Int32)
#define List_1__ctor_m15498(__this, ___capacity, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1__ctor_m12326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::.cctor()
#define List_1__cctor_m15499(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12328_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15500(__this, method) (( Object_t* (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15501(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t354 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12332_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15502(__this, method) (( Object_t * (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12334_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15503(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12336_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15504(__this, ___item, method) (( bool (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12338_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15505(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15506(__this, ___index, ___item, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12342_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15507(__this, ___item, method) (( void (*) (List_1_t354 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15508(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15509(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12348_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15510(__this, method) (( Object_t * (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15511(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15512(__this, method) (( bool (*) (List_1_t354 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15513(__this, ___index, method) (( Object_t * (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15514(__this, ___index, ___value, method) (( void (*) (List_1_t354 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Add(T)
#define List_1_Add_m2351(__this, ___item, method) (( void (*) (List_1_t354 *, Graphic_t351 *, MethodInfo*))List_1_Add_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15515(__this, ___newCount, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15516(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_AddCollection_m12363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15517(__this, ___enumerable, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15518(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_AddRange_m12366_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::AsReadOnly()
#define List_1_AsReadOnly_m15519(__this, method) (( ReadOnlyCollection_1_t2831 * (*) (List_1_t354 *, MethodInfo*))List_1_AsReadOnly_m12368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Clear()
#define List_1_Clear_m2344(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_Clear_m12370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Contains(T)
#define List_1_Contains_m15520(__this, ___item, method) (( bool (*) (List_1_t354 *, Graphic_t351 *, MethodInfo*))List_1_Contains_m12372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15521(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t354 *, GraphicU5BU5D_t2829*, int32_t, MethodInfo*))List_1_CopyTo_m12374_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Find(System.Predicate`1<T>)
#define List_1_Find_m15522(__this, ___match, method) (( Graphic_t351 * (*) (List_1_t354 *, Predicate_1_t2835 *, MethodInfo*))List_1_Find_m12376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15523(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2835 *, MethodInfo*))List_1_CheckMatch_m12378_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15524(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t354 *, int32_t, int32_t, Predicate_1_t2835 *, MethodInfo*))List_1_GetIndex_m12380_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define List_1_GetEnumerator_m15525(__this, method) (( Enumerator_t2830  (*) (List_1_t354 *, MethodInfo*))List_1_GetEnumerator_m12382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define List_1_IndexOf_m15526(__this, ___item, method) (( int32_t (*) (List_1_t354 *, Graphic_t351 *, MethodInfo*))List_1_IndexOf_m12384_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15527(__this, ___start, ___delta, method) (( void (*) (List_1_t354 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15528(__this, ___index, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_CheckIndex_m12388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define List_1_Insert_m15529(__this, ___index, ___item, method) (( void (*) (List_1_t354 *, int32_t, Graphic_t351 *, MethodInfo*))List_1_Insert_m12390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15530(__this, ___collection, method) (( void (*) (List_1_t354 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12392_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Remove(T)
#define List_1_Remove_m15531(__this, ___item, method) (( bool (*) (List_1_t354 *, Graphic_t351 *, MethodInfo*))List_1_Remove_m12393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15532(__this, ___match, method) (( int32_t (*) (List_1_t354 *, Predicate_1_t2835 *, MethodInfo*))List_1_RemoveAll_m12395_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15533(__this, ___index, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_RemoveAt_m12397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Reverse()
#define List_1_Reverse_m15534(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_Reverse_m12399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort()
#define List_1_Sort_m15535(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_Sort_m12401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m2355(__this, ___comparison, method) (( void (*) (List_1_t354 *, Comparison_1_t355 *, MethodInfo*))List_1_Sort_m12403_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::ToArray()
#define List_1_ToArray_m15536(__this, method) (( GraphicU5BU5D_t2829* (*) (List_1_t354 *, MethodInfo*))List_1_ToArray_m12405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::TrimExcess()
#define List_1_TrimExcess_m15537(__this, method) (( void (*) (List_1_t354 *, MethodInfo*))List_1_TrimExcess_m12407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Capacity()
#define List_1_get_Capacity_m15538(__this, method) (( int32_t (*) (List_1_t354 *, MethodInfo*))List_1_get_Capacity_m12409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15539(__this, ___value, method) (( void (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_set_Capacity_m12411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Count()
#define List_1_get_Count_m2348(__this, method) (( int32_t (*) (List_1_t354 *, MethodInfo*))List_1_get_Count_m12412_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define List_1_get_Item_m2345(__this, ___index, method) (( Graphic_t351 * (*) (List_1_t354 *, int32_t, MethodInfo*))List_1_get_Item_m12413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define List_1_set_Item_m15540(__this, ___index, ___value, method) (( void (*) (List_1_t354 *, int32_t, Graphic_t351 *, MethodInfo*))List_1_set_Item_m12415_gshared)(__this, ___index, ___value, method)
