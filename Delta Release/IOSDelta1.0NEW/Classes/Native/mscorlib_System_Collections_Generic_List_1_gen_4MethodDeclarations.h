#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t404;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t168;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t3249;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2875;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2456;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Predicate`1<System.Object>
struct Predicate_1_t2466;
// System.Comparison`1<System.Object>
struct Comparison_1_t2478;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m12054_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1__ctor_m12054(__this, method) (( void (*) (List_1_t404 *, MethodInfo*))List_1__ctor_m12054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12056_gshared (List_1_t404 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m12056(__this, ___capacity, method) (( void (*) (List_1_t404 *, int32_t, MethodInfo*))List_1__ctor_m12056_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m12058_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m12058(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12058_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12060_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12060(__this, method) (( Object_t* (*) (List_1_t404 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12062_gshared (List_1_t404 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12062(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t404 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12062_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12064_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12064(__this, method) (( Object_t * (*) (List_1_t404 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12066_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12066(__this, ___item, method) (( int32_t (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12066_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12068_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12068(__this, ___item, method) (( bool (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12070_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12070(__this, ___item, method) (( int32_t (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12070_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12072_gshared (List_1_t404 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12072(__this, ___index, ___item, method) (( void (*) (List_1_t404 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12074_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12074(__this, ___item, method) (( void (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12074_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12076_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12076(__this, method) (( bool (*) (List_1_t404 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12078_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12078(__this, method) (( bool (*) (List_1_t404 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12078_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12080_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12080(__this, method) (( Object_t * (*) (List_1_t404 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12082_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12082(__this, method) (( bool (*) (List_1_t404 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12084_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12084(__this, method) (( bool (*) (List_1_t404 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12084_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12086_gshared (List_1_t404 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12086(__this, ___index, method) (( Object_t * (*) (List_1_t404 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12088_gshared (List_1_t404 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12088(__this, ___index, ___value, method) (( void (*) (List_1_t404 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12088_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m12089_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m12089(__this, ___item, method) (( void (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_Add_m12089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12091_gshared (List_1_t404 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m12091(__this, ___newCount, method) (( void (*) (List_1_t404 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12091_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12093_gshared (List_1_t404 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m12093(__this, ___collection, method) (( void (*) (List_1_t404 *, Object_t*, MethodInfo*))List_1_AddCollection_m12093_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12095_gshared (List_1_t404 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m12095(__this, ___enumerable, method) (( void (*) (List_1_t404 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12095_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12096_gshared (List_1_t404 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m12096(__this, ___collection, method) (( void (*) (List_1_t404 *, Object_t*, MethodInfo*))List_1_AddRange_m12096_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2456 * List_1_AsReadOnly_m12098_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m12098(__this, method) (( ReadOnlyCollection_1_t2456 * (*) (List_1_t404 *, MethodInfo*))List_1_AsReadOnly_m12098_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m12100_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_Clear_m12100(__this, method) (( void (*) (List_1_t404 *, MethodInfo*))List_1_Clear_m12100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m12102_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m12102(__this, ___item, method) (( bool (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_Contains_m12102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12104_gshared (List_1_t404 * __this, ObjectU5BU5D_t148* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m12104(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t404 *, ObjectU5BU5D_t148*, int32_t, MethodInfo*))List_1_CopyTo_m12104_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m12106_gshared (List_1_t404 * __this, Predicate_1_t2466 * ___match, MethodInfo* method);
#define List_1_Find_m12106(__this, ___match, method) (( Object_t * (*) (List_1_t404 *, Predicate_1_t2466 *, MethodInfo*))List_1_Find_m12106_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12108_gshared (Object_t * __this /* static, unused */, Predicate_1_t2466 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m12108(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2466 *, MethodInfo*))List_1_CheckMatch_m12108_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12110_gshared (List_1_t404 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2466 * ___match, MethodInfo* method);
#define List_1_GetIndex_m12110(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t404 *, int32_t, int32_t, Predicate_1_t2466 *, MethodInfo*))List_1_GetIndex_m12110_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2454  List_1_GetEnumerator_m12112_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m12112(__this, method) (( Enumerator_t2454  (*) (List_1_t404 *, MethodInfo*))List_1_GetEnumerator_m12112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12114_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m12114(__this, ___item, method) (( int32_t (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_IndexOf_m12114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12116_gshared (List_1_t404 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m12116(__this, ___start, ___delta, method) (( void (*) (List_1_t404 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12116_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12118_gshared (List_1_t404 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m12118(__this, ___index, method) (( void (*) (List_1_t404 *, int32_t, MethodInfo*))List_1_CheckIndex_m12118_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12120_gshared (List_1_t404 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m12120(__this, ___index, ___item, method) (( void (*) (List_1_t404 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m12120_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12122_gshared (List_1_t404 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m12122(__this, ___collection, method) (( void (*) (List_1_t404 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12122_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m12123_gshared (List_1_t404 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m12123(__this, ___item, method) (( bool (*) (List_1_t404 *, Object_t *, MethodInfo*))List_1_Remove_m12123_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12125_gshared (List_1_t404 * __this, Predicate_1_t2466 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m12125(__this, ___match, method) (( int32_t (*) (List_1_t404 *, Predicate_1_t2466 *, MethodInfo*))List_1_RemoveAll_m12125_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12127_gshared (List_1_t404 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m12127(__this, ___index, method) (( void (*) (List_1_t404 *, int32_t, MethodInfo*))List_1_RemoveAt_m12127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m12129_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_Reverse_m12129(__this, method) (( void (*) (List_1_t404 *, MethodInfo*))List_1_Reverse_m12129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m12131_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_Sort_m12131(__this, method) (( void (*) (List_1_t404 *, MethodInfo*))List_1_Sort_m12131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12133_gshared (List_1_t404 * __this, Comparison_1_t2478 * ___comparison, MethodInfo* method);
#define List_1_Sort_m12133(__this, ___comparison, method) (( void (*) (List_1_t404 *, Comparison_1_t2478 *, MethodInfo*))List_1_Sort_m12133_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t148* List_1_ToArray_m12135_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_ToArray_m12135(__this, method) (( ObjectU5BU5D_t148* (*) (List_1_t404 *, MethodInfo*))List_1_ToArray_m12135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m12137_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_TrimExcess_m12137(__this, method) (( void (*) (List_1_t404 *, MethodInfo*))List_1_TrimExcess_m12137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12139_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_get_Capacity_m12139(__this, method) (( int32_t (*) (List_1_t404 *, MethodInfo*))List_1_get_Capacity_m12139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12141_gshared (List_1_t404 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m12141(__this, ___value, method) (( void (*) (List_1_t404 *, int32_t, MethodInfo*))List_1_set_Capacity_m12141_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m12142_gshared (List_1_t404 * __this, MethodInfo* method);
#define List_1_get_Count_m12142(__this, method) (( int32_t (*) (List_1_t404 *, MethodInfo*))List_1_get_Count_m12142_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m12143_gshared (List_1_t404 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m12143(__this, ___index, method) (( Object_t * (*) (List_1_t404 *, int32_t, MethodInfo*))List_1_get_Item_m12143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12145_gshared (List_1_t404 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m12145(__this, ___index, ___value, method) (( void (*) (List_1_t404 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m12145_gshared)(__this, ___index, ___value, method)
