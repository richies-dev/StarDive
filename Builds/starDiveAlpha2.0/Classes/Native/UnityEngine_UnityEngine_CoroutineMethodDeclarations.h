#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t390;
struct Coroutine_t390_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2836 (Coroutine_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2837 (Coroutine_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2838 (Coroutine_t390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t390_marshal(const Coroutine_t390& unmarshaled, Coroutine_t390_marshaled& marshaled);
void Coroutine_t390_marshal_back(const Coroutine_t390_marshaled& marshaled, Coroutine_t390& unmarshaled);
void Coroutine_t390_marshal_cleanup(Coroutine_t390_marshaled& marshaled);
