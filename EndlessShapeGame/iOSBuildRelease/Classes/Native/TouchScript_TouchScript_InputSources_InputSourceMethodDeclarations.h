#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.InputSources.InputSource
struct InputSource_t633;
// TouchScript.InputSources.ICoordinatesRemapper
struct ICoordinatesRemapper_t635;
// TouchScript.ITouch
struct ITouch_t257;
// TouchScript.Tags
struct Tags_t637;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.InputSources.InputSource::.ctor()
extern "C" void InputSource__ctor_m3602 (InputSource_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.InputSources.ICoordinatesRemapper TouchScript.InputSources.InputSource::get_CoordinatesRemapper()
extern "C" Object_t * InputSource_get_CoordinatesRemapper_m3603 (InputSource_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::set_CoordinatesRemapper(TouchScript.InputSources.ICoordinatesRemapper)
extern "C" void InputSource_set_CoordinatesRemapper_m3604 (InputSource_t633 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::OnEnable()
extern "C" void InputSource_OnEnable_m3605 (InputSource_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::OnDisable()
extern "C" void InputSource_OnDisable_m3606 (InputSource_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::Update()
extern "C" void InputSource_Update_m3607 (InputSource_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2)
extern "C" Object_t * InputSource_beginTouch_m3608 (InputSource_t633 * __this, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.InputSources.InputSource::beginTouch(UnityEngine.Vector2,TouchScript.Tags)
extern "C" Object_t * InputSource_beginTouch_m3609 (InputSource_t633 * __this, Vector2_t85  ___position, Tags_t637 * ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::updateTouch(System.Int32)
extern "C" void InputSource_updateTouch_m3610 (InputSource_t633 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::moveTouch(System.Int32,UnityEngine.Vector2)
extern "C" void InputSource_moveTouch_m3611 (InputSource_t633 * __this, int32_t ___id, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::endTouch(System.Int32)
extern "C" void InputSource_endTouch_m3612 (InputSource_t633 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.InputSources.InputSource::cancelTouch(System.Int32)
extern "C" void InputSource_cancelTouch_m3613 (InputSource_t633 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
