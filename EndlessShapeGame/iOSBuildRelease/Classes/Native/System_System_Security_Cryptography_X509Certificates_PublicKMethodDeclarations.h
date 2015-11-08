#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1069;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1082;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1071;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1070;
// System.Security.Cryptography.Oid
struct Oid_t1072;
// System.Byte[]
struct ByteU5BU5D_t1083;
// System.Security.Cryptography.DSA
struct DSA_t1195;
// System.Security.Cryptography.RSA
struct RSA_t1196;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5584 (PublicKey_t1069 * __this, X509Certificate_t1082 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1071 * PublicKey_get_EncodedKeyValue_m5585 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1071 * PublicKey_get_EncodedParameters_m5586 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1070 * PublicKey_get_Key_m5587 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1072 * PublicKey_get_Oid_m5588 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1083* PublicKey_GetUnsignedBigInteger_m5589 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1195 * PublicKey_DecodeDSA_m5590 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___rawPublicKey, ByteU5BU5D_t1083* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1196 * PublicKey_DecodeRSA_m5591 (Object_t * __this /* static, unused */, ByteU5BU5D_t1083* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
