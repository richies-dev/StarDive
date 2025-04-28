#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t621;
struct GcAchievementData_t621_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t741;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t741 * GcAchievementData_ToAchievement_m3672 (GcAchievementData_t621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t621_marshal(const GcAchievementData_t621& unmarshaled, GcAchievementData_t621_marshaled& marshaled);
void GcAchievementData_t621_marshal_back(const GcAchievementData_t621_marshaled& marshaled, GcAchievementData_t621& unmarshaled);
void GcAchievementData_t621_marshal_cleanup(GcAchievementData_t621_marshaled& marshaled);
