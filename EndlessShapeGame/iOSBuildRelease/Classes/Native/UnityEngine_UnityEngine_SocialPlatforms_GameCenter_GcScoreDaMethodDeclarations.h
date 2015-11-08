#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t889;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t889 * GcScoreData_ToScore_m5013 (GcScoreData_t871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t871_marshal(const GcScoreData_t871& unmarshaled, GcScoreData_t871_marshaled& marshaled);
extern "C" void GcScoreData_t871_marshal_back(const GcScoreData_t871_marshaled& marshaled, GcScoreData_t871& unmarshaled);
extern "C" void GcScoreData_t871_marshal_cleanup(GcScoreData_t871_marshaled& marshaled);
