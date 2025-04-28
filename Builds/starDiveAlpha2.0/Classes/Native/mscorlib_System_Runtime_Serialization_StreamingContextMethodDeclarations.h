#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t767;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"

// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
extern "C" void StreamingContext__ctor_m9702 (StreamingContext_t767 * __this, int32_t ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
extern "C" void StreamingContext__ctor_m9703 (StreamingContext_t767 * __this, int32_t ___state, Object_t * ___additional, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.StreamingContext::get_Context()
extern "C" Object_t * StreamingContext_get_Context_m9704 (StreamingContext_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
extern "C" int32_t StreamingContext_get_State_m9705 (StreamingContext_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
extern "C" bool StreamingContext_Equals_m9706 (StreamingContext_t767 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
extern "C" int32_t StreamingContext_GetHashCode_m9707 (StreamingContext_t767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
