#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1493;
// Mono.Security.ASN1
struct ASN1_t1481;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1492;
// System.Byte[]
struct ByteU5BU5D_t1083;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m8702 (EncryptedData_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m8703 (EncryptedData_t1493 * __this, ASN1_t1481 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1492 * EncryptedData_get_EncryptionAlgorithm_m8704 (EncryptedData_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t1083* EncryptedData_get_EncryptedContent_m8705 (EncryptedData_t1493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
