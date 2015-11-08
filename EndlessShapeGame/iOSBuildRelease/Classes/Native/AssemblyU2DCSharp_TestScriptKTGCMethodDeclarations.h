#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TestScriptKTGC
struct TestScriptKTGC_t116;
// System.Collections.IEnumerator
struct IEnumerator_t222;
// System.String
struct String_t;

// System.Void TestScriptKTGC::.ctor()
extern "C" void TestScriptKTGC__ctor_m472 (TestScriptKTGC_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::Start()
extern "C" void TestScriptKTGC_Start_m473 (TestScriptKTGC_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::OnEnable()
extern "C" void TestScriptKTGC_OnEnable_m474 (TestScriptKTGC_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::OnDisable()
extern "C" void TestScriptKTGC_OnDisable_m475 (TestScriptKTGC_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TestScriptKTGC::RegisterForGameCenter()
extern "C" Object_t * TestScriptKTGC_RegisterForGameCenter_m476 (TestScriptKTGC_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::OnGUI()
extern "C" void TestScriptKTGC_OnGUI_m477 (TestScriptKTGC_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::GCAuthentication(System.String)
extern "C" void TestScriptKTGC_GCAuthentication_m478 (TestScriptKTGC_t116 * __this, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::ScoreSubmitted(System.String,System.String)
extern "C" void TestScriptKTGC_ScoreSubmitted_m479 (TestScriptKTGC_t116 * __this, String_t* ___leaderboardId, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::AchievementSubmitted(System.String,System.String)
extern "C" void TestScriptKTGC_AchievementSubmitted_m480 (TestScriptKTGC_t116 * __this, String_t* ___achId, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestScriptKTGC::AchivementsReset(System.String)
extern "C" void TestScriptKTGC_AchivementsReset_m481 (TestScriptKTGC_t116 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TestScriptKTGC::CheckAttributes()
extern "C" Object_t * TestScriptKTGC_CheckAttributes_m482 (TestScriptKTGC_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
