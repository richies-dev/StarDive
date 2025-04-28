#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Group
struct Group_t1070;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1069;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void Group__ctor_m4566 (Group_t1070 * __this, String_t* ___text, int32_t ___index, int32_t ___length, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32)
extern "C" void Group__ctor_m4567 (Group_t1070 * __this, String_t* ___text, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor()
extern "C" void Group__ctor_m4568 (Group_t1070 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.cctor()
extern "C" void Group__cctor_m4569 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
extern "C" CaptureCollection_t1069 * Group_get_Captures_m4570 (Group_t1070 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C" bool Group_get_Success_m4571 (Group_t1070 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
