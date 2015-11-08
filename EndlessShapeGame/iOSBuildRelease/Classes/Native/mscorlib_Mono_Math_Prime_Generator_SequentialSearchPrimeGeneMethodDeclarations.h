#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1459;
// Mono.Math.BigInteger
struct BigInteger_t1464;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m8380 (SequentialSearchPrimeGeneratorBase_t1459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t1464 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m8381 (SequentialSearchPrimeGeneratorBase_t1459 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t1464 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m8382 (SequentialSearchPrimeGeneratorBase_t1459 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t1464 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m8383 (SequentialSearchPrimeGeneratorBase_t1459 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m8384 (SequentialSearchPrimeGeneratorBase_t1459 * __this, BigInteger_t1464 * ___bi, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
