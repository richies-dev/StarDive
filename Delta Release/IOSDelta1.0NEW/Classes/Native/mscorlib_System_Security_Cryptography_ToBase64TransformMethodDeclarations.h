#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.ToBase64Transform
struct ToBase64Transform_t1749;
// System.Byte[]
struct ByteU5BU5D_t952;

// System.Void System.Security.Cryptography.ToBase64Transform::System.IDisposable.Dispose()
extern "C" void ToBase64Transform_System_IDisposable_Dispose_m9755 (ToBase64Transform_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Finalize()
extern "C" void ToBase64Transform_Finalize_m9756 (ToBase64Transform_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.ToBase64Transform::get_CanReuseTransform()
extern "C" bool ToBase64Transform_get_CanReuseTransform_m9757 (ToBase64Transform_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_InputBlockSize()
extern "C" int32_t ToBase64Transform_get_InputBlockSize_m9758 (ToBase64Transform_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_OutputBlockSize()
extern "C" int32_t ToBase64Transform_get_OutputBlockSize_m9759 (ToBase64Transform_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Dispose(System.Boolean)
extern "C" void ToBase64Transform_Dispose_m9760 (ToBase64Transform_t1749 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ToBase64Transform_TransformBlock_m9761 (ToBase64Transform_t1749 * __this, ByteU5BU5D_t952* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t952* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" void ToBase64Transform_InternalTransformBlock_m9762 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t952* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t952* ToBase64Transform_TransformFinalBlock_m9763 (ToBase64Transform_t1749 * __this, ByteU5BU5D_t952* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::InternalTransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t952* ToBase64Transform_InternalTransformFinalBlock_m9764 (Object_t * __this /* static, unused */, ByteU5BU5D_t952* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
