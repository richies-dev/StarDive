#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t1508  : public Object_t
{
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;
};
