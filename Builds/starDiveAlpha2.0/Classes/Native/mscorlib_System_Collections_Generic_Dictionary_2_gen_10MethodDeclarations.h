#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2758;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2761;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3355;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3356;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14778_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14778(__this, method) (( void (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2__ctor_m14778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14780_gshared (Dictionary_2_t2758 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14780(__this, ___comparer, method) (( void (*) (Dictionary_2_t2758 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14780_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14782_gshared (Dictionary_2_t2758 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14782(__this, ___capacity, method) (( void (*) (Dictionary_2_t2758 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14782_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14784_gshared (Dictionary_2_t2758 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14784(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2758 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2__ctor_m14784_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14786_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14786(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14786_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14788_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14788(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2758 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14788_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14790_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14790(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2758 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14790_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14792_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14792(__this, ___key, method) (( void (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14792_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14794_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14794(__this, method) (( bool (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14794_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14796_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14796(__this, method) (( Object_t * (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14798_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14798(__this, method) (( bool (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14800_gshared (Dictionary_2_t2758 * __this, KeyValuePair_2_t2759  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14800(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2758 *, KeyValuePair_2_t2759 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14800_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14802_gshared (Dictionary_2_t2758 * __this, KeyValuePair_2_t2759  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14802(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2758 *, KeyValuePair_2_t2759 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14802_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14804_gshared (Dictionary_2_t2758 * __this, KeyValuePair_2U5BU5D_t3355* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14804(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2758 *, KeyValuePair_2U5BU5D_t3355*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14804_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14806_gshared (Dictionary_2_t2758 * __this, KeyValuePair_2_t2759  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14806(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2758 *, KeyValuePair_2_t2759 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14806_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14808_gshared (Dictionary_2_t2758 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14808(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2758 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14808_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14810_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14810(__this, method) (( Object_t * (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14810_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14812_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14812(__this, method) (( Object_t* (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14812_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14814_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14814(__this, method) (( Object_t * (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14816_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14816(__this, method) (( int32_t (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_get_Count_m14816_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14818_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14818(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m14818_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14820_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14820(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2758 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_set_Item_m14820_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14822_gshared (Dictionary_2_t2758 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14822(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2758 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14822_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14824_gshared (Dictionary_2_t2758 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14824(__this, ___size, method) (( void (*) (Dictionary_2_t2758 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14824_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14826_gshared (Dictionary_2_t2758 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2758 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14826_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2759  Dictionary_2_make_pair_m14828_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m14828(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2759  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_make_pair_m14828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14830_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14830(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_value_m14830_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14832_gshared (Dictionary_2_t2758 * __this, KeyValuePair_2U5BU5D_t3355* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2758 *, KeyValuePair_2U5BU5D_t3355*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14832_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14834_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14834(__this, method) (( void (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_Resize_m14834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14835_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m14835(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2758 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_Add_m14835_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14837_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14837(__this, method) (( void (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_Clear_m14837_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14839_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14839(__this, ___key, method) (( bool (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m14839_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14841_gshared (Dictionary_2_t2758 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14841(__this, ___value, method) (( bool (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m14841_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14843_gshared (Dictionary_2_t2758 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14843(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2758 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2_GetObjectData_m14843_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14845_gshared (Dictionary_2_t2758 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14845(__this, ___sender, method) (( void (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14845_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14847_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14847(__this, ___key, method) (( bool (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m14847_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14848_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14848(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2758 *, Object_t *, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m14848_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2761 * Dictionary_2_get_Values_m14850_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14850(__this, method) (( ValueCollection_t2761 * (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_get_Values_m14850_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14852_gshared (Dictionary_2_t2758 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14852(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14852_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14854_gshared (Dictionary_2_t2758 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14854(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2758 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14854_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14856_gshared (Dictionary_2_t2758 * __this, KeyValuePair_2_t2759  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14856(__this, ___pair, method) (( bool (*) (Dictionary_2_t2758 *, KeyValuePair_2_t2759 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14856_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2763  Dictionary_2_GetEnumerator_m14858_gshared (Dictionary_2_t2758 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14858(__this, method) (( Enumerator_t2763  (*) (Dictionary_2_t2758 *, MethodInfo*))Dictionary_2_GetEnumerator_m14858_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t967  Dictionary_2_U3CCopyToU3Em__0_m14860_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14860(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t967  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14860_gshared)(__this /* static, unused */, ___key, ___value, method)
