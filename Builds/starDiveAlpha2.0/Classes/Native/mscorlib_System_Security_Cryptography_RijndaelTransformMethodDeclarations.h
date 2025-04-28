#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1800;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1336;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.UInt32[]
struct UInt32U5BU5D_t1204;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m9905 (RijndaelTransform_t1800 * __this, Rijndael_t1336 * ___algo, bool ___encryption, ByteU5BU5D_t1019* ___key, ByteU5BU5D_t1019* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m9906 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m9907 (RijndaelTransform_t1800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m9908 (RijndaelTransform_t1800 * __this, ByteU5BU5D_t1019* ___input, ByteU5BU5D_t1019* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m9909 (RijndaelTransform_t1800 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m9910 (RijndaelTransform_t1800 * __this, ByteU5BU5D_t1019* ___indata, ByteU5BU5D_t1019* ___outdata, UInt32U5BU5D_t1204* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m9911 (RijndaelTransform_t1800 * __this, ByteU5BU5D_t1019* ___indata, ByteU5BU5D_t1019* ___outdata, UInt32U5BU5D_t1204* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m9912 (RijndaelTransform_t1800 * __this, ByteU5BU5D_t1019* ___indata, ByteU5BU5D_t1019* ___outdata, UInt32U5BU5D_t1204* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m9913 (RijndaelTransform_t1800 * __this, ByteU5BU5D_t1019* ___indata, ByteU5BU5D_t1019* ___outdata, UInt32U5BU5D_t1204* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m9914 (RijndaelTransform_t1800 * __this, ByteU5BU5D_t1019* ___indata, ByteU5BU5D_t1019* ___outdata, UInt32U5BU5D_t1204* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m9915 (RijndaelTransform_t1800 * __this, ByteU5BU5D_t1019* ___indata, ByteU5BU5D_t1019* ___outdata, UInt32U5BU5D_t1204* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
