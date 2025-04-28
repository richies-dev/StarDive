#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t228;
struct WaitForSeconds_t228_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m828 (WaitForSeconds_t228 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t228_marshal(const WaitForSeconds_t228& unmarshaled, WaitForSeconds_t228_marshaled& marshaled);
void WaitForSeconds_t228_marshal_back(const WaitForSeconds_t228_marshaled& marshaled, WaitForSeconds_t228& unmarshaled);
void WaitForSeconds_t228_marshal_cleanup(WaitForSeconds_t228_marshaled& marshaled);
