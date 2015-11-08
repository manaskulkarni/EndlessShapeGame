#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BackgroundSprite/Del
struct Del_t129;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BackgroundSprite/Del::.ctor(System.Object,System.IntPtr)
extern "C" void Del__ctor_m520 (Del_t129 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite/Del::Invoke()
extern "C" void Del_Invoke_m521 (Del_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Del_t129(Il2CppObject* delegate);
// System.IAsyncResult BackgroundSprite/Del::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Del_BeginInvoke_m522 (Del_t129 * __this, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundSprite/Del::EndInvoke(System.IAsyncResult)
extern "C" void Del_EndInvoke_m523 (Del_t129 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
