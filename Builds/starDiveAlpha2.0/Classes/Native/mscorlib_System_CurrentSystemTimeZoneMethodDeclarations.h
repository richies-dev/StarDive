#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1962;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1354;
// System.String[]
struct StringU5BU5D_t104;
// System.Globalization.DaylightTime
struct DaylightTime_t1502;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m11229 (CurrentSystemTimeZone_t1962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m11230 (CurrentSystemTimeZone_t1962 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11231 (CurrentSystemTimeZone_t1962 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m11232 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1354** ___data, StringU5BU5D_t104** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1502 * CurrentSystemTimeZone_GetDaylightChanges_m11233 (CurrentSystemTimeZone_t1962 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t1047  CurrentSystemTimeZone_GetUtcOffset_m11234 (CurrentSystemTimeZone_t1962 * __this, DateTime_t650  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m11235 (CurrentSystemTimeZone_t1962 * __this, DaylightTime_t1502 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1502 * CurrentSystemTimeZone_GetDaylightTimeFromData_m11236 (CurrentSystemTimeZone_t1962 * __this, Int64U5BU5D_t1354* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
