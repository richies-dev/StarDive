#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2694;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2697;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3292;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3293;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t897;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14543_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14543(__this, method) (( void (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2__ctor_m14543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14545_gshared (Dictionary_2_t2694 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14545(__this, ___comparer, method) (( void (*) (Dictionary_2_t2694 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14547_gshared (Dictionary_2_t2694 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14547(__this, ___capacity, method) (( void (*) (Dictionary_2_t2694 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14547_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14549_gshared (Dictionary_2_t2694 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14549(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2694 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2__ctor_m14549_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14551_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14551(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14551_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14553_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14553(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2694 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14553_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14555_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14555(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2694 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14555_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14557_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14557(__this, ___key, method) (( void (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14557_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14559_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14559(__this, method) (( bool (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14559_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14561_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14561(__this, method) (( Object_t * (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14563_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14563(__this, method) (( bool (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14565_gshared (Dictionary_2_t2694 * __this, KeyValuePair_2_t2695  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14565(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2694 *, KeyValuePair_2_t2695 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14565_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14567_gshared (Dictionary_2_t2694 * __this, KeyValuePair_2_t2695  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14567(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2694 *, KeyValuePair_2_t2695 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14567_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14569_gshared (Dictionary_2_t2694 * __this, KeyValuePair_2U5BU5D_t3292* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14569(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2694 *, KeyValuePair_2U5BU5D_t3292*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14569_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14571_gshared (Dictionary_2_t2694 * __this, KeyValuePair_2_t2695  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14571(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2694 *, KeyValuePair_2_t2695 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14571_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14573_gshared (Dictionary_2_t2694 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14573(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2694 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14573_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14575_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14575(__this, method) (( Object_t * (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14575_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14577_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14577(__this, method) (( Object_t* (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14577_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14579_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14579(__this, method) (( Object_t * (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14579_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14581_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14581(__this, method) (( int32_t (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_get_Count_m14581_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14583_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14583(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m14583_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14585_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14585(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2694 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_set_Item_m14585_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14587_gshared (Dictionary_2_t2694 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14587(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2694 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14587_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14589_gshared (Dictionary_2_t2694 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14589(__this, ___size, method) (( void (*) (Dictionary_2_t2694 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14589_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14591_gshared (Dictionary_2_t2694 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14591(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2694 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14591_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2695  Dictionary_2_make_pair_m14593_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m14593(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2695  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_make_pair_m14593_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14595_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14595(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_value_m14595_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14597_gshared (Dictionary_2_t2694 * __this, KeyValuePair_2U5BU5D_t3292* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14597(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2694 *, KeyValuePair_2U5BU5D_t3292*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14597_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14599_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14599(__this, method) (( void (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_Resize_m14599_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14600_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m14600(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2694 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_Add_m14600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14602_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14602(__this, method) (( void (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_Clear_m14602_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14604_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14604(__this, ___key, method) (( bool (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m14604_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14606_gshared (Dictionary_2_t2694 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14606(__this, ___value, method) (( bool (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m14606_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14608_gshared (Dictionary_2_t2694 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14608(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2694 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2_GetObjectData_m14608_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14610_gshared (Dictionary_2_t2694 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14610(__this, ___sender, method) (( void (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14610_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14612_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14612(__this, ___key, method) (( bool (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m14612_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14613_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14613(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2694 *, Object_t *, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m14613_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2697 * Dictionary_2_get_Values_m14615_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14615(__this, method) (( ValueCollection_t2697 * (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_get_Values_m14615_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14617_gshared (Dictionary_2_t2694 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14617(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14617_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14619_gshared (Dictionary_2_t2694 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14619(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2694 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14619_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14621_gshared (Dictionary_2_t2694 * __this, KeyValuePair_2_t2695  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14621(__this, ___pair, method) (( bool (*) (Dictionary_2_t2694 *, KeyValuePair_2_t2695 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14621_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2699  Dictionary_2_GetEnumerator_m14623_gshared (Dictionary_2_t2694 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14623(__this, method) (( Enumerator_t2699  (*) (Dictionary_2_t2694 *, MethodInfo*))Dictionary_2_GetEnumerator_m14623_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t900  Dictionary_2_U3CCopyToU3Em__0_m14625_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14625(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t900  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14625_gshared)(__this /* static, unused */, ___key, ___value, method)
