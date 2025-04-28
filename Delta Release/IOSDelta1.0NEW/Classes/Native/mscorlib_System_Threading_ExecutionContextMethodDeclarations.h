#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t1617;
// System.Security.SecurityContext
struct SecurityContext_t1766;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m10136 (ExecutionContext_t1617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern "C" void ExecutionContext__ctor_m10137 (ExecutionContext_t1617 * __this, ExecutionContext_t1617 * ___ec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext__ctor_m10138 (ExecutionContext_t1617 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern "C" ExecutionContext_t1617 * ExecutionContext_Capture_m10139 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext_GetObjectData_m10140 (ExecutionContext_t1617 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern "C" SecurityContext_t1766 * ExecutionContext_get_SecurityContext_m10141 (ExecutionContext_t1617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C" void ExecutionContext_set_SecurityContext_m10142 (ExecutionContext_t1617 * __this, SecurityContext_t1766 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C" bool ExecutionContext_get_FlowSuppressed_m10143 (ExecutionContext_t1617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern "C" bool ExecutionContext_IsFlowSuppressed_m10144 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
