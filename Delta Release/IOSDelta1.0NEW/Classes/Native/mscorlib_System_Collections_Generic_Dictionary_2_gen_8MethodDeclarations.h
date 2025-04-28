#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2616;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2620;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2613;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3276;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3277;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t897;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13761_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m13761(__this, method) (( void (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2__ctor_m13761_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13763_gshared (Dictionary_2_t2616 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13763(__this, ___comparer, method) (( void (*) (Dictionary_2_t2616 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m13763_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13765_gshared (Dictionary_2_t2616 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m13765(__this, ___capacity, method) (( void (*) (Dictionary_2_t2616 *, int32_t, MethodInfo*))Dictionary_2__ctor_m13765_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13767_gshared (Dictionary_2_t2616 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m13767(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2616 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2__ctor_m13767_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13769_gshared (Dictionary_2_t2616 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13769(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2616 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13769_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13771_gshared (Dictionary_2_t2616 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13771(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2616 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13771_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13773_gshared (Dictionary_2_t2616 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13773(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2616 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13773_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13775_gshared (Dictionary_2_t2616 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13775(__this, ___key, method) (( void (*) (Dictionary_2_t2616 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13775_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13777_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13777(__this, method) (( bool (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13777_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13779_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13779(__this, method) (( Object_t * (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13781_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13781(__this, method) (( bool (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13783_gshared (Dictionary_2_t2616 * __this, KeyValuePair_2_t2617  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13783(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2616 *, KeyValuePair_2_t2617 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13783_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13785_gshared (Dictionary_2_t2616 * __this, KeyValuePair_2_t2617  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13785(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2616 *, KeyValuePair_2_t2617 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13785_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13787_gshared (Dictionary_2_t2616 * __this, KeyValuePair_2U5BU5D_t3276* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13787(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2616 *, KeyValuePair_2U5BU5D_t3276*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13787_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13789_gshared (Dictionary_2_t2616 * __this, KeyValuePair_2_t2617  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13789(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2616 *, KeyValuePair_2_t2617 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13789_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13791_gshared (Dictionary_2_t2616 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13791(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2616 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13791_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13793_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13793(__this, method) (( Object_t * (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13793_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13795_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13795(__this, method) (( Object_t* (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13795_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13797_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13797(__this, method) (( Object_t * (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13797_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13799_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m13799(__this, method) (( int32_t (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_get_Count_m13799_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13801_gshared (Dictionary_2_t2616 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m13801(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2616 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m13801_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13803_gshared (Dictionary_2_t2616 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m13803(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2616 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m13803_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13805_gshared (Dictionary_2_t2616 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m13805(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2616 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m13805_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13807_gshared (Dictionary_2_t2616 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m13807(__this, ___size, method) (( void (*) (Dictionary_2_t2616 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m13807_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13809_gshared (Dictionary_2_t2616 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13809(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2616 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m13809_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2617  Dictionary_2_make_pair_m13811_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m13811(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2617  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m13811_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13813_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m13813(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m13813_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13815_gshared (Dictionary_2_t2616 * __this, KeyValuePair_2U5BU5D_t3276* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m13815(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2616 *, KeyValuePair_2U5BU5D_t3276*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m13815_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13817_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m13817(__this, method) (( void (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_Resize_m13817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13818_gshared (Dictionary_2_t2616 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m13818(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2616 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m13818_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13819_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m13819(__this, method) (( void (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_Clear_m13819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13821_gshared (Dictionary_2_t2616 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m13821(__this, ___key, method) (( bool (*) (Dictionary_2_t2616 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m13821_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13823_gshared (Dictionary_2_t2616 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m13823(__this, ___value, method) (( bool (*) (Dictionary_2_t2616 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m13823_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13825_gshared (Dictionary_2_t2616 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m13825(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2616 *, SerializationInfo_t700 *, StreamingContext_t701 , MethodInfo*))Dictionary_2_GetObjectData_m13825_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13827_gshared (Dictionary_2_t2616 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13827(__this, ___sender, method) (( void (*) (Dictionary_2_t2616 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m13827_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13828_gshared (Dictionary_2_t2616 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m13828(__this, ___key, method) (( bool (*) (Dictionary_2_t2616 *, int32_t, MethodInfo*))Dictionary_2_Remove_m13828_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13829_gshared (Dictionary_2_t2616 * __this, int32_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m13829(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2616 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m13829_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2620 * Dictionary_2_get_Values_m13830_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m13830(__this, method) (( ValueCollection_t2620 * (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_get_Values_m13830_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13832_gshared (Dictionary_2_t2616 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m13832(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2616 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m13832_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13834_gshared (Dictionary_2_t2616 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m13834(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2616 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m13834_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13836_gshared (Dictionary_2_t2616 * __this, KeyValuePair_2_t2617  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13836(__this, ___pair, method) (( bool (*) (Dictionary_2_t2616 *, KeyValuePair_2_t2617 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13836_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2622  Dictionary_2_GetEnumerator_m13837_gshared (Dictionary_2_t2616 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13837(__this, method) (( Enumerator_t2622  (*) (Dictionary_2_t2616 *, MethodInfo*))Dictionary_2_GetEnumerator_m13837_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t900  Dictionary_2_U3CCopyToU3Em__0_m13839_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13839(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t900  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13839_gshared)(__this /* static, unused */, ___key, ___value, method)
