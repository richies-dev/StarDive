﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.StringBuilder
struct StringBuilder_t403;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t700;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t318;
// System.Object[]
struct ObjectU5BU5D_t148;
// System.IFormatProvider
struct IFormatProvider_t1253;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m10012 (StringBuilder_t403 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m10013 (StringBuilder_t403 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C" void StringBuilder__ctor_m1872 (StringBuilder_t403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" void StringBuilder__ctor_m3677 (StringBuilder_t403 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" void StringBuilder__ctor_m1960 (StringBuilder_t403 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C" void StringBuilder__ctor_m4788 (StringBuilder_t403 * __this, String_t* ___value, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder__ctor_m10014 (StringBuilder_t403 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m10015 (StringBuilder_t403 * __this, SerializationInfo_t700 * ___info, StreamingContext_t701  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C" int32_t StringBuilder_get_Capacity_m10016 (StringBuilder_t403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C" void StringBuilder_set_Capacity_m10017 (StringBuilder_t403 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" int32_t StringBuilder_get_Length_m4943 (StringBuilder_t403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" void StringBuilder_set_Length_m5045 (StringBuilder_t403 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
extern "C" uint16_t StringBuilder_get_Chars_m10018 (StringBuilder_t403 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
extern "C" void StringBuilder_set_Chars_m10019 (StringBuilder_t403 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C" String_t* StringBuilder_ToString_m1875 (StringBuilder_t403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C" String_t* StringBuilder_ToString_m10020 (StringBuilder_t403 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" StringBuilder_t403 * StringBuilder_Remove_m10021 (StringBuilder_t403 * __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
extern "C" StringBuilder_t403 * StringBuilder_Replace_m10022 (StringBuilder_t403 * __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t403 * StringBuilder_Replace_m10023 (StringBuilder_t403 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" StringBuilder_t403 * StringBuilder_Append_m3682 (StringBuilder_t403 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C" StringBuilder_t403 * StringBuilder_Append_m4870 (StringBuilder_t403 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C" StringBuilder_t403 * StringBuilder_Append_m4807 (StringBuilder_t403 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" StringBuilder_t403 * StringBuilder_Append_m4789 (StringBuilder_t403 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" StringBuilder_t403 * StringBuilder_Append_m2220 (StringBuilder_t403 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C" StringBuilder_t403 * StringBuilder_Append_m10024 (StringBuilder_t403 * __this, uint16_t ___value, int32_t ___repeatCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C" StringBuilder_t403 * StringBuilder_Append_m10025 (StringBuilder_t403 * __this, CharU5BU5D_t318* ___value, int32_t ___startIndex, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t403 * StringBuilder_Append_m10026 (StringBuilder_t403 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C" StringBuilder_t403 * StringBuilder_AppendLine_m1874 (StringBuilder_t403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" StringBuilder_t403 * StringBuilder_AppendLine_m1873 (StringBuilder_t403 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" StringBuilder_t403 * StringBuilder_AppendFormat_m5921 (StringBuilder_t403 * __this, String_t* ___format, ObjectU5BU5D_t148* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t403 * StringBuilder_AppendFormat_m10027 (StringBuilder_t403 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t148* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" StringBuilder_t403 * StringBuilder_AppendFormat_m4806 (StringBuilder_t403 * __this, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" StringBuilder_t403 * StringBuilder_AppendFormat_m4898 (StringBuilder_t403 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C" StringBuilder_t403 * StringBuilder_AppendFormat_m4901 (StringBuilder_t403 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
extern "C" StringBuilder_t403 * StringBuilder_Insert_m10028 (StringBuilder_t403 * __this, int32_t ___index, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C" StringBuilder_t403 * StringBuilder_Insert_m10029 (StringBuilder_t403 * __this, int32_t ___index, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
extern "C" StringBuilder_t403 * StringBuilder_Insert_m10030 (StringBuilder_t403 * __this, int32_t ___index, String_t* ___value, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
extern "C" void StringBuilder_InternalEnsureCapacity_m10031 (StringBuilder_t403 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
