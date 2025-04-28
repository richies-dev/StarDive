#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t973;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.Evidence
struct  Evidence_t1592  : public Object_t
{
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t973 * ___hostEvidenceList_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t973 * ___assemblyEvidenceList_1;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_2;
};
