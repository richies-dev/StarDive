#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ExecutionEngineException
struct ExecutionEngineException_t1929;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ExecutionEngineException::.ctor()
extern "C" void ExecutionEngineException__ctor_m10906 (ExecutionEngineException_t1929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.String)
extern "C" void ExecutionEngineException__ctor_m10907 (ExecutionEngineException_t1929 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionEngineException__ctor_m10908 (ExecutionEngineException_t1929 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
