#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1832;
// System.Threading.CompressedStack
struct CompressedStack_t1831;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m10066 (SecurityContext_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m10067 (SecurityContext_t1832 * __this, SecurityContext_t1832 * ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1832 * SecurityContext_Capture_m10068 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m10069 (SecurityContext_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1831 * SecurityContext_get_CompressedStack_m10070 (SecurityContext_t1832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
