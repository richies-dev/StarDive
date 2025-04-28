#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1808;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitOrTimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitOrTimerCallback__ctor_m11071 (WaitOrTimerCallback_t1808 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
extern "C" void WaitOrTimerCallback_Invoke_m11072 (WaitOrTimerCallback_t1808 * __this, Object_t * ___state, bool ___timedOut, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitOrTimerCallback_t1808(Il2CppObject* delegate, Object_t * ___state, bool ___timedOut);
// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitOrTimerCallback_BeginInvoke_m11073 (WaitOrTimerCallback_t1808 * __this, Object_t * ___state, bool ___timedOut, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitOrTimerCallback_EndInvoke_m11074 (WaitOrTimerCallback_t1808 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
