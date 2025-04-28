#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t49;
// System.Array
struct Array_t;
// UnityEngine.ComputeBufferType
#include "UnityEngine_UnityEngine_ComputeBufferType.h"

// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer__ctor_m337 (ComputeBuffer_t49 * __this, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern "C" void ComputeBuffer_Finalize_m3396 (ComputeBuffer_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose()
extern "C" void ComputeBuffer_Dispose_m3397 (ComputeBuffer_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
extern "C" void ComputeBuffer_Dispose_m3398 (ComputeBuffer_t49 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer_InitBuffer_m3399 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___buf, int32_t ___count, int32_t ___stride, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C" void ComputeBuffer_DestroyBuffer_m3400 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___buf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Release()
extern "C" void ComputeBuffer_Release_m336 (ComputeBuffer_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
extern "C" void ComputeBuffer_SetData_m338 (ComputeBuffer_t49 * __this, Array_t * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C" void ComputeBuffer_InternalSetData_m3401 (ComputeBuffer_t49 * __this, Array_t * ___data, int32_t ___elemSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void ComputeBuffer_CopyCount_m346 (Object_t * __this /* static, unused */, ComputeBuffer_t49 * ___src, ComputeBuffer_t49 * ___dst, int32_t ___dstOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
