﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3073;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17972_gshared (Comparison_1_t3073 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m17972(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3073 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m17972_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17973_gshared (Comparison_1_t3073 * __this, UILineInfo_t502  ___x, UILineInfo_t502  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m17973(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3073 *, UILineInfo_t502 , UILineInfo_t502 , MethodInfo*))Comparison_1_Invoke_m17973_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17974_gshared (Comparison_1_t3073 * __this, UILineInfo_t502  ___x, UILineInfo_t502  ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m17974(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3073 *, UILineInfo_t502 , UILineInfo_t502 , AsyncCallback_t380 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m17974_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17975_gshared (Comparison_1_t3073 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m17975(__this, ___result, method) (( int32_t (*) (Comparison_1_t3073 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m17975_gshared)(__this, ___result, method)
