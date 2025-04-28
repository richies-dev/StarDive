#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t807;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t3411;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t3412;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t3413;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t3082;
// System.Type[]
struct TypeU5BU5D_t97;
// System.Predicate`1<System.Type>
struct Predicate_1_t3086;
// System.Comparison`1<System.Type>
struct Comparison_1_t3089;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m3901(__this, method) (( void (*) (List_1_t807 *, MethodInfo*))List_1__ctor_m12324_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m18013(__this, ___capacity, method) (( void (*) (List_1_t807 *, int32_t, MethodInfo*))List_1__ctor_m12326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m18014(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12328_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18015(__this, method) (( Object_t* (*) (List_1_t807 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18016(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t807 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12332_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18017(__this, method) (( Object_t * (*) (List_1_t807 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12334_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18018(__this, ___item, method) (( int32_t (*) (List_1_t807 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12336_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18019(__this, ___item, method) (( bool (*) (List_1_t807 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12338_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18020(__this, ___item, method) (( int32_t (*) (List_1_t807 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12340_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18021(__this, ___index, ___item, method) (( void (*) (List_1_t807 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12342_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18022(__this, ___item, method) (( void (*) (List_1_t807 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18023(__this, method) (( bool (*) (List_1_t807 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12346_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18024(__this, method) (( bool (*) (List_1_t807 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12348_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18025(__this, method) (( Object_t * (*) (List_1_t807 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18026(__this, method) (( bool (*) (List_1_t807 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18027(__this, method) (( bool (*) (List_1_t807 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18028(__this, ___index, method) (( Object_t * (*) (List_1_t807 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18029(__this, ___index, ___value, method) (( void (*) (List_1_t807 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m3902(__this, ___item, method) (( void (*) (List_1_t807 *, Type_t *, MethodInfo*))List_1_Add_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18030(__this, ___newCount, method) (( void (*) (List_1_t807 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18031(__this, ___collection, method) (( void (*) (List_1_t807 *, Object_t*, MethodInfo*))List_1_AddCollection_m12363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18032(__this, ___enumerable, method) (( void (*) (List_1_t807 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18033(__this, ___collection, method) (( void (*) (List_1_t807 *, Object_t*, MethodInfo*))List_1_AddRange_m12366_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m18034(__this, method) (( ReadOnlyCollection_1_t3082 * (*) (List_1_t807 *, MethodInfo*))List_1_AsReadOnly_m12368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m18035(__this, method) (( void (*) (List_1_t807 *, MethodInfo*))List_1_Clear_m12370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m18036(__this, ___item, method) (( bool (*) (List_1_t807 *, Type_t *, MethodInfo*))List_1_Contains_m12372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18037(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t807 *, TypeU5BU5D_t97*, int32_t, MethodInfo*))List_1_CopyTo_m12374_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m18038(__this, ___match, method) (( Type_t * (*) (List_1_t807 *, Predicate_1_t3086 *, MethodInfo*))List_1_Find_m12376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18039(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3086 *, MethodInfo*))List_1_CheckMatch_m12378_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18040(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t807 *, int32_t, int32_t, Predicate_1_t3086 *, MethodInfo*))List_1_GetIndex_m12380_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m18041(__this, method) (( Enumerator_t3080  (*) (List_1_t807 *, MethodInfo*))List_1_GetEnumerator_m12382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m18042(__this, ___item, method) (( int32_t (*) (List_1_t807 *, Type_t *, MethodInfo*))List_1_IndexOf_m12384_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18043(__this, ___start, ___delta, method) (( void (*) (List_1_t807 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18044(__this, ___index, method) (( void (*) (List_1_t807 *, int32_t, MethodInfo*))List_1_CheckIndex_m12388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m18045(__this, ___index, ___item, method) (( void (*) (List_1_t807 *, int32_t, Type_t *, MethodInfo*))List_1_Insert_m12390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18046(__this, ___collection, method) (( void (*) (List_1_t807 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12392_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m18047(__this, ___item, method) (( bool (*) (List_1_t807 *, Type_t *, MethodInfo*))List_1_Remove_m12393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18048(__this, ___match, method) (( int32_t (*) (List_1_t807 *, Predicate_1_t3086 *, MethodInfo*))List_1_RemoveAll_m12395_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18049(__this, ___index, method) (( void (*) (List_1_t807 *, int32_t, MethodInfo*))List_1_RemoveAt_m12397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m18050(__this, method) (( void (*) (List_1_t807 *, MethodInfo*))List_1_Reverse_m12399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m18051(__this, method) (( void (*) (List_1_t807 *, MethodInfo*))List_1_Sort_m12401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18052(__this, ___comparison, method) (( void (*) (List_1_t807 *, Comparison_1_t3089 *, MethodInfo*))List_1_Sort_m12403_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m3905(__this, method) (( TypeU5BU5D_t97* (*) (List_1_t807 *, MethodInfo*))List_1_ToArray_m12405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m18053(__this, method) (( void (*) (List_1_t807 *, MethodInfo*))List_1_TrimExcess_m12407_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m18054(__this, method) (( int32_t (*) (List_1_t807 *, MethodInfo*))List_1_get_Capacity_m12409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18055(__this, ___value, method) (( void (*) (List_1_t807 *, int32_t, MethodInfo*))List_1_set_Capacity_m12411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m18056(__this, method) (( int32_t (*) (List_1_t807 *, MethodInfo*))List_1_get_Count_m12412_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m18057(__this, ___index, method) (( Type_t * (*) (List_1_t807 *, int32_t, MethodInfo*))List_1_get_Item_m12413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m18058(__this, ___index, ___value, method) (( void (*) (List_1_t807 *, int32_t, Type_t *, MethodInfo*))List_1_set_Item_m12415_gshared)(__this, ___index, ___value, method)
