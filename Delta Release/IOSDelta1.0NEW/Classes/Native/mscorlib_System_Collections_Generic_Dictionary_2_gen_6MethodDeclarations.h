#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t942;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t3103;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2397;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3360;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t3361;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t897;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
#define Dictionary_2__ctor_m18409(__this, method) (( void (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2__ctor_m18410_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m4821(__this, ___comparer, method) (( void (*) (Dictionary_2_t942 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18411_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18412(__this, ___capacity, method) (( void (*) (Dictionary_2_t942 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18413_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18414(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t942 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2__ctor_m18415_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18416(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t942 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18417_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18418(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18419_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18420(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18421_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18422(__this, ___key, method) (( void (*) (Dictionary_2_t942 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18423_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18424(__this, method) (( bool (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18426(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18428(__this, method) (( bool (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18429_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18430(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t942 *, KeyValuePair_2_t3101 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18431_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18432(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t942 *, KeyValuePair_2_t3101 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18433_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18434(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, KeyValuePair_2U5BU5D_t3360*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18435_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18436(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t942 *, KeyValuePair_2_t3101 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18437_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18438(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18439_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18440(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18441_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18442(__this, method) (( Object_t* (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18443_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18444(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18445_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m18446(__this, method) (( int32_t (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_get_Count_m18447_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m18448(__this, ___key, method) (( bool (*) (Dictionary_2_t942 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m18449_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18450(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, String_t*, bool, MethodInfo*))Dictionary_2_set_Item_m18451_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18452(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t942 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18453_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18454(__this, ___size, method) (( void (*) (Dictionary_2_t942 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18455_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18457_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18458(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3101  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_make_pair_m18459_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18460(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_pick_value_m18461_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18462(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, KeyValuePair_2U5BU5D_t3360*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18463_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m18464(__this, method) (( void (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_Resize_m18465_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m4822(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, String_t*, bool, MethodInfo*))Dictionary_2_Add_m18466_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m18467(__this, method) (( void (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_Clear_m18468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18469(__this, ___key, method) (( bool (*) (Dictionary_2_t942 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m18470_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18471(__this, ___value, method) (( bool (*) (Dictionary_2_t942 *, bool, MethodInfo*))Dictionary_2_ContainsValue_m18472_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18473(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t942 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2_GetObjectData_m18474_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18475(__this, ___sender, method) (( void (*) (Dictionary_2_t942 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18476_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m18477(__this, ___key, method) (( bool (*) (Dictionary_2_t942 *, String_t*, MethodInfo*))Dictionary_2_Remove_m18478_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18479(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t942 *, String_t*, bool*, MethodInfo*))Dictionary_2_TryGetValue_m18480_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m18481(__this, method) (( ValueCollection_t3103 * (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_get_Values_m18482_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18483(__this, ___key, method) (( String_t* (*) (Dictionary_2_t942 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18484_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18485(__this, ___value, method) (( bool (*) (Dictionary_2_t942 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18486_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18487(__this, ___pair, method) (( bool (*) (Dictionary_2_t942 *, KeyValuePair_2_t3101 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18488_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18489(__this, method) (( Enumerator_t3105  (*) (Dictionary_2_t942 *, MethodInfo*))Dictionary_2_GetEnumerator_m18490_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18491(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t900  (*) (Object_t * /* static, unused */, String_t*, bool, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18492_gshared)(__this /* static, unused */, ___key, ___value, method)
