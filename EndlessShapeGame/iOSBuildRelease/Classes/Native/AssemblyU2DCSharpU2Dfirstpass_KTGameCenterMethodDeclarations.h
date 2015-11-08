#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// KTGameCenter
struct KTGameCenter_t97;
// KTGameCenter/UserAuthenticatationDelegate
struct UserAuthenticatationDelegate_t90;
// KTGameCenter/ScoreSubmissionDelegate
struct ScoreSubmissionDelegate_t94;
// KTGameCenter/AchievementSubmissionDelegate
struct AchievementSubmissionDelegate_t95;
// KTGameCenter/ResetAchievementsDelegate
struct ResetAchievementsDelegate_t96;
// System.String
struct String_t;

// System.Void KTGameCenter::.ctor()
extern "C" void KTGameCenter__ctor_m227 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::add_GCUserAuthenticated(KTGameCenter/UserAuthenticatationDelegate)
extern "C" void KTGameCenter_add_GCUserAuthenticated_m228 (KTGameCenter_t97 * __this, UserAuthenticatationDelegate_t90 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::remove_GCUserAuthenticated(KTGameCenter/UserAuthenticatationDelegate)
extern "C" void KTGameCenter_remove_GCUserAuthenticated_m229 (KTGameCenter_t97 * __this, UserAuthenticatationDelegate_t90 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::add_GCScoreSubmitted(KTGameCenter/ScoreSubmissionDelegate)
extern "C" void KTGameCenter_add_GCScoreSubmitted_m230 (KTGameCenter_t97 * __this, ScoreSubmissionDelegate_t94 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::remove_GCScoreSubmitted(KTGameCenter/ScoreSubmissionDelegate)
extern "C" void KTGameCenter_remove_GCScoreSubmitted_m231 (KTGameCenter_t97 * __this, ScoreSubmissionDelegate_t94 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::add_GCAchievementSubmitted(KTGameCenter/AchievementSubmissionDelegate)
extern "C" void KTGameCenter_add_GCAchievementSubmitted_m232 (KTGameCenter_t97 * __this, AchievementSubmissionDelegate_t95 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::remove_GCAchievementSubmitted(KTGameCenter/AchievementSubmissionDelegate)
extern "C" void KTGameCenter_remove_GCAchievementSubmitted_m233 (KTGameCenter_t97 * __this, AchievementSubmissionDelegate_t95 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::add_GCAchievementsReset(KTGameCenter/ResetAchievementsDelegate)
extern "C" void KTGameCenter_add_GCAchievementsReset_m234 (KTGameCenter_t97 * __this, ResetAchievementsDelegate_t96 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::remove_GCAchievementsReset(KTGameCenter/ResetAchievementsDelegate)
extern "C" void KTGameCenter_remove_GCAchievementsReset_m235 (KTGameCenter_t97 * __this, ResetAchievementsDelegate_t96 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::authenticateLocalUser(System.String)
extern "C" void KTGameCenter_authenticateLocalUser_m236 (Object_t * __this /* static, unused */, String_t* ___gameobjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::showLeaderboard(System.String)
extern "C" void KTGameCenter_showLeaderboard_m237 (Object_t * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::resetAchievements()
extern "C" void KTGameCenter_resetAchievements_m238 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::submitScore(System.Int32,System.String)
extern "C" void KTGameCenter_submitScore_m239 (Object_t * __this /* static, unused */, int32_t ___score, String_t* ___leaderboard, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::submitAchievement(System.Int32,System.String,System.Boolean)
extern "C" void KTGameCenter_submitAchievement_m240 (Object_t * __this /* static, unused */, int32_t ___percantage, String_t* ___achivement, bool ___showBanner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::showAchievements()
extern "C" void KTGameCenter_showAchievements_m241 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::submitFloatScore(System.Single,System.Int32,System.String)
extern "C" void KTGameCenter_submitFloatScore_m242 (Object_t * __this /* static, unused */, float ___score, int32_t ___decimals, String_t* ___leaderboard, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::Awake()
extern "C" void KTGameCenter_Awake_m243 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::OnEnable()
extern "C" void KTGameCenter_OnEnable_m244 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::Start()
extern "C" void KTGameCenter_Start_m245 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// KTGameCenter KTGameCenter::SharedCenter()
extern "C" KTGameCenter_t97 * KTGameCenter_SharedCenter_m246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::Authenticate()
extern "C" void KTGameCenter_Authenticate_m247 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::ShowLeaderboard(System.String)
extern "C" void KTGameCenter_ShowLeaderboard_m248 (KTGameCenter_t97 * __this, String_t* ___leadboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::ShowAchievements()
extern "C" void KTGameCenter_ShowAchievements_m249 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::ResetAchievements()
extern "C" void KTGameCenter_ResetAchievements_m250 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::SubmitScore(System.Int32,System.String)
extern "C" void KTGameCenter_SubmitScore_m251 (KTGameCenter_t97 * __this, int32_t ___score, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::SubmitFloatScore(System.Single,System.Int32,System.String)
extern "C" void KTGameCenter_SubmitFloatScore_m252 (KTGameCenter_t97 * __this, float ___score, int32_t ___decimals, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::SubmitAchievement(System.Int32,System.String,System.Boolean)
extern "C" void KTGameCenter_SubmitAchievement_m253 (KTGameCenter_t97 * __this, int32_t ___percantage, String_t* ___achivementId, bool ___showBanner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean KTGameCenter::IsGameCenterAuthenticated()
extern "C" bool KTGameCenter_IsGameCenterAuthenticated_m254 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String KTGameCenter::get_PlayerAlias()
extern "C" String_t* KTGameCenter_get_PlayerAlias_m255 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String KTGameCenter::get_PlayerName()
extern "C" String_t* KTGameCenter_get_PlayerName_m256 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String KTGameCenter::get_PlayerId()
extern "C" String_t* KTGameCenter_get_PlayerId_m257 (KTGameCenter_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::IsAuthenticated(System.String)
extern "C" void KTGameCenter_IsAuthenticated_m258 (KTGameCenter_t97 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::GameCenterAvailable(System.String)
extern "C" void KTGameCenter_GameCenterAvailable_m259 (KTGameCenter_t97 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::ProcessGC(System.String)
extern "C" void KTGameCenter_ProcessGC_m260 (KTGameCenter_t97 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::ReloadScoresCompleted(System.String)
extern "C" void KTGameCenter_ReloadScoresCompleted_m261 (KTGameCenter_t97 * __this, String_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::ScoreSubmitted(System.String)
extern "C" void KTGameCenter_ScoreSubmitted_m262 (KTGameCenter_t97 * __this, String_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::AchievementSubmitted(System.String)
extern "C" void KTGameCenter_AchievementSubmitted_m263 (KTGameCenter_t97 * __this, String_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::AchievementReset(System.String)
extern "C" void KTGameCenter_AchievementReset_m264 (KTGameCenter_t97 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void KTGameCenter::SetVariables(System.String)
extern "C" void KTGameCenter_SetVariables_m265 (KTGameCenter_t97 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
