﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1752;
// System.Security.IPermission
struct IPermission_t1754;
// System.Security.SecurityElement
struct SecurityElement_t1324;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission__ctor_m9778 (SecurityPermission_t1752 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission_set_Flags_m9779 (SecurityPermission_t1752 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C" bool SecurityPermission_IsUnrestricted_m9780 (SecurityPermission_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool SecurityPermission_IsSubsetOf_m9781 (SecurityPermission_t1752 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C" SecurityElement_t1324 * SecurityPermission_ToXml_m9782 (SecurityPermission_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C" bool SecurityPermission_IsEmpty_m9783 (SecurityPermission_t1752 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C" SecurityPermission_t1752 * SecurityPermission_Cast_m9784 (SecurityPermission_t1752 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
