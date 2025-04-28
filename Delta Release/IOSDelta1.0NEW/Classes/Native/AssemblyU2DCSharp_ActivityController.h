#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t59;
// NewEnemyNotification
struct NewEnemyNotification_t79;
// Notification
struct Notification_t80;
// fadingTexture
struct fadingTexture_t81;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// GameState
#include "AssemblyU2DCSharp_GameState.h"
// ActivityController
struct  ActivityController_t82  : public MonoBehaviour_t11
{
	// UnityEngine.GameObject ActivityController::Shop
	GameObject_t59 * ___Shop_2;
	// UnityEngine.GameObject ActivityController::PlayerOBJ
	GameObject_t59 * ___PlayerOBJ_3;
	// UnityEngine.GameObject ActivityController::ObjectPools
	GameObject_t59 * ___ObjectPools_4;
	// UnityEngine.GameObject ActivityController::Round
	GameObject_t59 * ___Round_5;
	// UnityEngine.GameObject ActivityController::Round2
	GameObject_t59 * ___Round2_6;
	// UnityEngine.GameObject ActivityController::ShowPlayerHealthTextObject
	GameObject_t59 * ___ShowPlayerHealthTextObject_7;
	// UnityEngine.GameObject ActivityController::ShowPlayerHealthIconObject
	GameObject_t59 * ___ShowPlayerHealthIconObject_8;
	// UnityEngine.GameObject ActivityController::GameOverTextController
	GameObject_t59 * ___GameOverTextController_9;
	// System.Boolean ActivityController::TappedToContinue
	bool ___TappedToContinue_13;
	// UnityEngine.Color ActivityController::ShowPlayerHealthLeftTextColor
	Color_t30  ___ShowPlayerHealthLeftTextColor_14;
	// System.Single ActivityController::EnablePlayerTimerShop
	float ___EnablePlayerTimerShop_15;
	// System.Single ActivityController::EnablePlayerTimerEndGame
	float ___EnablePlayerTimerEndGame_16;
	// NewEnemyNotification ActivityController::NewEnemyNotificationSystem
	NewEnemyNotification_t79 * ___NewEnemyNotificationSystem_19;
	// Notification ActivityController::notificationSystem
	Notification_t80 * ___notificationSystem_20;
	// fadingTexture ActivityController::blackFade
	fadingTexture_t81 * ___blackFade_21;
};
struct ActivityController_t82_StaticFields{
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
	// System.Single ActivityController::<StartScreenWidth>k__BackingField
	float ___U3CStartScreenWidthU3Ek__BackingField_22;
	// System.Single ActivityController::<StartScreenHeight>k__BackingField
	float ___U3CStartScreenHeightU3Ek__BackingField_23;
};
