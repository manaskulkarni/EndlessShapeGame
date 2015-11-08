#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// KTGameCenter/UserAuthenticatationDelegate
struct UserAuthenticatationDelegate_t90;
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

// System.Void KTGameCenter/UserAuthenticatationDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void UserAuthenticatationDelegate__ctor_m211 (UserAuthenticatationDelegate_t90 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/UserAuthenticatationDelegate::Invoke(System.String)
extern "C" void UserAuthenticatationDelegate_Invoke_m212 (UserAuthenticatationDelegate_t90 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_UserAuthenticatationDelegate_t90(Il2CppObject* delegate, String_t* ___value);
// System.IAsyncResult KTGameCenter/UserAuthenticatationDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * UserAuthenticatationDelegate_BeginInvoke_m213 (UserAuthenticatationDelegate_t90 * __this, String_t* ___value, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter/UserAuthenticatationDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UserAuthenticatationDelegate_EndInvoke_m214 (UserAuthenticatationDelegate_t90 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
