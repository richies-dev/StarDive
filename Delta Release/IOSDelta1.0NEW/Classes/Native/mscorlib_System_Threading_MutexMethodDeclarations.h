﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Mutex
struct Mutex_t1604;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
extern "C" void Mutex__ctor_m10152 (Mutex_t1604 * __this, bool ___initiallyOwned, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
extern "C" IntPtr_t Mutex_CreateMutex_internal_m10153 (Object_t * __this /* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
extern "C" bool Mutex_ReleaseMutex_internal_m10154 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
extern "C" void Mutex_ReleaseMutex_m10155 (Mutex_t1604 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
