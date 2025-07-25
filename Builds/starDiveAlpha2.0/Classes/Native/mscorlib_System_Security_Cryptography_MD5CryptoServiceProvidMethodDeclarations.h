﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t1792;
// System.Byte[]
struct ByteU5BU5D_t1019;

// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
extern "C" void MD5CryptoServiceProvider__ctor_m9816 (MD5CryptoServiceProvider_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.cctor()
extern "C" void MD5CryptoServiceProvider__cctor_m9817 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Finalize()
extern "C" void MD5CryptoServiceProvider_Finalize_m9818 (MD5CryptoServiceProvider_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Dispose(System.Boolean)
extern "C" void MD5CryptoServiceProvider_Dispose_m9819 (MD5CryptoServiceProvider_t1792 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5CryptoServiceProvider_HashCore_m9820 (MD5CryptoServiceProvider_t1792 * __this, ByteU5BU5D_t1019* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::HashFinal()
extern "C" ByteU5BU5D_t1019* MD5CryptoServiceProvider_HashFinal_m9821 (MD5CryptoServiceProvider_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Initialize()
extern "C" void MD5CryptoServiceProvider_Initialize_m9822 (MD5CryptoServiceProvider_t1792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessBlock(System.Byte[],System.Int32)
extern "C" void MD5CryptoServiceProvider_ProcessBlock_m9823 (MD5CryptoServiceProvider_t1792 * __this, ByteU5BU5D_t1019* ___inputBuffer, int32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5CryptoServiceProvider_ProcessFinalBlock_m9824 (MD5CryptoServiceProvider_t1792 * __this, ByteU5BU5D_t1019* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C" void MD5CryptoServiceProvider_AddLength_m9825 (MD5CryptoServiceProvider_t1792 * __this, uint64_t ___length, ByteU5BU5D_t1019* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
