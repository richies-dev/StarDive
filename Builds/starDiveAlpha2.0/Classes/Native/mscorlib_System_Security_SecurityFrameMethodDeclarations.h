#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityFrame
struct SecurityFrame_t1838;
// System.Reflection.Assembly
struct Assembly_t1149;
// System.AppDomain
struct AppDomain_t1836;
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1837;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t973;

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m10106 (SecurityFrame_t1838 * __this, RuntimeSecurityFrame_t1837 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m10107 (Object_t * __this /* static, unused */, int32_t ___skip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m10108 (SecurityFrame_t1838 * __this, RuntimeSecurityFrame_t1837 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t1149 * SecurityFrame_get_Assembly_m10109 (SecurityFrame_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t1836 * SecurityFrame_get_Domain_m10110 (SecurityFrame_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m10111 (SecurityFrame_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t973 * SecurityFrame_GetStack_m10112 (Object_t * __this /* static, unused */, int32_t ___skipFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
