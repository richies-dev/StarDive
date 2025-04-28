#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t537;
struct YieldInstruction_t537_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m3255 (YieldInstruction_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t537_marshal(const YieldInstruction_t537& unmarshaled, YieldInstruction_t537_marshaled& marshaled);
void YieldInstruction_t537_marshal_back(const YieldInstruction_t537_marshaled& marshaled, YieldInstruction_t537& unmarshaled);
void YieldInstruction_t537_marshal_cleanup(YieldInstruction_t537_marshaled& marshaled);
