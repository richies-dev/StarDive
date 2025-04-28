#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t28;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// EndGameText
struct  EndGameText_t155  : public MonoBehaviour_t24
{
	// UnityEngine.GameObject EndGameText::GameOverText
	GameObject_t28 * ___GameOverText_2;
	// UnityEngine.GameObject EndGameText::RoundText
	GameObject_t28 * ___RoundText_3;
	// UnityEngine.GameObject EndGameText::TapToRetryText
	GameObject_t28 * ___TapToRetryText_4;
	// UnityEngine.Vector3 EndGameText::GameOverTextEndPos
	Vector3_t31  ___GameOverTextEndPos_5;
	// UnityEngine.Vector3 EndGameText::RoundTextEndPos
	Vector3_t31  ___RoundTextEndPos_6;
	// UnityEngine.Vector3 EndGameText::TapToRetryTextEndPos
	Vector3_t31  ___TapToRetryTextEndPos_7;
	// UnityEngine.Vector3 EndGameText::GameOverTextStartPos
	Vector3_t31  ___GameOverTextStartPos_8;
	// UnityEngine.Vector3 EndGameText::RoundTextStartPos
	Vector3_t31  ___RoundTextStartPos_9;
	// UnityEngine.Vector3 EndGameText::TapToRetryTextStartPos
	Vector3_t31  ___TapToRetryTextStartPos_10;
	// System.Single EndGameText::timeTakenDuringLerp
	float ___timeTakenDuringLerp_11;
	// System.Single EndGameText::_timeStartedLerping
	float ____timeStartedLerping_12;
	// System.Boolean EndGameText::_isLerping
	bool ____isLerping_13;
	// System.Single EndGameText::percentageComplete
	float ___percentageComplete_14;
	// System.Single EndGameText::timeSinceStarted
	float ___timeSinceStarted_15;
	// System.Boolean EndGameText::hasstarted
	bool ___hasstarted_16;
	// UnityEngine.Color EndGameText::textcolor
	Color_t17  ___textcolor_17;
	// System.Int32 EndGameText::locround
	int32_t ___locround_18;
};
