#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3152;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t3155;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t3425;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t3426;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m18640_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m18640(__this, method) (( void (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2__ctor_m18640_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18641_gshared (Dictionary_2_t3152 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18641(__this, ___comparer, method) (( void (*) (Dictionary_2_t3152 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18641_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18643_gshared (Dictionary_2_t3152 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m18643(__this, ___capacity, method) (( void (*) (Dictionary_2_t3152 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18643_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18645_gshared (Dictionary_2_t3152 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m18645(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3152 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2__ctor_m18645_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18647_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18647(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18649_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18649(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3152 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18651_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18651(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3152 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18651_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18653_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18653(__this, ___key, method) (( void (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18653_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18655_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18655(__this, method) (( bool (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18655_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18657_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18657(__this, method) (( Object_t * (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18659_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18659(__this, method) (( bool (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18659_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18661_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18661(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3152 *, KeyValuePair_2_t3153 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18661_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18663_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18663(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3152 *, KeyValuePair_2_t3153 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18663_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18665_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2U5BU5D_t3425* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3152 *, KeyValuePair_2U5BU5D_t3425*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18665_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18667_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18667(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3152 *, KeyValuePair_2_t3153 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18667_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18669_gshared (Dictionary_2_t3152 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18669(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18669_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18671_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18671(__this, method) (( Object_t * (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18671_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18673_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18673(__this, method) (( Object_t* (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18673_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18675_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18675(__this, method) (( Object_t * (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18677_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m18677(__this, method) (( int32_t (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_get_Count_m18677_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m18679_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m18679(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m18679_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18681_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m18681(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3152 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_set_Item_m18681_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18683_gshared (Dictionary_2_t3152 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m18683(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3152 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18683_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18685_gshared (Dictionary_2_t3152 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m18685(__this, ___size, method) (( void (*) (Dictionary_2_t3152 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18685_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18687_gshared (Dictionary_2_t3152 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18687(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3152 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18687_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3153  Dictionary_2_make_pair_m18689_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m18689(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3153  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_make_pair_m18689_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m18691_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m18691(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_value_m18691_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18693_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2U5BU5D_t3425* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m18693(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3152 *, KeyValuePair_2U5BU5D_t3425*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18693_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m18695_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m18695(__this, method) (( void (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_Resize_m18695_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18696_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m18696(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3152 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_Add_m18696_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m18698_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m18698(__this, method) (( void (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_Clear_m18698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18700_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m18700(__this, ___key, method) (( bool (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m18700_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18702_gshared (Dictionary_2_t3152 * __this, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m18702(__this, ___value, method) (( bool (*) (Dictionary_2_t3152 *, uint8_t, MethodInfo*))Dictionary_2_ContainsValue_m18702_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18704_gshared (Dictionary_2_t3152 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m18704(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3152 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2_GetObjectData_m18704_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18706_gshared (Dictionary_2_t3152 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18706(__this, ___sender, method) (( void (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18706_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18708_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m18708(__this, ___key, method) (( bool (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m18708_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18710_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m18710(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3152 *, Object_t *, uint8_t*, MethodInfo*))Dictionary_2_TryGetValue_m18710_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t3155 * Dictionary_2_get_Values_m18712_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m18712(__this, method) (( ValueCollection_t3155 * (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_get_Values_m18712_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18714_gshared (Dictionary_2_t3152 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m18714(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18714_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m18716_gshared (Dictionary_2_t3152 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m18716(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t3152 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18716_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18718_gshared (Dictionary_2_t3152 * __this, KeyValuePair_2_t3153  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18718(__this, ___pair, method) (( bool (*) (Dictionary_2_t3152 *, KeyValuePair_2_t3153 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18718_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3157  Dictionary_2_GetEnumerator_m18720_gshared (Dictionary_2_t3152 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18720(__this, method) (( Enumerator_t3157  (*) (Dictionary_2_t3152 *, MethodInfo*))Dictionary_2_GetEnumerator_m18720_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t967  Dictionary_2_U3CCopyToU3Em__0_m18722_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18722(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t967  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18722_gshared)(__this /* static, unused */, ___key, ___value, method)
