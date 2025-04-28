#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1968;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1907;
// System.Reflection.Module
struct Module_t1358;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m11247 (UnitySerializationHolder_t1968 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m11248 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t766 * ___info, StreamingContext_t767  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m11249 (Object_t * __this /* static, unused */, DBNull_t1907 * ___instance, SerializationInfo_t766 * ___info, StreamingContext_t767  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m11250 (Object_t * __this /* static, unused */, Module_t1358 * ___instance, SerializationInfo_t766 * ___info, StreamingContext_t767  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m11251 (UnitySerializationHolder_t1968 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m11252 (UnitySerializationHolder_t1968 * __this, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
