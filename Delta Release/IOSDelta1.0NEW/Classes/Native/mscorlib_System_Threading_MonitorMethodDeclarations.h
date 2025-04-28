﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Monitor
struct Monitor_t1806;
// System.Object
struct Object_t;

// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" void Monitor_Enter_m4796 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" void Monitor_Exit_m4797 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse(System.Object)
extern "C" void Monitor_Monitor_pulse_m10147 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_test_synchronised(System.Object)
extern "C" bool Monitor_Monitor_test_synchronised_m10148 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Pulse(System.Object)
extern "C" void Monitor_Pulse_m10149 (Object_t * __this /* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)
extern "C" bool Monitor_Monitor_wait_m10150 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___ms, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
extern "C" bool Monitor_Wait_m10151 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
