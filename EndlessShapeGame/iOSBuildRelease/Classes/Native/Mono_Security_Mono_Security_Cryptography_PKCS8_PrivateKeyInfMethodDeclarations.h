#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1283;
// System.Byte[]
struct ByteU5BU5D_t1083;
// System.Security.Cryptography.RSA
struct RSA_t1196;
// System.Security.Cryptography.DSA
struct DSA_t1195;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m6638 (PrivateKeyInfo_t1283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m6639 (PrivateKeyInfo_t1283 * __this, ByteU5BU5D_t1083* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t1083* PrivateKeyInfo_get_PrivateKey_m6640 (PrivateKeyInfo_t1283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m6641 (PrivateKeyInfo_t1283 * __this, ByteU5BU5D_t1083* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t1083* PrivateKeyInfo_RemoveLeadingZero_m6642 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t1083* PrivateKeyInfo_Normalize_m6643 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1196 * PrivateKeyInfo_DecodeRSA_m6644 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1195 * PrivateKeyInfo_DecodeDSA_m6645 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___privateKey, DSAParameters_t1221  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
