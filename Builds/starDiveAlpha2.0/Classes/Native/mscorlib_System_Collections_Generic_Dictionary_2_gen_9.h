﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t102;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2313;
// System.Object[]
struct ObjectU5BU5D_t219;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t2723;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t2720  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::table
	Int32U5BU5D_t102* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::linkSlots
	LinkU5BU5D_t2313* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::keySlots
	ObjectU5BU5D_t219* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::valueSlots
	Int32U5BU5D_t102* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::serialization_info
	SerializationInfo_t766 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2720_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<>f__am$cacheB
	Transform_1_t2723 * ___U3CU3Ef__am$cacheB_15;
};
