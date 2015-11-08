﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t1941;
// System.Object
struct Object_t;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t1947;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AssemblyLoadEventHandler__ctor_m12363 (AssemblyLoadEventHandler_t1941 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C" void AssemblyLoadEventHandler_Invoke_m12364 (AssemblyLoadEventHandler_t1941 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1947 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t1941(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t1947 * ___args);
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m12365 (AssemblyLoadEventHandler_t1941 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t1947 * ___args, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AssemblyLoadEventHandler_EndInvoke_m12366 (AssemblyLoadEventHandler_t1941 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
