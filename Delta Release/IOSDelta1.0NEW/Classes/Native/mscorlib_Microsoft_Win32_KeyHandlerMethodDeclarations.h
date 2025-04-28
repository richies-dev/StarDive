#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.KeyHandler
struct KeyHandler_t1323;
// System.String
struct String_t;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1317;
// System.Security.SecurityElement
struct SecurityElement_t1324;
// System.Object
struct Object_t;

// System.Void Microsoft.Win32.KeyHandler::.ctor(Microsoft.Win32.RegistryKey,System.String)
extern "C" void KeyHandler__ctor_m6937 (KeyHandler_t1323 * __this, RegistryKey_t1317 * ___rkey, String_t* ___basedir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::.cctor()
extern "C" void KeyHandler__cctor_m6938 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Load()
extern "C" void KeyHandler_Load_m6939 (KeyHandler_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::LoadKey(System.Security.SecurityElement)
extern "C" void KeyHandler_LoadKey_m6940 (KeyHandler_t1323 * __this, SecurityElement_t1324 * ___se, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Ensure(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1317 * KeyHandler_Ensure_m6941 (KeyHandler_t1323 * __this, RegistryKey_t1317 * ___rkey, String_t* ___extra, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Probe(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1317 * KeyHandler_Probe_m6942 (KeyHandler_t1323 * __this, RegistryKey_t1317 * ___rkey, String_t* ___extra, bool ___writable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C" String_t* KeyHandler_CombineName_m6943 (Object_t * __this /* static, unused */, RegistryKey_t1317 * ___rkey, String_t* ___extra, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.KeyHandler Microsoft.Win32.KeyHandler::Lookup(Microsoft.Win32.RegistryKey,System.Boolean)
extern "C" KeyHandler_t1323 * KeyHandler_Lookup_m6944 (Object_t * __this /* static, unused */, RegistryKey_t1317 * ___rkey, bool ___createNonExisting, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Drop(Microsoft.Win32.RegistryKey)
extern "C" void KeyHandler_Drop_m6945 (Object_t * __this /* static, unused */, RegistryKey_t1317 * ___rkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetValue(System.String,System.Object)
extern "C" void KeyHandler_SetValue_m6946 (KeyHandler_t1323 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetDirty()
extern "C" void KeyHandler_SetDirty_m6947 (KeyHandler_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::DirtyTimeout(System.Object)
extern "C" void KeyHandler_DirtyTimeout_m6948 (KeyHandler_t1323 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Flush()
extern "C" void KeyHandler_Flush_m6949 (KeyHandler_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::ValueExists(System.String)
extern "C" bool KeyHandler_ValueExists_m6950 (KeyHandler_t1323 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::get_IsMarkedForDeletion()
extern "C" bool KeyHandler_get_IsMarkedForDeletion_m6951 (KeyHandler_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::RemoveValue(System.String)
extern "C" void KeyHandler_RemoveValue_m6952 (KeyHandler_t1323 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Finalize()
extern "C" void KeyHandler_Finalize_m6953 (KeyHandler_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Save()
extern "C" void KeyHandler_Save_m6954 (KeyHandler_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::AssertNotMarkedForDeletion()
extern "C" void KeyHandler_AssertNotMarkedForDeletion_m6955 (KeyHandler_t1323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_UserStore()
extern "C" String_t* KeyHandler_get_UserStore_m6956 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_MachineStore()
extern "C" String_t* KeyHandler_get_MachineStore_m6957 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
