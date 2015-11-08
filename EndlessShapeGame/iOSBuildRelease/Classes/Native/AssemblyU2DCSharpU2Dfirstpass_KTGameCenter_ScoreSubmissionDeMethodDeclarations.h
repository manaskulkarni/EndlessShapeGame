#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// KTGameCenter/ScoreSubmissionDelegate
struct ScoreSubmissionDelegate_t94;
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

// System.Void KTGameCenter/ScoreSubmissionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ScoreSubmissionDelegate__ctor_m215 (ScoreSubmissionDelegate_t94 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/ScoreSubmissionDelegate::Invoke(System.String,System.String)
extern "C" void ScoreSubmissionDelegate_Invoke_m216 (ScoreSubmissionDelegate_t94 * __this, String_t* ___leaderboardId, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_ScoreSubmissionDelegate_t94(Il2CppObject* delegate, String_t* ___leaderboardId, String_t* ___error);
// System.IAsyncResult KTGameCenter/ScoreSubmissionDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreSubmissionDelegate_BeginInvoke_m217 (ScoreSubmissionDelegate_t94 * __this, String_t* ___leaderboardId, String_t* ___error, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/ScoreSubmissionDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ScoreSubmissionDelegate_EndInvoke_m218 (ScoreSubmissionDelegate_t94 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
