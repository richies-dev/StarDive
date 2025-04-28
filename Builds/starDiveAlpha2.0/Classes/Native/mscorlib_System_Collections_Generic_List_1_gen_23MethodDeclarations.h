#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t726;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3409;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t505;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3410;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t3066;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t728;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3070;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3073;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m17834_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1__ctor_m17834(__this, method) (( void (*) (List_1_t726 *, MethodInfo*))List_1__ctor_m17834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3896_gshared (List_1_t726 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m3896(__this, ___capacity, method) (( void (*) (List_1_t726 *, int32_t, MethodInfo*))List_1__ctor_m3896_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m17835_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m17835(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m17835_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17836_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17836(__this, method) (( Object_t* (*) (List_1_t726 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17836_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17837_gshared (List_1_t726 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17837(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t726 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17837_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17838_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17838(__this, method) (( Object_t * (*) (List_1_t726 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17838_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17839_gshared (List_1_t726 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17839(__this, ___item, method) (( int32_t (*) (List_1_t726 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m17839_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17840_gshared (List_1_t726 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17840(__this, ___item, method) (( bool (*) (List_1_t726 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m17840_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17841_gshared (List_1_t726 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17841(__this, ___item, method) (( int32_t (*) (List_1_t726 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m17841_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17842_gshared (List_1_t726 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17842(__this, ___index, ___item, method) (( void (*) (List_1_t726 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m17842_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17843_gshared (List_1_t726 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17843(__this, ___item, method) (( void (*) (List_1_t726 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m17843_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17844_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17844(__this, method) (( bool (*) (List_1_t726 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17844_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17845_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17845(__this, method) (( bool (*) (List_1_t726 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17845_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17846_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17846(__this, method) (( Object_t * (*) (List_1_t726 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17846_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17847_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17847(__this, method) (( bool (*) (List_1_t726 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17848_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17848(__this, method) (( bool (*) (List_1_t726 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17848_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17849_gshared (List_1_t726 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17849(__this, ___index, method) (( Object_t * (*) (List_1_t726 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m17849_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17850_gshared (List_1_t726 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17850(__this, ___index, ___value, method) (( void (*) (List_1_t726 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m17850_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m17851_gshared (List_1_t726 * __this, UILineInfo_t502  ___item, MethodInfo* method);
#define List_1_Add_m17851(__this, ___item, method) (( void (*) (List_1_t726 *, UILineInfo_t502 , MethodInfo*))List_1_Add_m17851_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17852_gshared (List_1_t726 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m17852(__this, ___newCount, method) (( void (*) (List_1_t726 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m17852_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17853_gshared (List_1_t726 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m17853(__this, ___collection, method) (( void (*) (List_1_t726 *, Object_t*, MethodInfo*))List_1_AddCollection_m17853_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17854_gshared (List_1_t726 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m17854(__this, ___enumerable, method) (( void (*) (List_1_t726 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m17854_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17855_gshared (List_1_t726 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m17855(__this, ___collection, method) (( void (*) (List_1_t726 *, Object_t*, MethodInfo*))List_1_AddRange_m17855_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3066 * List_1_AsReadOnly_m17856_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m17856(__this, method) (( ReadOnlyCollection_1_t3066 * (*) (List_1_t726 *, MethodInfo*))List_1_AsReadOnly_m17856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m17857_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_Clear_m17857(__this, method) (( void (*) (List_1_t726 *, MethodInfo*))List_1_Clear_m17857_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m17858_gshared (List_1_t726 * __this, UILineInfo_t502  ___item, MethodInfo* method);
#define List_1_Contains_m17858(__this, ___item, method) (( bool (*) (List_1_t726 *, UILineInfo_t502 , MethodInfo*))List_1_Contains_m17858_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17859_gshared (List_1_t726 * __this, UILineInfoU5BU5D_t728* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m17859(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t726 *, UILineInfoU5BU5D_t728*, int32_t, MethodInfo*))List_1_CopyTo_m17859_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t502  List_1_Find_m17860_gshared (List_1_t726 * __this, Predicate_1_t3070 * ___match, MethodInfo* method);
#define List_1_Find_m17860(__this, ___match, method) (( UILineInfo_t502  (*) (List_1_t726 *, Predicate_1_t3070 *, MethodInfo*))List_1_Find_m17860_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17861_gshared (Object_t * __this /* static, unused */, Predicate_1_t3070 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m17861(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3070 *, MethodInfo*))List_1_CheckMatch_m17861_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17862_gshared (List_1_t726 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3070 * ___match, MethodInfo* method);
#define List_1_GetIndex_m17862(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t726 *, int32_t, int32_t, Predicate_1_t3070 *, MethodInfo*))List_1_GetIndex_m17862_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t3065  List_1_GetEnumerator_m17863_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m17863(__this, method) (( Enumerator_t3065  (*) (List_1_t726 *, MethodInfo*))List_1_GetEnumerator_m17863_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17864_gshared (List_1_t726 * __this, UILineInfo_t502  ___item, MethodInfo* method);
#define List_1_IndexOf_m17864(__this, ___item, method) (( int32_t (*) (List_1_t726 *, UILineInfo_t502 , MethodInfo*))List_1_IndexOf_m17864_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17865_gshared (List_1_t726 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m17865(__this, ___start, ___delta, method) (( void (*) (List_1_t726 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m17865_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17866_gshared (List_1_t726 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m17866(__this, ___index, method) (( void (*) (List_1_t726 *, int32_t, MethodInfo*))List_1_CheckIndex_m17866_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17867_gshared (List_1_t726 * __this, int32_t ___index, UILineInfo_t502  ___item, MethodInfo* method);
#define List_1_Insert_m17867(__this, ___index, ___item, method) (( void (*) (List_1_t726 *, int32_t, UILineInfo_t502 , MethodInfo*))List_1_Insert_m17867_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17868_gshared (List_1_t726 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m17868(__this, ___collection, method) (( void (*) (List_1_t726 *, Object_t*, MethodInfo*))List_1_CheckCollection_m17868_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m17869_gshared (List_1_t726 * __this, UILineInfo_t502  ___item, MethodInfo* method);
#define List_1_Remove_m17869(__this, ___item, method) (( bool (*) (List_1_t726 *, UILineInfo_t502 , MethodInfo*))List_1_Remove_m17869_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17870_gshared (List_1_t726 * __this, Predicate_1_t3070 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m17870(__this, ___match, method) (( int32_t (*) (List_1_t726 *, Predicate_1_t3070 *, MethodInfo*))List_1_RemoveAll_m17870_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17871_gshared (List_1_t726 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m17871(__this, ___index, method) (( void (*) (List_1_t726 *, int32_t, MethodInfo*))List_1_RemoveAt_m17871_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m17872_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_Reverse_m17872(__this, method) (( void (*) (List_1_t726 *, MethodInfo*))List_1_Reverse_m17872_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m17873_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_Sort_m17873(__this, method) (( void (*) (List_1_t726 *, MethodInfo*))List_1_Sort_m17873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17874_gshared (List_1_t726 * __this, Comparison_1_t3073 * ___comparison, MethodInfo* method);
#define List_1_Sort_m17874(__this, ___comparison, method) (( void (*) (List_1_t726 *, Comparison_1_t3073 *, MethodInfo*))List_1_Sort_m17874_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t728* List_1_ToArray_m17875_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_ToArray_m17875(__this, method) (( UILineInfoU5BU5D_t728* (*) (List_1_t726 *, MethodInfo*))List_1_ToArray_m17875_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m17876_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_TrimExcess_m17876(__this, method) (( void (*) (List_1_t726 *, MethodInfo*))List_1_TrimExcess_m17876_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17877_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_get_Capacity_m17877(__this, method) (( int32_t (*) (List_1_t726 *, MethodInfo*))List_1_get_Capacity_m17877_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17878_gshared (List_1_t726 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m17878(__this, ___value, method) (( void (*) (List_1_t726 *, int32_t, MethodInfo*))List_1_set_Capacity_m17878_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m17879_gshared (List_1_t726 * __this, MethodInfo* method);
#define List_1_get_Count_m17879(__this, method) (( int32_t (*) (List_1_t726 *, MethodInfo*))List_1_get_Count_m17879_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t502  List_1_get_Item_m17880_gshared (List_1_t726 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m17880(__this, ___index, method) (( UILineInfo_t502  (*) (List_1_t726 *, int32_t, MethodInfo*))List_1_get_Item_m17880_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17881_gshared (List_1_t726 * __this, int32_t ___index, UILineInfo_t502  ___value, MethodInfo* method);
#define List_1_set_Item_m17881(__this, ___index, ___value, method) (( void (*) (List_1_t726 *, int32_t, UILineInfo_t502 , MethodInfo*))List_1_set_Item_m17881_gshared)(__this, ___index, ___value, method)
