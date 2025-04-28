#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoEnumInfo
struct MonoEnumInfo_t1858;
// System.Collections.Hashtable
struct Hashtable_t893;
// System.Type
struct Type_t;
// System.MonoEnumInfo
#include "mscorlib_System_MonoEnumInfo.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C" void MonoEnumInfo__ctor_m10648 (MonoEnumInfo_t1858 * __this, MonoEnumInfo_t1858  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
extern "C" void MonoEnumInfo__cctor_m10649 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_get_enum_info_m10650 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1858 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern "C" Hashtable_t893 * MonoEnumInfo_get_Cache_m10651 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_GetInfo_m10652 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1858 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
