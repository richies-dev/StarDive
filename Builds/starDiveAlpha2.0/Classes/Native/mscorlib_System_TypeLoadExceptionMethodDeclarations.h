﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TypeLoadException
struct TypeLoadException_t1918;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeLoadException::.ctor()
extern "C" void TypeLoadException__ctor_m11239 (TypeLoadException_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C" void TypeLoadException__ctor_m11240 (TypeLoadException_t1918 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeLoadException__ctor_m11241 (TypeLoadException_t1918 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeLoadException::get_Message()
extern "C" String_t* TypeLoadException_get_Message_m11242 (TypeLoadException_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeLoadException_GetObjectData_m11243 (TypeLoadException_t1918 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
