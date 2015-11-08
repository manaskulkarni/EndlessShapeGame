#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1273;
// Mono.Security.ASN1
struct ASN1_t1197;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1272;
// System.Byte[]
struct ByteU5BU5D_t1083;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m6597 (EncryptedData_t1273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m6598 (EncryptedData_t1273 * __this, ASN1_t1197 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1272 * EncryptedData_get_EncryptionAlgorithm_m6599 (EncryptedData_t1273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t1083* EncryptedData_get_EncryptedContent_m6600 (EncryptedData_t1273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
