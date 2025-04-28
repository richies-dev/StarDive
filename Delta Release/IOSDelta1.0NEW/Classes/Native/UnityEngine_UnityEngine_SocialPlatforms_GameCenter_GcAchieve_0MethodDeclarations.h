#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t552;
struct GcAchievementData_t552_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t676;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t676 * GcAchievementData_ToAchievement_m3440 (GcAchievementData_t552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t552_marshal(const GcAchievementData_t552& unmarshaled, GcAchievementData_t552_marshaled& marshaled);
void GcAchievementData_t552_marshal_back(const GcAchievementData_t552_marshaled& marshaled, GcAchievementData_t552& unmarshaled);
void GcAchievementData_t552_marshal_cleanup(GcAchievementData_t552_marshaled& marshaled);
