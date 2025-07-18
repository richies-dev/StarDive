﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t1754;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Policy.Evidence
struct Evidence_t1525;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Security.SecurityException
struct  SecurityException_t1768  : public SystemException_t1101
{
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	Object_t * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	Object_t * ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t1525 * ____evidence_18;
};
