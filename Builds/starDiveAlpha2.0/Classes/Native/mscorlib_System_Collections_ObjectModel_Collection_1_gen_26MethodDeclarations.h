#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
struct Collection_1_t3128;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t778;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3124;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t3417;
// System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
struct IList_1_t3126;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m18429(__this, method) (( void (*) (Collection_1_t3128 *, MethodInfo*))Collection_1__ctor_m12452_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18430(__this, method) (( bool (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12453_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m18431(__this, ___array, ___index, method) (( void (*) (Collection_1_t3128 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12454_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m18432(__this, method) (( Object_t * (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m18433(__this, ___value, method) (( int32_t (*) (Collection_1_t3128 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12456_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m18434(__this, ___value, method) (( bool (*) (Collection_1_t3128 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12457_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m18435(__this, ___value, method) (( int32_t (*) (Collection_1_t3128 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12458_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m18436(__this, ___index, ___value, method) (( void (*) (Collection_1_t3128 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12459_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m18437(__this, ___value, method) (( void (*) (Collection_1_t3128 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12460_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m18438(__this, method) (( bool (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12461_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m18439(__this, method) (( Object_t * (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12462_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m18440(__this, method) (( bool (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12463_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m18441(__this, method) (( bool (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12464_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m18442(__this, ___index, method) (( Object_t * (*) (Collection_1_t3128 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12465_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m18443(__this, ___index, ___value, method) (( void (*) (Collection_1_t3128 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12466_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
#define Collection_1_Add_m18444(__this, ___item, method) (( void (*) (Collection_1_t3128 *, PersistentCall_t778 *, MethodInfo*))Collection_1_Add_m12467_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
#define Collection_1_Clear_m18445(__this, method) (( void (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_Clear_m12468_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
#define Collection_1_ClearItems_m18446(__this, method) (( void (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_ClearItems_m12469_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define Collection_1_Contains_m18447(__this, ___item, method) (( bool (*) (Collection_1_t3128 *, PersistentCall_t778 *, MethodInfo*))Collection_1_Contains_m12470_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m18448(__this, ___array, ___index, method) (( void (*) (Collection_1_t3128 *, PersistentCallU5BU5D_t3124*, int32_t, MethodInfo*))Collection_1_CopyTo_m12471_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define Collection_1_GetEnumerator_m18449(__this, method) (( Object_t* (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_GetEnumerator_m12472_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define Collection_1_IndexOf_m18450(__this, ___item, method) (( int32_t (*) (Collection_1_t3128 *, PersistentCall_t778 *, MethodInfo*))Collection_1_IndexOf_m12473_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define Collection_1_Insert_m18451(__this, ___index, ___item, method) (( void (*) (Collection_1_t3128 *, int32_t, PersistentCall_t778 *, MethodInfo*))Collection_1_Insert_m12474_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m18452(__this, ___index, ___item, method) (( void (*) (Collection_1_t3128 *, int32_t, PersistentCall_t778 *, MethodInfo*))Collection_1_InsertItem_m12475_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define Collection_1_Remove_m18453(__this, ___item, method) (( bool (*) (Collection_1_t3128 *, PersistentCall_t778 *, MethodInfo*))Collection_1_Remove_m12476_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m18454(__this, ___index, method) (( void (*) (Collection_1_t3128 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12477_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m18455(__this, ___index, method) (( void (*) (Collection_1_t3128 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12478_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
#define Collection_1_get_Count_m18456(__this, method) (( int32_t (*) (Collection_1_t3128 *, MethodInfo*))Collection_1_get_Count_m12479_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define Collection_1_get_Item_m18457(__this, ___index, method) (( PersistentCall_t778 * (*) (Collection_1_t3128 *, int32_t, MethodInfo*))Collection_1_get_Item_m12480_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m18458(__this, ___index, ___value, method) (( void (*) (Collection_1_t3128 *, int32_t, PersistentCall_t778 *, MethodInfo*))Collection_1_set_Item_m12481_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m18459(__this, ___index, ___item, method) (( void (*) (Collection_1_t3128 *, int32_t, PersistentCall_t778 *, MethodInfo*))Collection_1_SetItem_m12482_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m18460(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12483_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m18461(__this /* static, unused */, ___item, method) (( PersistentCall_t778 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12484_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m18462(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12485_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m18463(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12486_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m18464(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12487_gshared)(__this /* static, unused */, ___list, method)
