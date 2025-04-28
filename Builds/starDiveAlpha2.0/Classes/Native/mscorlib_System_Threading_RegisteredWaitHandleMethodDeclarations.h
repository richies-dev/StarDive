#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t1875;
// System.Threading.WaitHandle
struct WaitHandle_t1278;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1874;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" void RegisteredWaitHandle__ctor_m10396 (RegisteredWaitHandle_t1875 * __this, WaitHandle_t1278 * ___waitObject, WaitOrTimerCallback_t1874 * ___callback, Object_t * ___state, TimeSpan_t1047  ___timeout, bool ___executeOnlyOnce, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C" void RegisteredWaitHandle_Wait_m10397 (RegisteredWaitHandle_t1875 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C" void RegisteredWaitHandle_DoCallBack_m10398 (RegisteredWaitHandle_t1875 * __this, Object_t * ___timedOut, MethodInfo* method) IL2CPP_METHOD_ATTR;
