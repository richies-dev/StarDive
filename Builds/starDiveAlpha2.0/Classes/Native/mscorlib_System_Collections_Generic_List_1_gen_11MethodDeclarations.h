#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t352;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t3362;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t513;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t3363;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2805;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t388;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2809;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2812;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2421_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1__ctor_m2421(__this, method) (( void (*) (List_1_t352 *, MethodInfo*))List_1__ctor_m2421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3894_gshared (List_1_t352 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m3894(__this, ___capacity, method) (( void (*) (List_1_t352 *, int32_t, MethodInfo*))List_1__ctor_m3894_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m15195_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m15195(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15195_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15196_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15196(__this, method) (( Object_t* (*) (List_1_t352 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15196_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15197_gshared (List_1_t352 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15197(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t352 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15197_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15198_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15198(__this, method) (( Object_t * (*) (List_1_t352 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15199_gshared (List_1_t352 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15199(__this, ___item, method) (( int32_t (*) (List_1_t352 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15199_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15200_gshared (List_1_t352 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15200(__this, ___item, method) (( bool (*) (List_1_t352 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15200_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15201_gshared (List_1_t352 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15201(__this, ___item, method) (( int32_t (*) (List_1_t352 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15201_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15202_gshared (List_1_t352 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15202(__this, ___index, ___item, method) (( void (*) (List_1_t352 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15202_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15203_gshared (List_1_t352 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15203(__this, ___item, method) (( void (*) (List_1_t352 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15203_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15204_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15204(__this, method) (( bool (*) (List_1_t352 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15204_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15205_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15205(__this, method) (( bool (*) (List_1_t352 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15205_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15206_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15206(__this, method) (( Object_t * (*) (List_1_t352 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15206_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15207_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15207(__this, method) (( bool (*) (List_1_t352 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15207_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15208_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15208(__this, method) (( bool (*) (List_1_t352 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15208_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15209_gshared (List_1_t352 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15209(__this, ___index, method) (( Object_t * (*) (List_1_t352 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15209_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15210_gshared (List_1_t352 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15210(__this, ___index, ___value, method) (( void (*) (List_1_t352 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15210_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m2311_gshared (List_1_t352 * __this, UIVertex_t370  ___item, MethodInfo* method);
#define List_1_Add_m2311(__this, ___item, method) (( void (*) (List_1_t352 *, UIVertex_t370 , MethodInfo*))List_1_Add_m2311_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15211_gshared (List_1_t352 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m15211(__this, ___newCount, method) (( void (*) (List_1_t352 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15211_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15212_gshared (List_1_t352 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m15212(__this, ___collection, method) (( void (*) (List_1_t352 *, Object_t*, MethodInfo*))List_1_AddCollection_m15212_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15213_gshared (List_1_t352 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m15213(__this, ___enumerable, method) (( void (*) (List_1_t352 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15213_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15214_gshared (List_1_t352 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m15214(__this, ___collection, method) (( void (*) (List_1_t352 *, Object_t*, MethodInfo*))List_1_AddRange_m15214_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2805 * List_1_AsReadOnly_m15215_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m15215(__this, method) (( ReadOnlyCollection_1_t2805 * (*) (List_1_t352 *, MethodInfo*))List_1_AsReadOnly_m15215_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m2323_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_Clear_m2323(__this, method) (( void (*) (List_1_t352 *, MethodInfo*))List_1_Clear_m2323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m15216_gshared (List_1_t352 * __this, UIVertex_t370  ___item, MethodInfo* method);
#define List_1_Contains_m15216(__this, ___item, method) (( bool (*) (List_1_t352 *, UIVertex_t370 , MethodInfo*))List_1_Contains_m15216_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15217_gshared (List_1_t352 * __this, UIVertexU5BU5D_t388* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m15217(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t352 *, UIVertexU5BU5D_t388*, int32_t, MethodInfo*))List_1_CopyTo_m15217_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t370  List_1_Find_m15218_gshared (List_1_t352 * __this, Predicate_1_t2809 * ___match, MethodInfo* method);
#define List_1_Find_m15218(__this, ___match, method) (( UIVertex_t370  (*) (List_1_t352 *, Predicate_1_t2809 *, MethodInfo*))List_1_Find_m15218_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15219_gshared (Object_t * __this /* static, unused */, Predicate_1_t2809 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m15219(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2809 *, MethodInfo*))List_1_CheckMatch_m15219_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15220_gshared (List_1_t352 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2809 * ___match, MethodInfo* method);
#define List_1_GetIndex_m15220(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t352 *, int32_t, int32_t, Predicate_1_t2809 *, MethodInfo*))List_1_GetIndex_m15220_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2804  List_1_GetEnumerator_m15221_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m15221(__this, method) (( Enumerator_t2804  (*) (List_1_t352 *, MethodInfo*))List_1_GetEnumerator_m15221_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15222_gshared (List_1_t352 * __this, UIVertex_t370  ___item, MethodInfo* method);
#define List_1_IndexOf_m15222(__this, ___item, method) (( int32_t (*) (List_1_t352 *, UIVertex_t370 , MethodInfo*))List_1_IndexOf_m15222_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15223_gshared (List_1_t352 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m15223(__this, ___start, ___delta, method) (( void (*) (List_1_t352 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15223_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15224_gshared (List_1_t352 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m15224(__this, ___index, method) (( void (*) (List_1_t352 *, int32_t, MethodInfo*))List_1_CheckIndex_m15224_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15225_gshared (List_1_t352 * __this, int32_t ___index, UIVertex_t370  ___item, MethodInfo* method);
#define List_1_Insert_m15225(__this, ___index, ___item, method) (( void (*) (List_1_t352 *, int32_t, UIVertex_t370 , MethodInfo*))List_1_Insert_m15225_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15226_gshared (List_1_t352 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m15226(__this, ___collection, method) (( void (*) (List_1_t352 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15226_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m15227_gshared (List_1_t352 * __this, UIVertex_t370  ___item, MethodInfo* method);
#define List_1_Remove_m15227(__this, ___item, method) (( bool (*) (List_1_t352 *, UIVertex_t370 , MethodInfo*))List_1_Remove_m15227_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15228_gshared (List_1_t352 * __this, Predicate_1_t2809 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m15228(__this, ___match, method) (( int32_t (*) (List_1_t352 *, Predicate_1_t2809 *, MethodInfo*))List_1_RemoveAll_m15228_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15229_gshared (List_1_t352 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m15229(__this, ___index, method) (( void (*) (List_1_t352 *, int32_t, MethodInfo*))List_1_RemoveAt_m15229_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m15230_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_Reverse_m15230(__this, method) (( void (*) (List_1_t352 *, MethodInfo*))List_1_Reverse_m15230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m15231_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_Sort_m15231(__this, method) (( void (*) (List_1_t352 *, MethodInfo*))List_1_Sort_m15231_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15232_gshared (List_1_t352 * __this, Comparison_1_t2812 * ___comparison, MethodInfo* method);
#define List_1_Sort_m15232(__this, ___comparison, method) (( void (*) (List_1_t352 *, Comparison_1_t2812 *, MethodInfo*))List_1_Sort_m15232_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t388* List_1_ToArray_m2507_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_ToArray_m2507(__this, method) (( UIVertexU5BU5D_t388* (*) (List_1_t352 *, MethodInfo*))List_1_ToArray_m2507_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m15233_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_TrimExcess_m15233(__this, method) (( void (*) (List_1_t352 *, MethodInfo*))List_1_TrimExcess_m15233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2333_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_get_Capacity_m2333(__this, method) (( int32_t (*) (List_1_t352 *, MethodInfo*))List_1_get_Capacity_m2333_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2334_gshared (List_1_t352 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m2334(__this, ___value, method) (( void (*) (List_1_t352 *, int32_t, MethodInfo*))List_1_set_Capacity_m2334_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m2466_gshared (List_1_t352 * __this, MethodInfo* method);
#define List_1_get_Count_m2466(__this, method) (( int32_t (*) (List_1_t352 *, MethodInfo*))List_1_get_Count_m2466_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t370  List_1_get_Item_m2681_gshared (List_1_t352 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m2681(__this, ___index, method) (( UIVertex_t370  (*) (List_1_t352 *, int32_t, MethodInfo*))List_1_get_Item_m2681_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m2682_gshared (List_1_t352 * __this, int32_t ___index, UIVertex_t370  ___value, MethodInfo* method);
#define List_1_set_Item_m2682(__this, ___index, ___value, method) (( void (*) (List_1_t352 *, int32_t, UIVertex_t370 , MethodInfo*))List_1_set_Item_m2682_gshared)(__this, ___index, ___value, method)
