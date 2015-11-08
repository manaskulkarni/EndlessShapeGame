#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<ShapeManager/ShapeProperties>
struct Predicate_1_t2201;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t92;
// System.AsyncCallback
struct AsyncCallback_t93;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ShapeManager/ShapeProperties
#include "AssemblyU2DCSharp_ShapeManager_ShapeProperties.h"

// System.Void System.Predicate`1<ShapeManager/ShapeProperties>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m13590_gshared (Predicate_1_t2201 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m13590(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2201 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m13590_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<ShapeManager/ShapeProperties>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m13591_gshared (Predicate_1_t2201 * __this, ShapeProperties_t180  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m13591(__this, ___obj, method) (( bool (*) (Predicate_1_t2201 *, ShapeProperties_t180 , const MethodInfo*))Predicate_1_Invoke_m13591_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<ShapeManager/ShapeProperties>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m13592_gshared (Predicate_1_t2201 * __this, ShapeProperties_t180  ___obj, AsyncCallback_t93 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m13592(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2201 *, ShapeProperties_t180 , AsyncCallback_t93 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m13592_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<ShapeManager/ShapeProperties>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m13593_gshared (Predicate_1_t2201 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m13593(__this, ___result, method) (( bool (*) (Predicate_1_t2201 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m13593_gshared)(__this, ___result, method)
