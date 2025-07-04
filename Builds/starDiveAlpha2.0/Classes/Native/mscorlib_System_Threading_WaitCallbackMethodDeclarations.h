﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitCallback
struct WaitCallback_t1882;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitCallback__ctor_m11303 (WaitCallback_t1882 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern "C" void WaitCallback_Invoke_m11304 (WaitCallback_t1882 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitCallback_t1882(Il2CppObject* delegate, Object_t * ___state);
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitCallback_BeginInvoke_m11305 (WaitCallback_t1882 * __this, Object_t * ___state, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitCallback_EndInvoke_m11306 (WaitCallback_t1882 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
