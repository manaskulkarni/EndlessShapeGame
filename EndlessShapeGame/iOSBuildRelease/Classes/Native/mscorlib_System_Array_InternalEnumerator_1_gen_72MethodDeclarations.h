#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_72.h"
// System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_5.h"

// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m22057_gshared (InternalEnumerator_1_t2821 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m22057(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2821 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m22057_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22058_gshared (InternalEnumerator_1_t2821 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22058(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2821 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22058_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m22059_gshared (InternalEnumerator_1_t2821 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m22059(__this, method) (( void (*) (InternalEnumerator_1_t2821 *, const MethodInfo*))InternalEnumerator_1_Dispose_m22059_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m22060_gshared (InternalEnumerator_1_t2821 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m22060(__this, method) (( bool (*) (InternalEnumerator_1_t2821 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m22060_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
extern "C" X509ChainStatus_t1094  InternalEnumerator_1_get_Current_m22061_gshared (InternalEnumerator_1_t2821 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m22061(__this, method) (( X509ChainStatus_t1094  (*) (InternalEnumerator_1_t2821 *, const MethodInfo*))InternalEnumerator_1_get_Current_m22061_gshared)(__this, method)
