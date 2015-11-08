#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1882;
// System.Threading.CompressedStack
struct CompressedStack_t1883;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m11119 (SecurityContext_t1882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m11120 (SecurityContext_t1882 * __this, SecurityContext_t1882 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1882 * SecurityContext_Capture_m11121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m11122 (SecurityContext_t1882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1883 * SecurityContext_get_CompressedStack_m11123 (SecurityContext_t1882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
