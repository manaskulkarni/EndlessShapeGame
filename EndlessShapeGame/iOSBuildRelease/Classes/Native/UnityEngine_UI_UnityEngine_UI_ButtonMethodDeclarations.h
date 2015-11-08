#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t340;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t337;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t314;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t278;
// System.Collections.IEnumerator
struct IEnumerator_t222;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1597 (Button_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t337 * Button_get_onClick_m1598 (Button_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1599 (Button_t340 * __this, ButtonClickedEvent_t337 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1600 (Button_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1601 (Button_t340 * __this, PointerEventData_t314 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1602 (Button_t340 * __this, BaseEventData_t278 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1603 (Button_t340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
