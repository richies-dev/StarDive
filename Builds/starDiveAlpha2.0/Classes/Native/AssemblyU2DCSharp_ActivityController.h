#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t28;
// NewEnemyNotification
struct NewEnemyNotification_t144;
// Notification
struct Notification_t145;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// GameState
#include "AssemblyU2DCSharp_GameState.h"
// ActivityController
struct  ActivityController_t146  : public MonoBehaviour_t24
{
	// UnityEngine.GameObject ActivityController::Shop
	GameObject_t28 * ___Shop_2;
	// UnityEngine.GameObject ActivityController::PlayerOBJ
	GameObject_t28 * ___PlayerOBJ_3;
	// UnityEngine.GameObject ActivityController::ObjectPools
	GameObject_t28 * ___ObjectPools_4;
	// UnityEngine.GameObject ActivityController::Round
	GameObject_t28 * ___Round_5;
	// UnityEngine.GameObject ActivityController::Round2
	GameObject_t28 * ___Round2_6;
	// UnityEngine.GameObject ActivityController::ShowPlayerHealthTextObject
	GameObject_t28 * ___ShowPlayerHealthTextObject_7;
	// UnityEngine.GameObject ActivityController::ShowPlayerHealthIconObject
	GameObject_t28 * ___ShowPlayerHealthIconObject_8;
	// UnityEngine.GameObject ActivityController::GameOverTextController
	GameObject_t28 * ___GameOverTextController_9;
	// System.Boolean ActivityController::TappedToContinue
	bool ___TappedToContinue_13;
	// UnityEngine.Color ActivityController::ShowPlayerHealthLeftTextColor
	Color_t17  ___ShowPlayerHealthLeftTextColor_14;
	// System.Single ActivityController::EnablePlayerTimerShop
	float ___EnablePlayerTimerShop_15;
	// System.Single ActivityController::EnablePlayerTimerEndGame
	float ___EnablePlayerTimerEndGame_16;
	// NewEnemyNotification ActivityController::NewEnemyNotificationSystem
	NewEnemyNotification_t144 * ___NewEnemyNotificationSystem_19;
	// Notification ActivityController::notificationSystem
	Notification_t145 * ___notificationSystem_20;
};
struct ActivityController_t146_StaticFields{
	// System.Boolean ActivityController::MakingGameOverLayerAppear
	bool ___MakingGameOverLayerAppear_10;
	// System.Boolean ActivityController::NewRound
	bool ___NewRound_11;
	// System.Boolean ActivityController::ShowPlayersHealthLeft
	bool ___ShowPlayersHealthLeft_12;
	// GameState ActivityController::ThisGamestate
	int32_t ___ThisGamestate_17;
	// System.Boolean ActivityController::Paused
	bool ___Paused_18;
};
