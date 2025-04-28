#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.RegistryKey
struct RegistryKey_t1384;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.IO.IOException
struct IOException_t1339;
// Microsoft.Win32.RegistryHive
#include "mscorlib_Microsoft_Win32_RegistryHive.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C" void RegistryKey__ctor_m7150 (RegistryKey_t1384 * __this, int32_t ___hiveId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C" void RegistryKey__ctor_m7151 (RegistryKey_t1384 * __this, int32_t ___hiveId, IntPtr_t ___keyHandle, bool ___remoteRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C" void RegistryKey__ctor_m7152 (RegistryKey_t1384 * __this, Object_t * ___data, String_t* ___keyName, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C" void RegistryKey__cctor_m7153 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C" void RegistryKey_System_IDisposable_Dispose_m7154 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C" void RegistryKey_Finalize_m7155 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C" String_t* RegistryKey_get_Name_m7156 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C" void RegistryKey_Flush_m7157 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C" void RegistryKey_Close_m7158 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C" void RegistryKey_SetValue_m7159 (RegistryKey_t1384 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C" RegistryKey_t1384 * RegistryKey_OpenSubKey_m7160 (RegistryKey_t1384 * __this, String_t* ___name, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C" void RegistryKey_DeleteValue_m7161 (RegistryKey_t1384 * __this, String_t* ___name, bool ___throwOnMissingValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C" String_t* RegistryKey_ToString_m7162 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C" bool RegistryKey_get_IsRoot_m7163 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C" bool RegistryKey_get_IsWritable_m7164 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C" int32_t RegistryKey_get_Hive_m7165 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C" Object_t * RegistryKey_get_Handle_m7166 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C" void RegistryKey_AssertKeyStillValid_m7167 (RegistryKey_t1384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C" void RegistryKey_AssertKeyNameLength_m7168 (RegistryKey_t1384 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C" IOException_t1339 * RegistryKey_CreateMarkedForDeletionException_m7169 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C" String_t* RegistryKey_GetHiveName_m7170 (Object_t * __this /* static, unused */, int32_t ___hive, MethodInfo* method) IL2CPP_METHOD_ATTR;
