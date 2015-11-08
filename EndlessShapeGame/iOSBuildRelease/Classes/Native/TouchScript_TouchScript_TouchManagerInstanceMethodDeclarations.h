#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t634;
// System.EventHandler
struct EventHandler_t169;
// System.EventHandler`1<TouchScript.TouchEventArgs>
struct EventHandler_1_t253;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t663;
// System.Collections.Generic.IList`1<TouchScript.Layers.TouchLayer>
struct IList_1_t682;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t638;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t624;
// UnityEngine.Transform
struct Transform_t48;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t666;
// TouchScript.ITouch
struct ITouch_t257;
// TouchScript.Tags
struct Tags_t637;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TouchScript.TouchManagerInstance::.ctor()
extern "C" void TouchManagerInstance__ctor_m3723 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::.cctor()
extern "C" void TouchManagerInstance__cctor_m3724 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_FrameStarted(System.EventHandler)
extern "C" void TouchManagerInstance_add_FrameStarted_m3725 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_FrameStarted(System.EventHandler)
extern "C" void TouchManagerInstance_remove_FrameStarted_m3726 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_FrameFinished(System.EventHandler)
extern "C" void TouchManagerInstance_add_FrameFinished_m3727 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_FrameFinished(System.EventHandler)
extern "C" void TouchManagerInstance_remove_FrameFinished_m3728 (TouchManagerInstance_t634 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_add_TouchesBegan_m3729 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_remove_TouchesBegan_m3730 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_add_TouchesMoved_m3731 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_remove_TouchesMoved_m3732 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_add_TouchesEnded_m3733 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_remove_TouchesEnded_m3734 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_add_TouchesCancelled_m3735 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C" void TouchManagerInstance_remove_TouchesCancelled_m3736 (TouchManagerInstance_t634 * __this, EventHandler_1_t253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.TouchManagerInstance TouchScript.TouchManagerInstance::get_Instance()
extern "C" TouchManagerInstance_t634 * TouchManagerInstance_get_Instance_m3737 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManagerInstance::get_DisplayDevice()
extern "C" Object_t * TouchManagerInstance_get_DisplayDevice_m3738 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice)
extern "C" void TouchManagerInstance_set_DisplayDevice_m3739 (TouchManagerInstance_t634 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.TouchManagerInstance::get_DPI()
extern "C" float TouchManagerInstance_get_DPI_m3740 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::get_Layers()
extern "C" Object_t* TouchManagerInstance_get_Layers_m3741 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.TouchManagerInstance::get_DotsPerCentimeter()
extern "C" float TouchManagerInstance_get_DotsPerCentimeter_m3742 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.TouchManagerInstance::get_NumberOfTouches()
extern "C" int32_t TouchManagerInstance_get_NumberOfTouches_m3743 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.TouchManagerInstance::get_ActiveTouches()
extern "C" Object_t* TouchManagerInstance_get_ActiveTouches_m3744 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::AddLayer(TouchScript.Layers.TouchLayer)
extern "C" bool TouchManagerInstance_AddLayer_m3745 (TouchManagerInstance_t634 * __this, TouchLayer_t624 * ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::AddLayer(TouchScript.Layers.TouchLayer,System.Int32)
extern "C" bool TouchManagerInstance_AddLayer_m3746 (TouchManagerInstance_t634 * __this, TouchLayer_t624 * ___layer, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::RemoveLayer(TouchScript.Layers.TouchLayer)
extern "C" bool TouchManagerInstance_RemoveLayer_m3747 (TouchManagerInstance_t634 * __this, TouchLayer_t624 * ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::ChangeLayerIndex(System.Int32,System.Int32)
extern "C" void TouchManagerInstance_ChangeLayerIndex_m3748 (TouchManagerInstance_t634 * __this, int32_t ___at, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2)
extern "C" Transform_t48 * TouchManagerInstance_GetHitTarget_m3749 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C" bool TouchManagerInstance_GetHitTarget_m3750 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, Object_t ** ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&,TouchScript.Layers.TouchLayer&)
extern "C" bool TouchManagerInstance_GetHitTarget_m3751 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, Object_t ** ___hit, TouchLayer_t624 ** ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.TouchManagerInstance::BeginTouch(UnityEngine.Vector2)
extern "C" Object_t * TouchManagerInstance_BeginTouch_m3752 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.TouchManagerInstance::BeginTouch(UnityEngine.Vector2,TouchScript.Tags)
extern "C" Object_t * TouchManagerInstance_BeginTouch_m3753 (TouchManagerInstance_t634 * __this, Vector2_t85  ___position, Tags_t637 * ___tags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::UpdateTouch(System.Int32)
extern "C" void TouchManagerInstance_UpdateTouch_m3754 (TouchManagerInstance_t634 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::MoveTouch(System.Int32,UnityEngine.Vector2)
extern "C" void TouchManagerInstance_MoveTouch_m3755 (TouchManagerInstance_t634 * __this, int32_t ___id, Vector2_t85  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::EndTouch(System.Int32)
extern "C" void TouchManagerInstance_EndTouch_m3756 (TouchManagerInstance_t634 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::CancelTouch(System.Int32)
extern "C" void TouchManagerInstance_CancelTouch_m3757 (TouchManagerInstance_t634 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::Awake()
extern "C" void TouchManagerInstance_Awake_m3758 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::OnLevelWasLoaded(System.Int32)
extern "C" void TouchManagerInstance_OnLevelWasLoaded_m3759 (TouchManagerInstance_t634 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TouchScript.TouchManagerInstance::lateAwake()
extern "C" Object_t * TouchManagerInstance_lateAwake_m3760 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::Update()
extern "C" void TouchManagerInstance_Update_m3761 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::OnApplicationQuit()
extern "C" void TouchManagerInstance_OnApplicationQuit_m3762 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateDPI()
extern "C" void TouchManagerInstance_updateDPI_m3763 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateLayers()
extern "C" void TouchManagerInstance_updateLayers_m3764 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::createCameraLayer()
extern "C" void TouchManagerInstance_createCameraLayer_m3765 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::createTouchInput()
extern "C" void TouchManagerInstance_createTouchInput_m3766 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateBegan()
extern "C" void TouchManagerInstance_updateBegan_m3767 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateUpdated()
extern "C" void TouchManagerInstance_updateUpdated_m3768 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateEnded()
extern "C" void TouchManagerInstance_updateEnded_m3769 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateCancelled()
extern "C" void TouchManagerInstance_updateCancelled_m3770 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateTouches()
extern "C" void TouchManagerInstance_updateTouches_m3771 (TouchManagerInstance_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::<updateLayers>m__8(TouchScript.Layers.TouchLayer)
extern "C" bool TouchManagerInstance_U3CupdateLayersU3Em__8_m3772 (Object_t * __this /* static, unused */, TouchLayer_t624 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
