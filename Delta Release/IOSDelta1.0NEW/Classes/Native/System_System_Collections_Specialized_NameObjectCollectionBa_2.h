﻿#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t893;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t902;
// System.Collections.ArrayList
struct ArrayList_t906;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t907;
// System.Collections.IComparer
struct IComparer_t901;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t905;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t908;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t903  : public Object_t
{
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t893 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t902 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t906 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	Object_t * ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	Object_t * ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t700 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t905 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	Object_t * ___equality_comparer_9;
};
