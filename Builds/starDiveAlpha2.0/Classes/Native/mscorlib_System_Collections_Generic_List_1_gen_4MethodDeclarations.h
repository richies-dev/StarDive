#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t473;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t238;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3312;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2939;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2529;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Predicate`1<System.Object>
struct Predicate_1_t2533;
// System.Comparison`1<System.Object>
struct Comparison_1_t2545;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m12324_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1__ctor_m12324(__this, method) (( void (*) (List_1_t473 *, MethodInfo*))List_1__ctor_m12324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12326_gshared (List_1_t473 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m12326(__this, ___capacity, method) (( void (*) (List_1_t473 *, int32_t, MethodInfo*))List_1__ctor_m12326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m12328_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m12328(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12328_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330(__this, method) (( Object_t* (*) (List_1_t473 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12332_gshared (List_1_t473 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12332(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t473 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12332_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12334_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12334(__this, method) (( Object_t * (*) (List_1_t473 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12334_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12336_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12336(__this, ___item, method) (( int32_t (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12336_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12338_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12338(__this, ___item, method) (( bool (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12338_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12340_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12340(__this, ___item, method) (( int32_t (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12342_gshared (List_1_t473 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12342(__this, ___index, ___item, method) (( void (*) (List_1_t473 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12342_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12344_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12344(__this, ___item, method) (( void (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346(__this, method) (( bool (*) (List_1_t473 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12348_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12348(__this, method) (( bool (*) (List_1_t473 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12348_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12350_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12350(__this, method) (( Object_t * (*) (List_1_t473 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12352_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12352(__this, method) (( bool (*) (List_1_t473 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12354_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12354(__this, method) (( bool (*) (List_1_t473 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12356_gshared (List_1_t473 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12356(__this, ___index, method) (( Object_t * (*) (List_1_t473 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12358_gshared (List_1_t473 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12358(__this, ___index, ___value, method) (( void (*) (List_1_t473 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m12359_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m12359(__this, ___item, method) (( void (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_Add_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12361_gshared (List_1_t473 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m12361(__this, ___newCount, method) (( void (*) (List_1_t473 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12363_gshared (List_1_t473 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m12363(__this, ___collection, method) (( void (*) (List_1_t473 *, Object_t*, MethodInfo*))List_1_AddCollection_m12363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12365_gshared (List_1_t473 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m12365(__this, ___enumerable, method) (( void (*) (List_1_t473 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12366_gshared (List_1_t473 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m12366(__this, ___collection, method) (( void (*) (List_1_t473 *, Object_t*, MethodInfo*))List_1_AddRange_m12366_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2529 * List_1_AsReadOnly_m12368_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m12368(__this, method) (( ReadOnlyCollection_1_t2529 * (*) (List_1_t473 *, MethodInfo*))List_1_AsReadOnly_m12368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m12370_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_Clear_m12370(__this, method) (( void (*) (List_1_t473 *, MethodInfo*))List_1_Clear_m12370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m12372_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m12372(__this, ___item, method) (( bool (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_Contains_m12372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12374_gshared (List_1_t473 * __this, ObjectU5BU5D_t219* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m12374(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t473 *, ObjectU5BU5D_t219*, int32_t, MethodInfo*))List_1_CopyTo_m12374_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m12376_gshared (List_1_t473 * __this, Predicate_1_t2533 * ___match, MethodInfo* method);
#define List_1_Find_m12376(__this, ___match, method) (( Object_t * (*) (List_1_t473 *, Predicate_1_t2533 *, MethodInfo*))List_1_Find_m12376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12378_gshared (Object_t * __this /* static, unused */, Predicate_1_t2533 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m12378(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2533 *, MethodInfo*))List_1_CheckMatch_m12378_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12380_gshared (List_1_t473 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2533 * ___match, MethodInfo* method);
#define List_1_GetIndex_m12380(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t473 *, int32_t, int32_t, Predicate_1_t2533 *, MethodInfo*))List_1_GetIndex_m12380_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2527  List_1_GetEnumerator_m12382_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m12382(__this, method) (( Enumerator_t2527  (*) (List_1_t473 *, MethodInfo*))List_1_GetEnumerator_m12382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12384_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m12384(__this, ___item, method) (( int32_t (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_IndexOf_m12384_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12386_gshared (List_1_t473 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m12386(__this, ___start, ___delta, method) (( void (*) (List_1_t473 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12388_gshared (List_1_t473 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m12388(__this, ___index, method) (( void (*) (List_1_t473 *, int32_t, MethodInfo*))List_1_CheckIndex_m12388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12390_gshared (List_1_t473 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m12390(__this, ___index, ___item, method) (( void (*) (List_1_t473 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m12390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12392_gshared (List_1_t473 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m12392(__this, ___collection, method) (( void (*) (List_1_t473 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12392_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m12393_gshared (List_1_t473 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m12393(__this, ___item, method) (( bool (*) (List_1_t473 *, Object_t *, MethodInfo*))List_1_Remove_m12393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12395_gshared (List_1_t473 * __this, Predicate_1_t2533 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m12395(__this, ___match, method) (( int32_t (*) (List_1_t473 *, Predicate_1_t2533 *, MethodInfo*))List_1_RemoveAll_m12395_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12397_gshared (List_1_t473 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m12397(__this, ___index, method) (( void (*) (List_1_t473 *, int32_t, MethodInfo*))List_1_RemoveAt_m12397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m12399_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_Reverse_m12399(__this, method) (( void (*) (List_1_t473 *, MethodInfo*))List_1_Reverse_m12399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m12401_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_Sort_m12401(__this, method) (( void (*) (List_1_t473 *, MethodInfo*))List_1_Sort_m12401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12403_gshared (List_1_t473 * __this, Comparison_1_t2545 * ___comparison, MethodInfo* method);
#define List_1_Sort_m12403(__this, ___comparison, method) (( void (*) (List_1_t473 *, Comparison_1_t2545 *, MethodInfo*))List_1_Sort_m12403_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t219* List_1_ToArray_m12405_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_ToArray_m12405(__this, method) (( ObjectU5BU5D_t219* (*) (List_1_t473 *, MethodInfo*))List_1_ToArray_m12405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m12407_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_TrimExcess_m12407(__this, method) (( void (*) (List_1_t473 *, MethodInfo*))List_1_TrimExcess_m12407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12409_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_get_Capacity_m12409(__this, method) (( int32_t (*) (List_1_t473 *, MethodInfo*))List_1_get_Capacity_m12409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12411_gshared (List_1_t473 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m12411(__this, ___value, method) (( void (*) (List_1_t473 *, int32_t, MethodInfo*))List_1_set_Capacity_m12411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m12412_gshared (List_1_t473 * __this, MethodInfo* method);
#define List_1_get_Count_m12412(__this, method) (( int32_t (*) (List_1_t473 *, MethodInfo*))List_1_get_Count_m12412_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m12413_gshared (List_1_t473 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m12413(__this, ___index, method) (( Object_t * (*) (List_1_t473 *, int32_t, MethodInfo*))List_1_get_Item_m12413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12415_gshared (List_1_t473 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m12415(__this, ___index, ___value, method) (( void (*) (List_1_t473 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m12415_gshared)(__this, ___index, ___value, method)
