﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1263;
// Mono.Math.BigInteger
struct BigInteger_t1264;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6503 (ModulusRing_t1263 * __this, BigInteger_t1264 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6504 (ModulusRing_t1263 * __this, BigInteger_t1264 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1264 * ModulusRing_Multiply_m6505 (ModulusRing_t1263 * __this, BigInteger_t1264 * ___a, BigInteger_t1264 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1264 * ModulusRing_Difference_m6506 (ModulusRing_t1263 * __this, BigInteger_t1264 * ___a, BigInteger_t1264 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1264 * ModulusRing_Pow_m6507 (ModulusRing_t1263 * __this, BigInteger_t1264 * ___a, BigInteger_t1264 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1264 * ModulusRing_Pow_m6508 (ModulusRing_t1263 * __this, uint32_t ___b, BigInteger_t1264 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
