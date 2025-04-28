#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.EventWaitHandle
struct EventWaitHandle_t1870;
// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetMode.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern "C" void EventWaitHandle__ctor_m10370 (EventWaitHandle_t1870 * __this, bool ___initialState, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern "C" bool EventWaitHandle_IsManualReset_m10371 (EventWaitHandle_t1870 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C" bool EventWaitHandle_Reset_m6258 (EventWaitHandle_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" bool EventWaitHandle_Set_m6256 (EventWaitHandle_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
