#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t528;
struct AsyncOperation_t528_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3138 (AsyncOperation_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3139 (AsyncOperation_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3140 (AsyncOperation_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t528_marshal(const AsyncOperation_t528& unmarshaled, AsyncOperation_t528_marshaled& marshaled);
void AsyncOperation_t528_marshal_back(const AsyncOperation_t528_marshaled& marshaled, AsyncOperation_t528& unmarshaled);
void AsyncOperation_t528_marshal_cleanup(AsyncOperation_t528_marshaled& marshaled);
