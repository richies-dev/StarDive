#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.TextInfo
struct TextInfo_t1345;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t745;
// System.Object
struct Object_t;
// System.Void
#include "mscorlib_System_Void.h"

// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
extern "C" void TextInfo__ctor_m7898 (TextInfo_t1345 * __this, CultureInfo_t745 * ___ci, int32_t ___lcid, void* ___data, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7899 (TextInfo_t1345 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_CultureName()
extern "C" String_t* TextInfo_get_CultureName_m7900 (TextInfo_t1345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
extern "C" bool TextInfo_Equals_m7901 (TextInfo_t1345 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.TextInfo::GetHashCode()
extern "C" int32_t TextInfo_GetHashCode_m7902 (TextInfo_t1345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToString()
extern "C" String_t* TextInfo_ToString_m7903 (TextInfo_t1345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
extern "C" uint16_t TextInfo_ToLower_m7904 (TextInfo_t1345 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
extern "C" uint16_t TextInfo_ToUpper_m7905 (TextInfo_t1345 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToLower(System.String)
extern "C" String_t* TextInfo_ToLower_m7906 (TextInfo_t1345 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
