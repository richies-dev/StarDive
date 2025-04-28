#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t321;
struct Coroutine_t321_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2619 (Coroutine_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2620 (Coroutine_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2621 (Coroutine_t321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t321_marshal(const Coroutine_t321& unmarshaled, Coroutine_t321_marshaled& marshaled);
void Coroutine_t321_marshal_back(const Coroutine_t321_marshaled& marshaled, Coroutine_t321& unmarshaled);
void Coroutine_t321_marshal_cleanup(Coroutine_t321_marshaled& marshaled);
