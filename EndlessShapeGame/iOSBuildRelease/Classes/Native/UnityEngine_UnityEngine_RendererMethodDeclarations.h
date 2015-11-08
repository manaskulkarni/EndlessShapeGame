#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t249;
// UnityEngine.Material
struct Material_t5;

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t5 * Renderer_get_material_m1192 (Renderer_t249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t5 * Renderer_get_sharedMaterial_m1232 (Renderer_t249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2747 (Renderer_t249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2748 (Renderer_t249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
