#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShapeManager
struct ShapeManager_t186;
// System.Collections.Generic.List`1<ShapeManager/ShapeProperties>
struct List_1_t192;
// ShapeManager/ShapePool
struct ShapePool_t177;
// System.Collections.Generic.List`1<ShapeBehavior>
struct List_1_t149;
// PlayerBehavior
struct PlayerBehavior_t133;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ShapeBehavior>
struct SortedDictionary_2_t193;
// UnityEngine.Coroutine
struct Coroutine_t125;
struct Coroutine_t125_marshaled;
// UnityEngine.Sprite
struct Sprite_t181;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// UnityEngine.Transform
struct Transform_t48;
// ShapeBehavior
struct ShapeBehavior_t144;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t140;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;

// System.Void ShapeManager::.ctor()
extern "C" void ShapeManager__ctor_m810 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ShapeManager::get_currentIntervalIndex()
extern "C" int32_t ShapeManager_get_currentIntervalIndex_m811 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_currentIntervalIndex(System.Int32)
extern "C" void ShapeManager_set_currentIntervalIndex_m812 (ShapeManager_t186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ShapeManager/ShapeProperties> ShapeManager::get_shapeProperties()
extern "C" List_1_t192 * ShapeManager_get_shapeProperties_m813 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_shapeProperties(System.Collections.Generic.List`1<ShapeManager/ShapeProperties>)
extern "C" void ShapeManager_set_shapeProperties_m814 (ShapeManager_t186 * __this, List_1_t192 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShapeManager/ShapePool ShapeManager::get_shapePool()
extern "C" ShapePool_t177 * ShapeManager_get_shapePool_m815 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_shapePool(ShapeManager/ShapePool)
extern "C" void ShapeManager_set_shapePool_m816 (ShapeManager_t186 * __this, ShapePool_t177 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ShapeBehavior> ShapeManager::get_shapes()
extern "C" List_1_t149 * ShapeManager_get_shapes_m817 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_shapes(System.Collections.Generic.List`1<ShapeBehavior>)
extern "C" void ShapeManager_set_shapes_m818 (ShapeManager_t186 * __this, List_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ShapeManager::get_spawnCount()
extern "C" int32_t ShapeManager_get_spawnCount_m819 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_spawnCount(System.Int32)
extern "C" void ShapeManager_set_spawnCount_m820 (ShapeManager_t186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerBehavior ShapeManager::get_player()
extern "C" PlayerBehavior_t133 * ShapeManager_get_player_m821 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_player(PlayerBehavior)
extern "C" void ShapeManager_set_player_m822 (ShapeManager_t186 * __this, PlayerBehavior_t133 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedDictionary`2<System.Int32,ShapeBehavior> ShapeManager::get_shapePair()
extern "C" SortedDictionary_2_t193 * ShapeManager_get_shapePair_m823 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_shapePair(System.Collections.Generic.SortedDictionary`2<System.Int32,ShapeBehavior>)
extern "C" void ShapeManager_set_shapePair_m824 (ShapeManager_t186 * __this, SortedDictionary_2_t193 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine ShapeManager::get_updateSpeed()
extern "C" Coroutine_t125 * ShapeManager_get_updateSpeed_m825 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_updateSpeed(UnityEngine.Coroutine)
extern "C" void ShapeManager_set_updateSpeed_m826 (ShapeManager_t186 * __this, Coroutine_t125 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ShapeManager::get_repeatCount()
extern "C" int32_t ShapeManager_get_repeatCount_m827 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_repeatCount(System.Int32)
extern "C" void ShapeManager_set_repeatCount_m828 (ShapeManager_t186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite ShapeManager::get_previousSprite()
extern "C" Sprite_t181 * ShapeManager_get_previousSprite_m829 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_previousSprite(UnityEngine.Sprite)
extern "C" void ShapeManager_set_previousSprite_m830 (ShapeManager_t186 * __this, Sprite_t181 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ShapeManager::get_shuffleCounter()
extern "C" int32_t ShapeManager_get_shuffleCounter_m831 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_shuffleCounter(System.Int32)
extern "C" void ShapeManager_set_shuffleCounter_m832 (ShapeManager_t186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ShapeManager::get_startDelay()
extern "C" float ShapeManager_get_startDelay_m833 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_startDelay(System.Single)
extern "C" void ShapeManager_set_startDelay_m834 (ShapeManager_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShapeManager ShapeManager::get_inst()
extern "C" ShapeManager_t186 * ShapeManager_get_inst_m835 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_inst(ShapeManager)
extern "C" void ShapeManager_set_inst_m836 (Object_t * __this /* static, unused */, ShapeManager_t186 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::Awake()
extern "C" void ShapeManager_Awake_m837 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::Start()
extern "C" void ShapeManager_Start_m838 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::OnDestroy()
extern "C" void ShapeManager_OnDestroy_m839 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShapeManager::UpdateSpeed()
extern "C" Object_t * ShapeManager_UpdateSpeed_m840 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ShapeManager::get_baseShape()
extern "C" Transform_t48 * ShapeManager_get_baseShape_m841 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_baseShape(UnityEngine.Transform)
extern "C" void ShapeManager_set_baseShape_m842 (ShapeManager_t186 * __this, Transform_t48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ShapeManager::get_topShape()
extern "C" Transform_t48 * ShapeManager_get_topShape_m843 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::set_topShape(UnityEngine.Transform)
extern "C" void ShapeManager_set_topShape_m844 (ShapeManager_t186 * __this, Transform_t48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::ShapeTriggered(ShapeBehavior,UnityEngine.SpriteRenderer)
extern "C" void ShapeManager_ShapeTriggered_m845 (ShapeManager_t186 * __this, ShapeBehavior_t144 * ___shapeBehavior, SpriteRenderer_t140 * ___spriteRenderer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::OnGameReset(System.Object,System.EventArgs)
extern "C" void ShapeManager_OnGameReset_m846 (ShapeManager_t186 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::OnGameStart(System.Object,System.EventArgs)
extern "C" void ShapeManager_OnGameStart_m847 (ShapeManager_t186 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::OnGameOver(System.Object,System.EventArgs)
extern "C" void ShapeManager_OnGameOver_m848 (ShapeManager_t186 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::OnGameRestart(System.Object,System.EventArgs)
extern "C" void ShapeManager_OnGameRestart_m849 (ShapeManager_t186 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::OnDifficultyChange(System.Object,System.EventArgs)
extern "C" void ShapeManager_OnDifficultyChange_m850 (ShapeManager_t186 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::OnSpeedChange(System.Object,System.EventArgs)
extern "C" void ShapeManager_OnSpeedChange_m851 (ShapeManager_t186 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShapeManager::DelayStart()
extern "C" Object_t * ShapeManager_DelayStart_m852 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShapeManager::DestroyShape(ShapeBehavior)
extern "C" Object_t * ShapeManager_DestroyShape_m853 (ShapeManager_t186 * __this, ShapeBehavior_t144 * ___shapeBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::ChooseShapeProperties(ShapeBehavior)
extern "C" void ShapeManager_ChooseShapeProperties_m854 (ShapeManager_t186 * __this, ShapeBehavior_t144 * ___shape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::SpawnShapes()
extern "C" void ShapeManager_SpawnShapes_m855 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShapeManager::SpawnShapesTetrisMode()
extern "C" void ShapeManager_SpawnShapesTetrisMode_m856 (ShapeManager_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
