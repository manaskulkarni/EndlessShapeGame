#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1294;
// Mono.Security.ASN1
struct ASN1_t1197;
// System.String[]
struct StringU5BU5D_t110;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m6797 (GeneralNames_t1294 * __this, ASN1_t1197 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t110* GeneralNames_get_DNSNames_m6798 (GeneralNames_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t110* GeneralNames_get_IPAddresses_m6799 (GeneralNames_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m6800 (GeneralNames_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
