#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1393;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1070;
// System.Byte[]
struct ByteU5BU5D_t1083;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m7396 (RSAPKCS1KeyExchangeFormatter_t1393 * __this, AsymmetricAlgorithm_t1070 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t1083* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m10929 (RSAPKCS1KeyExchangeFormatter_t1393 * __this, ByteU5BU5D_t1083* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m10930 (RSAPKCS1KeyExchangeFormatter_t1393 * __this, AsymmetricAlgorithm_t1070 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
