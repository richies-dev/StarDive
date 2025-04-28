#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2720;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2726;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3346;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t169;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3347;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14422_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14422(__this, method) (( void (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2__ctor_m14422_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14423_gshared (Dictionary_2_t2720 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14423(__this, ___comparer, method) (( void (*) (Dictionary_2_t2720 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m14423_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14424_gshared (Dictionary_2_t2720 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14424(__this, ___capacity, method) (( void (*) (Dictionary_2_t2720 *, int32_t, MethodInfo*))Dictionary_2__ctor_m14424_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14425_gshared (Dictionary_2_t2720 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14425(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2720 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2__ctor_m14425_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14426_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14426(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14426_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14427_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14427(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2720 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14427_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14428_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14428(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2720 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14428_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14429_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14429(__this, ___key, method) (( void (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14430_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14430(__this, method) (( bool (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14430_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14431_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14431(__this, method) (( Object_t * (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14431_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14432_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14432(__this, method) (( bool (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14432_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14433_gshared (Dictionary_2_t2720 * __this, KeyValuePair_2_t2724  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14433(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2720 *, KeyValuePair_2_t2724 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14433_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14434_gshared (Dictionary_2_t2720 * __this, KeyValuePair_2_t2724  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14434(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2720 *, KeyValuePair_2_t2724 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14434_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14435_gshared (Dictionary_2_t2720 * __this, KeyValuePair_2U5BU5D_t3346* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14435(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2720 *, KeyValuePair_2U5BU5D_t3346*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14435_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14436_gshared (Dictionary_2_t2720 * __this, KeyValuePair_2_t2724  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14436(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2720 *, KeyValuePair_2_t2724 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14436_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14437_gshared (Dictionary_2_t2720 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14437(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2720 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14437_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14438_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14438(__this, method) (( Object_t * (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14438_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14439_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14439(__this, method) (( Object_t* (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14439_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14440_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14440(__this, method) (( Object_t * (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14440_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14441_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14441(__this, method) (( int32_t (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_get_Count_m14441_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14442_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14442(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m14442_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14443_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14443(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2720 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_set_Item_m14443_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14444_gshared (Dictionary_2_t2720 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14444(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2720 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m14444_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14445_gshared (Dictionary_2_t2720 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14445(__this, ___size, method) (( void (*) (Dictionary_2_t2720 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m14445_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14446_gshared (Dictionary_2_t2720 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14446(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2720 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m14446_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2724  Dictionary_2_make_pair_m14447_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m14447(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2724  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_make_pair_m14447_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14448_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14448(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_pick_value_m14448_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14449_gshared (Dictionary_2_t2720 * __this, KeyValuePair_2U5BU5D_t3346* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14449(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2720 *, KeyValuePair_2U5BU5D_t3346*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m14449_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14450_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14450(__this, method) (( void (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_Resize_m14450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14451_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m14451(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2720 *, Object_t *, int32_t, MethodInfo*))Dictionary_2_Add_m14451_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14452_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14452(__this, method) (( void (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_Clear_m14452_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14453_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14453(__this, ___key, method) (( bool (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m14453_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14454_gshared (Dictionary_2_t2720 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14454(__this, ___value, method) (( bool (*) (Dictionary_2_t2720 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m14454_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14455_gshared (Dictionary_2_t2720 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14455(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2720 *, SerializationInfo_t766 *, StreamingContext_t767 , MethodInfo*))Dictionary_2_GetObjectData_m14455_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14456_gshared (Dictionary_2_t2720 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14456(__this, ___sender, method) (( void (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m14456_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14457_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14457(__this, ___key, method) (( bool (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m14457_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14458_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14458(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2720 *, Object_t *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m14458_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2726 * Dictionary_2_get_Values_m14459_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14459(__this, method) (( ValueCollection_t2726 * (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_get_Values_m14459_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14460_gshared (Dictionary_2_t2720 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14460(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m14460_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14461_gshared (Dictionary_2_t2720 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14461(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2720 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m14461_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14462_gshared (Dictionary_2_t2720 * __this, KeyValuePair_2_t2724  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14462(__this, ___pair, method) (( bool (*) (Dictionary_2_t2720 *, KeyValuePair_2_t2724 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14462_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2728  Dictionary_2_GetEnumerator_m14463_gshared (Dictionary_2_t2720 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14463(__this, method) (( Enumerator_t2728  (*) (Dictionary_2_t2720 *, MethodInfo*))Dictionary_2_GetEnumerator_m14463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t967  Dictionary_2_U3CCopyToU3Em__0_m14464_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14464(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t967  (*) (Object_t * /* static, unused */, Object_t *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14464_gshared)(__this /* static, unused */, ___key, ___value, method)
