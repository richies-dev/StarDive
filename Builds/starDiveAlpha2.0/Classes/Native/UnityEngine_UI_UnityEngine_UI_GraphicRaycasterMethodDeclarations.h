﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t356;
// UnityEngine.Canvas
struct Canvas_t347;
// UnityEngine.Camera
struct Camera_t29;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t252;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t253;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t354;
// UnityEngine.UI.Graphic
struct Graphic_t351;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
extern "C" void GraphicRaycaster__ctor_m1333 (GraphicRaycaster_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
extern "C" void GraphicRaycaster__cctor_m1334 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
extern "C" int32_t GraphicRaycaster_get_sortOrderPriority_m1335 (GraphicRaycaster_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
extern "C" int32_t GraphicRaycaster_get_renderOrderPriority_m1336 (GraphicRaycaster_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
extern "C" bool GraphicRaycaster_get_ignoreReversedGraphics_m1337 (GraphicRaycaster_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
extern "C" void GraphicRaycaster_set_ignoreReversedGraphics_m1338 (GraphicRaycaster_t356 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
extern "C" int32_t GraphicRaycaster_get_blockingObjects_m1339 (GraphicRaycaster_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
extern "C" void GraphicRaycaster_set_blockingObjects_m1340 (GraphicRaycaster_t356 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
extern "C" Canvas_t347 * GraphicRaycaster_get_canvas_m1341 (GraphicRaycaster_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void GraphicRaycaster_Raycast_m1342 (GraphicRaycaster_t356 * __this, PointerEventData_t252 * ___eventData, List_1_t253 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
extern "C" Camera_t29 * GraphicRaycaster_get_eventCamera_m1343 (GraphicRaycaster_t356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
extern "C" void GraphicRaycaster_Raycast_m1344 (Object_t * __this /* static, unused */, Canvas_t347 * ___canvas, Camera_t29 * ___eventCamera, Vector2_t62  ___pointerPosition, List_1_t354 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__6(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C" int32_t GraphicRaycaster_U3CRaycastU3Em__6_m1345 (Object_t * __this /* static, unused */, Graphic_t351 * ___g1, Graphic_t351 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
