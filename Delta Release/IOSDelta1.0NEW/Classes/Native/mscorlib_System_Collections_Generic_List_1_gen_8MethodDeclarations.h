#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t240;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t239;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IEnumerator_1_t3279;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct ICollection_1_t3280;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct IEnumerable_1_t3281;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct ReadOnlyCollection_1_t2643;
// UnityEngine.EventSystems.PointerInputModule/ButtonState[]
struct ButtonStateU5BU5D_t2639;
// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Predicate_1_t2647;
// System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct Comparison_1_t2650;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#define List_1__ctor_m1944(__this, method) (( void (*) (List_1_t240 *, MethodInfo*))List_1__ctor_m12054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Int32)
#define List_1__ctor_m13995(__this, ___capacity, method) (( void (*) (List_1_t240 *, int32_t, MethodInfo*))List_1__ctor_m12056_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
#define List_1__cctor_m13996(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m12058_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13997(__this, method) (( Object_t* (*) (List_1_t240 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13998(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t240 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12062_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13999(__this, method) (( Object_t * (*) (List_1_t240 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14000(__this, ___item, method) (( int32_t (*) (List_1_t240 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m12066_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14001(__this, ___item, method) (( bool (*) (List_1_t240 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m12068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14002(__this, ___item, method) (( int32_t (*) (List_1_t240 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m12070_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14003(__this, ___index, ___item, method) (( void (*) (List_1_t240 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m12072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14004(__this, ___item, method) (( void (*) (List_1_t240 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m12074_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14005(__this, method) (( bool (*) (List_1_t240 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14006(__this, method) (( bool (*) (List_1_t240 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12078_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14007(__this, method) (( Object_t * (*) (List_1_t240 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12080_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14008(__this, method) (( bool (*) (List_1_t240 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14009(__this, method) (( bool (*) (List_1_t240 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12084_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14010(__this, ___index, method) (( Object_t * (*) (List_1_t240 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m12086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14011(__this, ___index, ___value, method) (( void (*) (List_1_t240 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m12088_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
#define List_1_Add_m1947(__this, ___item, method) (( void (*) (List_1_t240 *, ButtonState_t239 *, MethodInfo*))List_1_Add_m12089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14012(__this, ___newCount, method) (( void (*) (List_1_t240 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m12091_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14013(__this, ___collection, method) (( void (*) (List_1_t240 *, Object_t*, MethodInfo*))List_1_AddCollection_m12093_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14014(__this, ___enumerable, method) (( void (*) (List_1_t240 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m12095_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14015(__this, ___collection, method) (( void (*) (List_1_t240 *, Object_t*, MethodInfo*))List_1_AddRange_m12096_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AsReadOnly()
#define List_1_AsReadOnly_m14016(__this, method) (( ReadOnlyCollection_1_t2643 * (*) (List_1_t240 *, MethodInfo*))List_1_AsReadOnly_m12098_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
#define List_1_Clear_m14017(__this, method) (( void (*) (List_1_t240 *, MethodInfo*))List_1_Clear_m12100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
#define List_1_Contains_m14018(__this, ___item, method) (( bool (*) (List_1_t240 *, ButtonState_t239 *, MethodInfo*))List_1_Contains_m12102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14019(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t240 *, ButtonStateU5BU5D_t2639*, int32_t, MethodInfo*))List_1_CopyTo_m12104_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Find(System.Predicate`1<T>)
#define List_1_Find_m14020(__this, ___match, method) (( ButtonState_t239 * (*) (List_1_t240 *, Predicate_1_t2647 *, MethodInfo*))List_1_Find_m12106_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14021(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2647 *, MethodInfo*))List_1_CheckMatch_m12108_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14022(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t240 *, int32_t, int32_t, Predicate_1_t2647 *, MethodInfo*))List_1_GetIndex_m12110_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
#define List_1_GetEnumerator_m14023(__this, method) (( Enumerator_t2641  (*) (List_1_t240 *, MethodInfo*))List_1_GetEnumerator_m12112_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
#define List_1_IndexOf_m14024(__this, ___item, method) (( int32_t (*) (List_1_t240 *, ButtonState_t239 *, MethodInfo*))List_1_IndexOf_m12114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14025(__this, ___start, ___delta, method) (( void (*) (List_1_t240 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m12116_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14026(__this, ___index, method) (( void (*) (List_1_t240 *, int32_t, MethodInfo*))List_1_CheckIndex_m12118_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
#define List_1_Insert_m14027(__this, ___index, ___item, method) (( void (*) (List_1_t240 *, int32_t, ButtonState_t239 *, MethodInfo*))List_1_Insert_m12120_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14028(__this, ___collection, method) (( void (*) (List_1_t240 *, Object_t*, MethodInfo*))List_1_CheckCollection_m12122_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
#define List_1_Remove_m14029(__this, ___item, method) (( bool (*) (List_1_t240 *, ButtonState_t239 *, MethodInfo*))List_1_Remove_m12123_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14030(__this, ___match, method) (( int32_t (*) (List_1_t240 *, Predicate_1_t2647 *, MethodInfo*))List_1_RemoveAll_m12125_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14031(__this, ___index, method) (( void (*) (List_1_t240 *, int32_t, MethodInfo*))List_1_RemoveAt_m12127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Reverse()
#define List_1_Reverse_m14032(__this, method) (( void (*) (List_1_t240 *, MethodInfo*))List_1_Reverse_m12129_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort()
#define List_1_Sort_m14033(__this, method) (( void (*) (List_1_t240 *, MethodInfo*))List_1_Sort_m12131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14034(__this, ___comparison, method) (( void (*) (List_1_t240 *, Comparison_1_t2650 *, MethodInfo*))List_1_Sort_m12133_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ToArray()
#define List_1_ToArray_m14035(__this, method) (( ButtonStateU5BU5D_t2639* (*) (List_1_t240 *, MethodInfo*))List_1_ToArray_m12135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::TrimExcess()
#define List_1_TrimExcess_m14036(__this, method) (( void (*) (List_1_t240 *, MethodInfo*))List_1_TrimExcess_m12137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Capacity()
#define List_1_get_Capacity_m14037(__this, method) (( int32_t (*) (List_1_t240 *, MethodInfo*))List_1_get_Capacity_m12139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14038(__this, ___value, method) (( void (*) (List_1_t240 *, int32_t, MethodInfo*))List_1_set_Capacity_m12141_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
#define List_1_get_Count_m1946(__this, method) (( int32_t (*) (List_1_t240 *, MethodInfo*))List_1_get_Count_m12142_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
#define List_1_get_Item_m1945(__this, ___index, method) (( ButtonState_t239 * (*) (List_1_t240 *, int32_t, MethodInfo*))List_1_get_Item_m12143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#define List_1_set_Item_m14039(__this, ___index, ___value, method) (( void (*) (List_1_t240 *, int32_t, ButtonState_t239 *, MethodInfo*))List_1_set_Item_m12145_gshared)(__this, ___index, ___value, method)
