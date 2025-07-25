﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t1674;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t1673;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void RenewalDelegate__ctor_m9212 (RenewalDelegate_t1674 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C" TimeSpan_t1047  RenewalDelegate_Invoke_m9213 (RenewalDelegate_t1674 * __this, Object_t * ___lease, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" TimeSpan_t1047  pinvoke_delegate_wrapper_RenewalDelegate_t1674(Il2CppObject* delegate, Object_t * ___lease);
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C" Object_t * RenewalDelegate_BeginInvoke_m9214 (RenewalDelegate_t1674 * __this, Object_t * ___lease, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C" TimeSpan_t1047  RenewalDelegate_EndInvoke_m9215 (RenewalDelegate_t1674 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
