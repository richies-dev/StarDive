#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t1683;
// System.Security.SecurityContext
struct SecurityContext_t1832;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m10372 (ExecutionContext_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern "C" void ExecutionContext__ctor_m10373 (ExecutionContext_t1683 * __this, ExecutionContext_t1683 * ___ec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext__ctor_m10374 (ExecutionContext_t1683 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern "C" ExecutionContext_t1683 * ExecutionContext_Capture_m10375 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext_GetObjectData_m10376 (ExecutionContext_t1683 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern "C" SecurityContext_t1832 * ExecutionContext_get_SecurityContext_m10377 (ExecutionContext_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C" void ExecutionContext_set_SecurityContext_m10378 (ExecutionContext_t1683 * __this, SecurityContext_t1832 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C" bool ExecutionContext_get_FlowSuppressed_m10379 (ExecutionContext_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern "C" bool ExecutionContext_IsFlowSuppressed_m10380 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
