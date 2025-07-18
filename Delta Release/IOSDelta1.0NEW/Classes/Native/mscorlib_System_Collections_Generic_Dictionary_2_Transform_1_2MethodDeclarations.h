﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
struct Transform_1_t2633;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t182;
// System.IAsyncResult
struct IAsyncResult_t310;
// System.AsyncCallback
struct AsyncCallback_t311;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
#define Transform_1__ctor_m13965(__this, ___object, ___method, method) (( void (*) (Transform_1_t2633 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m13887_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13966(__this, ___key, ___value, method) (( PointerEventData_t182 * (*) (Transform_1_t2633 *, int32_t, PointerEventData_t182 *, MethodInfo*))Transform_1_Invoke_m13888_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13967(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2633 *, int32_t, PointerEventData_t182 *, AsyncCallback_t311 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m13889_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13968(__this, ___result, method) (( PointerEventData_t182 * (*) (Transform_1_t2633 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m13890_gshared)(__this, ___result, method)
