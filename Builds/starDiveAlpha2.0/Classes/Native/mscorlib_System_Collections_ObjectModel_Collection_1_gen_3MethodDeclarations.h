#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Collection_1_t2600;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t527;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// UnityEngine.EventSystems.IEventSystemHandler[]
struct IEventSystemHandlerU5BU5D_t2596;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerator_1_t3319;
// System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IList_1_t540;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m13095(__this, method) (( void (*) (Collection_1_t2600 *, MethodInfo*))Collection_1__ctor_m12452_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13096(__this, method) (( bool (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12453_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m13097(__this, ___array, ___index, method) (( void (*) (Collection_1_t2600 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12454_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m13098(__this, method) (( Object_t * (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m13099(__this, ___value, method) (( int32_t (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m12456_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m13100(__this, ___value, method) (( bool (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m12457_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m13101(__this, ___value, method) (( int32_t (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12458_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m13102(__this, ___index, ___value, method) (( void (*) (Collection_1_t2600 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m12459_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m13103(__this, ___value, method) (( void (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m12460_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m13104(__this, method) (( bool (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12461_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m13105(__this, method) (( Object_t * (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12462_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m13106(__this, method) (( bool (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12463_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m13107(__this, method) (( bool (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12464_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m13108(__this, ___index, method) (( Object_t * (*) (Collection_1_t2600 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12465_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m13109(__this, ___index, ___value, method) (( void (*) (Collection_1_t2600 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12466_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
#define Collection_1_Add_m13110(__this, ___item, method) (( void (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_Add_m12467_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
#define Collection_1_Clear_m13111(__this, method) (( void (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_Clear_m12468_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ClearItems()
#define Collection_1_ClearItems_m13112(__this, method) (( void (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_ClearItems_m12469_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
#define Collection_1_Contains_m13113(__this, ___item, method) (( bool (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_Contains_m12470_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m13114(__this, ___array, ___index, method) (( void (*) (Collection_1_t2600 *, IEventSystemHandlerU5BU5D_t2596*, int32_t, MethodInfo*))Collection_1_CopyTo_m12471_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#define Collection_1_GetEnumerator_m13115(__this, method) (( Object_t* (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_GetEnumerator_m12472_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
#define Collection_1_IndexOf_m13116(__this, ___item, method) (( int32_t (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_IndexOf_m12473_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
#define Collection_1_Insert_m13117(__this, ___index, ___item, method) (( void (*) (Collection_1_t2600 *, int32_t, Object_t *, MethodInfo*))Collection_1_Insert_m12474_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m13118(__this, ___index, ___item, method) (( void (*) (Collection_1_t2600 *, int32_t, Object_t *, MethodInfo*))Collection_1_InsertItem_m12475_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#define Collection_1_Remove_m13119(__this, ___item, method) (( bool (*) (Collection_1_t2600 *, Object_t *, MethodInfo*))Collection_1_Remove_m12476_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m13120(__this, ___index, method) (( void (*) (Collection_1_t2600 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m12477_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m13121(__this, ___index, method) (( void (*) (Collection_1_t2600 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m12478_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
#define Collection_1_get_Count_m13122(__this, method) (( int32_t (*) (Collection_1_t2600 *, MethodInfo*))Collection_1_get_Count_m12479_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
#define Collection_1_get_Item_m13123(__this, ___index, method) (( Object_t * (*) (Collection_1_t2600 *, int32_t, MethodInfo*))Collection_1_get_Item_m12480_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m13124(__this, ___index, ___value, method) (( void (*) (Collection_1_t2600 *, int32_t, Object_t *, MethodInfo*))Collection_1_set_Item_m12481_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m13125(__this, ___index, ___item, method) (( void (*) (Collection_1_t2600 *, int32_t, Object_t *, MethodInfo*))Collection_1_SetItem_m12482_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m13126(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m12483_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m13127(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m12484_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m13128(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m12485_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m13129(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m12486_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.IEventSystemHandler>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m13130(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m12487_gshared)(__this /* static, unused */, ___list, method)
