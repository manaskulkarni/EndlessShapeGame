#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// StatsManager
struct StatsManager_t194;
// System.EventHandler
struct EventHandler_t169;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;

// System.Void StatsManager::.ctor()
extern "C" void StatsManager__ctor_m857 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::add_SubmitScoreEvent(System.EventHandler)
extern "C" void StatsManager_add_SubmitScoreEvent_m858 (StatsManager_t194 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::remove_SubmitScoreEvent(System.EventHandler)
extern "C" void StatsManager_remove_SubmitScoreEvent_m859 (StatsManager_t194 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::add_ShowLeaderboardEvent(System.EventHandler)
extern "C" void StatsManager_add_ShowLeaderboardEvent_m860 (StatsManager_t194 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::remove_ShowLeaderboardEvent(System.EventHandler)
extern "C" void StatsManager_remove_ShowLeaderboardEvent_m861 (StatsManager_t194 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::add_ShowAchievementsEvent(System.EventHandler)
extern "C" void StatsManager_add_ShowAchievementsEvent_m862 (StatsManager_t194 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::remove_ShowAchievementsEvent(System.EventHandler)
extern "C" void StatsManager_remove_ShowAchievementsEvent_m863 (StatsManager_t194 * __this, EventHandler_t169 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StatsManager::get_score()
extern "C" int32_t StatsManager_get_score_m864 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::set_score(System.Int32)
extern "C" void StatsManager_set_score_m865 (StatsManager_t194 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String StatsManager::get_leaderBoardId()
extern "C" String_t* StatsManager_get_leaderBoardId_m866 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StatsManager::get_isHighScore()
extern "C" bool StatsManager_get_isHighScore_m867 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::set_isHighScore(System.Boolean)
extern "C" void StatsManager_set_isHighScore_m868 (StatsManager_t194 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StatsManager::get_isHighScoreSlow()
extern "C" bool StatsManager_get_isHighScoreSlow_m869 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StatsManager::get_highScore()
extern "C" int32_t StatsManager_get_highScore_m870 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StatsManager::get_coins()
extern "C" int32_t StatsManager_get_coins_m871 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::set_coins(System.Int32)
extern "C" void StatsManager_set_coins_m872 (StatsManager_t194 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StatsManager::get_firstSession()
extern "C" bool StatsManager_get_firstSession_m873 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::set_firstSession(System.Boolean)
extern "C" void StatsManager_set_firstSession_m874 (StatsManager_t194 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StatsManager StatsManager::get_inst()
extern "C" StatsManager_t194 * StatsManager_get_inst_m875 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::set_inst(StatsManager)
extern "C" void StatsManager_set_inst_m876 (Object_t * __this /* static, unused */, StatsManager_t194 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StatsManager::get_previousScore()
extern "C" int32_t StatsManager_get_previousScore_m877 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::set_previousScore(System.Int32)
extern "C" void StatsManager_set_previousScore_m878 (StatsManager_t194 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StatsManager::get_highScoreCrossed()
extern "C" bool StatsManager_get_highScoreCrossed_m879 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::set_highScoreCrossed(System.Boolean)
extern "C" void StatsManager_set_highScoreCrossed_m880 (StatsManager_t194 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::Awake()
extern "C" void StatsManager_Awake_m881 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::Start()
extern "C" void StatsManager_Start_m882 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnEnable()
extern "C" void StatsManager_OnEnable_m883 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnDisable()
extern "C" void StatsManager_OnDisable_m884 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::AddPoint()
extern "C" void StatsManager_AddPoint_m885 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::AddCoin(System.Int32)
extern "C" void StatsManager_AddCoin_m886 (StatsManager_t194 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::ShowLeaderBoard()
extern "C" void StatsManager_ShowLeaderBoard_m887 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::ShowAchievements()
extern "C" void StatsManager_ShowAchievements_m888 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StatsManager::CheckHighScore()
extern "C" bool StatsManager_CheckHighScore_m889 (StatsManager_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnGameReset(System.Object,System.EventArgs)
extern "C" void StatsManager_OnGameReset_m890 (StatsManager_t194 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnGameStart(System.Object,System.EventArgs)
extern "C" void StatsManager_OnGameStart_m891 (StatsManager_t194 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnGameOver(System.Object,System.EventArgs)
extern "C" void StatsManager_OnGameOver_m892 (StatsManager_t194 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnGameRestart(System.Object,System.EventArgs)
extern "C" void StatsManager_OnGameRestart_m893 (StatsManager_t194 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnDifficultyChange(System.Object,System.EventArgs)
extern "C" void StatsManager_OnDifficultyChange_m894 (StatsManager_t194 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StatsManager::OnSpeedChange(System.Object,System.EventArgs)
extern "C" void StatsManager_OnSpeedChange_m895 (StatsManager_t194 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
