#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameCenterManager
struct GameCenterManager_t160;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;
// System.String
struct String_t;

// System.Void GameCenterManager::.ctor()
extern "C" void GameCenterManager__ctor_m697 (GameCenterManager_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::Start()
extern "C" void GameCenterManager_Start_m698 (GameCenterManager_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnEnable()
extern "C" void GameCenterManager_OnEnable_m699 (GameCenterManager_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnDisable()
extern "C" void GameCenterManager_OnDisable_m700 (GameCenterManager_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameCenterManager::RegisterForGameCenter()
extern "C" Object_t * GameCenterManager_RegisterForGameCenter_m701 (GameCenterManager_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SubmitScore(System.Object,System.EventArgs)
extern "C" void GameCenterManager_SubmitScore_m702 (GameCenterManager_t160 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowLeaderboard(System.Object,System.EventArgs)
extern "C" void GameCenterManager_ShowLeaderboard_m703 (GameCenterManager_t160 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowAchievements(System.Object,System.EventArgs)
extern "C" void GameCenterManager_ShowAchievements_m704 (GameCenterManager_t160 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::GCAuthentication(System.String)
extern "C" void GameCenterManager_GCAuthentication_m705 (GameCenterManager_t160 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ScoreSubmitted(System.String,System.String)
extern "C" void GameCenterManager_ScoreSubmitted_m706 (GameCenterManager_t160 * __this, String_t* ___leaderboardId, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::AchievementSubmitted(System.String,System.String)
extern "C" void GameCenterManager_AchievementSubmitted_m707 (GameCenterManager_t160 * __this, String_t* ___achId, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::AchivementsReset(System.String)
extern "C" void GameCenterManager_AchivementsReset_m708 (GameCenterManager_t160 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
