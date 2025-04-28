#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TurretMovement
struct  TurretMovement_t111  : public MonoBehaviour_t11
{
	// System.Single TurretMovement::AngleOfPlayerAndMousePositions
	float ___AngleOfPlayerAndMousePositions_2;
	// UnityEngine.Vector2 TurretMovement::mousePositionOnClick
	Vector2_t16  ___mousePositionOnClick_4;
	// System.Single TurretMovement::RotationSpeed
	float ___RotationSpeed_7;
	// System.Single TurretMovement::TapTimer
	float ___TapTimer_9;
};
struct TurretMovement_t111_StaticFields{
	// System.Boolean TurretMovement::DoneRotating
	bool ___DoneRotating_3;
	// UnityEngine.Vector3 TurretMovement::mousePositionToWorldCoords
	Vector3_t32  ___mousePositionToWorldCoords_5;
	// UnityEngine.Vector3 TurretMovement::PlayerRotation
	Vector3_t32  ___PlayerRotation_6;
	// System.Boolean TurretMovement::Hold
	bool ___Hold_8;
};
