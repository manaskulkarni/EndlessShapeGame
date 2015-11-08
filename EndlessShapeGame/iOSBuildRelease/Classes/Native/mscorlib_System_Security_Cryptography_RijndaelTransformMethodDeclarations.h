﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1852;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1390;
// System.Byte[]
struct ByteU5BU5D_t1083;
// System.UInt32[]
struct UInt32U5BU5D_t1249;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m10948 (RijndaelTransform_t1852 * __this, Rijndael_t1390 * ___algo, bool ___encryption, ByteU5BU5D_t1083* ___key, ByteU5BU5D_t1083* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m10949 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m10950 (RijndaelTransform_t1852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m10951 (RijndaelTransform_t1852 * __this, ByteU5BU5D_t1083* ___input, ByteU5BU5D_t1083* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m10952 (RijndaelTransform_t1852 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m10953 (RijndaelTransform_t1852 * __this, ByteU5BU5D_t1083* ___indata, ByteU5BU5D_t1083* ___outdata, UInt32U5BU5D_t1249* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m10954 (RijndaelTransform_t1852 * __this, ByteU5BU5D_t1083* ___indata, ByteU5BU5D_t1083* ___outdata, UInt32U5BU5D_t1249* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m10955 (RijndaelTransform_t1852 * __this, ByteU5BU5D_t1083* ___indata, ByteU5BU5D_t1083* ___outdata, UInt32U5BU5D_t1249* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m10956 (RijndaelTransform_t1852 * __this, ByteU5BU5D_t1083* ___indata, ByteU5BU5D_t1083* ___outdata, UInt32U5BU5D_t1249* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m10957 (RijndaelTransform_t1852 * __this, ByteU5BU5D_t1083* ___indata, ByteU5BU5D_t1083* ___outdata, UInt32U5BU5D_t1249* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m10958 (RijndaelTransform_t1852 * __this, ByteU5BU5D_t1083* ___indata, ByteU5BU5D_t1083* ___outdata, UInt32U5BU5D_t1249* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
