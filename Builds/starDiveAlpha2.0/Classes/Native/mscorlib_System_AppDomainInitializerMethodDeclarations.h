#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomainInitializer
struct AppDomainInitializer_t1898;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t104;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m11311 (AppDomainInitializer_t1898 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m11312 (AppDomainInitializer_t1898 * __this, StringU5BU5D_t104* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1898(Il2CppObject* delegate, StringU5BU5D_t104* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m11313 (AppDomainInitializer_t1898 * __this, StringU5BU5D_t104* ___args, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m11314 (AppDomainInitializer_t1898 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
