﻿#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String[]
struct StringU5BU5D_t104;
// System.Collections.Hashtable
struct Hashtable_t960;
// System.Object
struct Object_t;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t1920;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t1921;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t1922;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t1923;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.MonoEnumInfo
struct  MonoEnumInfo_t1924 
{
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	Array_t * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t104* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t960 * ___name_hash_3;
};
struct MonoEnumInfo_t1924_StaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t960 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	Object_t * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t1920 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t1921 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t1922 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t1923 * ___long_comparer_10;
};
struct MonoEnumInfo_t1924_ThreadStaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t960 * ___cache_4;
};
