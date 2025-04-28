#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t644;
struct Gradient_t644_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2997 (Gradient_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2998 (Gradient_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2999 (Gradient_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m3000 (Gradient_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t644_marshal(const Gradient_t644& unmarshaled, Gradient_t644_marshaled& marshaled);
void Gradient_t644_marshal_back(const Gradient_t644_marshaled& marshaled, Gradient_t644& unmarshaled);
void Gradient_t644_marshal_cleanup(Gradient_t644_marshaled& marshaled);
