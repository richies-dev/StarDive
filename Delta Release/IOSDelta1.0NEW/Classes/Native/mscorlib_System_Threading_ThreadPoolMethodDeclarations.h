#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadPool
struct ThreadPool_t1815;
// System.Threading.WaitCallback
struct WaitCallback_t1816;
// System.Object
struct Object_t;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t1809;
// System.Threading.WaitHandle
struct WaitHandle_t1211;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1808;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" bool ThreadPool_QueueUserWorkItem_m10201 (Object_t * __this /* static, unused */, WaitCallback_t1816 * ___callBack, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C" RegisteredWaitHandle_t1809 * ThreadPool_RegisterWaitForSingleObject_m10202 (Object_t * __this /* static, unused */, WaitHandle_t1211 * ___waitObject, WaitOrTimerCallback_t1808 * ___callBack, Object_t * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" RegisteredWaitHandle_t1809 * ThreadPool_RegisterWaitForSingleObject_m10203 (Object_t * __this /* static, unused */, WaitHandle_t1211 * ___waitObject, WaitOrTimerCallback_t1808 * ___callBack, Object_t * ___state, TimeSpan_t980  ___timeout, bool ___executeOnlyOnce, MethodInfo* method) IL2CPP_METHOD_ATTR;
