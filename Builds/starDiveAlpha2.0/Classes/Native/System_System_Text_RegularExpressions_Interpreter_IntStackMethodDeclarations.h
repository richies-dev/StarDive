﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1095;
struct IntStack_t1095_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m4702 (IntStack_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m4703 (IntStack_t1095 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m4704 (IntStack_t1095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m4705 (IntStack_t1095 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t1095_marshal(const IntStack_t1095& unmarshaled, IntStack_t1095_marshaled& marshaled);
void IntStack_t1095_marshal_back(const IntStack_t1095_marshaled& marshaled, IntStack_t1095& unmarshaled);
void IntStack_t1095_marshal_cleanup(IntStack_t1095_marshaled& marshaled);
