#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackFrame
struct StackFrame_t749;
// System.Reflection.MethodBase
struct MethodBase_t750;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackFrame::.ctor()
extern "C" void StackFrame__ctor_m7714 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
extern "C" void StackFrame__ctor_m7715 (StackFrame_t749 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
extern "C" bool StackFrame_get_frame_info_m7716 (Object_t * __this /* static, unused */, int32_t ___skip, bool ___needFileInfo, MethodBase_t750 ** ___method, int32_t* ___iloffset, int32_t* ___native_offset, String_t** ___file, int32_t* ___line, int32_t* ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
extern "C" int32_t StackFrame_GetFileLineNumber_m3697 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
extern "C" String_t* StackFrame_GetFileName_m3696 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
extern "C" String_t* StackFrame_GetSecureFileName_m7717 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
extern "C" int32_t StackFrame_GetILOffset_m7718 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
extern "C" MethodBase_t750 * StackFrame_GetMethod_m3691 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
extern "C" int32_t StackFrame_GetNativeOffset_m7719 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
extern "C" String_t* StackFrame_GetInternalMethodName_m7720 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
extern "C" String_t* StackFrame_ToString_m7721 (StackFrame_t749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
