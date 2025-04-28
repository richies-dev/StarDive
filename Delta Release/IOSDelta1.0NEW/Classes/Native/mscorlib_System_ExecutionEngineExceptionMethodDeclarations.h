#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ExecutionEngineException
struct ExecutionEngineException_t1863;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ExecutionEngineException::.ctor()
extern "C" void ExecutionEngineException__ctor_m10670 (ExecutionEngineException_t1863 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.String)
extern "C" void ExecutionEngineException__ctor_m10671 (ExecutionEngineException_t1863 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionEngineException__ctor_m10672 (ExecutionEngineException_t1863 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
