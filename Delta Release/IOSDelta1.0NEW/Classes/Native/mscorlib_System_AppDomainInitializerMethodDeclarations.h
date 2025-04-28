#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomainInitializer
struct AppDomainInitializer_t1832;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t34;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m11075 (AppDomainInitializer_t1832 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m11076 (AppDomainInitializer_t1832 * __this, StringU5BU5D_t34* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1832(Il2CppObject* delegate, StringU5BU5D_t34* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m11077 (AppDomainInitializer_t1832 * __this, StringU5BU5D_t34* ___args, AsyncCallback_t311 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m11078 (AppDomainInitializer_t1832 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
