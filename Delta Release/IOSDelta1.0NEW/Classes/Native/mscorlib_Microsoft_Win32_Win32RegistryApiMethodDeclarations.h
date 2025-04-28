#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.Win32RegistryApi
struct Win32RegistryApi_t1326;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t952;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1317;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Microsoft.Win32.RegistryValueKind
#include "mscorlib_Microsoft_Win32_RegistryValueKind.h"

// System.Void Microsoft.Win32.Win32RegistryApi::.ctor()
extern "C" void Win32RegistryApi__ctor_m6968 (Win32RegistryApi_t1326 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegCloseKey(System.IntPtr)
extern "C" int32_t Win32RegistryApi_RegCloseKey_m6969 (Object_t * __this /* static, unused */, IntPtr_t ___keyHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegFlushKey(System.IntPtr)
extern "C" int32_t Win32RegistryApi_RegFlushKey_m6970 (Object_t * __this /* static, unused */, IntPtr_t ___keyHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegOpenKeyEx(System.IntPtr,System.String,System.IntPtr,System.Int32,System.IntPtr&)
extern "C" int32_t Win32RegistryApi_RegOpenKeyEx_m6971 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___keyName, IntPtr_t ___reserved, int32_t ___access, IntPtr_t* ___keyHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegDeleteValue(System.IntPtr,System.String)
extern "C" int32_t Win32RegistryApi_RegDeleteValue_m6972 (Object_t * __this /* static, unused */, IntPtr_t ___keyHandle, String_t* ___valueName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.String,System.Int32)
extern "C" int32_t Win32RegistryApi_RegSetValueEx_m6973 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, String_t* ___data, int32_t ___rawDataLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Byte[],System.Int32)
extern "C" int32_t Win32RegistryApi_RegSetValueEx_m6974 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, ByteU5BU5D_t952* ___rawData, int32_t ___rawDataLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Int32&,System.Int32)
extern "C" int32_t Win32RegistryApi_RegSetValueEx_m6975 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, int32_t* ___data, int32_t ___rawDataLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Win32.Win32RegistryApi::GetHandle(Microsoft.Win32.RegistryKey)
extern "C" IntPtr_t Win32RegistryApi_GetHandle_m6976 (Object_t * __this /* static, unused */, RegistryKey_t1317 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.Win32RegistryApi::IsHandleValid(Microsoft.Win32.RegistryKey)
extern "C" bool Win32RegistryApi_IsHandleValid_m6977 (Object_t * __this /* static, unused */, RegistryKey_t1317 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C" void Win32RegistryApi_SetValue_m6978 (Win32RegistryApi_t1326 * __this, RegistryKey_t1317 * ___rkey, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.Win32RegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1317 * Win32RegistryApi_OpenSubKey_m6979 (Win32RegistryApi_t1326 * __this, RegistryKey_t1317 * ___rkey, String_t* ___keyName, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C" void Win32RegistryApi_Flush_m6980 (Win32RegistryApi_t1326 * __this, RegistryKey_t1317 * ___rkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C" void Win32RegistryApi_Close_m6981 (Win32RegistryApi_t1326 * __this, RegistryKey_t1317 * ___rkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" void Win32RegistryApi_DeleteValue_m6982 (Win32RegistryApi_t1326 * __this, RegistryKey_t1317 * ___rkey, String_t* ___value, bool ___shouldThrowWhenKeyMissing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::GenerateException(System.Int32)
extern "C" void Win32RegistryApi_GenerateException_m6983 (Win32RegistryApi_t1326 * __this, int32_t ___errorCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C" String_t* Win32RegistryApi_ToString_m6984 (Win32RegistryApi_t1326 * __this, RegistryKey_t1317 * ___rkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C" String_t* Win32RegistryApi_CombineName_m6985 (Object_t * __this /* static, unused */, RegistryKey_t1317 * ___rkey, String_t* ___localName, MethodInfo* method) IL2CPP_METHOD_ATTR;
