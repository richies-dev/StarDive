#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t1839;
// System.Security.PermissionSet
struct PermissionSet_t1593;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m10113 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m10114 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t1593 * SecurityManager_Decode_m10115 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t1593 * SecurityManager_Decode_m10116 (Object_t * __this /* static, unused */, ByteU5BU5D_t1019* ___encodedPermissions, MethodInfo* method) IL2CPP_METHOD_ATTR;
