#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1422;
// Mono.Math.BigInteger
struct BigInteger_t1417;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m7341 (ModulusRing_t1422 * __this, BigInteger_t1417 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m7342 (ModulusRing_t1422 * __this, BigInteger_t1417 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1417 * ModulusRing_Multiply_m7343 (ModulusRing_t1422 * __this, BigInteger_t1417 * ___a, BigInteger_t1417 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1417 * ModulusRing_Difference_m7344 (ModulusRing_t1422 * __this, BigInteger_t1417 * ___a, BigInteger_t1417 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1417 * ModulusRing_Pow_m7345 (ModulusRing_t1422 * __this, BigInteger_t1417 * ___a, BigInteger_t1417 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1417 * ModulusRing_Pow_m7346 (ModulusRing_t1422 * __this, uint32_t ___b, BigInteger_t1417 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
