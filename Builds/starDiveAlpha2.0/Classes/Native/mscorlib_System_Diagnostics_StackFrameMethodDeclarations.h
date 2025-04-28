﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackFrame
struct StackFrame_t816;
// System.Reflection.MethodBase
struct MethodBase_t817;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackFrame::.ctor()
extern "C" void StackFrame__ctor_m7950 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
extern "C" void StackFrame__ctor_m7951 (StackFrame_t816 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
extern "C" bool StackFrame_get_frame_info_m7952 (Object_t * __this /* static, unused */, int32_t ___skip, bool ___needFileInfo, MethodBase_t817 ** ___method, int32_t* ___iloffset, int32_t* ___native_offset, String_t** ___file, int32_t* ___line, int32_t* ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
extern "C" int32_t StackFrame_GetFileLineNumber_m3934 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
extern "C" String_t* StackFrame_GetFileName_m3933 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
extern "C" String_t* StackFrame_GetSecureFileName_m7953 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
extern "C" int32_t StackFrame_GetILOffset_m7954 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
extern "C" MethodBase_t817 * StackFrame_GetMethod_m3928 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
extern "C" int32_t StackFrame_GetNativeOffset_m7955 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
extern "C" String_t* StackFrame_GetInternalMethodName_m7956 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
extern "C" String_t* StackFrame_ToString_m7957 (StackFrame_t816 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
