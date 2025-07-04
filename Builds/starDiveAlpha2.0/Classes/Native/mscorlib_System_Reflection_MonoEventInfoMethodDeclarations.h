﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoEventInfo
struct MonoEventInfo_t1609;
// System.Reflection.MonoEvent
struct MonoEvent_t;
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfo.h"

// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m8935 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MonoEventInfo_t1609 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern "C" MonoEventInfo_t1609  MonoEventInfo_GetEventInfo_m8936 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MethodInfo* method) IL2CPP_METHOD_ATTR;
