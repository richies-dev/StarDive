#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t597;
struct AsyncOperation_t597_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3362 (AsyncOperation_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3363 (AsyncOperation_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m3364 (AsyncOperation_t597 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t597_marshal(const AsyncOperation_t597& unmarshaled, AsyncOperation_t597_marshaled& marshaled);
void AsyncOperation_t597_marshal_back(const AsyncOperation_t597_marshaled& marshaled, AsyncOperation_t597& unmarshaled);
void AsyncOperation_t597_marshal_cleanup(AsyncOperation_t597_marshaled& marshaled);
