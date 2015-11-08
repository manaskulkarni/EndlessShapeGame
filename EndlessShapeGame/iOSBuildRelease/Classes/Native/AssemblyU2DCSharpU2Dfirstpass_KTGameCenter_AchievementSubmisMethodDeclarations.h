#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// KTGameCenter/AchievementSubmissionDelegate
struct AchievementSubmissionDelegate_t95;
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

// System.Void KTGameCenter/AchievementSubmissionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void AchievementSubmissionDelegate__ctor_m219 (AchievementSubmissionDelegate_t95 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/AchievementSubmissionDelegate::Invoke(System.String,System.String)
extern "C" void AchievementSubmissionDelegate_Invoke_m220 (AchievementSubmissionDelegate_t95 * __this, String_t* ___achId, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_AchievementSubmissionDelegate_t95(Il2CppObject* delegate, String_t* ___achId, String_t* ___error);
// System.IAsyncResult KTGameCenter/AchievementSubmissionDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * AchievementSubmissionDelegate_BeginInvoke_m221 (AchievementSubmissionDelegate_t95 * __this, String_t* ___achId, String_t* ___error, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/AchievementSubmissionDelegate::EndInvoke(System.IAsyncResult)
extern "C" void AchievementSubmissionDelegate_EndInvoke_m222 (AchievementSubmissionDelegate_t95 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
