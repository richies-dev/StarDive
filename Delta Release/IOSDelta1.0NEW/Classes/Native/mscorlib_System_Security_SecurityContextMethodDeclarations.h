#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1766;
// System.Threading.CompressedStack
struct CompressedStack_t1765;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m9830 (SecurityContext_t1766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m9831 (SecurityContext_t1766 * __this, SecurityContext_t1766 * ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1766 * SecurityContext_Capture_m9832 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m9833 (SecurityContext_t1766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1765 * SecurityContext_get_CompressedStack_m9834 (SecurityContext_t1766 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
