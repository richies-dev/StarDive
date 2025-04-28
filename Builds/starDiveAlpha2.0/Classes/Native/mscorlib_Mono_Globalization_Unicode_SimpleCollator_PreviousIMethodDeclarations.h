#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t1408;
struct PreviousInfo_t1408_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m7256 (PreviousInfo_t1408 * __this, bool ___dummy, MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t1408_marshal(const PreviousInfo_t1408& unmarshaled, PreviousInfo_t1408_marshaled& marshaled);
void PreviousInfo_t1408_marshal_back(const PreviousInfo_t1408_marshaled& marshaled, PreviousInfo_t1408& unmarshaled);
void PreviousInfo_t1408_marshal_cleanup(PreviousInfo_t1408_marshaled& marshaled);
