#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Dropdown
struct Dropdown_t359;
// UnityEngine.RectTransform
struct RectTransform_t351;
// UnityEngine.UI.Text
struct Text_t206;
// UnityEngine.UI.Image
struct Image_t124;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t355;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t356;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t314;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t278;
// UnityEngine.GameObject
struct GameObject_t30;
// UnityEngine.Canvas
struct Canvas_t369;
// UnityEngine.UI.Dropdown/DropdownItem
struct DropdownItem_t350;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t353;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t361;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// UnityEngine.UI.Toggle
struct Toggle_t352;

// System.Void UnityEngine.UI.Dropdown::.ctor()
extern "C" void Dropdown__ctor_m1684 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Dropdown::get_template()
extern "C" RectTransform_t351 * Dropdown_get_template_m1685 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_template(UnityEngine.RectTransform)
extern "C" void Dropdown_set_template_m1686 (Dropdown_t359 * __this, RectTransform_t351 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_captionText()
extern "C" Text_t206 * Dropdown_get_captionText_m1687 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_captionText_m1688 (Dropdown_t359 * __this, Text_t206 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_captionImage()
extern "C" Image_t124 * Dropdown_get_captionImage_m1689 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_captionImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_captionImage_m1690 (Dropdown_t359 * __this, Image_t124 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.Dropdown::get_itemText()
extern "C" Text_t206 * Dropdown_get_itemText_m1691 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemText(UnityEngine.UI.Text)
extern "C" void Dropdown_set_itemText_m1692 (Dropdown_t359 * __this, Text_t206 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Dropdown::get_itemImage()
extern "C" Image_t124 * Dropdown_get_itemImage_m1693 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_itemImage(UnityEngine.UI.Image)
extern "C" void Dropdown_set_itemImage_m1694 (Dropdown_t359 * __this, Image_t124 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
extern "C" List_1_t355 * Dropdown_get_options_m1695 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
extern "C" void Dropdown_set_options_m1696 (Dropdown_t359 * __this, List_1_t355 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
extern "C" DropdownEvent_t356 * Dropdown_get_onValueChanged_m1697 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_onValueChanged(UnityEngine.UI.Dropdown/DropdownEvent)
extern "C" void Dropdown_set_onValueChanged_m1698 (Dropdown_t359 * __this, DropdownEvent_t356 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
extern "C" int32_t Dropdown_get_value_m1699 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
extern "C" void Dropdown_set_value_m1700 (Dropdown_t359 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Awake()
extern "C" void Dropdown_Awake_m1701 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Refresh()
extern "C" void Dropdown_Refresh_m1702 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetupTemplate()
extern "C" void Dropdown_SetupTemplate_m1703 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Dropdown_OnPointerClick_m1704 (Dropdown_t359 * __this, PointerEventData_t314 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnSubmit_m1705 (Dropdown_t359 * __this, BaseEventData_t278 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void Dropdown_OnCancel_m1706 (Dropdown_t359 * __this, BaseEventData_t278 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Show()
extern "C" void Dropdown_Show_m1707 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateBlocker(UnityEngine.Canvas)
extern "C" GameObject_t30 * Dropdown_CreateBlocker_m1708 (Dropdown_t359 * __this, Canvas_t369 * ___rootCanvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyBlocker(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyBlocker_m1709 (Dropdown_t359 * __this, GameObject_t30 * ___blocker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.Dropdown::CreateDropdownList(UnityEngine.GameObject)
extern "C" GameObject_t30 * Dropdown_CreateDropdownList_m1710 (Dropdown_t359 * __this, GameObject_t30 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyDropdownList(UnityEngine.GameObject)
extern "C" void Dropdown_DestroyDropdownList_m1711 (Dropdown_t359 * __this, GameObject_t30 * ___dropdownList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::CreateItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" DropdownItem_t350 * Dropdown_CreateItem_m1712 (Dropdown_t359 * __this, DropdownItem_t350 * ___itemTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::DestroyItem(UnityEngine.UI.Dropdown/DropdownItem)
extern "C" void Dropdown_DestroyItem_m1713 (Dropdown_t359 * __this, DropdownItem_t350 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown::AddItem(UnityEngine.UI.Dropdown/OptionData,System.Boolean,UnityEngine.UI.Dropdown/DropdownItem,System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>)
extern "C" DropdownItem_t350 * Dropdown_AddItem_m1714 (Dropdown_t359 * __this, OptionData_t353 * ___data, bool ___selected, DropdownItem_t350 * ___itemTemplate, List_1_t361 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m1715 (Dropdown_t359 * __this, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::AlphaFadeList(System.Single,System.Single,System.Single)
extern "C" void Dropdown_AlphaFadeList_m1716 (Dropdown_t359 * __this, float ___duration, float ___start, float ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::SetAlpha(System.Single)
extern "C" void Dropdown_SetAlpha_m1717 (Dropdown_t359 * __this, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::Hide()
extern "C" void Dropdown_Hide_m1718 (Dropdown_t359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Dropdown::DelayedDestroyDropdownList(System.Single)
extern "C" Object_t * Dropdown_DelayedDestroyDropdownList_m1719 (Dropdown_t359 * __this, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::OnSelectItem(UnityEngine.UI.Toggle)
extern "C" void Dropdown_OnSelectItem_m1720 (Dropdown_t359 * __this, Toggle_t352 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
