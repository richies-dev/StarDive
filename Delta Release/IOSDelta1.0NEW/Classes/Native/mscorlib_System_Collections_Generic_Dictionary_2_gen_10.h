﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t38;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2247;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2693;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t2694  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::table
	Int32U5BU5D_t38* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::linkSlots
	LinkU5BU5D_t2247* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::keySlots
	ObjectU5BU5D_t148* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::valueSlots
	ObjectU5BU5D_t148* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Object>::serialization_info
	SerializationInfo_t700 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2694_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<>f__am$cacheB
	Transform_1_t2693 * ___U3CU3Ef__am$cacheB_15;
};
