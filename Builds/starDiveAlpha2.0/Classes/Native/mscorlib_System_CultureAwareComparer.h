#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t1337;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t1956  : public StringComparer_t799
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1337 * ____compareInfo_5;
};
