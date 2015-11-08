#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameManager
struct GameManager_t168;
// System.EventHandler
struct EventHandler_t169;
// System.Collections.Generic.List`1<Manager>
struct List_1_t170;
// System.Collections.IEnumerator
struct IEnumerator_t222;

// System.Void GameManager::.ctor()
extern "C" void GameManager__ctor_m721 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_GameResetEvent(System.EventHandler)
extern "C" void GameManager_add_GameResetEvent_m722 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_GameResetEvent(System.EventHandler)
extern "C" void GameManager_remove_GameResetEvent_m723 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_GameStartEvent(System.EventHandler)
extern "C" void GameManager_add_GameStartEvent_m724 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_GameStartEvent(System.EventHandler)
extern "C" void GameManager_remove_GameStartEvent_m725 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_GameRestartEvent(System.EventHandler)
extern "C" void GameManager_add_GameRestartEvent_m726 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_GameRestartEvent(System.EventHandler)
extern "C" void GameManager_remove_GameRestartEvent_m727 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_GameOverEvent(System.EventHandler)
extern "C" void GameManager_add_GameOverEvent_m728 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_GameOverEvent(System.EventHandler)
extern "C" void GameManager_remove_GameOverEvent_m729 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_HighScoreEvent(System.EventHandler)
extern "C" void GameManager_add_HighScoreEvent_m730 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_HighScoreEvent(System.EventHandler)
extern "C" void GameManager_remove_HighScoreEvent_m731 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_DifficultyChangeEvent(System.EventHandler)
extern "C" void GameManager_add_DifficultyChangeEvent_m732 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_DifficultyChangeEvent(System.EventHandler)
extern "C" void GameManager_remove_DifficultyChangeEvent_m733 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::add_SpeedChangeEvent(System.EventHandler)
extern "C" void GameManager_add_SpeedChangeEvent_m734 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::remove_SpeedChangeEvent(System.EventHandler)
extern "C" void GameManager_remove_SpeedChangeEvent_m735 (GameManager_t168 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::get_played()
extern "C" bool GameManager_get_played_m736 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_played(System.Boolean)
extern "C" void GameManager_set_played_m737 (GameManager_t168 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::get_playing()
extern "C" bool GameManager_get_playing_m738 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_playing(System.Boolean)
extern "C" void GameManager_set_playing_m739 (GameManager_t168 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Manager> GameManager::get_managers()
extern "C" List_1_t170 * GameManager_get_managers_m740 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_managers(System.Collections.Generic.List`1<Manager>)
extern "C" void GameManager_set_managers_m741 (GameManager_t168 * __this, List_1_t170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager GameManager::get_inst()
extern "C" GameManager_t168 * GameManager_get_inst_m742 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_inst(GameManager)
extern "C" void GameManager_set_inst_m743 (Object_t * __this /* static, unused */, GameManager_t168 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C" void GameManager_Awake_m744 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C" void GameManager_Start_m745 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ChangeDifficulty(System.Int32)
extern "C" void GameManager_ChangeDifficulty_m746 (GameManager_t168 * __this, int32_t ___difficulty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ChangeSpeed(System.Int32)
extern "C" void GameManager_ChangeSpeed_m747 (GameManager_t168 * __this, int32_t ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::StartGame()
extern "C" void GameManager_StartGame_m748 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::RestartGame()
extern "C" void GameManager_RestartGame_m749 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GameOver()
extern "C" void GameManager_GameOver_m750 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::UpdateMemory()
extern "C" Object_t * GameManager_UpdateMemory_m751 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::CameraShake()
extern "C" Object_t * GameManager_CameraShake_m752 (GameManager_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
