#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1942;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1215;
// System.ResolveEventArgs
struct ResolveEventArgs_t1998;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m12369 (ResolveEventHandler_t1942 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1215 * ResolveEventHandler_Invoke_m12370 (ResolveEventHandler_t1942 * __this, Object_t * ___sender, ResolveEventArgs_t1998 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1215 * pinvoke_delegate_wrapper_ResolveEventHandler_t1942(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1998 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m12371 (ResolveEventHandler_t1942 * __this, Object_t * ___sender, ResolveEventArgs_t1998 * ___args, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1215 * ResolveEventHandler_EndInvoke_m12372 (ResolveEventHandler_t1942 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
