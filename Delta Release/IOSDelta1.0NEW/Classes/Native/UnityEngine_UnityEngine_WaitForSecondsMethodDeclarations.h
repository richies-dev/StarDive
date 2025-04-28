#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t157;
struct WaitForSeconds_t157_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m590 (WaitForSeconds_t157 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t157_marshal(const WaitForSeconds_t157& unmarshaled, WaitForSeconds_t157_marshaled& marshaled);
void WaitForSeconds_t157_marshal_back(const WaitForSeconds_t157_marshaled& marshaled, WaitForSeconds_t157& unmarshaled);
void WaitForSeconds_t157_marshal_cleanup(WaitForSeconds_t157_marshaled& marshaled);
