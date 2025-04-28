#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t606;
struct YieldInstruction_t606_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m3487 (YieldInstruction_t606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t606_marshal(const YieldInstruction_t606& unmarshaled, YieldInstruction_t606_marshaled& marshaled);
void YieldInstruction_t606_marshal_back(const YieldInstruction_t606_marshaled& marshaled, YieldInstruction_t606& unmarshaled);
void YieldInstruction_t606_marshal_cleanup(YieldInstruction_t606_marshaled& marshaled);
