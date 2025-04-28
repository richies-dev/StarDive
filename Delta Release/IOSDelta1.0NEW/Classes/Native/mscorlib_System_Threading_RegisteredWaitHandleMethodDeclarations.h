#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t1809;
// System.Threading.WaitHandle
struct WaitHandle_t1211;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1808;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" void RegisteredWaitHandle__ctor_m10160 (RegisteredWaitHandle_t1809 * __this, WaitHandle_t1211 * ___waitObject, WaitOrTimerCallback_t1808 * ___callback, Object_t * ___state, TimeSpan_t980  ___timeout, bool ___executeOnlyOnce, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C" void RegisteredWaitHandle_Wait_m10161 (RegisteredWaitHandle_t1809 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C" void RegisteredWaitHandle_DoCallBack_m10162 (RegisteredWaitHandle_t1809 * __this, Object_t * ___timedOut, MethodInfo* method) IL2CPP_METHOD_ATTR;
