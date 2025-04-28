#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1555;
// System.Exception
struct Exception_t163;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m8851 (TargetInvocationException_t1555 * __this, Exception_t163 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.String,System.Exception)
extern "C" void TargetInvocationException__ctor_m8852 (TargetInvocationException_t1555 * __this, String_t* ___message, Exception_t163 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m8853 (TargetInvocationException_t1555 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
