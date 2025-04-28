#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t740;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t3348;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3349;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t3350;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t3019;
// System.Type[]
struct TypeU5BU5D_t670;
// System.Predicate`1<System.Type>
struct Predicate_1_t3023;
// System.Comparison`1<System.Type>
struct Comparison_1_t3026;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m3664(__this, method) (( void (*) (List_1_t740 *, MethodInfo*))List_1__ctor_m12054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m17783(__this, ___capacity, method) (( void (*) (List_1_t740 *, int32_t, MethodInfo*))List_1__ctor_m12056_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m17784(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12058_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17785(__this, method) (( Object_t* (*) (List_1_t740 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17786(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12062_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17787(__this, method) (( Object_t * (*) (List_1_t740 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17788(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12066_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17789(__this, ___item, method) (( bool (*) (List_1_t740 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17790(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12070_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17791(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17792(__this, ___item, method) (( void (*) (List_1_t740 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12074_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17793(__this, method) (( bool (*) (List_1_t740 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17794(__this, method) (( bool (*) (List_1_t740 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12078_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17795(__this, method) (( Object_t * (*) (List_1_t740 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17796(__this, method) (( bool (*) (List_1_t740 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17797(__this, method) (( bool (*) (List_1_t740 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12084_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17798(__this, ___index, method) (( Object_t * (*) (List_1_t740 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17799(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12088_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m3665(__this, ___item, method) (( void (*) (List_1_t740 *, Type_t *, MethodInfo*))List_1_Add_m12089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17800(__this, ___newCount, method) (( void (*) (List_1_t740 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12091_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17801(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, MethodInfo*))List_1_AddCollection_m12093_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17802(__this, ___enumerable, method) (( void (*) (List_1_t740 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12095_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17803(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, MethodInfo*))List_1_AddRange_m12096_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m17804(__this, method) (( ReadOnlyCollection_1_t3019 * (*) (List_1_t740 *, MethodInfo*))List_1_AsReadOnly_m12098_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m17805(__this, method) (( void (*) (List_1_t740 *, MethodInfo*))List_1_Clear_m12100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m17806(__this, ___item, method) (( bool (*) (List_1_t740 *, Type_t *, MethodInfo*))List_1_Contains_m12102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17807(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, TypeU5BU5D_t670*, int32_t, MethodInfo*))List_1_CopyTo_m12104_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m17808(__this, ___match, method) (( Type_t * (*) (List_1_t740 *, Predicate_1_t3023 *, MethodInfo*))List_1_Find_m12106_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17809(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3023 *, MethodInfo*))List_1_CheckMatch_m12108_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17810(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t740 *, int32_t, int32_t, Predicate_1_t3023 *, MethodInfo*))List_1_GetIndex_m12110_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m17811(__this, method) (( Enumerator_t3017  (*) (List_1_t740 *, MethodInfo*))List_1_GetEnumerator_m12112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m17812(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Type_t *, MethodInfo*))List_1_IndexOf_m12114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17813(__this, ___start, ___delta, method) (( void (*) (List_1_t740 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12116_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17814(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, MethodInfo*))List_1_CheckIndex_m12118_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m17815(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, Type_t *, MethodInfo*))List_1_Insert_m12120_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17816(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12122_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m17817(__this, ___item, method) (( bool (*) (List_1_t740 *, Type_t *, MethodInfo*))List_1_Remove_m12123_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17818(__this, ___match, method) (( int32_t (*) (List_1_t740 *, Predicate_1_t3023 *, MethodInfo*))List_1_RemoveAll_m12125_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17819(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, MethodInfo*))List_1_RemoveAt_m12127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m17820(__this, method) (( void (*) (List_1_t740 *, MethodInfo*))List_1_Reverse_m12129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m17821(__this, method) (( void (*) (List_1_t740 *, MethodInfo*))List_1_Sort_m12131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17822(__this, ___comparison, method) (( void (*) (List_1_t740 *, Comparison_1_t3026 *, MethodInfo*))List_1_Sort_m12133_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m3668(__this, method) (( TypeU5BU5D_t670* (*) (List_1_t740 *, MethodInfo*))List_1_ToArray_m12135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m17823(__this, method) (( void (*) (List_1_t740 *, MethodInfo*))List_1_TrimExcess_m12137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m17824(__this, method) (( int32_t (*) (List_1_t740 *, MethodInfo*))List_1_get_Capacity_m12139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17825(__this, ___value, method) (( void (*) (List_1_t740 *, int32_t, MethodInfo*))List_1_set_Capacity_m12141_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m17826(__this, method) (( int32_t (*) (List_1_t740 *, MethodInfo*))List_1_get_Count_m12142_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m17827(__this, ___index, method) (( Type_t * (*) (List_1_t740 *, int32_t, MethodInfo*))List_1_get_Item_m12143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m17828(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, Type_t *, MethodInfo*))List_1_set_Item_m12145_gshared)(__this, ___index, ___value, method)
