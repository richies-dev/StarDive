#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1355;
// Mono.Math.BigInteger
struct BigInteger_t1350;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m7105 (ModulusRing_t1355 * __this, BigInteger_t1350 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m7106 (ModulusRing_t1355 * __this, BigInteger_t1350 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1350 * ModulusRing_Multiply_m7107 (ModulusRing_t1355 * __this, BigInteger_t1350 * ___a, BigInteger_t1350 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1350 * ModulusRing_Difference_m7108 (ModulusRing_t1355 * __this, BigInteger_t1350 * ___a, BigInteger_t1350 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1350 * ModulusRing_Pow_m7109 (ModulusRing_t1355 * __this, BigInteger_t1350 * ___a, BigInteger_t1350 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1350 * ModulusRing_Pow_m7110 (ModulusRing_t1355 * __this, uint32_t ___b, BigInteger_t1350 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
