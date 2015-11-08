#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1354;
// Mono.Security.Protocol.Tls.Context
struct Context_t1308;
// System.Security.Cryptography.RSA
struct RSA_t1196;
// System.Byte[]
struct ByteU5BU5D_t1083;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m7252 (TlsClientCertificateVerify_t1354 * __this, Context_t1308 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m7253 (TlsClientCertificateVerify_t1354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m7254 (TlsClientCertificateVerify_t1354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m7255 (TlsClientCertificateVerify_t1354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t1196 * TlsClientCertificateVerify_getClientCertRSA_m7256 (TlsClientCertificateVerify_t1354 * __this, RSA_t1196 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1083* TlsClientCertificateVerify_getUnsignedBigInteger_m7257 (TlsClientCertificateVerify_t1354 * __this, ByteU5BU5D_t1083* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
