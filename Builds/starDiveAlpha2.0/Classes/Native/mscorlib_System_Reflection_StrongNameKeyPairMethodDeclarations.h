#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t1594;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Object
struct Object_t;
// System.Security.Cryptography.RSA
struct RSA_t1021;
// Mono.Security.StrongName
struct StrongName_t1454;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair__ctor_m9079 (StrongNameKeyPair_t1594 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m9080 (StrongNameKeyPair_t1594 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m9081 (StrongNameKeyPair_t1594 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C" RSA_t1021 * StrongNameKeyPair_GetRSA_m9082 (StrongNameKeyPair_t1594 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern "C" StrongName_t1454 * StrongNameKeyPair_StrongName_m9083 (StrongNameKeyPair_t1594 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
