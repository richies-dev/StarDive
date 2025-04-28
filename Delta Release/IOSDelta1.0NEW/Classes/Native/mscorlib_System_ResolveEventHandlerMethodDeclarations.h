#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1829;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1082;
// System.ResolveEventArgs
struct ResolveEventArgs_t1889;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m11087 (ResolveEventHandler_t1829 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1082 * ResolveEventHandler_Invoke_m11088 (ResolveEventHandler_t1829 * __this, Object_t * ___sender, ResolveEventArgs_t1889 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1082 * pinvoke_delegate_wrapper_ResolveEventHandler_t1829(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1889 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m11089 (ResolveEventHandler_t1829 * __this, Object_t * ___sender, ResolveEventArgs_t1889 * ___args, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1082 * ResolveEventHandler_EndInvoke_m11090 (ResolveEventHandler_t1829 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
