#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2656;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2662;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3283;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3284;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t897;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14187_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14187(__this, method) (( void (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2__ctor_m14187_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14188_gshared (Dictionary_2_t2656 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14188(__this, ___comparer, method) (( void (*) (Dictionary_2_t2656 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14188_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14189_gshared (Dictionary_2_t2656 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14189(__this, ___capacity, method) (( void (*) (Dictionary_2_t2656 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14189_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14190_gshared (Dictionary_2_t2656 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14190(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2656 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2__ctor_m14190_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14191_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14191(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14191_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14192_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14192(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2656 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14192_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14193_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14193(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2656 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14193_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14194_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14194(__this, ___key, method) (( void (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14194_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14195_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14195(__this, method) (( bool (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14195_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14196_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14196(__this, method) (( Object_t * (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14196_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14197_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14197(__this, method) (( bool (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14198_gshared (Dictionary_2_t2656 * __this, KeyValuePair_2_t2660  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14198(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2656 *, KeyValuePair_2_t2660 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14198_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14199_gshared (Dictionary_2_t2656 * __this, KeyValuePair_2_t2660  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14199(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2656 *, KeyValuePair_2_t2660 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14199_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14200_gshared (Dictionary_2_t2656 * __this, KeyValuePair_2U5BU5D_t3283* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14200(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2656 *, KeyValuePair_2U5BU5D_t3283*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14200_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14201_gshared (Dictionary_2_t2656 * __this, KeyValuePair_2_t2660  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14201(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2656 *, KeyValuePair_2_t2660 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14201_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14202_gshared (Dictionary_2_t2656 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14202(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2656 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14202_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14203_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14203(__this, method) (( Object_t * (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14203_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14204_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14204(__this, method) (( Object_t* (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14204_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14205_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14205(__this, method) (( Object_t * (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14205_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14206_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14206(__this, method) (( int32_t (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_get_Count_m14206_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14207_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14207(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m14207_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14208_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14208(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2656 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_set_Item_m14208_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14209_gshared (Dictionary_2_t2656 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14209(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2656 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14209_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14210_gshared (Dictionary_2_t2656 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14210(__this, ___size, method) (( void (*) (Dictionary_2_t2656 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14210_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14211_gshared (Dictionary_2_t2656 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14211(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2656 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14211_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2660  Dictionary_2_make_pair_m14212_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m14212(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2660  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_make_pair_m14212_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14213_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14213(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_value_m14213_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14214_gshared (Dictionary_2_t2656 * __this, KeyValuePair_2U5BU5D_t3283* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14214(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2656 *, KeyValuePair_2U5BU5D_t3283*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14214_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14215_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14215(__this, method) (( void (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_Resize_m14215_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14216_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m14216(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2656 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_Add_m14216_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14217_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14217(__this, method) (( void (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_Clear_m14217_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14218_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14218(__this, ___key, method) (( bool (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m14218_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14219_gshared (Dictionary_2_t2656 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14219(__this, ___value, method) (( bool (*) (Dictionary_2_t2656 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m14219_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14220_gshared (Dictionary_2_t2656 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14220(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2656 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2_GetObjectData_m14220_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14221_gshared (Dictionary_2_t2656 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14221(__this, ___sender, method) (( void (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14221_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14222_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14222(__this, ___key, method) (( bool (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m14222_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14223_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14223(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2656 *, Object_t *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m14223_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2662 * Dictionary_2_get_Values_m14224_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14224(__this, method) (( ValueCollection_t2662 * (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_get_Values_m14224_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14225_gshared (Dictionary_2_t2656 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14225(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14225_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14226_gshared (Dictionary_2_t2656 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14226(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2656 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14226_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14227_gshared (Dictionary_2_t2656 * __this, KeyValuePair_2_t2660  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14227(__this, ___pair, method) (( bool (*) (Dictionary_2_t2656 *, KeyValuePair_2_t2660 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14227_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2664  Dictionary_2_GetEnumerator_m14228_gshared (Dictionary_2_t2656 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14228(__this, method) (( Enumerator_t2664  (*) (Dictionary_2_t2656 *, MethodInfo*))Dictionary_2_GetEnumerator_m14228_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t900  Dictionary_2_U3CCopyToU3Em__0_m14229_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14229(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t900  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14229_gshared)(__this /* static, unused */, ___key, ___value, method)
