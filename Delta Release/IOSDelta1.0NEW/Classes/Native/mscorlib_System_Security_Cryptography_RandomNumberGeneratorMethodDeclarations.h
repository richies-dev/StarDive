﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1138;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t952;

// System.Void System.Security.Cryptography.RandomNumberGenerator::.ctor()
extern "C" void RandomNumberGenerator__ctor_m9660 (RandomNumberGenerator_t1138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C" RandomNumberGenerator_t1138 * RandomNumberGenerator_Create_m5919 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create(System.String)
extern "C" RandomNumberGenerator_t1138 * RandomNumberGenerator_Create_m9661 (Object_t * __this /* static, unused */, String_t* ___rngName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[])
// System.Void System.Security.Cryptography.RandomNumberGenerator::GetNonZeroBytes(System.Byte[])
