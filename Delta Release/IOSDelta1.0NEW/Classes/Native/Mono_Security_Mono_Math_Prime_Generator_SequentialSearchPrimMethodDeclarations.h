﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1143;
// Mono.Math.BigInteger
struct BigInteger_t1133;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m5182 (SequentialSearchPrimeGeneratorBase_t1143 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t1133 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m5183 (SequentialSearchPrimeGeneratorBase_t1143 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t1133 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m5184 (SequentialSearchPrimeGeneratorBase_t1143 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t1133 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m5185 (SequentialSearchPrimeGeneratorBase_t1143 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m5186 (SequentialSearchPrimeGeneratorBase_t1143 * __this, BigInteger_t1133 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
