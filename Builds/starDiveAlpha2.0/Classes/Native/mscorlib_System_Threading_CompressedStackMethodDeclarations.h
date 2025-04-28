#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CompressedStack
struct CompressedStack_t1831;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern "C" void CompressedStack__ctor_m10364 (CompressedStack_t1831 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern "C" void CompressedStack__ctor_m10365 (CompressedStack_t1831 * __this, CompressedStack_t1831 * ___cs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern "C" CompressedStack_t1831 * CompressedStack_CreateCopy_m10366 (CompressedStack_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern "C" CompressedStack_t1831 * CompressedStack_Capture_m10367 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CompressedStack_GetObjectData_m10368 (CompressedStack_t1831 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C" bool CompressedStack_IsEmpty_m10369 (CompressedStack_t1831 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
