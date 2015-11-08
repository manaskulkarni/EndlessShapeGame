#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// KTGameCenter/ResetAchievementsDelegate
struct ResetAchievementsDelegate_t96;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void KTGameCenter/ResetAchievementsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ResetAchievementsDelegate__ctor_m223 (ResetAchievementsDelegate_t96 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/ResetAchievementsDelegate::Invoke(System.String)
extern "C" void ResetAchievementsDelegate_Invoke_m224 (ResetAchievementsDelegate_t96 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_ResetAchievementsDelegate_t96(Il2CppObject* delegate, String_t* ___error);
// System.IAsyncResult KTGameCenter/ResetAchievementsDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * ResetAchievementsDelegate_BeginInvoke_m225 (ResetAchievementsDelegate_t96 * __this, String_t* ___error, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/ResetAchievementsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ResetAchievementsDelegate_EndInvoke_m226 (ResetAchievementsDelegate_t96 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
