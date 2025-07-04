﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3089;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t3092;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t3362;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t3363;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t897;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m18410_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m18410(__this, method) (( void (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2__ctor_m18410_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18411_gshared (Dictionary_2_t3089 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18411(__this, ___comparer, method) (( void (*) (Dictionary_2_t3089 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18411_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18413_gshared (Dictionary_2_t3089 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m18413(__this, ___capacity, method) (( void (*) (Dictionary_2_t3089 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18413_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18415_gshared (Dictionary_2_t3089 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m18415(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3089 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2__ctor_m18415_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18417_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18417(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18417_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18419_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18419(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3089 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18419_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18421_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18421(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3089 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18421_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18423_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18423(__this, ___key, method) (( void (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18423_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18425_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18425(__this, method) (( bool (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18427_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18427(__this, method) (( Object_t * (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18429_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18429(__this, method) (( bool (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18429_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18431_gshared (Dictionary_2_t3089 * __this, KeyValuePair_2_t3090  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18431(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3089 *, KeyValuePair_2_t3090 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18431_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18433_gshared (Dictionary_2_t3089 * __this, KeyValuePair_2_t3090  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18433(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3089 *, KeyValuePair_2_t3090 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18433_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18435_gshared (Dictionary_2_t3089 * __this, KeyValuePair_2U5BU5D_t3362* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18435(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3089 *, KeyValuePair_2U5BU5D_t3362*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18435_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18437_gshared (Dictionary_2_t3089 * __this, KeyValuePair_2_t3090  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18437(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3089 *, KeyValuePair_2_t3090 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18437_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18439_gshared (Dictionary_2_t3089 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18439(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3089 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18439_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18441_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18441(__this, method) (( Object_t * (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18441_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18443_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18443(__this, method) (( Object_t* (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18443_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18445_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18445(__this, method) (( Object_t * (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18445_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18447_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m18447(__this, method) (( int32_t (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_get_Count_m18447_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m18449_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m18449(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m18449_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18451_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m18451(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3089 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_set_Item_m18451_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18453_gshared (Dictionary_2_t3089 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m18453(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3089 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18453_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18455_gshared (Dictionary_2_t3089 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m18455(__this, ___size, method) (( void (*) (Dictionary_2_t3089 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18455_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18457_gshared (Dictionary_2_t3089 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18457(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3089 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18457_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3090  Dictionary_2_make_pair_m18459_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m18459(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3090  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_make_pair_m18459_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m18461_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m18461(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_value_m18461_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18463_gshared (Dictionary_2_t3089 * __this, KeyValuePair_2U5BU5D_t3362* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m18463(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3089 *, KeyValuePair_2U5BU5D_t3362*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18463_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m18465_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m18465(__this, method) (( void (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_Resize_m18465_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18466_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m18466(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3089 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_Add_m18466_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m18468_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m18468(__this, method) (( void (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_Clear_m18468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18470_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m18470(__this, ___key, method) (( bool (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m18470_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18472_gshared (Dictionary_2_t3089 * __this, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m18472(__this, ___value, method) (( bool (*) (Dictionary_2_t3089 *, uint8_t, MethodInfo*))Dictionary_2_ContainsValue_m18472_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18474_gshared (Dictionary_2_t3089 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m18474(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3089 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2_GetObjectData_m18474_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18476_gshared (Dictionary_2_t3089 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18476(__this, ___sender, method) (( void (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18476_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18478_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m18478(__this, ___key, method) (( bool (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m18478_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18480_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m18480(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3089 *, Object_t *, uint8_t*, MethodInfo*))Dictionary_2_TryGetValue_m18480_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t3092 * Dictionary_2_get_Values_m18482_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m18482(__this, method) (( ValueCollection_t3092 * (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_get_Values_m18482_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18484_gshared (Dictionary_2_t3089 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m18484(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18484_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m18486_gshared (Dictionary_2_t3089 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m18486(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t3089 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18486_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18488_gshared (Dictionary_2_t3089 * __this, KeyValuePair_2_t3090  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18488(__this, ___pair, method) (( bool (*) (Dictionary_2_t3089 *, KeyValuePair_2_t3090 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18488_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3094  Dictionary_2_GetEnumerator_m18490_gshared (Dictionary_2_t3089 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18490(__this, method) (( Enumerator_t3094  (*) (Dictionary_2_t3089 *, MethodInfo*))Dictionary_2_GetEnumerator_m18490_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t900  Dictionary_2_U3CCopyToU3Em__0_m18492_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18492(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t900  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18492_gshared)(__this /* static, unused */, ___key, ___value, method)
