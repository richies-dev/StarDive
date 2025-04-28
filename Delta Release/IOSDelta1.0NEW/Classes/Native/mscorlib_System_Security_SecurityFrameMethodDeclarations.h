#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityFrame
struct SecurityFrame_t1772;
// System.Reflection.Assembly
struct Assembly_t1082;
// System.AppDomain
struct AppDomain_t1770;
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1771;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t906;

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m9870 (SecurityFrame_t1772 * __this, RuntimeSecurityFrame_t1771 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m9871 (Object_t * __this /* static, unused */, int32_t ___skip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m9872 (SecurityFrame_t1772 * __this, RuntimeSecurityFrame_t1771 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t1082 * SecurityFrame_get_Assembly_m9873 (SecurityFrame_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t1770 * SecurityFrame_get_Domain_m9874 (SecurityFrame_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m9875 (SecurityFrame_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t906 * SecurityFrame_GetStack_m9876 (Object_t * __this /* static, unused */, int32_t ___skipFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
