﻿#pragma once
#include <stdint.h>
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t898;
// System.Collections.IComparer
struct IComparer_t901;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t894  : public Object_t
{
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t898 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	Object_t * ___comparer_3;
};
