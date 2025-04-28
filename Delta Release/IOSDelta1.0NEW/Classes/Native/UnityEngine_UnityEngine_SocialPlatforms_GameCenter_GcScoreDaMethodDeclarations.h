#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t554;
struct GcScoreData_t554_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t677;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t677 * GcScoreData_ToScore_m3441 (GcScoreData_t554 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t554_marshal(const GcScoreData_t554& unmarshaled, GcScoreData_t554_marshaled& marshaled);
void GcScoreData_t554_marshal_back(const GcScoreData_t554_marshaled& marshaled, GcScoreData_t554& unmarshaled);
void GcScoreData_t554_marshal_cleanup(GcScoreData_t554_marshaled& marshaled);
