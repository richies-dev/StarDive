﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t1773;
// System.Security.PermissionSet
struct PermissionSet_t1526;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m9877 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m9878 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t1526 * SecurityManager_Decode_m9879 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t1526 * SecurityManager_Decode_m9880 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___encodedPermissions, MethodInfo* method) IL2CPP_METHOD_ATTR;
