#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t671;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t3030;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2463;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3401;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t3402;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
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
#define Dictionary_2__ctor_m17406(__this, method) (( void (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2__ctor_m14422_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17407(__this, ___comparer, method) (( void (*) (Dictionary_2_t671 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14423_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m5068(__this, ___capacity, method) (( void (*) (Dictionary_2_t671 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14424_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17408(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t671 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2__ctor_m14425_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17409(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t671 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14426_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17410(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t671 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14427_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17411(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t671 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14428_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17412(__this, ___key, method) (( void (*) (Dictionary_2_t671 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17413(__this, method) (( bool (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14430_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17414(__this, method) (( Object_t * (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14431_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17415(__this, method) (( bool (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14432_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17416(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t671 *, KeyValuePair_2_t3028 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14433_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17417(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t671 *, KeyValuePair_2_t3028 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14434_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17418(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t671 *, KeyValuePair_2U5BU5D_t3401*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14435_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17419(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t671 *, KeyValuePair_2_t3028 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14436_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17420(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t671 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14437_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17421(__this, method) (( Object_t * (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14438_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17422(__this, method) (( Object_t* (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14439_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17423(__this, method) (( Object_t * (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14440_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m17424(__this, method) (( int32_t (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_get_Count_m14441_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m17425(__this, ___key, method) (( int32_t (*) (Dictionary_2_t671 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m14442_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17426(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t671 *, String_t*, int32_t, MethodInfo*))Dictionary_2_set_Item_m14443_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17427(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t671 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14444_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17428(__this, ___size, method) (( void (*) (Dictionary_2_t671 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14445_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17429(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t671 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14446_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17430(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3028  (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_make_pair_m14447_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17431(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_pick_value_m14448_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17432(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t671 *, KeyValuePair_2U5BU5D_t3401*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14449_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m17433(__this, method) (( void (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_Resize_m14450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m5069(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t671 *, String_t*, int32_t, MethodInfo*))Dictionary_2_Add_m14451_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m17434(__this, method) (( void (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_Clear_m14452_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17435(__this, ___key, method) (( bool (*) (Dictionary_2_t671 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m14453_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17436(__this, ___value, method) (( bool (*) (Dictionary_2_t671 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m14454_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17437(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t671 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2_GetObjectData_m14455_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17438(__this, ___sender, method) (( void (*) (Dictionary_2_t671 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14456_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m17439(__this, ___key, method) (( bool (*) (Dictionary_2_t671 *, String_t*, MethodInfo*))Dictionary_2_Remove_m14457_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m5070(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t671 *, String_t*, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m14458_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m17440(__this, method) (( ValueCollection_t3030 * (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_get_Values_m14459_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17441(__this, ___key, method) (( String_t* (*) (Dictionary_2_t671 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14460_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17442(__this, ___value, method) (( int32_t (*) (Dictionary_2_t671 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14461_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17443(__this, ___pair, method) (( bool (*) (Dictionary_2_t671 *, KeyValuePair_2_t3028 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14462_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17444(__this, method) (( Enumerator_t3032  (*) (Dictionary_2_t671 *, MethodInfo*))Dictionary_2_GetEnumerator_m14463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17445(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t967  (*) (Object_t * /* static, unused */, String_t*, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14464_gshared)(__this /* static, unused */, ___key, ___value, method)
