#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIManager
struct UIManager_t196;
// UnityEngine.GameObject
struct GameObject_t30;
// UnityEngine.UI.Text
struct Text_t206;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t223;

// System.Void UIManager::.ctor()
extern "C" void UIManager__ctor_m952 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIManager UIManager::get_inst()
extern "C" UIManager_t196 * UIManager_get_inst_m953 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_inst(UIManager)
extern "C" void UIManager_set_inst_m954 (Object_t * __this /* static, unused */, UIManager_t196 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIManager::get_menuStart()
extern "C" GameObject_t30 * UIManager_get_menuStart_m955 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_menuStart(UnityEngine.GameObject)
extern "C" void UIManager_set_menuStart_m956 (UIManager_t196 * __this, GameObject_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIManager::get_menuGame()
extern "C" GameObject_t30 * UIManager_get_menuGame_m957 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_menuGame(UnityEngine.GameObject)
extern "C" void UIManager_set_menuGame_m958 (UIManager_t196 * __this, GameObject_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIManager::get_menuOptions()
extern "C" GameObject_t30 * UIManager_get_menuOptions_m959 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_menuOptions(UnityEngine.GameObject)
extern "C" void UIManager_set_menuOptions_m960 (UIManager_t196 * __this, GameObject_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIManager::get_menuGameOver()
extern "C" GameObject_t30 * UIManager_get_menuGameOver_m961 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_menuGameOver(UnityEngine.GameObject)
extern "C" void UIManager_set_menuGameOver_m962 (UIManager_t196 * __this, GameObject_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIManager::get_buttonStart()
extern "C" GameObject_t30 * UIManager_get_buttonStart_m963 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_buttonStart(UnityEngine.GameObject)
extern "C" void UIManager_set_buttonStart_m964 (UIManager_t196 * __this, GameObject_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UIManager::get_textScore()
extern "C" Text_t206 * UIManager_get_textScore_m965 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_textScore(UnityEngine.UI.Text)
extern "C" void UIManager_set_textScore_m966 (UIManager_t196 * __this, Text_t206 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UIManager::get_textGameOverScore()
extern "C" Text_t206 * UIManager_get_textGameOverScore_m967 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_textGameOverScore(UnityEngine.UI.Text)
extern "C" void UIManager_set_textGameOverScore_m968 (UIManager_t196 * __this, Text_t206 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UIManager::get_textGameOverFeedback()
extern "C" Text_t206 * UIManager_get_textGameOverFeedback_m969 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::set_textGameOverFeedback(UnityEngine.UI.Text)
extern "C" void UIManager_set_textGameOverFeedback_m970 (UIManager_t196 * __this, Text_t206 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Awake()
extern "C" void UIManager_Awake_m971 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Start()
extern "C" void UIManager_Start_m972 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UpdateScore()
extern "C" void UIManager_UpdateScore_m973 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::DisplayScore()
extern "C" void UIManager_DisplayScore_m974 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ShowOptions()
extern "C" void UIManager_ShowOptions_m975 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::EndGame()
extern "C" void UIManager_EndGame_m976 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::HideOptions()
extern "C" void UIManager_HideOptions_m977 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ShowLeaderBoard()
extern "C" void UIManager_ShowLeaderBoard_m978 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ShowAchievements()
extern "C" void UIManager_ShowAchievements_m979 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::HighScoreFeedback()
extern "C" Object_t * UIManager_HighScoreFeedback_m980 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeOutStartCanvas()
extern "C" Object_t * UIManager_FadeOutStartCanvas_m981 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeOutGameCanvas()
extern "C" Object_t * UIManager_FadeOutGameCanvas_m982 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeOutGameOverCanvas()
extern "C" Object_t * UIManager_FadeOutGameOverCanvas_m983 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeInOptionsCanvas()
extern "C" Object_t * UIManager_FadeInOptionsCanvas_m984 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeInGameOverCanvas()
extern "C" Object_t * UIManager_FadeInGameOverCanvas_m985 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeOutOptionsCanvas()
extern "C" Object_t * UIManager_FadeOutOptionsCanvas_m986 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeInStartCanvas()
extern "C" Object_t * UIManager_FadeInStartCanvas_m987 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UIManager::FadeInGameCanvas()
extern "C" Object_t * UIManager_FadeInGameCanvas_m988 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIManager::BestScore()
extern "C" String_t* UIManager_BestScore_m989 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIManager::NewHighScore()
extern "C" String_t* UIManager_NewHighScore_m990 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIManager::ZeroScore()
extern "C" String_t* UIManager_ZeroScore_m991 (UIManager_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnGameReset(System.Object,System.EventArgs)
extern "C" void UIManager_OnGameReset_m992 (UIManager_t196 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnGameStart(System.Object,System.EventArgs)
extern "C" void UIManager_OnGameStart_m993 (UIManager_t196 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnGameRestart(System.Object,System.EventArgs)
extern "C" void UIManager_OnGameRestart_m994 (UIManager_t196 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnGameOver(System.Object,System.EventArgs)
extern "C" void UIManager_OnGameOver_m995 (UIManager_t196 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnHighScore(System.Object,System.EventArgs)
extern "C" void UIManager_OnHighScore_m996 (UIManager_t196 * __this, Object_t * ___sender, EventArgs_t223 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::SetMenuActive(UnityEngine.GameObject,System.Boolean)
extern "C" void UIManager_SetMenuActive_m997 (UIManager_t196 * __this, GameObject_t30 * ___menu, bool ___active, const MethodInfo* method) IL2CPP_METHOD_ATTR;
