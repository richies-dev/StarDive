#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t600;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2966;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2397;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3338;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t3339;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t897;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"
#define Dictionary_2__ctor_m17171(__this, method) (( void (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2__ctor_m14187_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17172(__this, ___comparer, method) (( void (*) (Dictionary_2_t600 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14188_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m4831(__this, ___capacity, method) (( void (*) (Dictionary_2_t600 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14189_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17173(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t600 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2__ctor_m14190_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17174(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t600 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14191_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17175(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t600 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14192_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17176(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t600 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14193_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17177(__this, ___key, method) (( void (*) (Dictionary_2_t600 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14194_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17178(__this, method) (( bool (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14195_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17179(__this, method) (( Object_t * (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14196_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17180(__this, method) (( bool (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17181(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t600 *, KeyValuePair_2_t2964 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14198_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17182(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t600 *, KeyValuePair_2_t2964 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14199_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17183(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t600 *, KeyValuePair_2U5BU5D_t3338*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14200_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17184(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t600 *, KeyValuePair_2_t2964 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14201_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17185(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t600 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14202_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17186(__this, method) (( Object_t * (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14203_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17187(__this, method) (( Object_t* (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14204_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17188(__this, method) (( Object_t * (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14205_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m17189(__this, method) (( int32_t (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_get_Count_m14206_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m17190(__this, ___key, method) (( int32_t (*) (Dictionary_2_t600 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m14207_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17191(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t600 *, String_t*, int32_t, MethodInfo*))Dictionary_2_set_Item_m14208_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17192(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t600 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14209_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17193(__this, ___size, method) (( void (*) (Dictionary_2_t600 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14210_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17194(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t600 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14211_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17195(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2964  (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_make_pair_m14212_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17196(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_pick_value_m14213_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17197(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t600 *, KeyValuePair_2U5BU5D_t3338*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14214_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m17198(__this, method) (( void (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_Resize_m14215_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m4832(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t600 *, String_t*, int32_t, MethodInfo*))Dictionary_2_Add_m14216_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m17199(__this, method) (( void (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_Clear_m14217_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17200(__this, ___key, method) (( bool (*) (Dictionary_2_t600 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m14218_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17201(__this, ___value, method) (( bool (*) (Dictionary_2_t600 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m14219_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17202(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t600 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2_GetObjectData_m14220_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17203(__this, ___sender, method) (( void (*) (Dictionary_2_t600 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14221_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m17204(__this, ___key, method) (( bool (*) (Dictionary_2_t600 *, String_t*, MethodInfo*))Dictionary_2_Remove_m14222_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m4833(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t600 *, String_t*, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m14223_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m17205(__this, method) (( ValueCollection_t2966 * (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_get_Values_m14224_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17206(__this, ___key, method) (( String_t* (*) (Dictionary_2_t600 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14225_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17207(__this, ___value, method) (( int32_t (*) (Dictionary_2_t600 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14226_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17208(__this, ___pair, method) (( bool (*) (Dictionary_2_t600 *, KeyValuePair_2_t2964 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14227_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17209(__this, method) (( Enumerator_t2968  (*) (Dictionary_2_t600 *, MethodInfo*))Dictionary_2_GetEnumerator_m14228_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17210(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t900  (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14229_gshared)(__this /* static, unused */, ___key, ___value, method)
