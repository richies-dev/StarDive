#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.UnixRegistryApi
struct UnixRegistryApi_t1392;
// System.String
struct String_t;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1384;
// System.Object
struct Object_t;

// System.Void Microsoft.Win32.UnixRegistryApi::.ctor()
extern "C" void UnixRegistryApi__ctor_m7194 (UnixRegistryApi_t1392 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToUnix(System.String)
extern "C" String_t* UnixRegistryApi_ToUnix_m7195 (Object_t * __this /* static, unused */, String_t* ___keyname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.UnixRegistryApi::IsWellKnownKey(System.String,System.String)
extern "C" bool UnixRegistryApi_IsWellKnownKey_m7196 (Object_t * __this /* static, unused */, String_t* ___parentKeyName, String_t* ___keyname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1384 * UnixRegistryApi_OpenSubKey_m7197 (UnixRegistryApi_t1392 * __this, RegistryKey_t1384 * ___rkey, String_t* ___keyname, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C" void UnixRegistryApi_Flush_m7198 (UnixRegistryApi_t1392 * __this, RegistryKey_t1384 * ___rkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C" void UnixRegistryApi_Close_m7199 (UnixRegistryApi_t1392 * __this, RegistryKey_t1384 * ___rkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C" void UnixRegistryApi_SetValue_m7200 (UnixRegistryApi_t1392 * __this, RegistryKey_t1384 * ___rkey, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" void UnixRegistryApi_DeleteValue_m7201 (UnixRegistryApi_t1392 * __this, RegistryKey_t1384 * ___rkey, String_t* ___name, bool ___throw_if_missing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C" String_t* UnixRegistryApi_ToString_m7202 (UnixRegistryApi_t1392 * __this, RegistryKey_t1384 * ___rkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::CreateSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1384 * UnixRegistryApi_CreateSubKey_m7203 (UnixRegistryApi_t1392 * __this, RegistryKey_t1384 * ___rkey, String_t* ___keyname, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
