#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t260;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t250;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void AxisEventData__ctor_m1025 (AxisEventData_t260 * __this, EventSystem_t250 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
extern "C" Vector2_t62  AxisEventData_get_moveVector_m1026 (AxisEventData_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
extern "C" void AxisEventData_set_moveVector_m1027 (AxisEventData_t260 * __this, Vector2_t62  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
extern "C" int32_t AxisEventData_get_moveDir_m1028 (AxisEventData_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
extern "C" void AxisEventData_set_moveDir_m1029 (AxisEventData_t260 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
