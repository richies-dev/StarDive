﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1612;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t818;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m8972 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t1612 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t1612  MonoMethodInfo_GetMethodInfo_m8973 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m8974 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetReturnType_m8975 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetAttributes_m8976 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m8977 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t818* MonoMethodInfo_get_parameter_info_m8978 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t818* MonoMethodInfo_GetParametersInfo_m8979 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
