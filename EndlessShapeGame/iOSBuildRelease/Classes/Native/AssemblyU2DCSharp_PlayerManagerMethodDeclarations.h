#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerManager
struct PlayerManager_t174;
// PlayerBehavior
struct PlayerBehavior_t133;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;

// System.Void PlayerManager::.ctor()
extern "C" void PlayerManager__ctor_m770 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerBehavior PlayerManager::get_player()
extern "C" PlayerBehavior_t133 * PlayerManager_get_player_m771 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::set_player(PlayerBehavior)
extern "C" void PlayerManager_set_player_m772 (PlayerManager_t174 * __this, PlayerBehavior_t133 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerManager PlayerManager::get_inst()
extern "C" PlayerManager_t174 * PlayerManager_get_inst_m773 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::set_inst(PlayerManager)
extern "C" void PlayerManager_set_inst_m774 (Object_t * __this /* static, unused */, PlayerManager_t174 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::Awake()
extern "C" void PlayerManager_Awake_m775 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::Start()
extern "C" void PlayerManager_Start_m776 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerManager::FadeInPlayer()
extern "C" Object_t * PlayerManager_FadeInPlayer_m777 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerManager::FadeOutPlayer()
extern "C" Object_t * PlayerManager_FadeOutPlayer_m778 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::OnGameReset(System.Object,System.EventArgs)
extern "C" void PlayerManager_OnGameReset_m779 (PlayerManager_t174 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::OnGameStart(System.Object,System.EventArgs)
extern "C" void PlayerManager_OnGameStart_m780 (PlayerManager_t174 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::OnGameRestart(System.Object,System.EventArgs)
extern "C" void PlayerManager_OnGameRestart_m781 (PlayerManager_t174 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::OnGameOver(System.Object,System.EventArgs)
extern "C" void PlayerManager_OnGameOver_m782 (PlayerManager_t174 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::SpawnPlayer()
extern "C" void PlayerManager_SpawnPlayer_m783 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::SpawnPlayerInput()
extern "C" void PlayerManager_SpawnPlayerInput_m784 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::DestroyPlayer()
extern "C" void PlayerManager_DestroyPlayer_m785 (PlayerManager_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
