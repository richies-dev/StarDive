#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t1593;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1019;

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m10062 (PermissionSet_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m10063 (PermissionSet_t1593 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m10064 (PermissionSet_t1593 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t1593 * PermissionSet_CreateFromBinaryFormat_m10065 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
