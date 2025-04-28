#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t1547;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t812;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t1594;
// System.Version
struct Version_t998;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t766;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m8825 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName__ctor_m8826 (AssemblyName_t1547 * __this, SerializationInfo_t766 * ___si, StreamingContext_t767  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" String_t* AssemblyName_get_Name_m8827 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Name(System.String)
extern "C" void AssemblyName_set_Name_m8828 (AssemblyName_t1547 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Reflection.AssemblyName::get_CultureInfo()
extern "C" CultureInfo_t812 * AssemblyName_get_CultureInfo_m8829 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m8830 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m8831 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::get_KeyPair()
extern "C" StrongNameKeyPair_t1594 * AssemblyName_get_KeyPair_m8832 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t998 * AssemblyName_get_Version_m8833 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m8834 (AssemblyName_t1547 * __this, Version_t998 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C" String_t* AssemblyName_ToString_m8835 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::GetPublicKey()
extern "C" ByteU5BU5D_t1019* AssemblyName_GetPublicKey_m8836 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m8837 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C" ByteU5BU5D_t1019* AssemblyName_InternalGetPublicKeyToken_m8838 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C" ByteU5BU5D_t1019* AssemblyName_ComputePublicKeyToken_m8839 (AssemblyName_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m8840 (AssemblyName_t1547 * __this, ByteU5BU5D_t1019* ___publicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m8841 (AssemblyName_t1547 * __this, ByteU5BU5D_t1019* ___publicKeyToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AssemblyName_GetObjectData_m8842 (AssemblyName_t1547 * __this, SerializationInfo_t766 * ___info, StreamingContext_t767  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C" void AssemblyName_OnDeserialization_m8843 (AssemblyName_t1547 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
