#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.RegistryKey
struct RegistryKey_t1317;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.IO.IOException
struct IOException_t1272;
// Microsoft.Win32.RegistryHive
#include "mscorlib_Microsoft_Win32_RegistryHive.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C" void RegistryKey__ctor_m6914 (RegistryKey_t1317 * __this, int32_t ___hiveId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C" void RegistryKey__ctor_m6915 (RegistryKey_t1317 * __this, int32_t ___hiveId, IntPtr_t ___keyHandle, bool ___remoteRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C" void RegistryKey__ctor_m6916 (RegistryKey_t1317 * __this, Object_t * ___data, String_t* ___keyName, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C" void RegistryKey__cctor_m6917 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C" void RegistryKey_System_IDisposable_Dispose_m6918 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C" void RegistryKey_Finalize_m6919 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C" String_t* RegistryKey_get_Name_m6920 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C" void RegistryKey_Flush_m6921 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C" void RegistryKey_Close_m6922 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C" void RegistryKey_SetValue_m6923 (RegistryKey_t1317 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C" RegistryKey_t1317 * RegistryKey_OpenSubKey_m6924 (RegistryKey_t1317 * __this, String_t* ___name, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C" void RegistryKey_DeleteValue_m6925 (RegistryKey_t1317 * __this, String_t* ___name, bool ___throwOnMissingValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C" String_t* RegistryKey_ToString_m6926 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C" bool RegistryKey_get_IsRoot_m6927 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C" bool RegistryKey_get_IsWritable_m6928 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C" int32_t RegistryKey_get_Hive_m6929 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C" Object_t * RegistryKey_get_Handle_m6930 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C" void RegistryKey_AssertKeyStillValid_m6931 (RegistryKey_t1317 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C" void RegistryKey_AssertKeyNameLength_m6932 (RegistryKey_t1317 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C" IOException_t1272 * RegistryKey_CreateMarkedForDeletionException_m6933 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C" String_t* RegistryKey_GetHiveName_m6934 (Object_t * __this /* static, unused */, int32_t ___hive, MethodInfo* method) IL2CPP_METHOD_ATTR;
