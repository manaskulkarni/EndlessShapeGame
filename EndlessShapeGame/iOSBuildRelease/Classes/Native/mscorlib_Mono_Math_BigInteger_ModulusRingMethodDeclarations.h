#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1463;
// Mono.Math.BigInteger
struct BigInteger_t1464;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8389 (ModulusRing_t1463 * __this, BigInteger_t1464 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8390 (ModulusRing_t1463 * __this, BigInteger_t1464 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1464 * ModulusRing_Multiply_m8391 (ModulusRing_t1463 * __this, BigInteger_t1464 * ___a, BigInteger_t1464 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1464 * ModulusRing_Difference_m8392 (ModulusRing_t1463 * __this, BigInteger_t1464 * ___a, BigInteger_t1464 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1464 * ModulusRing_Pow_m8393 (ModulusRing_t1463 * __this, BigInteger_t1464 * ___a, BigInteger_t1464 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1464 * ModulusRing_Pow_m8394 (ModulusRing_t1463 * __this, uint32_t ___b, BigInteger_t1464 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
