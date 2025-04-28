#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Timer
struct Timer_t1677;
// System.Threading.TimerCallback
struct TimerCallback_t1887;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.Int32,System.Int32)
extern "C" void Timer__ctor_m10453 (Timer_t1677 * __this, TimerCallback_t1887 * ___callback, Object_t * ___state, int32_t ___dueTime, int32_t ___period, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
extern "C" void Timer__ctor_m10454 (Timer_t1677 * __this, TimerCallback_t1887 * ___callback, Object_t * ___state, TimeSpan_t1047  ___dueTime, TimeSpan_t1047  ___period, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
extern "C" void Timer__cctor_m10455 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern "C" void Timer_Init_m10456 (Timer_t1677 * __this, TimerCallback_t1887 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C" void Timer_Dispose_m10457 (Timer_t1677 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C" bool Timer_Change_m10458 (Timer_t1677 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, MethodInfo* method) IL2CPP_METHOD_ATTR;
