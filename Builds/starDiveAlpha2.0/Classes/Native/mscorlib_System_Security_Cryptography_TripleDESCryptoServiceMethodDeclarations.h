#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1816;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1218;
// System.Byte[]
struct ByteU5BU5D_t1019;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m10006 (TripleDESCryptoServiceProvider_t1816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m10007 (TripleDESCryptoServiceProvider_t1816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m10008 (TripleDESCryptoServiceProvider_t1816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m10009 (TripleDESCryptoServiceProvider_t1816 * __this, ByteU5BU5D_t1019* ___rgbKey, ByteU5BU5D_t1019* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m10010 (TripleDESCryptoServiceProvider_t1816 * __this, ByteU5BU5D_t1019* ___rgbKey, ByteU5BU5D_t1019* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
