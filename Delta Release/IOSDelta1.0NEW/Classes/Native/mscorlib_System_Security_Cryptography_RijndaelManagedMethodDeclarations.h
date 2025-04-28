#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1733;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1151;
// System.Byte[]
struct ByteU5BU5D_t952;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m9664 (RijndaelManaged_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m9665 (RijndaelManaged_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m9666 (RijndaelManaged_t1733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m9667 (RijndaelManaged_t1733 * __this, ByteU5BU5D_t952* ___rgbKey, ByteU5BU5D_t952* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m9668 (RijndaelManaged_t1733 * __this, ByteU5BU5D_t952* ___rgbKey, ByteU5BU5D_t952* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
