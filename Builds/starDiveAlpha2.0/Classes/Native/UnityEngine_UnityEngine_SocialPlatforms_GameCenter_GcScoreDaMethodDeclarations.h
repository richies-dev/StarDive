#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t623;
struct GcScoreData_t623_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t742;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t742 * GcScoreData_ToScore_m3673 (GcScoreData_t623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t623_marshal(const GcScoreData_t623& unmarshaled, GcScoreData_t623_marshaled& marshaled);
void GcScoreData_t623_marshal_back(const GcScoreData_t623_marshaled& marshaled, GcScoreData_t623& unmarshaled);
void GcScoreData_t623_marshal_cleanup(GcScoreData_t623_marshaled& marshaled);
