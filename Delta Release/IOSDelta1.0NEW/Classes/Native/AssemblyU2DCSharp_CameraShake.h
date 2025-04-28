#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t62;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// CameraShake
struct  CameraShake_t84  : public MonoBehaviour_t11
{
	// UnityEngine.Transform CameraShake::camTransform
	Transform_t62 * ___camTransform_2;
	// System.Single CameraShake::shake
	float ___shake_3;
	// System.Single CameraShake::decreaseFactor
	float ___decreaseFactor_4;
	// System.Single CameraShake::ShakeIntensity
	float ___ShakeIntensity_5;
	// System.Single CameraShake::Smoothness
	float ___Smoothness_6;
	// System.Boolean CameraShake::Choppy
	bool ___Choppy_7;
	// UnityEngine.Vector3 CameraShake::originalPos
	Vector3_t32  ___originalPos_8;
};
