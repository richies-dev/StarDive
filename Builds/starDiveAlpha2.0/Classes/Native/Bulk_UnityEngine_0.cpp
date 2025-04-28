#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "UnityEngine_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo U3CModuleU3E_t595_il2cpp_TypeInfo;
// <Module>
#include "UnityEngine_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssetBundleCreateRequest_t596_il2cpp_TypeInfo;
// UnityEngine.AssetBundleCreateRequest
#include "UnityEngine_UnityEngine_AssetBundleCreateRequestMethodDeclarations.h"

// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"
// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"
extern MethodInfo AsyncOperation__ctor_m3362_MethodInfo;


// System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
extern MethodInfo AssetBundleCreateRequest__ctor_m2822_MethodInfo;
extern "C" void AssetBundleCreateRequest__ctor_m2822 (AssetBundleCreateRequest_t596 * __this, MethodInfo* method)
{
	{
		AsyncOperation__ctor_m3362(__this, /*hidden argument*/&AsyncOperation__ctor_m3362_MethodInfo);
		return;
	}
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern MethodInfo AssetBundleCreateRequest_get_assetBundle_m2823_MethodInfo;
extern "C" AssetBundle_t598 * AssetBundleCreateRequest_get_assetBundle_m2823 (AssetBundleCreateRequest_t596 * __this, MethodInfo* method)
{
	typedef AssetBundle_t598 * (*AssetBundleCreateRequest_get_assetBundle_m2823_ftn) (AssetBundleCreateRequest_t596 *);
	static AssetBundleCreateRequest_get_assetBundle_m2823_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m2823_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()
extern MethodInfo AssetBundleCreateRequest_DisableCompatibilityChecks_m2824_MethodInfo;
extern "C" void AssetBundleCreateRequest_DisableCompatibilityChecks_m2824 (AssetBundleCreateRequest_t596 * __this, MethodInfo* method)
{
	typedef void (*AssetBundleCreateRequest_DisableCompatibilityChecks_m2824_ftn) (AssetBundleCreateRequest_t596 *);
	static AssetBundleCreateRequest_DisableCompatibilityChecks_m2824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_DisableCompatibilityChecks_m2824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssetBundleRequest_t599_il2cpp_TypeInfo;
// UnityEngine.AssetBundleRequest
#include "UnityEngine_UnityEngine_AssetBundleRequestMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundleMethodDeclarations.h"
extern MethodInfo AssetBundle_LoadAsset_m2828_MethodInfo;
extern MethodInfo AssetBundle_LoadAssetWithSubAssets_Internal_m2830_MethodInfo;


// System.Void UnityEngine.AssetBundleRequest::.ctor()
extern MethodInfo AssetBundleRequest__ctor_m2825_MethodInfo;
extern "C" void AssetBundleRequest__ctor_m2825 (AssetBundleRequest_t599 * __this, MethodInfo* method)
{
	{
		AsyncOperation__ctor_m3362(__this, /*hidden argument*/&AsyncOperation__ctor_m3362_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern MethodInfo AssetBundleRequest_get_asset_m2826_MethodInfo;
extern "C" Object_t93 * AssetBundleRequest_get_asset_m2826 (AssetBundleRequest_t599 * __this, MethodInfo* method)
{
	{
		AssetBundle_t598 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		Object_t93 * L_3 = AssetBundle_LoadAsset_m2828(L_0, L_1, L_2, /*hidden argument*/&AssetBundle_LoadAsset_m2828_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
extern MethodInfo AssetBundleRequest_get_allAssets_m2827_MethodInfo;
extern "C" ObjectU5BU5D_t600* AssetBundleRequest_get_allAssets_m2827 (AssetBundleRequest_t599 * __this, MethodInfo* method)
{
	{
		AssetBundle_t598 * L_0 = (__this->___m_AssetBundle_1);
		String_t* L_1 = (__this->___m_Path_2);
		Type_t * L_2 = (__this->___m_Type_3);
		NullCheck(L_0);
		ObjectU5BU5D_t600* L_3 = AssetBundle_LoadAssetWithSubAssets_Internal_m2830(L_0, L_1, L_2, /*hidden argument*/&AssetBundle_LoadAssetWithSubAssets_Internal_m2830_MethodInfo);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssetBundle_t598_il2cpp_TypeInfo;

// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo NullReferenceException_t790_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t514_il2cpp_TypeInfo;
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo NullReferenceException__ctor_m3828_MethodInfo;
extern MethodInfo String_get_Length_m893_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2604_MethodInfo;
extern MethodInfo AssetBundle_LoadAsset_Internal_m2829_MethodInfo;


// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t93 * AssetBundle_LoadAsset_m2828 (AssetBundle_t598 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		NullReferenceException_t790 * L_1 = (NullReferenceException_t790 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullReferenceException_t790_il2cpp_TypeInfo));
		NullReferenceException__ctor_m3828(L_1, (String_t*) &_stringLiteral273, /*hidden argument*/&NullReferenceException__ctor_m3828_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m893(L_2, /*hidden argument*/&String_get_Length_m893_MethodInfo);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t514 * L_4 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_4, (String_t*) &_stringLiteral274, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		Type_t * L_5 = ___type;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		NullReferenceException_t790 * L_6 = (NullReferenceException_t790 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullReferenceException_t790_il2cpp_TypeInfo));
		NullReferenceException__ctor_m3828(L_6, (String_t*) &_stringLiteral275, /*hidden argument*/&NullReferenceException__ctor_m3828_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		String_t* L_7 = ___name;
		Type_t * L_8 = ___type;
		Object_t93 * L_9 = AssetBundle_LoadAsset_Internal_m2829(__this, L_7, L_8, /*hidden argument*/&AssetBundle_LoadAsset_Internal_m2829_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t93 * AssetBundle_LoadAsset_Internal_m2829 (AssetBundle_t598 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method)
{
	typedef Object_t93 * (*AssetBundle_LoadAsset_Internal_m2829_ftn) (AssetBundle_t598 *, String_t*, Type_t *);
	static AssetBundle_LoadAsset_Internal_m2829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAsset_Internal_m2829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t600* AssetBundle_LoadAssetWithSubAssets_Internal_m2830 (AssetBundle_t598 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method)
{
	typedef ObjectU5BU5D_t600* (*AssetBundle_LoadAssetWithSubAssets_Internal_m2830_ftn) (AssetBundle_t598 *, String_t*, Type_t *);
	static AssetBundle_LoadAssetWithSubAssets_Internal_m2830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundle_LoadAssetWithSubAssets_Internal_m2830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, ___name, ___type);
}
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SendMessageOptions_t601_il2cpp_TypeInfo;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptionsMethodDeclarations.h"



// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Space_t602_il2cpp_TypeInfo;
// UnityEngine.Space
#include "UnityEngine_UnityEngine_SpaceMethodDeclarations.h"



// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LayerMask_t32_il2cpp_TypeInfo;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
extern MethodInfo LayerMask_NameToLayer_m2833_MethodInfo;


// System.Int32 UnityEngine.LayerMask::get_value()
extern MethodInfo LayerMask_get_value_m289_MethodInfo;
extern "C" int32_t LayerMask_get_value_m289 (LayerMask_t32 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mask_0);
		return L_0;
	}
}
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
extern MethodInfo LayerMask_set_value_m2831_MethodInfo;
extern "C" void LayerMask_set_value_m2831 (LayerMask_t32 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Mask_0 = L_0;
		return;
	}
}
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
extern MethodInfo LayerMask_LayerToName_m2832_MethodInfo;
extern "C" String_t* LayerMask_LayerToName_m2832 (Object_t * __this /* static, unused */, int32_t ___layer, MethodInfo* method)
{
	typedef String_t* (*LayerMask_LayerToName_m2832_ftn) (int32_t);
	static LayerMask_LayerToName_m2832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_LayerToName_m2832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(___layer);
}
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C" int32_t LayerMask_NameToLayer_m2833 (Object_t * __this /* static, unused */, String_t* ___layerName, MethodInfo* method)
{
	typedef int32_t (*LayerMask_NameToLayer_m2833_ftn) (String_t*);
	static LayerMask_NameToLayer_m2833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LayerMask_NameToLayer_m2833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(___layerName);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern MethodInfo LayerMask_GetMask_m2834_MethodInfo;
extern "C" int32_t LayerMask_GetMask_m2834 (Object_t * __this /* static, unused */, StringU5BU5D_t104* ___layerNames, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	StringU5BU5D_t104* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t104* L_0 = ___layerNames;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		StringU5BU5D_t104* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_1;
		int32_t L_5 = LayerMask_NameToLayer_m2833(NULL /*static, unused*/, L_4, /*hidden argument*/&LayerMask_NameToLayer_m2833_MethodInfo);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t104* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern MethodInfo LayerMask_op_Implicit_m291_MethodInfo;
extern "C" int32_t LayerMask_op_Implicit_m291 (Object_t * __this /* static, unused */, LayerMask_t32  ___mask, MethodInfo* method)
{
	{
		int32_t L_0 = ((&___mask)->___m_Mask_0);
		return L_0;
	}
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern MethodInfo LayerMask_op_Implicit_m256_MethodInfo;
extern "C" LayerMask_t32  LayerMask_op_Implicit_m256 (Object_t * __this /* static, unused */, int32_t ___intVal, MethodInfo* method)
{
	LayerMask_t32  V_0 = {0};
	{
		int32_t L_0 = ___intVal;
		(&V_0)->___m_Mask_0 = L_0;
		LayerMask_t32  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimePlatform_t603_il2cpp_TypeInfo;
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatformMethodDeclarations.h"



// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogType_t604_il2cpp_TypeInfo;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogTypeMethodDeclarations.h"



// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SystemInfo_t605_il2cpp_TypeInfo;
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"


// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
extern MethodInfo SystemInfo_get_graphicsShaderLevel_m387_MethodInfo;
extern "C" int32_t SystemInfo_get_graphicsShaderLevel_m387 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*SystemInfo_get_graphicsShaderLevel_m387_ftn) ();
	static SystemInfo_get_graphicsShaderLevel_m387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_graphicsShaderLevel_m387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_graphicsShaderLevel()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
extern MethodInfo SystemInfo_get_supportsRenderTextures_m377_MethodInfo;
extern "C" bool SystemInfo_get_supportsRenderTextures_m377 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supportsRenderTextures_m377_ftn) ();
	static SystemInfo_get_supportsRenderTextures_m377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supportsRenderTextures_m377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supportsRenderTextures()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
extern MethodInfo SystemInfo_get_supportsImageEffects_m249_MethodInfo;
extern "C" bool SystemInfo_get_supportsImageEffects_m249 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supportsImageEffects_m249_ftn) ();
	static SystemInfo_get_supportsImageEffects_m249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supportsImageEffects_m249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supportsImageEffects()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supports3DTextures()
extern MethodInfo SystemInfo_get_supports3DTextures_m321_MethodInfo;
extern "C" bool SystemInfo_get_supports3DTextures_m321 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supports3DTextures_m321_ftn) ();
	static SystemInfo_get_supports3DTextures_m321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supports3DTextures_m321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supports3DTextures()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
extern MethodInfo SystemInfo_get_supportsComputeShaders_m388_MethodInfo;
extern "C" bool SystemInfo_get_supportsComputeShaders_m388 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*SystemInfo_get_supportsComputeShaders_m388_ftn) ();
	static SystemInfo_get_supportsComputeShaders_m388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_get_supportsComputeShaders_m388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supportsComputeShaders()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern MethodInfo SystemInfo_SupportsRenderTextureFormat_m268_MethodInfo;
extern "C" bool SystemInfo_SupportsRenderTextureFormat_m268 (Object_t * __this /* static, unused */, int32_t ___format, MethodInfo* method)
{
	typedef bool (*SystemInfo_SupportsRenderTextureFormat_m268_ftn) (int32_t);
	static SystemInfo_SupportsRenderTextureFormat_m268_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_SupportsRenderTextureFormat_m268_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)");
	return _il2cpp_icall_func(___format);
}
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaitForSeconds_t228_il2cpp_TypeInfo;
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
extern MethodInfo YieldInstruction__ctor_m3487_MethodInfo;


// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern MethodInfo WaitForSeconds__ctor_m828_MethodInfo;
extern "C" void WaitForSeconds__ctor_m828 (WaitForSeconds_t228 * __this, float ___seconds, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m3487(__this, /*hidden argument*/&YieldInstruction__ctor_m3487_MethodInfo);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t228_marshal(const WaitForSeconds_t228& unmarshaled, WaitForSeconds_t228_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
void WaitForSeconds_t228_marshal_back(const WaitForSeconds_t228_marshaled& marshaled, WaitForSeconds_t228& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
void WaitForSeconds_t228_marshal_cleanup(WaitForSeconds_t228_marshaled& marshaled)
{
}
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaitForFixedUpdate_t607_il2cpp_TypeInfo;
// UnityEngine.WaitForFixedUpdate
#include "UnityEngine_UnityEngine_WaitForFixedUpdateMethodDeclarations.h"



// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern MethodInfo WaitForFixedUpdate__ctor_m2835_MethodInfo;
extern "C" void WaitForFixedUpdate__ctor_m2835 (WaitForFixedUpdate_t607 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m3487(__this, /*hidden argument*/&YieldInstruction__ctor_m3487_MethodInfo);
		return;
	}
}
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WaitForEndOfFrame_t509_il2cpp_TypeInfo;
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"



// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern MethodInfo WaitForEndOfFrame__ctor_m2514_MethodInfo;
extern "C" void WaitForEndOfFrame__ctor_m2514 (WaitForEndOfFrame_t509 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m3487(__this, /*hidden argument*/&YieldInstruction__ctor_m3487_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Coroutine_t390_il2cpp_TypeInfo;
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_CoroutineMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t103_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Coroutine_ReleaseCoroutine_m2837_MethodInfo;
extern MethodInfo Object_Finalize_m410_MethodInfo;


// System.Void UnityEngine.Coroutine::.ctor()
extern MethodInfo Coroutine__ctor_m2836_MethodInfo;
extern "C" void Coroutine__ctor_m2836 (Coroutine_t390 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m3487(__this, /*hidden argument*/&YieldInstruction__ctor_m3487_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2837 (Coroutine_t390 * __this, MethodInfo* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m2837_ftn) (Coroutine_t390 *);
	static Coroutine_ReleaseCoroutine_m2837_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m2837_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
extern MethodInfo Coroutine_Finalize_m2838_MethodInfo;
extern "C" void Coroutine_Finalize_m2838 (Coroutine_t390 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Coroutine_ReleaseCoroutine_m2837(__this, /*hidden argument*/&Coroutine_ReleaseCoroutine_m2837_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Coroutine
void Coroutine_t390_marshal(const Coroutine_t390& unmarshaled, Coroutine_t390_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void Coroutine_t390_marshal_back(const Coroutine_t390_marshaled& marshaled, Coroutine_t390& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
void Coroutine_t390_marshal_cleanup(Coroutine_t390_marshaled& marshaled)
{
}
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScriptableObject_t608_il2cpp_TypeInfo;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo Object__ctor_m3443_MethodInfo;
extern MethodInfo ScriptableObject_Internal_CreateScriptableObject_m2840_MethodInfo;
extern MethodInfo ScriptableObject_CreateInstanceFromType_m2843_MethodInfo;


// System.Void UnityEngine.ScriptableObject::.ctor()
extern MethodInfo ScriptableObject__ctor_m2839_MethodInfo;
extern "C" void ScriptableObject__ctor_m2839 (ScriptableObject_t608 * __this, MethodInfo* method)
{
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		ScriptableObject_Internal_CreateScriptableObject_m2840(NULL /*static, unused*/, __this, /*hidden argument*/&ScriptableObject_Internal_CreateScriptableObject_m2840_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2840 (Object_t * __this /* static, unused */, ScriptableObject_t608 * ___self, MethodInfo* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m2840_ftn) (ScriptableObject_t608 *);
	static ScriptableObject_Internal_CreateScriptableObject_m2840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m2840_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern MethodInfo ScriptableObject_CreateInstance_m2841_MethodInfo;
extern "C" ScriptableObject_t608 * ScriptableObject_CreateInstance_m2841 (Object_t * __this /* static, unused */, String_t* ___className, MethodInfo* method)
{
	typedef ScriptableObject_t608 * (*ScriptableObject_CreateInstance_m2841_ftn) (String_t*);
	static ScriptableObject_CreateInstance_m2841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstance_m2841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(___className);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern MethodInfo ScriptableObject_CreateInstance_m2842_MethodInfo;
extern "C" ScriptableObject_t608 * ScriptableObject_CreateInstance_m2842 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ScriptableObject_t608 * L_1 = ScriptableObject_CreateInstanceFromType_m2843(NULL /*static, unused*/, L_0, /*hidden argument*/&ScriptableObject_CreateInstanceFromType_m2843_MethodInfo);
		return L_1;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t608 * ScriptableObject_CreateInstanceFromType_m2843 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef ScriptableObject_t608 * (*ScriptableObject_CreateInstanceFromType_m2843_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m2843_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m2843_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t608_marshal(const ScriptableObject_t608& unmarshaled, ScriptableObject_t608_marshaled& marshaled)
{
}
void ScriptableObject_t608_marshal_back(const ScriptableObject_t608_marshaled& marshaled, ScriptableObject_t608& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void ScriptableObject_t608_marshal_cleanup(ScriptableObject_t608_marshaled& marshaled)
{
}
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameCenterPlatform_t618_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_19.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderb.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4.h"
extern TypeInfo LocalUser_t616_il2cpp_TypeInfo;
extern TypeInfo UserProfile_t739_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo;
extern TypeInfo AchievementDescription_t740_il2cpp_TypeInfo;
extern TypeInfo UserProfileU5BU5D_t615_il2cpp_TypeInfo;
extern TypeInfo List_1_t617_il2cpp_TypeInfo;
extern TypeInfo Action_1_t610_il2cpp_TypeInfo;
extern TypeInfo IAchievementDescriptionU5BU5D_t791_il2cpp_TypeInfo;
extern TypeInfo IAchievementDescription_t792_il2cpp_TypeInfo;
extern TypeInfo Action_1_t609_il2cpp_TypeInfo;
extern TypeInfo Boolean_t90_il2cpp_TypeInfo;
extern TypeInfo AchievementU5BU5D_t793_il2cpp_TypeInfo;
extern TypeInfo Achievement_t741_il2cpp_TypeInfo;
extern TypeInfo Action_1_t611_il2cpp_TypeInfo;
extern TypeInfo IAchievementU5BU5D_t794_il2cpp_TypeInfo;
extern TypeInfo IAchievement_t625_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t795_il2cpp_TypeInfo;
extern TypeInfo Score_t742_il2cpp_TypeInfo;
extern TypeInfo Action_1_t612_il2cpp_TypeInfo;
extern TypeInfo IScoreU5BU5D_t754_il2cpp_TypeInfo;
extern TypeInfo IScore_t753_il2cpp_TypeInfo;
extern TypeInfo Leaderboard_t628_il2cpp_TypeInfo;
extern TypeInfo GcLeaderboard_t629_il2cpp_TypeInfo;
extern TypeInfo ILeaderboard_t624_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t761_il2cpp_TypeInfo;
extern TypeInfo Range_t755_il2cpp_TypeInfo;
extern TypeInfo UserScope_t760_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t796_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t231_il2cpp_TypeInfo;
extern TypeInfo ILocalUser_t619_il2cpp_TypeInfo;
extern TypeInfo Action_1_t613_il2cpp_TypeInfo;
extern TypeInfo IUserProfileU5BU5D_t752_il2cpp_TypeInfo;
extern TypeInfo IUserProfile_t797_il2cpp_TypeInfo;
extern TypeInfo Texture2D_t15_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_gen_19MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcLeaderbMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern Il2CppType AchievementDescriptionU5BU5D_t614_0_0_0;
extern Il2CppType UserProfileU5BU5D_t615_0_0_0;
extern Il2CppType List_1_t617_0_0_0;
extern Il2CppType Action_1_t610_0_0_0;
extern Il2CppType Action_1_t609_0_0_0;
extern Il2CppType AchievementU5BU5D_t793_0_0_0;
extern Il2CppType Action_1_t611_0_0_0;
extern Il2CppType ScoreU5BU5D_t795_0_0_0;
extern Il2CppType Action_1_t612_0_0_0;
extern Il2CppType Enumerator_t796_0_0_0;
extern Il2CppType Action_1_t613_0_0_0;
extern MethodInfo LocalUser__ctor_m3674_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_Authenticated_m2849_MethodInfo;
extern MethodInfo UserProfile_get_id_m3686_MethodInfo;
extern MethodInfo String_op_Equality_m880_MethodInfo;
extern MethodInfo GameCenterPlatform_PopulateLocalUser_m2883_MethodInfo;
extern MethodInfo Object__ctor_m373_MethodInfo;
extern MethodInfo List_1__ctor_m3829_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadFriends_m2854_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_Authenticate_m2848_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ResetAllAchievements_m2863_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2864_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2868_MethodInfo;
extern MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m3671_MethodInfo;
extern MethodInfo Debug_Log_m380_MethodInfo;
extern MethodInfo AchievementDescription_SetImage_m3702_MethodInfo;
extern MethodInfo Action_1_Invoke_m3830_MethodInfo;
extern MethodInfo Action_1_Invoke_m3831_MethodInfo;
extern MethodInfo GameCenterPlatform_SafeClearArray_m2901_MethodInfo;
extern MethodInfo GcUserProfileData_AddToArray_m3670_MethodInfo;
extern MethodInfo GameCenterPlatform_SafeSetUserImage_m2900_MethodInfo;
extern MethodInfo LocalUser_SetFriends_m3675_MethodInfo;
extern MethodInfo GcAchievementData_ToAchievement_m3672_MethodInfo;
extern MethodInfo Action_1_Invoke_m3832_MethodInfo;
extern MethodInfo GcScoreData_ToScore_m3673_MethodInfo;
extern MethodInfo Action_1_Invoke_m3833_MethodInfo;
extern MethodInfo LocalUser_SetAuthenticated_m3676_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_UserName_m2850_MethodInfo;
extern MethodInfo UserProfile_SetUserName_m3682_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_UserID_m2851_MethodInfo;
extern MethodInfo UserProfile_SetUserID_m3683_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_Underage_m2852_MethodInfo;
extern MethodInfo LocalUser_SetUnderage_m3677_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_UserImage_m2853_MethodInfo;
extern MethodInfo UserProfile_SetImage_m3684_MethodInfo;
extern MethodInfo GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadAchievementDescriptions_m2855_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ReportProgress_m2857_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadAchievements_m2856_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ReportScore_m2858_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadScores_m2859_MethodInfo;
extern MethodInfo GcLeaderboard__ctor_m2905_MethodInfo;
extern MethodInfo List_1_Add_m3834_MethodInfo;
extern MethodInfo Leaderboard_GetUserFilter_m3723_MethodInfo;
extern MethodInfo ILeaderboard_get_id_m3835_MethodInfo;
extern MethodInfo ILeaderboard_get_timeScope_m3836_MethodInfo;
extern MethodInfo GcLeaderboard_Internal_LoadScoresWithUsers_m2913_MethodInfo;
extern MethodInfo ILeaderboard_get_range_m3837_MethodInfo;
extern MethodInfo ILeaderboard_get_userScope_m3838_MethodInfo;
extern MethodInfo GcLeaderboard_Internal_LoadScores_m2912_MethodInfo;
extern MethodInfo GcLeaderboard_Contains_m2907_MethodInfo;
extern MethodInfo GcLeaderboard_Loading_m2914_MethodInfo;
extern MethodInfo IDisposable_Dispose_m861_MethodInfo;
extern MethodInfo GameCenterPlatform_get_localUser_m2882_MethodInfo;
extern MethodInfo ILocalUser_get_authenticated_m3839_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowAchievementsUI_m2860_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_ShowLeaderboardUI_m2861_MethodInfo;
extern MethodInfo Action_1_Invoke_m3840_MethodInfo;
extern MethodInfo GameCenterPlatform_Internal_LoadUsers_m2862_MethodInfo;
extern MethodInfo Texture2D__ctor_m2962_MethodInfo;
extern MethodInfo Leaderboard__ctor_m3717_MethodInfo;
extern MethodInfo Achievement__ctor_m3691_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3829_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3830_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3831_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3832_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3833_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3834_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m3841_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m3842_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m3843_GenericMethod;
extern Il2CppGenericMethod Action_1_Invoke_m3840_GenericMethod;


// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern MethodInfo GameCenterPlatform__ctor_m2844_MethodInfo;
extern "C" void GameCenterPlatform__ctor_m2844 (GameCenterPlatform_t618 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern MethodInfo GameCenterPlatform__cctor_m2845_MethodInfo;
extern TypeInfo* AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var;
extern TypeInfo* UserProfileU5BU5D_t615_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t617_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3829_MethodInfo_var;
extern "C" void GameCenterPlatform__cctor_m2845 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GameCenterPlatform__cctor_m2845_init;
	if (!GameCenterPlatform__cctor_m2845_init)
	{
		AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementDescriptionU5BU5D_t614_0_0_0);
		UserProfileU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t615_0_0_0);
		List_1_t617_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t617_0_0_0);
		List_1__ctor_m3829_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3829_GenericMethod);
		GameCenterPlatform__cctor_m2845_init = true;
	}
	{
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t614*)SZArrayNew(AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_friends_10 = ((UserProfileU5BU5D_t615*)SZArrayNew(UserProfileU5BU5D_t615_il2cpp_TypeInfo_var, 0));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_users_11 = ((UserProfileU5BU5D_t615*)SZArrayNew(UserProfileU5BU5D_t615_il2cpp_TypeInfo_var, 0));
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t617_il2cpp_TypeInfo_var);
		List_1_t617 * L_0 = (List_1_t617 *)il2cpp_codegen_object_new (List_1_t617_il2cpp_TypeInfo_var);
		List_1__ctor_m3829(L_0, /*hidden argument*/List_1__ctor_m3829_MethodInfo_var);
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_GcBoards_14 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2846_MethodInfo;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2846 (GameCenterPlatform_t618 * __this, Object_t * ___user, Action_1_t609 * ___callback, MethodInfo* method)
{
	{
		Action_1_t609 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_FriendsCallback_1 = L_0;
		GameCenterPlatform_Internal_LoadFriends_m2854(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_LoadFriends_m2854_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2847_MethodInfo;
extern "C" void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2847 (GameCenterPlatform_t618 * __this, Object_t * ___user, Action_1_t609 * ___callback, MethodInfo* method)
{
	{
		Action_1_t609 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AuthenticateCallback_0 = L_0;
		GameCenterPlatform_Internal_Authenticate_m2848(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Authenticate_m2848_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C" void GameCenterPlatform_Internal_Authenticate_m2848 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m2848_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m2848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m2848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C" bool GameCenterPlatform_Internal_Authenticated_m2849 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m2849_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m2849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m2849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C" String_t* GameCenterPlatform_Internal_UserName_m2850 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m2850_ftn) ();
	static GameCenterPlatform_Internal_UserName_m2850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m2850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C" String_t* GameCenterPlatform_Internal_UserID_m2851 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m2851_ftn) ();
	static GameCenterPlatform_Internal_UserID_m2851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m2851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C" bool GameCenterPlatform_Internal_Underage_m2852 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m2852_ftn) ();
	static GameCenterPlatform_Internal_Underage_m2852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m2852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	return _il2cpp_icall_func();
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C" Texture2D_t15 * GameCenterPlatform_Internal_UserImage_m2853 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Texture2D_t15 * (*GameCenterPlatform_Internal_UserImage_m2853_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m2853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m2853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C" void GameCenterPlatform_Internal_LoadFriends_m2854 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m2854_ftn) ();
	static GameCenterPlatform_Internal_LoadFriends_m2854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m2854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C" void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2855 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m2855_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m2855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m2855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C" void GameCenterPlatform_Internal_LoadAchievements_m2856 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m2856_ftn) ();
	static GameCenterPlatform_Internal_LoadAchievements_m2856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m2856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
extern "C" void GameCenterPlatform_Internal_ReportProgress_m2857 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m2857_ftn) (String_t*, double);
	static GameCenterPlatform_Internal_ReportProgress_m2857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m2857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)");
	_il2cpp_icall_func(___id, ___progress);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
extern "C" void GameCenterPlatform_Internal_ReportScore_m2858 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m2858_ftn) (int64_t, String_t*);
	static GameCenterPlatform_Internal_ReportScore_m2858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m2858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)");
	_il2cpp_icall_func(___score, ___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C" void GameCenterPlatform_Internal_LoadScores_m2859 (Object_t * __this /* static, unused */, String_t* ___category, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m2859_ftn) (String_t*);
	static GameCenterPlatform_Internal_LoadScores_m2859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m2859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)");
	_il2cpp_icall_func(___category);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C" void GameCenterPlatform_Internal_ShowAchievementsUI_m2860 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m2860_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m2860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m2860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C" void GameCenterPlatform_Internal_ShowLeaderboardUI_m2861 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m2861_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m2861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m2861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
extern "C" void GameCenterPlatform_Internal_LoadUsers_m2862 (Object_t * __this /* static, unused */, StringU5BU5D_t104* ___userIds, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m2862_ftn) (StringU5BU5D_t104*);
	static GameCenterPlatform_Internal_LoadUsers_m2862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m2862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])");
	_il2cpp_icall_func(___userIds);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C" void GameCenterPlatform_Internal_ResetAllAchievements_m2863 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m2863_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m2863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m2863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C" void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2864 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2864_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_ResetAllAchievements_m2865_MethodInfo;
extern "C" void GameCenterPlatform_ResetAllAchievements_m2865 (Object_t * __this /* static, unused */, Action_1_t609 * ___callback, MethodInfo* method)
{
	{
		Action_1_t609 * L_0 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ResetAchievements_12 = L_0;
		GameCenterPlatform_Internal_ResetAllAchievements_m2863(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_ResetAllAchievements_m2863_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern MethodInfo GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2866_MethodInfo;
extern "C" void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m2866 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2864(NULL /*static, unused*/, L_0, /*hidden argument*/&GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2864_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern MethodInfo GameCenterPlatform_ShowLeaderboardUI_m2867_MethodInfo;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2867 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method)
{
	{
		String_t* L_0 = ___leaderboardID;
		int32_t L_1 = ___timeScope;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2868(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2868_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C" void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2868 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, MethodInfo* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2868_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern MethodInfo GameCenterPlatform_ClearAchievementDescriptions_m2869_MethodInfo;
extern TypeInfo* AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_ClearAchievementDescriptions_m2869 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method)
{
	static bool GameCenterPlatform_ClearAchievementDescriptions_m2869_init;
	if (!GameCenterPlatform_ClearAchievementDescriptions_m2869_init)
	{
		AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementDescriptionU5BU5D_t614_0_0_0);
		GameCenterPlatform_ClearAchievementDescriptions_m2869_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t614* L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t614* L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_1);
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		int32_t L_3 = ___size;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9 = ((AchievementDescriptionU5BU5D_t614*)SZArrayNew(AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var, L_3));
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern MethodInfo GameCenterPlatform_SetAchievementDescription_m2870_MethodInfo;
extern "C" void GameCenterPlatform_SetAchievementDescription_m2870 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t626  ___data, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t614* L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		int32_t L_1 = ___number;
		AchievementDescription_t740 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m3671((&___data), /*hidden argument*/&GcAchievementDescriptionData_ToAchievementDescription_m3671_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		ArrayElementTypeCheck (L_0, L_2);
		*((AchievementDescription_t740 **)(AchievementDescription_t740 **)SZArrayLdElema(L_0, L_1)) = (AchievementDescription_t740 *)L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern MethodInfo GameCenterPlatform_SetAchievementDescriptionImage_m2871_MethodInfo;
extern "C" void GameCenterPlatform_SetAchievementDescriptionImage_m2871 (Object_t * __this /* static, unused */, Texture2D_t15 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t614* L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_0);
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral277, /*hidden argument*/&Debug_Log_m380_MethodInfo);
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t614* L_3 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		int32_t L_4 = ___number;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Texture2D_t15 * L_6 = ___texture;
		NullCheck((*(AchievementDescription_t740 **)(AchievementDescription_t740 **)SZArrayLdElema(L_3, L_5)));
		AchievementDescription_SetImage_m3702((*(AchievementDescription_t740 **)(AchievementDescription_t740 **)SZArrayLdElema(L_3, L_5)), L_6, /*hidden argument*/&AchievementDescription_SetImage_m3702_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
extern MethodInfo GameCenterPlatform_TriggerAchievementDescriptionCallback_m2872_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3830_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerAchievementDescriptionCallback_m2872 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerAchievementDescriptionCallback_m2872_init;
	if (!GameCenterPlatform_TriggerAchievementDescriptionCallback_m2872_init)
	{
		Action_1_Invoke_m3830_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3830_GenericMethod);
		GameCenterPlatform_TriggerAchievementDescriptionCallback_m2872_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t610 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t614* L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		AchievementDescriptionU5BU5D_t614* L_2 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral278, /*hidden argument*/&Debug_Log_m380_MethodInfo);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t610 * L_3 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AchievementDescriptionLoaderCallback_2;
		AchievementDescriptionU5BU5D_t614* L_4 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_adCache_9;
		NullCheck(L_3);
		VirtActionInvoker1< IAchievementDescriptionU5BU5D_t791* >::Invoke(Action_1_Invoke_m3830_MethodInfo_var, L_3, (IAchievementDescriptionU5BU5D_t791*)(IAchievementDescriptionU5BU5D_t791*)L_4);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
extern MethodInfo GameCenterPlatform_AuthenticateCallbackWrapper_m2873_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_AuthenticateCallbackWrapper_m2873 (Object_t * __this /* static, unused */, int32_t ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_AuthenticateCallbackWrapper_m2873_init;
	if (!GameCenterPlatform_AuthenticateCallbackWrapper_m2873_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_AuthenticateCallbackWrapper_m2873_init = true;
	}
	Action_1_t609 * G_B3_0 = {0};
	Action_1_t609 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Action_1_t609 * G_B4_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AuthenticateCallback_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		GameCenterPlatform_PopulateLocalUser_m2883(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_PopulateLocalUser_m2883_MethodInfo);
		Action_1_t609 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AuthenticateCallback_0;
		int32_t L_2 = ___result;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0022:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, G_B4_1, G_B4_0);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern MethodInfo GameCenterPlatform_ClearFriends_m2874_MethodInfo;
extern "C" void GameCenterPlatform_ClearFriends_m2874 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2901(NULL /*static, unused*/, (&((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_friends_10), L_0, /*hidden argument*/&GameCenterPlatform_SafeClearArray_m2901_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern MethodInfo GameCenterPlatform_SetFriends_m2875_MethodInfo;
extern "C" void GameCenterPlatform_SetFriends_m2875 (Object_t * __this /* static, unused */, GcUserProfileData_t627  ___data, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m3670((&___data), (&((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_friends_10), L_0, /*hidden argument*/&GcUserProfileData_AddToArray_m3670_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern MethodInfo GameCenterPlatform_SetFriendImage_m2876_MethodInfo;
extern "C" void GameCenterPlatform_SetFriendImage_m2876 (Object_t * __this /* static, unused */, Texture2D_t15 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Texture2D_t15 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2900(NULL /*static, unused*/, (&((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_friends_10), L_0, L_1, /*hidden argument*/&GameCenterPlatform_SafeSetUserImage_m2900_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
extern MethodInfo GameCenterPlatform_TriggerFriendsCallbackWrapper_m2877_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerFriendsCallbackWrapper_m2877 (Object_t * __this /* static, unused */, int32_t ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerFriendsCallbackWrapper_m2877_init;
	if (!GameCenterPlatform_TriggerFriendsCallbackWrapper_m2877_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_TriggerFriendsCallbackWrapper_m2877_init = true;
	}
	Action_1_t609 * G_B5_0 = {0};
	Action_1_t609 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Action_1_t609 * G_B6_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		UserProfileU5BU5D_t615* L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_friends_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		LocalUser_t616 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		UserProfileU5BU5D_t615* L_2 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_friends_10;
		NullCheck(L_1);
		LocalUser_SetFriends_m3675(L_1, (IUserProfileU5BU5D_t752*)(IUserProfileU5BU5D_t752*)L_2, /*hidden argument*/&LocalUser_SetFriends_m3675_MethodInfo);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_3 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_FriendsCallback_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_4 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_FriendsCallback_1;
		int32_t L_5 = ___result;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0036:
	{
		NullCheck(G_B6_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, G_B6_1, G_B6_0);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern MethodInfo GameCenterPlatform_AchievementCallbackWrapper_m2878_MethodInfo;
extern TypeInfo* AchievementU5BU5D_t793_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3832_MethodInfo_var;
extern "C" void GameCenterPlatform_AchievementCallbackWrapper_m2878 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t620* ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_AchievementCallbackWrapper_m2878_init;
	if (!GameCenterPlatform_AchievementCallbackWrapper_m2878_init)
	{
		AchievementU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementU5BU5D_t793_0_0_0);
		Action_1_Invoke_m3832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3832_GenericMethod);
		GameCenterPlatform_AchievementCallbackWrapper_m2878_init = true;
	}
	AchievementU5BU5D_t793* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t611 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AchievementLoaderCallback_3;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		GcAchievementDataU5BU5D_t620* L_1 = ___result;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral279, /*hidden argument*/&Debug_Log_m380_MethodInfo);
	}

IL_001c:
	{
		GcAchievementDataU5BU5D_t620* L_2 = ___result;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t793*)SZArrayNew(AchievementU5BU5D_t793_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_003f;
	}

IL_002c:
	{
		AchievementU5BU5D_t793* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t620* L_5 = ___result;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		Achievement_t741 * L_7 = GcAchievementData_ToAchievement_m3672(((GcAchievementData_t621 *)(GcAchievementData_t621 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/&GcAchievementData_ToAchievement_m3672_MethodInfo);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, L_7);
		*((Achievement_t741 **)(Achievement_t741 **)SZArrayLdElema(L_3, L_4)) = (Achievement_t741 *)L_7;
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t620* L_10 = ___result;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t611 * L_11 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AchievementLoaderCallback_3;
		AchievementU5BU5D_t793* L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< IAchievementU5BU5D_t794* >::Invoke(Action_1_Invoke_m3832_MethodInfo_var, L_11, (IAchievementU5BU5D_t794*)(IAchievementU5BU5D_t794*)L_12);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern MethodInfo GameCenterPlatform_ProgressCallbackWrapper_m2879_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_ProgressCallbackWrapper_m2879 (Object_t * __this /* static, unused */, bool ___success, MethodInfo* method)
{
	static bool GameCenterPlatform_ProgressCallbackWrapper_m2879_init;
	if (!GameCenterPlatform_ProgressCallbackWrapper_m2879_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_ProgressCallbackWrapper_m2879_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ProgressCallback_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ProgressCallback_4;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern MethodInfo GameCenterPlatform_ScoreCallbackWrapper_m2880_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreCallbackWrapper_m2880 (Object_t * __this /* static, unused */, bool ___success, MethodInfo* method)
{
	static bool GameCenterPlatform_ScoreCallbackWrapper_m2880_init;
	if (!GameCenterPlatform_ScoreCallbackWrapper_m2880_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_ScoreCallbackWrapper_m2880_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ScoreCallback_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ScoreCallback_5;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern MethodInfo GameCenterPlatform_ScoreLoaderCallbackWrapper_m2881_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t795_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3833_MethodInfo_var;
extern "C" void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2881 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t622* ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_ScoreLoaderCallbackWrapper_m2881_init;
	if (!GameCenterPlatform_ScoreLoaderCallbackWrapper_m2881_init)
	{
		ScoreU5BU5D_t795_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t795_0_0_0);
		Action_1_Invoke_m3833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3833_GenericMethod);
		GameCenterPlatform_ScoreLoaderCallbackWrapper_m2881_init = true;
	}
	ScoreU5BU5D_t795* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t612 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ScoreLoaderCallback_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t622* L_1 = ___result;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t795*)SZArrayNew(ScoreU5BU5D_t795_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ScoreU5BU5D_t795* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t622* L_4 = ___result;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t742 * L_6 = GcScoreData_ToScore_m3673(((GcScoreData_t623 *)(GcScoreData_t623 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/&GcScoreData_ToScore_m3673_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t742 **)(Score_t742 **)SZArrayLdElema(L_2, L_3)) = (Score_t742 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t622* L_9 = ___result;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t612 * L_10 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ScoreLoaderCallback_6;
		ScoreU5BU5D_t795* L_11 = V_0;
		NullCheck(L_10);
		VirtActionInvoker1< IScoreU5BU5D_t754* >::Invoke(Action_1_Invoke_m3833_MethodInfo_var, L_10, (IScoreU5BU5D_t754*)(IScoreU5BU5D_t754*)L_11);
	}

IL_0041:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C" Object_t * GameCenterPlatform_get_localUser_m2882 (GameCenterPlatform_t618 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		LocalUser_t616 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		LocalUser_t616 * L_1 = (LocalUser_t616 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LocalUser_t616_il2cpp_TypeInfo));
		LocalUser__ctor_m3674(L_1, /*hidden argument*/&LocalUser__ctor_m3674_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m2849(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Authenticated_m2849_MethodInfo);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		LocalUser_t616 * L_3 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m3686_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m880(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral276, /*hidden argument*/&String_op_Equality_m880_MethodInfo);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		GameCenterPlatform_PopulateLocalUser_m2883(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_PopulateLocalUser_m2883_MethodInfo);
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		LocalUser_t616 * L_6 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		return L_6;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C" void GameCenterPlatform_PopulateLocalUser_m2883 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		LocalUser_t616 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m2849(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Authenticated_m2849_MethodInfo);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m3676(L_0, L_1, /*hidden argument*/&LocalUser_SetAuthenticated_m3676_MethodInfo);
		LocalUser_t616 * L_2 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m2850(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_UserName_m2850_MethodInfo);
		NullCheck(L_2);
		UserProfile_SetUserName_m3682(L_2, L_3, /*hidden argument*/&UserProfile_SetUserName_m3682_MethodInfo);
		LocalUser_t616 * L_4 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m2851(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_UserID_m2851_MethodInfo);
		NullCheck(L_4);
		UserProfile_SetUserID_m3683(L_4, L_5, /*hidden argument*/&UserProfile_SetUserID_m3683_MethodInfo);
		LocalUser_t616 * L_6 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		bool L_7 = GameCenterPlatform_Internal_Underage_m2852(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_Underage_m2852_MethodInfo);
		NullCheck(L_6);
		LocalUser_SetUnderage_m3677(L_6, L_7, /*hidden argument*/&LocalUser_SetUnderage_m3677_MethodInfo);
		LocalUser_t616 * L_8 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_LocalUser_13;
		Texture2D_t15 * L_9 = GameCenterPlatform_Internal_UserImage_m2853(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_UserImage_m2853_MethodInfo);
		NullCheck(L_8);
		UserProfile_SetImage_m3684(L_8, L_9, /*hidden argument*/&UserProfile_SetImage_m3684_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern MethodInfo GameCenterPlatform_LoadAchievementDescriptions_m2884_MethodInfo;
extern TypeInfo* AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3830_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievementDescriptions_m2884 (GameCenterPlatform_t618 * __this, Action_1_t610 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadAchievementDescriptions_m2884_init;
	if (!GameCenterPlatform_LoadAchievementDescriptions_m2884_init)
	{
		AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementDescriptionU5BU5D_t614_0_0_0);
		Action_1_Invoke_m3830_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3830_GenericMethod);
		GameCenterPlatform_LoadAchievementDescriptions_m2884_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t610 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IAchievementDescriptionU5BU5D_t791* >::Invoke(Action_1_Invoke_m3830_MethodInfo_var, L_1, (IAchievementDescriptionU5BU5D_t791*)(IAchievementDescriptionU5BU5D_t791*)((AchievementDescriptionU5BU5D_t614*)SZArrayNew(AchievementDescriptionU5BU5D_t614_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t610 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AchievementDescriptionLoaderCallback_2 = L_2;
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m2855(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_LoadAchievementDescriptions_m2855_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_ReportProgress_m2885_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportProgress_m2885 (GameCenterPlatform_t618 * __this, String_t* ___id, double ___progress, Action_1_t609 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_ReportProgress_m2885_init;
	if (!GameCenterPlatform_ReportProgress_m2885_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_ReportProgress_m2885_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t609 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t609 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ProgressCallback_4 = L_2;
		String_t* L_3 = ___id;
		double L_4 = ___progress;
		GameCenterPlatform_Internal_ReportProgress_m2857(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&GameCenterPlatform_Internal_ReportProgress_m2857_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern MethodInfo GameCenterPlatform_LoadAchievements_m2886_MethodInfo;
extern TypeInfo* AchievementU5BU5D_t793_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3832_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadAchievements_m2886 (GameCenterPlatform_t618 * __this, Action_1_t611 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadAchievements_m2886_init;
	if (!GameCenterPlatform_LoadAchievements_m2886_init)
	{
		AchievementU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&AchievementU5BU5D_t793_0_0_0);
		Action_1_Invoke_m3832_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3832_GenericMethod);
		GameCenterPlatform_LoadAchievements_m2886_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t611 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IAchievementU5BU5D_t794* >::Invoke(Action_1_Invoke_m3832_MethodInfo_var, L_1, (IAchievementU5BU5D_t794*)(IAchievementU5BU5D_t794*)((AchievementU5BU5D_t793*)SZArrayNew(AchievementU5BU5D_t793_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t611 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_AchievementLoaderCallback_3 = L_2;
		GameCenterPlatform_Internal_LoadAchievements_m2856(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_LoadAchievements_m2856_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_ReportScore_m2887_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_ReportScore_m2887 (GameCenterPlatform_t618 * __this, int64_t ___score, String_t* ___board, Action_1_t609 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_ReportScore_m2887_init;
	if (!GameCenterPlatform_ReportScore_m2887_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_ReportScore_m2887_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t609 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t609 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ScoreCallback_5 = L_2;
		int64_t L_3 = ___score;
		String_t* L_4 = ___board;
		GameCenterPlatform_Internal_ReportScore_m2858(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&GameCenterPlatform_Internal_ReportScore_m2858_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern MethodInfo GameCenterPlatform_LoadScores_m2888_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t795_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3833_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2888 (GameCenterPlatform_t618 * __this, String_t* ___category, Action_1_t612 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadScores_m2888_init;
	if (!GameCenterPlatform_LoadScores_m2888_init)
	{
		ScoreU5BU5D_t795_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t795_0_0_0);
		Action_1_Invoke_m3833_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3833_GenericMethod);
		GameCenterPlatform_LoadScores_m2888_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t612 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IScoreU5BU5D_t754* >::Invoke(Action_1_Invoke_m3833_MethodInfo_var, L_1, (IScoreU5BU5D_t754*)(IScoreU5BU5D_t754*)((ScoreU5BU5D_t795*)SZArrayNew(ScoreU5BU5D_t795_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t612 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ScoreLoaderCallback_6 = L_2;
		String_t* L_3 = ___category;
		GameCenterPlatform_Internal_LoadScores_m2859(NULL /*static, unused*/, L_3, /*hidden argument*/&GameCenterPlatform_Internal_LoadScores_m2859_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern MethodInfo GameCenterPlatform_LoadScores_m2889_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern MethodInfo* List_1_Add_m3834_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadScores_m2889 (GameCenterPlatform_t618 * __this, Object_t * ___board, Action_1_t609 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadScores_m2889_init;
	if (!GameCenterPlatform_LoadScores_m2889_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		List_1_Add_m3834_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m3834_GenericMethod);
		GameCenterPlatform_LoadScores_m2889_init = true;
	}
	Leaderboard_t628 * V_0 = {0};
	GcLeaderboard_t629 * V_1 = {0};
	Range_t755  V_2 = {0};
	Range_t755  V_3 = {0};
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t609 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, L_1, 0);
		return;
	}

IL_0013:
	{
		Action_1_t609 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_LeaderboardCallback_7 = L_2;
		Object_t * L_3 = ___board;
		V_0 = ((Leaderboard_t628 *)Castclass(L_3, InitializedTypeInfo(&Leaderboard_t628_il2cpp_TypeInfo)));
		Leaderboard_t628 * L_4 = V_0;
		GcLeaderboard_t629 * L_5 = (GcLeaderboard_t629 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GcLeaderboard_t629_il2cpp_TypeInfo));
		GcLeaderboard__ctor_m2905(L_5, L_4, /*hidden argument*/&GcLeaderboard__ctor_m2905_MethodInfo);
		V_1 = L_5;
		List_1_t617 * L_6 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_GcBoards_14;
		GcLeaderboard_t629 * L_7 = V_1;
		NullCheck(L_6);
		VirtActionInvoker1< GcLeaderboard_t629 * >::Invoke(List_1_Add_m3834_MethodInfo_var, L_6, L_7);
		Leaderboard_t628 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t104* L_9 = Leaderboard_GetUserFilter_m3723(L_8, /*hidden argument*/&Leaderboard_GetUserFilter_m3723_MethodInfo);
		NullCheck(L_9);
		if ((((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		GcLeaderboard_t629 * L_10 = V_1;
		Object_t * L_11 = ___board;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&ILeaderboard_get_id_m3835_MethodInfo, L_11);
		Object_t * L_13 = ___board;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ILeaderboard_get_timeScope_m3836_MethodInfo, L_13);
		Leaderboard_t628 * L_15 = V_0;
		NullCheck(L_15);
		StringU5BU5D_t104* L_16 = Leaderboard_GetUserFilter_m3723(L_15, /*hidden argument*/&Leaderboard_GetUserFilter_m3723_MethodInfo);
		NullCheck(L_10);
		GcLeaderboard_Internal_LoadScoresWithUsers_m2913(L_10, L_12, L_14, L_16, /*hidden argument*/&GcLeaderboard_Internal_LoadScoresWithUsers_m2913_MethodInfo);
		goto IL_0091;
	}

IL_005d:
	{
		GcLeaderboard_t629 * L_17 = V_1;
		Object_t * L_18 = ___board;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(&ILeaderboard_get_id_m3835_MethodInfo, L_18);
		Object_t * L_20 = ___board;
		NullCheck(L_20);
		Range_t755  L_21 = (Range_t755 )InterfaceFuncInvoker0< Range_t755  >::Invoke(&ILeaderboard_get_range_m3837_MethodInfo, L_20);
		V_2 = L_21;
		int32_t L_22 = ((&V_2)->___from_0);
		Object_t * L_23 = ___board;
		NullCheck(L_23);
		Range_t755  L_24 = (Range_t755 )InterfaceFuncInvoker0< Range_t755  >::Invoke(&ILeaderboard_get_range_m3837_MethodInfo, L_23);
		V_3 = L_24;
		int32_t L_25 = ((&V_3)->___count_1);
		Object_t * L_26 = ___board;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ILeaderboard_get_userScope_m3838_MethodInfo, L_26);
		Object_t * L_28 = ___board;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&ILeaderboard_get_timeScope_m3836_MethodInfo, L_28);
		NullCheck(L_17);
		GcLeaderboard_Internal_LoadScores_m2912(L_17, L_19, L_22, L_25, L_27, L_29, /*hidden argument*/&GcLeaderboard_Internal_LoadScores_m2912_MethodInfo);
	}

IL_0091:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern MethodInfo GameCenterPlatform_LeaderboardCallbackWrapper_m2890_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_LeaderboardCallbackWrapper_m2890 (Object_t * __this /* static, unused */, bool ___success, MethodInfo* method)
{
	static bool GameCenterPlatform_LeaderboardCallbackWrapper_m2890_init;
	if (!GameCenterPlatform_LeaderboardCallbackWrapper_m2890_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_LeaderboardCallbackWrapper_m2890_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_LeaderboardCallback_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_LeaderboardCallback_7;
		bool L_2 = ___success;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern MethodInfo GameCenterPlatform_GetLoading_m2891_MethodInfo;
extern TypeInfo* Enumerator_t796_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3841_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3842_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3843_MethodInfo_var;
extern "C" bool GameCenterPlatform_GetLoading_m2891 (GameCenterPlatform_t618 * __this, Object_t * ___board, MethodInfo* method)
{
	static bool GameCenterPlatform_GetLoading_m2891_init;
	if (!GameCenterPlatform_GetLoading_m2891_init)
	{
		Enumerator_t796_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t796_0_0_0);
		List_1_GetEnumerator_m3841_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3841_GenericMethod);
		Enumerator_get_Current_m3842_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3842_GenericMethod);
		Enumerator_MoveNext_m3843_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3843_GenericMethod);
		GameCenterPlatform_GetLoading_m2891_init = true;
	}
	GcLeaderboard_t629 * V_0 = {0};
	Enumerator_t796  V_1 = {0};
	bool V_2 = false;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		List_1_t617 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___m_GcBoards_14;
		NullCheck(L_1);
		Enumerator_t796  L_2 = List_1_GetEnumerator_m3841(L_1, /*hidden argument*/List_1_GetEnumerator_m3841_MethodInfo_var);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001d:
		{
			GcLeaderboard_t629 * L_3 = Enumerator_get_Current_m3842((&V_1), /*hidden argument*/Enumerator_get_Current_m3842_MethodInfo_var);
			V_0 = L_3;
			GcLeaderboard_t629 * L_4 = V_0;
			Object_t * L_5 = ___board;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m2907(L_4, ((Leaderboard_t628 *)Castclass(L_5, InitializedTypeInfo(&Leaderboard_t628_il2cpp_TypeInfo))), /*hidden argument*/&GcLeaderboard_Contains_m2907_MethodInfo);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_0036:
		{
			GcLeaderboard_t629 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m2914(L_7, /*hidden argument*/&GcLeaderboard_Loading_m2914_MethodInfo);
			V_2 = L_8;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0042:
		{
			bool L_9 = Enumerator_MoveNext_m3843((&V_1), /*hidden argument*/Enumerator_MoveNext_m3843_MethodInfo_var);
			if (L_9)
			{
				goto IL_001d;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_t796  L_10 = V_1;
		Enumerator_t796  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t796_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_12);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_005f:
	{
		return 0;
	}

IL_0061:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C" bool GameCenterPlatform_VerifyAuthentication_m2892 (GameCenterPlatform_t618 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&GameCenterPlatform_get_localUser_m2882_MethodInfo, __this);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ILocalUser_get_authenticated_m3839_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral280, /*hidden argument*/&Debug_Log_m380_MethodInfo);
		return 0;
	}

IL_001c:
	{
		return 1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern MethodInfo GameCenterPlatform_ShowAchievementsUI_m2893_MethodInfo;
extern "C" void GameCenterPlatform_ShowAchievementsUI_m2893 (GameCenterPlatform_t618 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowAchievementsUI_m2860(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_ShowAchievementsUI_m2860_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern MethodInfo GameCenterPlatform_ShowLeaderboardUI_m2894_MethodInfo;
extern "C" void GameCenterPlatform_ShowLeaderboardUI_m2894 (GameCenterPlatform_t618 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		GameCenterPlatform_Internal_ShowLeaderboardUI_m2861(NULL /*static, unused*/, /*hidden argument*/&GameCenterPlatform_Internal_ShowLeaderboardUI_m2861_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern MethodInfo GameCenterPlatform_ClearUsers_m2895_MethodInfo;
extern "C" void GameCenterPlatform_ClearUsers_m2895 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		int32_t L_0 = ___size;
		GameCenterPlatform_SafeClearArray_m2901(NULL /*static, unused*/, (&((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_users_11), L_0, /*hidden argument*/&GameCenterPlatform_SafeClearArray_m2901_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern MethodInfo GameCenterPlatform_SetUser_m2896_MethodInfo;
extern "C" void GameCenterPlatform_SetUser_m2896 (Object_t * __this /* static, unused */, GcUserProfileData_t627  ___data, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		int32_t L_0 = ___number;
		GcUserProfileData_AddToArray_m3670((&___data), (&((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_users_11), L_0, /*hidden argument*/&GcUserProfileData_AddToArray_m3670_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern MethodInfo GameCenterPlatform_SetUserImage_m2897_MethodInfo;
extern "C" void GameCenterPlatform_SetUserImage_m2897 (Object_t * __this /* static, unused */, Texture2D_t15 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Texture2D_t15 * L_0 = ___texture;
		int32_t L_1 = ___number;
		GameCenterPlatform_SafeSetUserImage_m2900(NULL /*static, unused*/, (&((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_users_11), L_0, L_1, /*hidden argument*/&GameCenterPlatform_SafeSetUserImage_m2900_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
extern MethodInfo GameCenterPlatform_TriggerUsersCallbackWrapper_m2898_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3840_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerUsersCallbackWrapper_m2898 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerUsersCallbackWrapper_m2898_init;
	if (!GameCenterPlatform_TriggerUsersCallbackWrapper_m2898_init)
	{
		Action_1_Invoke_m3840_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3840_GenericMethod);
		GameCenterPlatform_TriggerUsersCallbackWrapper_m2898_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t613 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_UsersCallback_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t613 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_UsersCallback_8;
		UserProfileU5BU5D_t615* L_2 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_users_11;
		NullCheck(L_1);
		VirtActionInvoker1< IUserProfileU5BU5D_t752* >::Invoke(Action_1_Invoke_m3840_MethodInfo_var, L_1, (IUserProfileU5BU5D_t752*)(IUserProfileU5BU5D_t752*)L_2);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern MethodInfo GameCenterPlatform_LoadUsers_m2899_MethodInfo;
extern TypeInfo* UserProfileU5BU5D_t615_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1_Invoke_m3840_MethodInfo_var;
extern "C" void GameCenterPlatform_LoadUsers_m2899 (GameCenterPlatform_t618 * __this, StringU5BU5D_t104* ___userIds, Action_1_t613 * ___callback, MethodInfo* method)
{
	static bool GameCenterPlatform_LoadUsers_m2899_init;
	if (!GameCenterPlatform_LoadUsers_m2899_init)
	{
		UserProfileU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t615_0_0_0);
		Action_1_Invoke_m3840_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3840_GenericMethod);
		GameCenterPlatform_LoadUsers_m2899_init = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m2892(__this, /*hidden argument*/&GameCenterPlatform_VerifyAuthentication_m2892_MethodInfo);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t613 * L_1 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker1< IUserProfileU5BU5D_t752* >::Invoke(Action_1_Invoke_m3840_MethodInfo_var, L_1, (IUserProfileU5BU5D_t752*)(IUserProfileU5BU5D_t752*)((UserProfileU5BU5D_t615*)SZArrayNew(UserProfileU5BU5D_t615_il2cpp_TypeInfo_var, 0)));
		return;
	}

IL_0018:
	{
		Action_1_t613 * L_2 = ___callback;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_UsersCallback_8 = L_2;
		StringU5BU5D_t104* L_3 = ___userIds;
		GameCenterPlatform_Internal_LoadUsers_m2862(NULL /*static, unused*/, L_3, /*hidden argument*/&GameCenterPlatform_Internal_LoadUsers_m2862_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C" void GameCenterPlatform_SafeSetUserImage_m2900 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t615** ___array, Texture2D_t15 * ___texture, int32_t ___number, MethodInfo* method)
{
	{
		UserProfileU5BU5D_t615** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t615**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t615**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0011:
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral281, /*hidden argument*/&Debug_Log_m380_MethodInfo);
		Texture2D_t15 * L_3 = (Texture2D_t15 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t15_il2cpp_TypeInfo));
		Texture2D__ctor_m2962(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/&Texture2D__ctor_m2962_MethodInfo);
		___texture = L_3;
	}

IL_0026:
	{
		UserProfileU5BU5D_t615** L_4 = ___array;
		NullCheck((*((UserProfileU5BU5D_t615**)L_4)));
		int32_t L_5 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t615**)L_4)))->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___number;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		UserProfileU5BU5D_t615** L_7 = ___array;
		int32_t L_8 = ___number;
		NullCheck((*((UserProfileU5BU5D_t615**)L_7)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t615**)L_7)), L_8);
		int32_t L_9 = L_8;
		Texture2D_t15 * L_10 = ___texture;
		NullCheck((*(UserProfile_t739 **)(UserProfile_t739 **)SZArrayLdElema((*((UserProfileU5BU5D_t615**)L_7)), L_9)));
		UserProfile_SetImage_m3684((*(UserProfile_t739 **)(UserProfile_t739 **)SZArrayLdElema((*((UserProfileU5BU5D_t615**)L_7)), L_9)), L_10, /*hidden argument*/&UserProfile_SetImage_m3684_MethodInfo);
		goto IL_0050;
	}

IL_0046:
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral282, /*hidden argument*/&Debug_Log_m380_MethodInfo);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern TypeInfo* UserProfileU5BU5D_t615_il2cpp_TypeInfo_var;
extern "C" void GameCenterPlatform_SafeClearArray_m2901 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t615** ___array, int32_t ___size, MethodInfo* method)
{
	static bool GameCenterPlatform_SafeClearArray_m2901_init;
	if (!GameCenterPlatform_SafeClearArray_m2901_init)
	{
		UserProfileU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&UserProfileU5BU5D_t615_0_0_0);
		GameCenterPlatform_SafeClearArray_m2901_init = true;
	}
	{
		UserProfileU5BU5D_t615** L_0 = ___array;
		if (!(*((UserProfileU5BU5D_t615**)L_0)))
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_t615** L_1 = ___array;
		NullCheck((*((UserProfileU5BU5D_t615**)L_1)));
		int32_t L_2 = ___size;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t615**)L_1)))->max_length)))) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0011:
	{
		UserProfileU5BU5D_t615** L_3 = ___array;
		int32_t L_4 = ___size;
		*((Object_t **)(L_3)) = (Object_t *)((UserProfileU5BU5D_t615*)SZArrayNew(UserProfileU5BU5D_t615_il2cpp_TypeInfo_var, L_4));
	}

IL_0019:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern MethodInfo GameCenterPlatform_CreateLeaderboard_m2902_MethodInfo;
extern "C" Object_t * GameCenterPlatform_CreateLeaderboard_m2902 (GameCenterPlatform_t618 * __this, MethodInfo* method)
{
	Leaderboard_t628 * V_0 = {0};
	{
		Leaderboard_t628 * L_0 = (Leaderboard_t628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Leaderboard_t628_il2cpp_TypeInfo));
		Leaderboard__ctor_m3717(L_0, /*hidden argument*/&Leaderboard__ctor_m3717_MethodInfo);
		V_0 = L_0;
		Leaderboard_t628 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern MethodInfo GameCenterPlatform_CreateAchievement_m2903_MethodInfo;
extern "C" Object_t * GameCenterPlatform_CreateAchievement_m2903 (GameCenterPlatform_t618 * __this, MethodInfo* method)
{
	Achievement_t741 * V_0 = {0};
	{
		Achievement_t741 * L_0 = (Achievement_t741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Achievement_t741_il2cpp_TypeInfo));
		Achievement__ctor_m3691(L_0, /*hidden argument*/&Achievement__ctor_m3691_MethodInfo);
		V_0 = L_0;
		Achievement_t741 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern MethodInfo GameCenterPlatform_TriggerResetAchievementCallback_m2904_MethodInfo;
extern MethodInfo* Action_1_Invoke_m3831_MethodInfo_var;
extern "C" void GameCenterPlatform_TriggerResetAchievementCallback_m2904 (Object_t * __this /* static, unused */, bool ___result, MethodInfo* method)
{
	static bool GameCenterPlatform_TriggerResetAchievementCallback_m2904_init;
	if (!GameCenterPlatform_TriggerResetAchievementCallback_m2904_init)
	{
		Action_1_Invoke_m3831_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m3831_GenericMethod);
		GameCenterPlatform_TriggerResetAchievementCallback_m2904_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_0 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ResetAchievements_12;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo));
		Action_1_t609 * L_1 = ((GameCenterPlatform_t618_StaticFields*)InitializedTypeInfo(&GameCenterPlatform_t618_il2cpp_TypeInfo)->static_fields)->___s_ResetAchievements_12;
		bool L_2 = ___result;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(Action_1_Invoke_m3831_MethodInfo_var, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern MethodInfo GcLeaderboard_Dispose_m2915_MethodInfo;
extern MethodInfo Leaderboard_SetScores_m3721_MethodInfo;
extern MethodInfo Leaderboard_SetLocalUserScore_m3719_MethodInfo;
extern MethodInfo Leaderboard_SetMaxRange_m3720_MethodInfo;
extern MethodInfo Leaderboard_SetTitle_m3722_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" void GcLeaderboard__ctor_m2905 (GcLeaderboard_t629 * __this, Leaderboard_t628 * ___board, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Leaderboard_t628 * L_0 = ___board;
		__this->___m_GenericLeaderboard_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern MethodInfo GcLeaderboard_Finalize_m2906_MethodInfo;
extern "C" void GcLeaderboard_Finalize_m2906 (GcLeaderboard_t629 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GcLeaderboard_Dispose_m2915(__this, /*hidden argument*/&GcLeaderboard_Dispose_m2915_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m2907 (GcLeaderboard_t629 * __this, Leaderboard_t628 * ___board, MethodInfo* method)
{
	{
		Leaderboard_t628 * L_0 = (__this->___m_GenericLeaderboard_1);
		Leaderboard_t628 * L_1 = ___board;
		return ((((Object_t*)(Leaderboard_t628 *)L_0) == ((Object_t*)(Leaderboard_t628 *)L_1))? 1 : 0);
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern MethodInfo GcLeaderboard_SetScores_m2908_MethodInfo;
extern TypeInfo* ScoreU5BU5D_t795_il2cpp_TypeInfo_var;
extern "C" void GcLeaderboard_SetScores_m2908 (GcLeaderboard_t629 * __this, GcScoreDataU5BU5D_t622* ___scoreDatas, MethodInfo* method)
{
	static bool GcLeaderboard_SetScores_m2908_init;
	if (!GcLeaderboard_SetScores_m2908_init)
	{
		ScoreU5BU5D_t795_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ScoreU5BU5D_t795_0_0_0);
		GcLeaderboard_SetScores_m2908_init = true;
	}
	ScoreU5BU5D_t795* V_0 = {0};
	int32_t V_1 = 0;
	{
		Leaderboard_t628 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GcScoreDataU5BU5D_t622* L_1 = ___scoreDatas;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t795*)SZArrayNew(ScoreU5BU5D_t795_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_002e;
	}

IL_001b:
	{
		ScoreU5BU5D_t795* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t622* L_4 = ___scoreDatas;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Score_t742 * L_6 = GcScoreData_ToScore_m3673(((GcScoreData_t623 *)(GcScoreData_t623 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/&GcScoreData_ToScore_m3673_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_6);
		*((Score_t742 **)(Score_t742 **)SZArrayLdElema(L_2, L_3)) = (Score_t742 *)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t622* L_9 = ___scoreDatas;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_t628 * L_10 = (__this->___m_GenericLeaderboard_1);
		ScoreU5BU5D_t795* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m3721(L_10, (IScoreU5BU5D_t754*)(IScoreU5BU5D_t754*)L_11, /*hidden argument*/&Leaderboard_SetScores_m3721_MethodInfo);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern MethodInfo GcLeaderboard_SetLocalScore_m2909_MethodInfo;
extern "C" void GcLeaderboard_SetLocalScore_m2909 (GcLeaderboard_t629 * __this, GcScoreData_t623  ___scoreData, MethodInfo* method)
{
	{
		Leaderboard_t628 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t628 * L_1 = (__this->___m_GenericLeaderboard_1);
		Score_t742 * L_2 = GcScoreData_ToScore_m3673((&___scoreData), /*hidden argument*/&GcScoreData_ToScore_m3673_MethodInfo);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m3719(L_1, L_2, /*hidden argument*/&Leaderboard_SetLocalUserScore_m3719_MethodInfo);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern MethodInfo GcLeaderboard_SetMaxRange_m2910_MethodInfo;
extern "C" void GcLeaderboard_SetMaxRange_m2910 (GcLeaderboard_t629 * __this, uint32_t ___maxRange, MethodInfo* method)
{
	{
		Leaderboard_t628 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t628 * L_1 = (__this->___m_GenericLeaderboard_1);
		uint32_t L_2 = ___maxRange;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m3720(L_1, L_2, /*hidden argument*/&Leaderboard_SetMaxRange_m3720_MethodInfo);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern MethodInfo GcLeaderboard_SetTitle_m2911_MethodInfo;
extern "C" void GcLeaderboard_SetTitle_m2911 (GcLeaderboard_t629 * __this, String_t* ___title, MethodInfo* method)
{
	{
		Leaderboard_t628 * L_0 = (__this->___m_GenericLeaderboard_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Leaderboard_t628 * L_1 = (__this->___m_GenericLeaderboard_1);
		String_t* L_2 = ___title;
		NullCheck(L_1);
		Leaderboard_SetTitle_m3722(L_1, L_2, /*hidden argument*/&Leaderboard_SetTitle_m3722_MethodInfo);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void GcLeaderboard_Internal_LoadScores_m2912 (GcLeaderboard_t629 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m2912_ftn) (GcLeaderboard_t629 *, String_t*, int32_t, int32_t, int32_t, int32_t);
	static GcLeaderboard_Internal_LoadScores_m2912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m2912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___category, ___from, ___count, ___playerScope, ___timeScope);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m2913 (GcLeaderboard_t629 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t104* ___userIDs, MethodInfo* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScoresWithUsers_m2913_ftn) (GcLeaderboard_t629 *, String_t*, int32_t, StringU5BU5D_t104*);
	static GcLeaderboard_Internal_LoadScoresWithUsers_m2913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScoresWithUsers_m2913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])");
	_il2cpp_icall_func(__this, ___category, ___timeScope, ___userIDs);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m2914 (GcLeaderboard_t629 * __this, MethodInfo* method)
{
	typedef bool (*GcLeaderboard_Loading_m2914_ftn) (GcLeaderboard_t629 *);
	static GcLeaderboard_Loading_m2914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m2914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m2915 (GcLeaderboard_t629 * __this, MethodInfo* method)
{
	typedef void (*GcLeaderboard_Dispose_m2915_ftn) (GcLeaderboard_t629 *);
	static GcLeaderboard_Dispose_m2915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m2915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.RenderSettings
#include "UnityEngine_UnityEngine_RenderSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderSettings_t630_il2cpp_TypeInfo;
// UnityEngine.RenderSettings
#include "UnityEngine_UnityEngine_RenderSettingsMethodDeclarations.h"

// UnityEngine.FogMode
#include "UnityEngine_UnityEngine_FogMode.h"


// UnityEngine.FogMode UnityEngine.RenderSettings::get_fogMode()
extern MethodInfo RenderSettings_get_fogMode_m363_MethodInfo;
extern "C" int32_t RenderSettings_get_fogMode_m363 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*RenderSettings_get_fogMode_m363_ftn) ();
	static RenderSettings_get_fogMode_m363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogMode_m363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogMode()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.RenderSettings::get_fogDensity()
extern MethodInfo RenderSettings_get_fogDensity_m364_MethodInfo;
extern "C" float RenderSettings_get_fogDensity_m364 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*RenderSettings_get_fogDensity_m364_ftn) ();
	static RenderSettings_get_fogDensity_m364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogDensity_m364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogDensity()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.RenderSettings::get_fogStartDistance()
extern MethodInfo RenderSettings_get_fogStartDistance_m365_MethodInfo;
extern "C" float RenderSettings_get_fogStartDistance_m365 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*RenderSettings_get_fogStartDistance_m365_ftn) ();
	static RenderSettings_get_fogStartDistance_m365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogStartDistance_m365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogStartDistance()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.RenderSettings::get_fogEndDistance()
extern MethodInfo RenderSettings_get_fogEndDistance_m366_MethodInfo;
extern "C" float RenderSettings_get_fogEndDistance_m366 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*RenderSettings_get_fogEndDistance_m366_ftn) ();
	static RenderSettings_get_fogEndDistance_m366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderSettings_get_fogEndDistance_m366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderSettings::get_fogEndDistance()");
	return _il2cpp_icall_func();
}
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo QualitySettings_t631_il2cpp_TypeInfo;
// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"

// UnityEngine.ColorSpace
#include "UnityEngine_UnityEngine_ColorSpace.h"


// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
extern MethodInfo QualitySettings_get_activeColorSpace_m332_MethodInfo;
extern "C" int32_t QualitySettings_get_activeColorSpace_m332 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*QualitySettings_get_activeColorSpace_m332_ftn) ();
	static QualitySettings_get_activeColorSpace_m332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (QualitySettings_get_activeColorSpace_m332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::get_activeColorSpace()");
	return _il2cpp_icall_func();
}
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Mesh_t69_il2cpp_TypeInfo;
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern MethodInfo Mesh_Internal_Create_m2916_MethodInfo;


// System.Void UnityEngine.Mesh::.ctor()
extern MethodInfo Mesh__ctor_m394_MethodInfo;
extern "C" void Mesh__ctor_m394 (Mesh_t69 * __this, MethodInfo* method)
{
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		Mesh_Internal_Create_m2916(NULL /*static, unused*/, __this, /*hidden argument*/&Mesh_Internal_Create_m2916_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m2916 (Object_t * __this /* static, unused */, Mesh_t69 * ___mono, MethodInfo* method)
{
	typedef void (*Mesh_Internal_Create_m2916_ftn) (Mesh_t69 *);
	static Mesh_Internal_Create_m2916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_Internal_Create_m2916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)");
	_il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern MethodInfo Mesh_set_vertices_m395_MethodInfo;
extern "C" void Mesh_set_vertices_m395 (Mesh_t69 * __this, Vector3U5BU5D_t105* ___value, MethodInfo* method)
{
	typedef void (*Mesh_set_vertices_m395_ftn) (Mesh_t69 *, Vector3U5BU5D_t105*);
	static Mesh_set_vertices_m395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_vertices_m395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern MethodInfo Mesh_set_uv_m397_MethodInfo;
extern "C" void Mesh_set_uv_m397 (Mesh_t69 * __this, Vector2U5BU5D_t96* ___value, MethodInfo* method)
{
	typedef void (*Mesh_set_uv_m397_ftn) (Mesh_t69 *, Vector2U5BU5D_t96*);
	static Mesh_set_uv_m397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_uv_m397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern MethodInfo Mesh_set_uv2_m398_MethodInfo;
extern "C" void Mesh_set_uv2_m398 (Mesh_t69 * __this, Vector2U5BU5D_t96* ___value, MethodInfo* method)
{
	typedef void (*Mesh_set_uv2_m398_ftn) (Mesh_t69 *, Vector2U5BU5D_t96*);
	static Mesh_set_uv2_m398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_uv2_m398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern MethodInfo Mesh_set_triangles_m396_MethodInfo;
extern "C" void Mesh_set_triangles_m396 (Mesh_t69 * __this, Int32U5BU5D_t102* ___value, MethodInfo* method)
{
	typedef void (*Mesh_set_triangles_m396_ftn) (Mesh_t69 *, Int32U5BU5D_t102*);
	static Mesh_set_triangles_m396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mesh_set_triangles_m396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_triangles(System.Int32[])");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeight.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BoneWeight_t632_il2cpp_TypeInfo;
// UnityEngine.BoneWeight
#include "UnityEngine_UnityEngine_BoneWeightMethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Int32_t92_il2cpp_TypeInfo;
extern TypeInfo Single_t110_il2cpp_TypeInfo;
extern TypeInfo Vector4_t91_il2cpp_TypeInfo;
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo BoneWeight_get_boneIndex0_m2925_MethodInfo;
extern MethodInfo Int32_GetHashCode_m3844_MethodInfo;
extern MethodInfo BoneWeight_get_boneIndex1_m2927_MethodInfo;
extern MethodInfo BoneWeight_get_boneIndex2_m2929_MethodInfo;
extern MethodInfo BoneWeight_get_boneIndex3_m2931_MethodInfo;
extern MethodInfo BoneWeight_get_weight0_m2917_MethodInfo;
extern MethodInfo Single_GetHashCode_m3845_MethodInfo;
extern MethodInfo BoneWeight_get_weight1_m2919_MethodInfo;
extern MethodInfo BoneWeight_get_weight2_m2921_MethodInfo;
extern MethodInfo BoneWeight_get_weight3_m2923_MethodInfo;
extern MethodInfo Int32_Equals_m3846_MethodInfo;
extern MethodInfo Vector4__ctor_m214_MethodInfo;
extern MethodInfo Vector4_Equals_m3292_MethodInfo;
extern MethodInfo Vector4_op_Equality_m3297_MethodInfo;
extern MethodInfo BoneWeight_op_Equality_m2935_MethodInfo;


// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C" float BoneWeight_get_weight0_m2917 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight0_0);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
extern MethodInfo BoneWeight_set_weight0_m2918_MethodInfo;
extern "C" void BoneWeight_set_weight0_m2918 (BoneWeight_t632 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight0_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C" float BoneWeight_get_weight1_m2919 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight1_1);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
extern MethodInfo BoneWeight_set_weight1_m2920_MethodInfo;
extern "C" void BoneWeight_set_weight1_m2920 (BoneWeight_t632 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight1_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C" float BoneWeight_get_weight2_m2921 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight2_2);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
extern MethodInfo BoneWeight_set_weight2_m2922_MethodInfo;
extern "C" void BoneWeight_set_weight2_m2922 (BoneWeight_t632 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight2_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C" float BoneWeight_get_weight3_m2923 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Weight3_3);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
extern MethodInfo BoneWeight_set_weight3_m2924_MethodInfo;
extern "C" void BoneWeight_set_weight3_m2924 (BoneWeight_t632 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Weight3_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C" int32_t BoneWeight_get_boneIndex0_m2925 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex0_4);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex0_m2926_MethodInfo;
extern "C" void BoneWeight_set_boneIndex0_m2926 (BoneWeight_t632 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex0_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C" int32_t BoneWeight_get_boneIndex1_m2927 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex1_5);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex1_m2928_MethodInfo;
extern "C" void BoneWeight_set_boneIndex1_m2928 (BoneWeight_t632 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex1_5 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C" int32_t BoneWeight_get_boneIndex2_m2929 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex2_6);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex2_m2930_MethodInfo;
extern "C" void BoneWeight_set_boneIndex2_m2930 (BoneWeight_t632 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex2_6 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C" int32_t BoneWeight_get_boneIndex3_m2931 (BoneWeight_t632 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_BoneIndex3_7);
		return L_0;
	}
}
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern MethodInfo BoneWeight_set_boneIndex3_m2932_MethodInfo;
extern "C" void BoneWeight_set_boneIndex3_m2932 (BoneWeight_t632 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_BoneIndex3_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.BoneWeight::GetHashCode()
extern MethodInfo BoneWeight_GetHashCode_m2933_MethodInfo;
extern "C" int32_t BoneWeight_GetHashCode_m2933 (BoneWeight_t632 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2925(__this, /*hidden argument*/&BoneWeight_get_boneIndex0_m2925_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m3844((&V_0), /*hidden argument*/&Int32_GetHashCode_m3844_MethodInfo);
		int32_t L_2 = BoneWeight_get_boneIndex1_m2927(__this, /*hidden argument*/&BoneWeight_get_boneIndex1_m2927_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m3844((&V_1), /*hidden argument*/&Int32_GetHashCode_m3844_MethodInfo);
		int32_t L_4 = BoneWeight_get_boneIndex2_m2929(__this, /*hidden argument*/&BoneWeight_get_boneIndex2_m2929_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Int32_GetHashCode_m3844((&V_2), /*hidden argument*/&Int32_GetHashCode_m3844_MethodInfo);
		int32_t L_6 = BoneWeight_get_boneIndex3_m2931(__this, /*hidden argument*/&BoneWeight_get_boneIndex3_m2931_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Int32_GetHashCode_m3844((&V_3), /*hidden argument*/&Int32_GetHashCode_m3844_MethodInfo);
		float L_8 = BoneWeight_get_weight0_m2917(__this, /*hidden argument*/&BoneWeight_get_weight0_m2917_MethodInfo);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m3845((&V_4), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float L_10 = BoneWeight_get_weight1_m2919(__this, /*hidden argument*/&BoneWeight_get_weight1_m2919_MethodInfo);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m3845((&V_5), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float L_12 = BoneWeight_get_weight2_m2921(__this, /*hidden argument*/&BoneWeight_get_weight2_m2921_MethodInfo);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m3845((&V_6), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float L_14 = BoneWeight_get_weight3_m2923(__this, /*hidden argument*/&BoneWeight_get_weight3_m2923_MethodInfo);
		V_7 = L_14;
		int32_t L_15 = Single_GetHashCode_m3845((&V_7), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
// System.Boolean UnityEngine.BoneWeight::Equals(System.Object)
extern MethodInfo BoneWeight_Equals_m2934_MethodInfo;
extern "C" bool BoneWeight_Equals_m2934 (BoneWeight_t632 * __this, Object_t * ___other, MethodInfo* method)
{
	BoneWeight_t632  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector4_t91  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&BoneWeight_t632_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(BoneWeight_t632 *)((BoneWeight_t632 *)UnBox (L_1, InitializedTypeInfo(&BoneWeight_t632_il2cpp_TypeInfo)))));
		int32_t L_2 = BoneWeight_get_boneIndex0_m2925(__this, /*hidden argument*/&BoneWeight_get_boneIndex0_m2925_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = BoneWeight_get_boneIndex0_m2925((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex0_m2925_MethodInfo);
		bool L_4 = Int32_Equals_m3846((&V_1), L_3, /*hidden argument*/&Int32_Equals_m3846_MethodInfo);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = BoneWeight_get_boneIndex1_m2927(__this, /*hidden argument*/&BoneWeight_get_boneIndex1_m2927_MethodInfo);
		V_2 = L_5;
		int32_t L_6 = BoneWeight_get_boneIndex1_m2927((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex1_m2927_MethodInfo);
		bool L_7 = Int32_Equals_m3846((&V_2), L_6, /*hidden argument*/&Int32_Equals_m3846_MethodInfo);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = BoneWeight_get_boneIndex2_m2929(__this, /*hidden argument*/&BoneWeight_get_boneIndex2_m2929_MethodInfo);
		V_3 = L_8;
		int32_t L_9 = BoneWeight_get_boneIndex2_m2929((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex2_m2929_MethodInfo);
		bool L_10 = Int32_Equals_m3846((&V_3), L_9, /*hidden argument*/&Int32_Equals_m3846_MethodInfo);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = BoneWeight_get_boneIndex3_m2931(__this, /*hidden argument*/&BoneWeight_get_boneIndex3_m2931_MethodInfo);
		V_4 = L_11;
		int32_t L_12 = BoneWeight_get_boneIndex3_m2931((&V_0), /*hidden argument*/&BoneWeight_get_boneIndex3_m2931_MethodInfo);
		bool L_13 = Int32_Equals_m3846((&V_4), L_12, /*hidden argument*/&Int32_Equals_m3846_MethodInfo);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = BoneWeight_get_weight0_m2917(__this, /*hidden argument*/&BoneWeight_get_weight0_m2917_MethodInfo);
		float L_15 = BoneWeight_get_weight1_m2919(__this, /*hidden argument*/&BoneWeight_get_weight1_m2919_MethodInfo);
		float L_16 = BoneWeight_get_weight2_m2921(__this, /*hidden argument*/&BoneWeight_get_weight2_m2921_MethodInfo);
		float L_17 = BoneWeight_get_weight3_m2923(__this, /*hidden argument*/&BoneWeight_get_weight3_m2923_MethodInfo);
		Vector4__ctor_m214((&V_5), L_14, L_15, L_16, L_17, /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		float L_18 = BoneWeight_get_weight0_m2917((&V_0), /*hidden argument*/&BoneWeight_get_weight0_m2917_MethodInfo);
		float L_19 = BoneWeight_get_weight1_m2919((&V_0), /*hidden argument*/&BoneWeight_get_weight1_m2919_MethodInfo);
		float L_20 = BoneWeight_get_weight2_m2921((&V_0), /*hidden argument*/&BoneWeight_get_weight2_m2921_MethodInfo);
		float L_21 = BoneWeight_get_weight3_m2923((&V_0), /*hidden argument*/&BoneWeight_get_weight3_m2923_MethodInfo);
		Vector4_t91  L_22 = {0};
		Vector4__ctor_m214(&L_22, L_18, L_19, L_20, L_21, /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		Vector4_t91  L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Vector4_t91_il2cpp_TypeInfo), &L_23);
		bool L_25 = Vector4_Equals_m3292((&V_5), L_24, /*hidden argument*/&Vector4_Equals_m3292_MethodInfo);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Equality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern "C" bool BoneWeight_op_Equality_m2935 (Object_t * __this /* static, unused */, BoneWeight_t632  ___lhs, BoneWeight_t632  ___rhs, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = BoneWeight_get_boneIndex0_m2925((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex0_m2925_MethodInfo);
		int32_t L_1 = BoneWeight_get_boneIndex0_m2925((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex0_m2925_MethodInfo);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = BoneWeight_get_boneIndex1_m2927((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex1_m2927_MethodInfo);
		int32_t L_3 = BoneWeight_get_boneIndex1_m2927((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex1_m2927_MethodInfo);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = BoneWeight_get_boneIndex2_m2929((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex2_m2929_MethodInfo);
		int32_t L_5 = BoneWeight_get_boneIndex2_m2929((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex2_m2929_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = BoneWeight_get_boneIndex3_m2931((&___lhs), /*hidden argument*/&BoneWeight_get_boneIndex3_m2931_MethodInfo);
		int32_t L_7 = BoneWeight_get_boneIndex3_m2931((&___rhs), /*hidden argument*/&BoneWeight_get_boneIndex3_m2931_MethodInfo);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = BoneWeight_get_weight0_m2917((&___lhs), /*hidden argument*/&BoneWeight_get_weight0_m2917_MethodInfo);
		float L_9 = BoneWeight_get_weight1_m2919((&___lhs), /*hidden argument*/&BoneWeight_get_weight1_m2919_MethodInfo);
		float L_10 = BoneWeight_get_weight2_m2921((&___lhs), /*hidden argument*/&BoneWeight_get_weight2_m2921_MethodInfo);
		float L_11 = BoneWeight_get_weight3_m2923((&___lhs), /*hidden argument*/&BoneWeight_get_weight3_m2923_MethodInfo);
		Vector4_t91  L_12 = {0};
		Vector4__ctor_m214(&L_12, L_8, L_9, L_10, L_11, /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		float L_13 = BoneWeight_get_weight0_m2917((&___rhs), /*hidden argument*/&BoneWeight_get_weight0_m2917_MethodInfo);
		float L_14 = BoneWeight_get_weight1_m2919((&___rhs), /*hidden argument*/&BoneWeight_get_weight1_m2919_MethodInfo);
		float L_15 = BoneWeight_get_weight2_m2921((&___rhs), /*hidden argument*/&BoneWeight_get_weight2_m2921_MethodInfo);
		float L_16 = BoneWeight_get_weight3_m2923((&___rhs), /*hidden argument*/&BoneWeight_get_weight3_m2923_MethodInfo);
		Vector4_t91  L_17 = {0};
		Vector4__ctor_m214(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		bool L_18 = Vector4_op_Equality_m3297(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/&Vector4_op_Equality_m3297_MethodInfo);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
// System.Boolean UnityEngine.BoneWeight::op_Inequality(UnityEngine.BoneWeight,UnityEngine.BoneWeight)
extern MethodInfo BoneWeight_op_Inequality_m2936_MethodInfo;
extern "C" bool BoneWeight_op_Inequality_m2936 (Object_t * __this /* static, unused */, BoneWeight_t632  ___lhs, BoneWeight_t632  ___rhs, MethodInfo* method)
{
	{
		BoneWeight_t632  L_0 = ___lhs;
		BoneWeight_t632  L_1 = ___rhs;
		bool L_2 = BoneWeight_op_Equality_m2935(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&BoneWeight_op_Equality_m2935_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Renderer_t222_il2cpp_TypeInfo;
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"


// System.Boolean UnityEngine.Renderer::get_enabled()
extern MethodInfo Renderer_get_enabled_m777_MethodInfo;
extern "C" bool Renderer_get_enabled_m777 (Renderer_t222 * __this, MethodInfo* method)
{
	typedef bool (*Renderer_get_enabled_m777_ftn) (Renderer_t222 *);
	static Renderer_get_enabled_m777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_enabled_m777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern MethodInfo Renderer_set_enabled_m766_MethodInfo;
extern "C" void Renderer_set_enabled_m766 (Renderer_t222 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Renderer_set_enabled_m766_ftn) (Renderer_t222 *, bool);
	static Renderer_set_enabled_m766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_set_enabled_m766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern MethodInfo Renderer_get_material_m793_MethodInfo;
extern "C" Material_t4 * Renderer_get_material_m793 (Renderer_t222 * __this, MethodInfo* method)
{
	typedef Material_t4 * (*Renderer_get_material_m793_ftn) (Renderer_t222 *);
	static Renderer_get_material_m793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_material_m793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern MethodInfo Renderer_set_material_m854_MethodInfo;
extern "C" void Renderer_set_material_m854 (Renderer_t222 * __this, Material_t4 * ___value, MethodInfo* method)
{
	typedef void (*Renderer_set_material_m854_ftn) (Renderer_t222 *, Material_t4 *);
	static Renderer_set_material_m854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_set_material_m854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::set_material(UnityEngine.Material)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern MethodInfo Renderer_get_sortingLayerID_m2244_MethodInfo;
extern "C" int32_t Renderer_get_sortingLayerID_m2244 (Renderer_t222 * __this, MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingLayerID_m2244_ftn) (Renderer_t222 *);
	static Renderer_get_sortingLayerID_m2244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingLayerID_m2244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern MethodInfo Renderer_get_sortingOrder_m2245_MethodInfo;
extern "C" int32_t Renderer_get_sortingOrder_m2245 (Renderer_t222 * __this, MethodInfo* method)
{
	typedef int32_t (*Renderer_get_sortingOrder_m2245_ftn) (Renderer_t222 *);
	static Renderer_get_sortingOrder_m2245_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Renderer_get_sortingOrder_m2245_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_Graphics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Graphics_t633_il2cpp_TypeInfo;
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"

// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.MeshTopology
#include "UnityEngine_UnityEngine_MeshTopology.h"
// UnityEngine.ComputeBuffer
#include "UnityEngine_UnityEngine_ComputeBuffer.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern MethodInfo Graphics_Internal_DrawMeshNow2_m2937_MethodInfo;
extern MethodInfo Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938_MethodInfo;
extern MethodInfo Graphics_Blit_m221_MethodInfo;
extern MethodInfo Graphics_Internal_BlitMaterial_m2939_MethodInfo;
extern MethodInfo Graphics_Internal_BlitMultiTap_m2940_MethodInfo;
extern MethodInfo Graphics_Internal_SetRandomWriteTargetBuffer_m2943_MethodInfo;
extern MethodInfo Graphics_Internal_SetRTSimple_m2942_MethodInfo;
extern MethodInfo Object_op_Implicit_m211_MethodInfo;
extern MethodInfo RenderTexture_get_colorBuffer_m2984_MethodInfo;
extern MethodInfo RenderTexture_get_depthBuffer_m2985_MethodInfo;
extern MethodInfo Graphics_SetRenderTargetImpl_m2944_MethodInfo;
extern MethodInfo Graphics_Internal_SetNullRT_m2941_MethodInfo;
extern MethodInfo Graphics_SetRenderTargetImpl_m2945_MethodInfo;


// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern MethodInfo Graphics_DrawMeshNow_m357_MethodInfo;
extern "C" void Graphics_DrawMeshNow_m357 (Object_t * __this /* static, unused */, Mesh_t69 * ___mesh, Matrix4x4_t33  ___matrix, MethodInfo* method)
{
	{
		Mesh_t69 * L_0 = ___mesh;
		Matrix4x4_t33  L_1 = ___matrix;
		Graphics_Internal_DrawMeshNow2_m2937(NULL /*static, unused*/, L_0, L_1, (-1), /*hidden argument*/&Graphics_Internal_DrawMeshNow2_m2937_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow2_m2937 (Object_t * __this /* static, unused */, Mesh_t69 * ___mesh, Matrix4x4_t33  ___matrix, int32_t ___materialIndex, MethodInfo* method)
{
	{
		Mesh_t69 * L_0 = ___mesh;
		int32_t L_1 = ___materialIndex;
		Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938(NULL /*static, unused*/, L_0, (&___matrix), L_1, /*hidden argument*/&Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938 (Object_t * __this /* static, unused */, Mesh_t69 * ___mesh, Matrix4x4_t33 * ___matrix, int32_t ___materialIndex, MethodInfo* method)
{
	typedef void (*Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938_ftn) (Mesh_t69 *, Matrix4x4_t33 *, int32_t);
	static Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m2938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)");
	_il2cpp_icall_func(___mesh, ___matrix, ___materialIndex);
}
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern MethodInfo Graphics_DrawProceduralIndirect_m351_MethodInfo;
extern "C" void Graphics_DrawProceduralIndirect_m351 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t49 * ___bufferWithArgs, int32_t ___argsOffset, MethodInfo* method)
{
	typedef void (*Graphics_DrawProceduralIndirect_m351_ftn) (int32_t, ComputeBuffer_t49 *, int32_t);
	static Graphics_DrawProceduralIndirect_m351_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_DrawProceduralIndirect_m351_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)");
	_il2cpp_icall_func(___topology, ___bufferWithArgs, ___argsOffset);
}
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern MethodInfo Graphics_Blit_m213_MethodInfo;
extern "C" void Graphics_Blit_m213 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method)
{
	typedef void (*Graphics_Blit_m213_ftn) (Texture_t39 *, RenderTexture_t7 *);
	static Graphics_Blit_m213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Blit_m213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___source, ___dest);
}
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern MethodInfo Graphics_Blit_m227_MethodInfo;
extern "C" void Graphics_Blit_m227 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Texture_t39 * L_0 = ___source;
		RenderTexture_t7 * L_1 = ___dest;
		Material_t4 * L_2 = ___mat;
		int32_t L_3 = V_0;
		Graphics_Blit_m221(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Graphics_Blit_m221_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m221 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, int32_t ___pass, MethodInfo* method)
{
	{
		Texture_t39 * L_0 = ___source;
		RenderTexture_t7 * L_1 = ___dest;
		Material_t4 * L_2 = ___mat;
		int32_t L_3 = ___pass;
		Graphics_Internal_BlitMaterial_m2939(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 1, /*hidden argument*/&Graphics_Internal_BlitMaterial_m2939_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m2939 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, int32_t ___pass, bool ___setRT, MethodInfo* method)
{
	typedef void (*Graphics_Internal_BlitMaterial_m2939_ftn) (Texture_t39 *, RenderTexture_t7 *, Material_t4 *, int32_t, bool);
	static Graphics_Internal_BlitMaterial_m2939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_BlitMaterial_m2939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___source, ___dest, ___mat, ___pass, ___setRT);
}
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern MethodInfo Graphics_BlitMultiTap_m253_MethodInfo;
extern "C" void Graphics_BlitMultiTap_m253 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, Vector2U5BU5D_t96* ___offsets, MethodInfo* method)
{
	{
		Texture_t39 * L_0 = ___source;
		RenderTexture_t7 * L_1 = ___dest;
		Material_t4 * L_2 = ___mat;
		Vector2U5BU5D_t96* L_3 = ___offsets;
		Graphics_Internal_BlitMultiTap_m2940(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Graphics_Internal_BlitMultiTap_m2940_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m2940 (Object_t * __this /* static, unused */, Texture_t39 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___mat, Vector2U5BU5D_t96* ___offsets, MethodInfo* method)
{
	typedef void (*Graphics_Internal_BlitMultiTap_m2940_ftn) (Texture_t39 *, RenderTexture_t7 *, Material_t4 *, Vector2U5BU5D_t96*);
	static Graphics_Internal_BlitMultiTap_m2940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_BlitMultiTap_m2940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])");
	_il2cpp_icall_func(___source, ___dest, ___mat, ___offsets);
}
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C" void Graphics_Internal_SetNullRT_m2941 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*Graphics_Internal_SetNullRT_m2941_ftn) ();
	static Graphics_Internal_SetNullRT_m2941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_SetNullRT_m2941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_SetNullRT()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)
extern "C" void Graphics_Internal_SetRTSimple_m2942 (Object_t * __this /* static, unused */, RenderBuffer_t634 * ___color, RenderBuffer_t634 * ___depth, int32_t ___mip, int32_t ___face, MethodInfo* method)
{
	typedef void (*Graphics_Internal_SetRTSimple_m2942_ftn) (RenderBuffer_t634 *, RenderBuffer_t634 *, int32_t, int32_t);
	static Graphics_Internal_SetRTSimple_m2942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_SetRTSimple_m2942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,System.Int32)");
	_il2cpp_icall_func(___color, ___depth, ___mip, ___face);
}
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern MethodInfo Graphics_SetRandomWriteTarget_m344_MethodInfo;
extern "C" void Graphics_SetRandomWriteTarget_m344 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t49 * ___uav, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		ComputeBuffer_t49 * L_1 = ___uav;
		Graphics_Internal_SetRandomWriteTargetBuffer_m2943(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Graphics_Internal_SetRandomWriteTargetBuffer_m2943_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern MethodInfo Graphics_ClearRandomWriteTargets_m345_MethodInfo;
extern "C" void Graphics_ClearRandomWriteTargets_m345 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*Graphics_ClearRandomWriteTargets_m345_ftn) ();
	static Graphics_ClearRandomWriteTargets_m345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_ClearRandomWriteTargets_m345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::ClearRandomWriteTargets()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C" void Graphics_Internal_SetRandomWriteTargetBuffer_m2943 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t49 * ___uav, MethodInfo* method)
{
	typedef void (*Graphics_Internal_SetRandomWriteTargetBuffer_m2943_ftn) (int32_t, ComputeBuffer_t49 *);
	static Graphics_Internal_SetRandomWriteTargetBuffer_m2943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Graphics_Internal_SetRandomWriteTargetBuffer_m2943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(___index, ___uav);
}
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m2944 (Object_t * __this /* static, unused */, RenderBuffer_t634  ___colorBuffer, RenderBuffer_t634  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, MethodInfo* method)
{
	RenderBuffer_t634  V_0 = {0};
	RenderBuffer_t634  V_1 = {0};
	{
		RenderBuffer_t634  L_0 = ___colorBuffer;
		V_0 = L_0;
		RenderBuffer_t634  L_1 = ___depthBuffer;
		V_1 = L_1;
		int32_t L_2 = ___mipLevel;
		int32_t L_3 = ___face;
		Graphics_Internal_SetRTSimple_m2942(NULL /*static, unused*/, (&V_0), (&V_1), L_2, L_3, /*hidden argument*/&Graphics_Internal_SetRTSimple_m2942_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void Graphics_SetRenderTargetImpl_m2945 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___rt, int32_t ___mipLevel, int32_t ___face, MethodInfo* method)
{
	{
		RenderTexture_t7 * L_0 = ___rt;
		bool L_1 = Object_op_Implicit_m211(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m211_MethodInfo);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		RenderTexture_t7 * L_2 = ___rt;
		NullCheck(L_2);
		RenderBuffer_t634  L_3 = RenderTexture_get_colorBuffer_m2984(L_2, /*hidden argument*/&RenderTexture_get_colorBuffer_m2984_MethodInfo);
		RenderTexture_t7 * L_4 = ___rt;
		NullCheck(L_4);
		RenderBuffer_t634  L_5 = RenderTexture_get_depthBuffer_m2985(L_4, /*hidden argument*/&RenderTexture_get_depthBuffer_m2985_MethodInfo);
		int32_t L_6 = ___mipLevel;
		int32_t L_7 = ___face;
		Graphics_SetRenderTargetImpl_m2944(NULL /*static, unused*/, L_3, L_5, L_6, L_7, /*hidden argument*/&Graphics_SetRenderTargetImpl_m2944_MethodInfo);
		goto IL_0028;
	}

IL_0023:
	{
		Graphics_Internal_SetNullRT_m2941(NULL /*static, unused*/, /*hidden argument*/&Graphics_Internal_SetNullRT_m2941_MethodInfo);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern MethodInfo Graphics_SetRenderTarget_m234_MethodInfo;
extern "C" void Graphics_SetRenderTarget_m234 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___rt, MethodInfo* method)
{
	{
		RenderTexture_t7 * L_0 = ___rt;
		Graphics_SetRenderTargetImpl_m2945(NULL /*static, unused*/, L_0, 0, (-1), /*hidden argument*/&Graphics_SetRenderTargetImpl_m2945_MethodInfo);
		return;
	}
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Resolution_t635_il2cpp_TypeInfo;
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"



// System.Int32 UnityEngine.Resolution::get_width()
extern MethodInfo Resolution_get_width_m2946_MethodInfo;
extern "C" int32_t Resolution_get_width_m2946 (Resolution_t635 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern MethodInfo Resolution_set_width_m2947_MethodInfo;
extern "C" void Resolution_set_width_m2947 (Resolution_t635 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern MethodInfo Resolution_get_height_m2948_MethodInfo;
extern "C" int32_t Resolution_get_height_m2948 (Resolution_t635 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern MethodInfo Resolution_set_height_m2949_MethodInfo;
extern "C" void Resolution_set_height_m2949 (Resolution_t635 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern MethodInfo Resolution_get_refreshRate_m2950_MethodInfo;
extern "C" int32_t Resolution_get_refreshRate_m2950 (Resolution_t635 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern MethodInfo Resolution_set_refreshRate_m2951_MethodInfo;
extern "C" void Resolution_set_refreshRate_m2951 (Resolution_t635 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_Screen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Screen_t636_il2cpp_TypeInfo;
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"



// System.Int32 UnityEngine.Screen::get_width()
extern MethodInfo Screen_get_width_m382_MethodInfo;
extern "C" int32_t Screen_get_width_m382 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Screen_get_width_m382_ftn) ();
	static Screen_get_width_m382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Screen::get_height()
extern MethodInfo Screen_get_height_m383_MethodInfo;
extern "C" int32_t Screen_get_height_m383 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Screen_get_height_m383_ftn) ();
	static Screen_get_height_m383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Screen::get_dpi()
extern MethodInfo Screen_get_dpi_m2617_MethodInfo;
extern "C" float Screen_get_dpi_m2617 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Screen_get_dpi_m2617_ftn) ();
	static Screen_get_dpi_m2617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_dpi_m2617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GL.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GL_t637_il2cpp_TypeInfo;
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
extern MethodInfo GL_INTERNAL_CALL_LoadProjectionMatrix_m2952_MethodInfo;
extern MethodInfo GL_INTERNAL_CALL_GetGPUProjectionMatrix_m2953_MethodInfo;
extern MethodInfo GL_Clear_m2954_MethodInfo;
extern MethodInfo GL_Internal_Clear_m2955_MethodInfo;
extern MethodInfo GL_INTERNAL_CALL_Internal_Clear_m2956_MethodInfo;


// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern MethodInfo GL_Vertex3_m371_MethodInfo;
extern "C" void GL_Vertex3_m371 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method)
{
	typedef void (*GL_Vertex3_m371_ftn) (float, float, float);
	static GL_Vertex3_m371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_Vertex3_m371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(___x, ___y, ___z);
}
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
extern MethodInfo GL_TexCoord2_m389_MethodInfo;
extern "C" void GL_TexCoord2_m389 (Object_t * __this /* static, unused */, float ___x, float ___y, MethodInfo* method)
{
	typedef void (*GL_TexCoord2_m389_ftn) (float, float);
	static GL_TexCoord2_m389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_TexCoord2_m389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::TexCoord2(System.Single,System.Single)");
	_il2cpp_icall_func(___x, ___y);
}
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
extern MethodInfo GL_MultiTexCoord2_m370_MethodInfo;
extern "C" void GL_MultiTexCoord2_m370 (Object_t * __this /* static, unused */, int32_t ___unit, float ___x, float ___y, MethodInfo* method)
{
	typedef void (*GL_MultiTexCoord2_m370_ftn) (int32_t, float, float);
	static GL_MultiTexCoord2_m370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_MultiTexCoord2_m370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(___unit, ___x, ___y);
}
// System.Void UnityEngine.GL::Begin(System.Int32)
extern MethodInfo GL_Begin_m369_MethodInfo;
extern "C" void GL_Begin_m369 (Object_t * __this /* static, unused */, int32_t ___mode, MethodInfo* method)
{
	typedef void (*GL_Begin_m369_ftn) (int32_t);
	static GL_Begin_m369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_Begin_m369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::Begin(System.Int32)");
	_il2cpp_icall_func(___mode);
}
// System.Void UnityEngine.GL::End()
extern MethodInfo GL_End_m372_MethodInfo;
extern "C" void GL_End_m372 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GL_End_m372_ftn) ();
	static GL_End_m372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_End_m372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::End()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::LoadOrtho()
extern MethodInfo GL_LoadOrtho_m368_MethodInfo;
extern "C" void GL_LoadOrtho_m368 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GL_LoadOrtho_m368_ftn) ();
	static GL_LoadOrtho_m368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_LoadOrtho_m368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::LoadOrtho()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
extern MethodInfo GL_LoadProjectionMatrix_m391_MethodInfo;
extern "C" void GL_LoadProjectionMatrix_m391 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___mat, MethodInfo* method)
{
	{
		GL_INTERNAL_CALL_LoadProjectionMatrix_m2952(NULL /*static, unused*/, (&___mat), /*hidden argument*/&GL_INTERNAL_CALL_LoadProjectionMatrix_m2952_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void GL_INTERNAL_CALL_LoadProjectionMatrix_m2952 (Object_t * __this /* static, unused */, Matrix4x4_t33 * ___mat, MethodInfo* method)
{
	typedef void (*GL_INTERNAL_CALL_LoadProjectionMatrix_m2952_ftn) (Matrix4x4_t33 *);
	static GL_INTERNAL_CALL_LoadProjectionMatrix_m2952_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_INTERNAL_CALL_LoadProjectionMatrix_m2952_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___mat);
}
// System.Void UnityEngine.GL::LoadIdentity()
extern MethodInfo GL_LoadIdentity_m356_MethodInfo;
extern "C" void GL_LoadIdentity_m356 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GL_LoadIdentity_m356_ftn) ();
	static GL_LoadIdentity_m356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_LoadIdentity_m356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::LoadIdentity()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::PushMatrix()
extern MethodInfo GL_PushMatrix_m355_MethodInfo;
extern "C" void GL_PushMatrix_m355 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GL_PushMatrix_m355_ftn) ();
	static GL_PushMatrix_m355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_PushMatrix_m355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::PushMatrix()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GL::PopMatrix()
extern MethodInfo GL_PopMatrix_m358_MethodInfo;
extern "C" void GL_PopMatrix_m358 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GL_PopMatrix_m358_ftn) ();
	static GL_PopMatrix_m358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_PopMatrix_m358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::PopMatrix()");
	_il2cpp_icall_func();
}
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern MethodInfo GL_GetGPUProjectionMatrix_m262_MethodInfo;
extern "C" Matrix4x4_t33  GL_GetGPUProjectionMatrix_m262 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___proj, bool ___renderIntoTexture, MethodInfo* method)
{
	{
		bool L_0 = ___renderIntoTexture;
		Matrix4x4_t33  L_1 = GL_INTERNAL_CALL_GetGPUProjectionMatrix_m2953(NULL /*static, unused*/, (&___proj), L_0, /*hidden argument*/&GL_INTERNAL_CALL_GetGPUProjectionMatrix_m2953_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean)
extern "C" Matrix4x4_t33  GL_INTERNAL_CALL_GetGPUProjectionMatrix_m2953 (Object_t * __this /* static, unused */, Matrix4x4_t33 * ___proj, bool ___renderIntoTexture, MethodInfo* method)
{
	typedef Matrix4x4_t33  (*GL_INTERNAL_CALL_GetGPUProjectionMatrix_m2953_ftn) (Matrix4x4_t33 *, bool);
	static GL_INTERNAL_CALL_GetGPUProjectionMatrix_m2953_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_INTERNAL_CALL_GetGPUProjectionMatrix_m2953_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean)");
	return _il2cpp_icall_func(___proj, ___renderIntoTexture);
}
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern MethodInfo GL_Clear_m236_MethodInfo;
extern "C" void GL_Clear_m236 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17  ___backgroundColor, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		bool L_0 = ___clearDepth;
		bool L_1 = ___clearColor;
		Color_t17  L_2 = ___backgroundColor;
		float L_3 = V_0;
		GL_Clear_m2954(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&GL_Clear_m2954_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Clear_m2954 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17  ___backgroundColor, float ___depth, MethodInfo* method)
{
	{
		bool L_0 = ___clearDepth;
		bool L_1 = ___clearColor;
		Color_t17  L_2 = ___backgroundColor;
		float L_3 = ___depth;
		GL_Internal_Clear_m2955(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&GL_Internal_Clear_m2955_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Internal_Clear_m2955 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17  ___backgroundColor, float ___depth, MethodInfo* method)
{
	{
		bool L_0 = ___clearDepth;
		bool L_1 = ___clearColor;
		float L_2 = ___depth;
		GL_INTERNAL_CALL_Internal_Clear_m2956(NULL /*static, unused*/, L_0, L_1, (&___backgroundColor), L_2, /*hidden argument*/&GL_INTERNAL_CALL_Internal_Clear_m2956_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C" void GL_INTERNAL_CALL_Internal_Clear_m2956 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17 * ___backgroundColor, float ___depth, MethodInfo* method)
{
	typedef void (*GL_INTERNAL_CALL_Internal_Clear_m2956_ftn) (bool, bool, Color_t17 *, float);
	static GL_INTERNAL_CALL_Internal_Clear_m2956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_INTERNAL_CALL_Internal_Clear_m2956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)");
	_il2cpp_icall_func(___clearDepth, ___clearColor, ___backgroundColor, ___depth);
}
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
extern MethodInfo GL_ClearWithSkybox_m402_MethodInfo;
extern "C" void GL_ClearWithSkybox_m402 (Object_t * __this /* static, unused */, bool ___clearDepth, Camera_t29 * ___camera, MethodInfo* method)
{
	typedef void (*GL_ClearWithSkybox_m402_ftn) (bool, Camera_t29 *);
	static GL_ClearWithSkybox_m402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GL_ClearWithSkybox_m402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)");
	_il2cpp_icall_func(___clearDepth, ___camera);
}
// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MeshRenderer_t220_il2cpp_TypeInfo;
// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRendererMethodDeclarations.h"



// UnityEngine.ImageEffectTransformsToLDR
#include "UnityEngine_UnityEngine_ImageEffectTransformsToLDR.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ImageEffectTransformsToLDR_t121_il2cpp_TypeInfo;
// UnityEngine.ImageEffectTransformsToLDR
#include "UnityEngine_UnityEngine_ImageEffectTransformsToLDRMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3847_MethodInfo;


// System.Void UnityEngine.ImageEffectTransformsToLDR::.ctor()
extern MethodInfo ImageEffectTransformsToLDR__ctor_m444_MethodInfo;
extern "C" void ImageEffectTransformsToLDR__ctor_m444 (ImageEffectTransformsToLDR_t121 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.ImageEffectOpaque
#include "UnityEngine_UnityEngine_ImageEffectOpaque.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ImageEffectOpaque_t116_il2cpp_TypeInfo;
// UnityEngine.ImageEffectOpaque
#include "UnityEngine_UnityEngine_ImageEffectOpaqueMethodDeclarations.h"



// System.Void UnityEngine.ImageEffectOpaque::.ctor()
extern MethodInfo ImageEffectOpaque__ctor_m438_MethodInfo;
extern "C" void ImageEffectOpaque__ctor_m438 (ImageEffectOpaque_t116 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Texture_t39_il2cpp_TypeInfo;
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"
extern TypeInfo Exception_t234_il2cpp_TypeInfo;
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Texture_Internal_GetWidth_m2958_MethodInfo;
extern MethodInfo Exception__ctor_m3848_MethodInfo;
extern MethodInfo Texture_Internal_GetHeight_m2959_MethodInfo;


// System.Void UnityEngine.Texture::.ctor()
extern MethodInfo Texture__ctor_m2957_MethodInfo;
extern "C" void Texture__ctor_m2957 (Texture_t39 * __this, MethodInfo* method)
{
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetWidth_m2958 (Object_t * __this /* static, unused */, Texture_t39 * ___mono, MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetWidth_m2958_ftn) (Texture_t39 *);
	static Texture_Internal_GetWidth_m2958_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetWidth_m2958_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m2959 (Object_t * __this /* static, unused */, Texture_t39 * ___mono, MethodInfo* method)
{
	typedef int32_t (*Texture_Internal_GetHeight_m2959_ftn) (Texture_t39 *);
	static Texture_Internal_GetHeight_m2959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_Internal_GetHeight_m2959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(___mono);
}
// System.Int32 UnityEngine.Texture::get_width()
extern MethodInfo Texture_get_width_m326_MethodInfo;
extern "C" int32_t Texture_get_width_m326 (Texture_t39 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetWidth_m2958(NULL /*static, unused*/, __this, /*hidden argument*/&Texture_Internal_GetWidth_m2958_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Texture::set_width(System.Int32)
extern MethodInfo Texture_set_width_m2960_MethodInfo;
extern "C" void Texture_set_width_m2960 (Texture_t39 * __this, int32_t ___value, MethodInfo* method)
{
	{
		Exception_t234 * L_0 = (Exception_t234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t234_il2cpp_TypeInfo));
		Exception__ctor_m3848(L_0, (String_t*) &_stringLiteral283, /*hidden argument*/&Exception__ctor_m3848_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 UnityEngine.Texture::get_height()
extern MethodInfo Texture_get_height_m325_MethodInfo;
extern "C" int32_t Texture_get_height_m325 (Texture_t39 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Texture_Internal_GetHeight_m2959(NULL /*static, unused*/, __this, /*hidden argument*/&Texture_Internal_GetHeight_m2959_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Texture::set_height(System.Int32)
extern MethodInfo Texture_set_height_m2961_MethodInfo;
extern "C" void Texture_set_height_m2961 (Texture_t39 * __this, int32_t ___value, MethodInfo* method)
{
	{
		Exception_t234 * L_0 = (Exception_t234 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Exception_t234_il2cpp_TypeInfo));
		Exception__ctor_m3848(L_0, (String_t*) &_stringLiteral283, /*hidden argument*/&Exception__ctor_m3848_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern MethodInfo Texture_set_filterMode_m216_MethodInfo;
extern "C" void Texture_set_filterMode_m216 (Texture_t39 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Texture_set_filterMode_m216_ftn) (Texture_t39 *, int32_t);
	static Texture_set_filterMode_m216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_filterMode_m216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
extern MethodInfo Texture_set_anisoLevel_m228_MethodInfo;
extern "C" void Texture_set_anisoLevel_m228 (Texture_t39 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Texture_set_anisoLevel_m228_ftn) (Texture_t39 *, int32_t);
	static Texture_set_anisoLevel_m228_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_anisoLevel_m228_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_anisoLevel(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern MethodInfo Texture_set_wrapMode_m271_MethodInfo;
extern "C" void Texture_set_wrapMode_m271 (Texture_t39 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Texture_set_wrapMode_m271_ftn) (Texture_t39 *, int32_t);
	static Texture_set_wrapMode_m271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_wrapMode_m271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
extern MethodInfo Texture_get_texelSize_m374_MethodInfo;
extern "C" Vector2_t62  Texture_get_texelSize_m374 (Texture_t39 * __this, MethodInfo* method)
{
	typedef Vector2_t62  (*Texture_get_texelSize_m374_ftn) (Texture_t39 *);
	static Texture_get_texelSize_m374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_get_texelSize_m374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::get_texelSize()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern MethodInfo Texture2D_Internal_Create_m2963_MethodInfo;
extern MethodInfo Texture2D_INTERNAL_CALL_SetPixel_m2964_MethodInfo;
extern MethodInfo Texture2D_GetPixels_m2965_MethodInfo;
extern MethodInfo Texture2D_GetPixels_m2966_MethodInfo;
extern MethodInfo Texture2D_Apply_m2967_MethodInfo;


// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m2962 (Texture2D_t15 * __this, int32_t ___width, int32_t ___height, MethodInfo* method)
{
	{
		Texture__ctor_m2957(__this, /*hidden argument*/&Texture__ctor_m2957_MethodInfo);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m2963(NULL /*static, unused*/, __this, L_0, L_1, 5, 1, 0, L_2, /*hidden argument*/&Texture2D_Internal_Create_m2963_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern MethodInfo Texture2D__ctor_m313_MethodInfo;
extern "C" void Texture2D__ctor_m313 (Texture2D_t15 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, MethodInfo* method)
{
	{
		Texture__ctor_m2957(__this, /*hidden argument*/&Texture__ctor_m2957_MethodInfo);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___format;
		bool L_3 = ___mipmap;
		bool L_4 = ___linear;
		IntPtr_t L_5 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		Texture2D_Internal_Create_m2963(NULL /*static, unused*/, __this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Texture2D_Internal_Create_m2963_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m2963 (Object_t * __this /* static, unused */, Texture2D_t15 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, MethodInfo* method)
{
	typedef void (*Texture2D_Internal_Create_m2963_ftn) (Texture2D_t15 *, int32_t, int32_t, int32_t, bool, bool, IntPtr_t);
	static Texture2D_Internal_Create_m2963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_Create_m2963_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___format, ___mipmap, ___linear, ___nativeTex);
}
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern MethodInfo Texture2D_get_whiteTexture_m2302_MethodInfo;
extern "C" Texture2D_t15 * Texture2D_get_whiteTexture_m2302 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Texture2D_t15 * (*Texture2D_get_whiteTexture_m2302_ftn) ();
	static Texture2D_get_whiteTexture_m2302_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_whiteTexture_m2302_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern MethodInfo Texture2D_SetPixel_m318_MethodInfo;
extern "C" void Texture2D_SetPixel_m318 (Texture2D_t15 * __this, int32_t ___x, int32_t ___y, Color_t17  ___color, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = ___y;
		Texture2D_INTERNAL_CALL_SetPixel_m2964(NULL /*static, unused*/, __this, L_0, L_1, (&___color), /*hidden argument*/&Texture2D_INTERNAL_CALL_SetPixel_m2964_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C" void Texture2D_INTERNAL_CALL_SetPixel_m2964 (Object_t * __this /* static, unused */, Texture2D_t15 * ___self, int32_t ___x, int32_t ___y, Color_t17 * ___color, MethodInfo* method)
{
	typedef void (*Texture2D_INTERNAL_CALL_SetPixel_m2964_ftn) (Texture2D_t15 *, int32_t, int32_t, Color_t17 *);
	static Texture2D_INTERNAL_CALL_SetPixel_m2964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_INTERNAL_CALL_SetPixel_m2964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___x, ___y, ___color);
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern MethodInfo Texture2D_GetPixelBilinear_m2393_MethodInfo;
extern "C" Color_t17  Texture2D_GetPixelBilinear_m2393 (Texture2D_t15 * __this, float ___u, float ___v, MethodInfo* method)
{
	typedef Color_t17  (*Texture2D_GetPixelBilinear_m2393_ftn) (Texture2D_t15 *, float, float);
	static Texture2D_GetPixelBilinear_m2393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixelBilinear_m2393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, ___u, ___v);
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern MethodInfo Texture2D_GetPixels_m330_MethodInfo;
extern "C" ColorU5BU5D_t101* Texture2D_GetPixels_m330 (Texture2D_t15 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		ColorU5BU5D_t101* L_1 = Texture2D_GetPixels_m2965(__this, L_0, /*hidden argument*/&Texture2D_GetPixels_m2965_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" ColorU5BU5D_t101* Texture2D_GetPixels_m2965 (Texture2D_t15 * __this, int32_t ___miplevel, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m326_MethodInfo, __this);
		int32_t L_1 = ___miplevel;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = 1;
	}

IL_0015:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_height_m325_MethodInfo, __this);
		int32_t L_4 = ___miplevel;
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31)))));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		V_1 = 1;
	}

IL_002a:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___miplevel;
		ColorU5BU5D_t101* L_9 = Texture2D_GetPixels_m2966(__this, 0, 0, L_6, L_7, L_8, /*hidden argument*/&Texture2D_GetPixels_m2966_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" ColorU5BU5D_t101* Texture2D_GetPixels_m2966 (Texture2D_t15 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, MethodInfo* method)
{
	typedef ColorU5BU5D_t101* (*Texture2D_GetPixels_m2966_ftn) (Texture2D_t15 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture2D_GetPixels_m2966_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixels_m2966_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)");
	return _il2cpp_icall_func(__this, ___x, ___y, ___blockWidth, ___blockHeight, ___miplevel);
}
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" void Texture2D_Apply_m2967 (Texture2D_t15 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, MethodInfo* method)
{
	typedef void (*Texture2D_Apply_m2967_ftn) (Texture2D_t15 *, bool, bool);
	static Texture2D_Apply_m2967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Apply_m2967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___updateMipmaps, ___makeNoLongerReadable);
}
// System.Void UnityEngine.Texture2D::Apply()
extern MethodInfo Texture2D_Apply_m319_MethodInfo;
extern "C" void Texture2D_Apply_m319 (Texture2D_t15 * __this, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = 0;
		V_1 = 1;
		bool L_0 = V_1;
		bool L_1 = V_0;
		Texture2D_Apply_m2967(__this, L_0, L_1, /*hidden argument*/&Texture2D_Apply_m2967_MethodInfo);
		return;
	}
}
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Texture3D_t37_il2cpp_TypeInfo;
// UnityEngine.Texture3D
#include "UnityEngine_UnityEngine_Texture3DMethodDeclarations.h"

extern MethodInfo Texture3D_Internal_Create_m2970_MethodInfo;
extern MethodInfo Texture3D_SetPixels_m2968_MethodInfo;
extern MethodInfo Texture3D_Apply_m2969_MethodInfo;


// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern MethodInfo Texture3D__ctor_m322_MethodInfo;
extern "C" void Texture3D__ctor_m322 (Texture3D_t37 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, MethodInfo* method)
{
	{
		Texture__ctor_m2957(__this, /*hidden argument*/&Texture__ctor_m2957_MethodInfo);
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___depth;
		int32_t L_3 = ___format;
		bool L_4 = ___mipmap;
		Texture3D_Internal_Create_m2970(NULL /*static, unused*/, __this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Texture3D_Internal_Create_m2970_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C" void Texture3D_SetPixels_m2968 (Texture3D_t37 * __this, ColorU5BU5D_t101* ___colors, int32_t ___miplevel, MethodInfo* method)
{
	typedef void (*Texture3D_SetPixels_m2968_ftn) (Texture3D_t37 *, ColorU5BU5D_t101*, int32_t);
	static Texture3D_SetPixels_m2968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_SetPixels_m2968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)");
	_il2cpp_icall_func(__this, ___colors, ___miplevel);
}
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[])
extern MethodInfo Texture3D_SetPixels_m323_MethodInfo;
extern "C" void Texture3D_SetPixels_m323 (Texture3D_t37 * __this, ColorU5BU5D_t101* ___colors, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		ColorU5BU5D_t101* L_0 = ___colors;
		int32_t L_1 = V_0;
		Texture3D_SetPixels_m2968(__this, L_0, L_1, /*hidden argument*/&Texture3D_SetPixels_m2968_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Texture3D::Apply(System.Boolean)
extern "C" void Texture3D_Apply_m2969 (Texture3D_t37 * __this, bool ___updateMipmaps, MethodInfo* method)
{
	typedef void (*Texture3D_Apply_m2969_ftn) (Texture3D_t37 *, bool);
	static Texture3D_Apply_m2969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_Apply_m2969_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::Apply(System.Boolean)");
	_il2cpp_icall_func(__this, ___updateMipmaps);
}
// System.Void UnityEngine.Texture3D::Apply()
extern MethodInfo Texture3D_Apply_m324_MethodInfo;
extern "C" void Texture3D_Apply_m324 (Texture3D_t37 * __this, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = V_0;
		Texture3D_Apply_m2969(__this, L_0, /*hidden argument*/&Texture3D_Apply_m2969_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture3D_Internal_Create_m2970 (Object_t * __this /* static, unused */, Texture3D_t37 * ___mono, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, bool ___mipmap, MethodInfo* method)
{
	typedef void (*Texture3D_Internal_Create_m2970_ftn) (Texture3D_t37 *, int32_t, int32_t, int32_t, int32_t, bool);
	static Texture3D_Internal_Create_m2970_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_Internal_Create_m2970_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)");
	_il2cpp_icall_func(___mono, ___width, ___height, ___depth, ___format, ___mipmap);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderTexture_t7_il2cpp_TypeInfo;

// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"
extern MethodInfo RenderTexture_Internal_GetWidth_m2973_MethodInfo;
extern MethodInfo RenderTexture_Internal_SetWidth_m2974_MethodInfo;
extern MethodInfo RenderTexture_Internal_GetHeight_m2975_MethodInfo;
extern MethodInfo RenderTexture_Internal_SetHeight_m2976_MethodInfo;
extern MethodInfo RenderTexture_GetColorBuffer_m2986_MethodInfo;
extern MethodInfo RenderTexture_GetDepthBuffer_m2987_MethodInfo;
extern MethodInfo RenderTexture_Internal_CreateRenderTexture_m2971_MethodInfo;
extern MethodInfo RenderTexture_set_width_m2978_MethodInfo;
extern MethodInfo RenderTexture_set_height_m2979_MethodInfo;
extern MethodInfo RenderTexture_set_depth_m2980_MethodInfo;
extern MethodInfo RenderTexture_set_format_m2981_MethodInfo;
extern MethodInfo RenderTexture_Internal_SetSRGBReadWrite_m2977_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m2972_MethodInfo;
extern MethodInfo RenderTexture_INTERNAL_CALL_DiscardContents_m2982_MethodInfo;
extern MethodInfo RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m2983_MethodInfo;


// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern MethodInfo RenderTexture__ctor_m407_MethodInfo;
extern "C" void RenderTexture__ctor_m407 (RenderTexture_t7 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, MethodInfo* method)
{
	{
		Texture__ctor_m2957(__this, /*hidden argument*/&Texture__ctor_m2957_MethodInfo);
		RenderTexture_Internal_CreateRenderTexture_m2971(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_Internal_CreateRenderTexture_m2971_MethodInfo);
		int32_t L_0 = ___width;
		VirtActionInvoker1< int32_t >::Invoke(&RenderTexture_set_width_m2978_MethodInfo, __this, L_0);
		int32_t L_1 = ___height;
		VirtActionInvoker1< int32_t >::Invoke(&RenderTexture_set_height_m2979_MethodInfo, __this, L_1);
		int32_t L_2 = ___depth;
		RenderTexture_set_depth_m2980(__this, L_2, /*hidden argument*/&RenderTexture_set_depth_m2980_MethodInfo);
		int32_t L_3 = ___format;
		RenderTexture_set_format_m2981(__this, L_3, /*hidden argument*/&RenderTexture_set_format_m2981_MethodInfo);
		int32_t L_4 = QualitySettings_get_activeColorSpace_m332(NULL /*static, unused*/, /*hidden argument*/&QualitySettings_get_activeColorSpace_m332_MethodInfo);
		RenderTexture_Internal_SetSRGBReadWrite_m2977(NULL /*static, unused*/, __this, ((((int32_t)L_4) == ((int32_t)1))? 1 : 0), /*hidden argument*/&RenderTexture_Internal_SetSRGBReadWrite_m2977_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern MethodInfo RenderTexture__ctor_m333_MethodInfo;
extern "C" void RenderTexture__ctor_m333 (RenderTexture_t7 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, MethodInfo* method)
{
	{
		Texture__ctor_m2957(__this, /*hidden argument*/&Texture__ctor_m2957_MethodInfo);
		RenderTexture_Internal_CreateRenderTexture_m2971(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_Internal_CreateRenderTexture_m2971_MethodInfo);
		int32_t L_0 = ___width;
		VirtActionInvoker1< int32_t >::Invoke(&RenderTexture_set_width_m2978_MethodInfo, __this, L_0);
		int32_t L_1 = ___height;
		VirtActionInvoker1< int32_t >::Invoke(&RenderTexture_set_height_m2979_MethodInfo, __this, L_1);
		int32_t L_2 = ___depth;
		RenderTexture_set_depth_m2980(__this, L_2, /*hidden argument*/&RenderTexture_set_depth_m2980_MethodInfo);
		RenderTexture_set_format_m2981(__this, 7, /*hidden argument*/&RenderTexture_set_format_m2981_MethodInfo);
		int32_t L_3 = QualitySettings_get_activeColorSpace_m332(NULL /*static, unused*/, /*hidden argument*/&QualitySettings_get_activeColorSpace_m332_MethodInfo);
		RenderTexture_Internal_SetSRGBReadWrite_m2977(NULL /*static, unused*/, __this, ((((int32_t)L_3) == ((int32_t)1))? 1 : 0), /*hidden argument*/&RenderTexture_Internal_SetSRGBReadWrite_m2977_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C" void RenderTexture_Internal_CreateRenderTexture_m2971 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___rt, MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_CreateRenderTexture_m2971_ftn) (RenderTexture_t7 *);
	static RenderTexture_Internal_CreateRenderTexture_m2971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_CreateRenderTexture_m2971_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___rt);
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C" RenderTexture_t7 * RenderTexture_GetTemporary_m2972 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, MethodInfo* method)
{
	typedef RenderTexture_t7 * (*RenderTexture_GetTemporary_m2972_ftn) (int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
	static RenderTexture_GetTemporary_m2972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_GetTemporary_m2972_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)");
	return _il2cpp_icall_func(___width, ___height, ___depthBuffer, ___format, ___readWrite, ___antiAliasing);
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern MethodInfo RenderTexture_GetTemporary_m220_MethodInfo;
extern "C" RenderTexture_t7 * RenderTexture_GetTemporary_m220 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		V_0 = 1;
		V_1 = 0;
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___depthBuffer;
		int32_t L_3 = ___format;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RenderTexture_t7 * L_6 = RenderTexture_GetTemporary_m2972(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&RenderTexture_GetTemporary_m2972_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
extern MethodInfo RenderTexture_GetTemporary_m254_MethodInfo;
extern "C" RenderTexture_t7 * RenderTexture_GetTemporary_m254 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 7;
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = ___depthBuffer;
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RenderTexture_t7 * L_6 = RenderTexture_GetTemporary_m2972(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&RenderTexture_GetTemporary_m2972_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
extern MethodInfo RenderTexture_GetTemporary_m229_MethodInfo;
extern "C" RenderTexture_t7 * RenderTexture_GetTemporary_m229 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 7;
		V_3 = 0;
		int32_t L_0 = ___width;
		int32_t L_1 = ___height;
		int32_t L_2 = V_3;
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RenderTexture_t7 * L_6 = RenderTexture_GetTemporary_m2972(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&RenderTexture_GetTemporary_m2972_MethodInfo);
		return L_6;
	}
}
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern MethodInfo RenderTexture_ReleaseTemporary_m222_MethodInfo;
extern "C" void RenderTexture_ReleaseTemporary_m222 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___temp, MethodInfo* method)
{
	typedef void (*RenderTexture_ReleaseTemporary_m222_ftn) (RenderTexture_t7 *);
	static RenderTexture_ReleaseTemporary_m222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_ReleaseTemporary_m222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___temp);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetWidth_m2973 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___mono, MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetWidth_m2973_ftn) (RenderTexture_t7 *);
	static RenderTexture_Internal_GetWidth_m2973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetWidth_m2973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetWidth_m2974 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___mono, int32_t ___width, MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_SetWidth_m2974_ftn) (RenderTexture_t7 *, int32_t);
	static RenderTexture_Internal_SetWidth_m2974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_SetWidth_m2974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(___mono, ___width);
}
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C" int32_t RenderTexture_Internal_GetHeight_m2975 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___mono, MethodInfo* method)
{
	typedef int32_t (*RenderTexture_Internal_GetHeight_m2975_ftn) (RenderTexture_t7 *);
	static RenderTexture_Internal_GetHeight_m2975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_GetHeight_m2975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(___mono);
}
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C" void RenderTexture_Internal_SetHeight_m2976 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___mono, int32_t ___width, MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_SetHeight_m2976_ftn) (RenderTexture_t7 *, int32_t);
	static RenderTexture_Internal_SetHeight_m2976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_SetHeight_m2976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(___mono, ___width);
}
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C" void RenderTexture_Internal_SetSRGBReadWrite_m2977 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___mono, bool ___sRGB, MethodInfo* method)
{
	typedef void (*RenderTexture_Internal_SetSRGBReadWrite_m2977_ftn) (RenderTexture_t7 *, bool);
	static RenderTexture_Internal_SetSRGBReadWrite_m2977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_Internal_SetSRGBReadWrite_m2977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)");
	_il2cpp_icall_func(___mono, ___sRGB);
}
// System.Int32 UnityEngine.RenderTexture::get_width()
extern MethodInfo RenderTexture_get_width_m217_MethodInfo;
extern "C" int32_t RenderTexture_get_width_m217 (RenderTexture_t7 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetWidth_m2973(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_Internal_GetWidth_m2973_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C" void RenderTexture_set_width_m2978 (RenderTexture_t7 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		RenderTexture_Internal_SetWidth_m2974(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&RenderTexture_Internal_SetWidth_m2974_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.RenderTexture::get_height()
extern MethodInfo RenderTexture_get_height_m218_MethodInfo;
extern "C" int32_t RenderTexture_get_height_m218 (RenderTexture_t7 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = RenderTexture_Internal_GetHeight_m2975(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_Internal_GetHeight_m2975_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C" void RenderTexture_set_height_m2979 (RenderTexture_t7 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		RenderTexture_Internal_SetHeight_m2976(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&RenderTexture_Internal_SetHeight_m2976_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C" void RenderTexture_set_depth_m2980 (RenderTexture_t7 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RenderTexture_set_depth_m2980_ftn) (RenderTexture_t7 *, int32_t);
	static RenderTexture_set_depth_m2980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_set_depth_m2980_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_depth(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern MethodInfo RenderTexture_get_format_m219_MethodInfo;
extern "C" int32_t RenderTexture_get_format_m219 (RenderTexture_t7 * __this, MethodInfo* method)
{
	typedef int32_t (*RenderTexture_get_format_m219_ftn) (RenderTexture_t7 *);
	static RenderTexture_get_format_m219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_get_format_m219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::get_format()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C" void RenderTexture_set_format_m2981 (RenderTexture_t7 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RenderTexture_set_format_m2981_ftn) (RenderTexture_t7 *, int32_t);
	static RenderTexture_set_format_m2981_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_set_format_m2981_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RenderTexture::DiscardContents()
extern MethodInfo RenderTexture_DiscardContents_m241_MethodInfo;
extern "C" void RenderTexture_DiscardContents_m241 (RenderTexture_t7 * __this, MethodInfo* method)
{
	{
		RenderTexture_INTERNAL_CALL_DiscardContents_m2982(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_INTERNAL_CALL_DiscardContents_m2982_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_DiscardContents_m2982 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___self, MethodInfo* method)
{
	typedef void (*RenderTexture_INTERNAL_CALL_DiscardContents_m2982_ftn) (RenderTexture_t7 *);
	static RenderTexture_INTERNAL_CALL_DiscardContents_m2982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_INTERNAL_CALL_DiscardContents_m2982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___self);
}
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
extern MethodInfo RenderTexture_MarkRestoreExpected_m237_MethodInfo;
extern "C" void RenderTexture_MarkRestoreExpected_m237 (RenderTexture_t7 * __this, MethodInfo* method)
{
	{
		RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m2983(NULL /*static, unused*/, __this, /*hidden argument*/&RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m2983_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)
extern "C" void RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m2983 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___self, MethodInfo* method)
{
	typedef void (*RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m2983_ftn) (RenderTexture_t7 *);
	static RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m2983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m2983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___self);
}
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_colorBuffer()
extern "C" RenderBuffer_t634  RenderTexture_get_colorBuffer_m2984 (RenderTexture_t7 * __this, MethodInfo* method)
{
	RenderBuffer_t634  V_0 = {0};
	{
		RenderTexture_GetColorBuffer_m2986(__this, (&V_0), /*hidden argument*/&RenderTexture_GetColorBuffer_m2986_MethodInfo);
		RenderBuffer_t634  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_depthBuffer()
extern "C" RenderBuffer_t634  RenderTexture_get_depthBuffer_m2985 (RenderTexture_t7 * __this, MethodInfo* method)
{
	RenderBuffer_t634  V_0 = {0};
	{
		RenderTexture_GetDepthBuffer_m2987(__this, (&V_0), /*hidden argument*/&RenderTexture_GetDepthBuffer_m2987_MethodInfo);
		RenderBuffer_t634  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)
extern "C" void RenderTexture_GetColorBuffer_m2986 (RenderTexture_t7 * __this, RenderBuffer_t634 * ___res, MethodInfo* method)
{
	typedef void (*RenderTexture_GetColorBuffer_m2986_ftn) (RenderTexture_t7 *, RenderBuffer_t634 *);
	static RenderTexture_GetColorBuffer_m2986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_GetColorBuffer_m2986_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(__this, ___res);
}
// System.Void UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)
extern "C" void RenderTexture_GetDepthBuffer_m2987 (RenderTexture_t7 * __this, RenderBuffer_t634 * ___res, MethodInfo* method)
{
	typedef void (*RenderTexture_GetDepthBuffer_m2987_ftn) (RenderTexture_t7 *, RenderBuffer_t634 *);
	static RenderTexture_GetDepthBuffer_m2987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_GetDepthBuffer_m2987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(__this, ___res);
}
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern MethodInfo RenderTexture_set_active_m354_MethodInfo;
extern "C" void RenderTexture_set_active_m354 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___value, MethodInfo* method)
{
	typedef void (*RenderTexture_set_active_m354_ftn) (RenderTexture_t7 *);
	static RenderTexture_set_active_m354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RenderTexture_set_active_m354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReflectionProbe_t639_il2cpp_TypeInfo;
// UnityEngine.ReflectionProbe
#include "UnityEngine_UnityEngine_ReflectionProbeMethodDeclarations.h"



// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIElement_t640_il2cpp_TypeInfo;
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElementMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern MethodInfo GUIElement_GetScreenRect_m2988_MethodInfo;


// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect(UnityEngine.Camera)
extern "C" Rect_t213  GUIElement_GetScreenRect_m2988 (GUIElement_t640 * __this, Camera_t29 * ___camera, MethodInfo* method)
{
	typedef Rect_t213  (*GUIElement_GetScreenRect_m2988_ftn) (GUIElement_t640 *, Camera_t29 *);
	static GUIElement_GetScreenRect_m2988_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIElement_GetScreenRect_m2988_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIElement::GetScreenRect(UnityEngine.Camera)");
	return _il2cpp_icall_func(__this, ___camera);
}
// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect()
extern MethodInfo GUIElement_GetScreenRect_m826_MethodInfo;
extern "C" Rect_t213  GUIElement_GetScreenRect_m826 (GUIElement_t640 * __this, MethodInfo* method)
{
	Camera_t29 * V_0 = {0};
	{
		V_0 = (Camera_t29 *)NULL;
		Camera_t29 * L_0 = V_0;
		Rect_t213  L_1 = GUIElement_GetScreenRect_m2988(__this, L_0, /*hidden argument*/&GUIElement_GetScreenRect_m2988_MethodInfo);
		return L_1;
	}
}
// UnityEngine.GUITexture
#include "UnityEngine_UnityEngine_GUITexture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUITexture_t187_il2cpp_TypeInfo;
// UnityEngine.GUITexture
#include "UnityEngine_UnityEngine_GUITextureMethodDeclarations.h"

extern MethodInfo GUITexture_INTERNAL_get_color_m2989_MethodInfo;
extern MethodInfo GUITexture_INTERNAL_set_color_m2990_MethodInfo;
extern MethodInfo GUITexture_INTERNAL_get_pixelInset_m2991_MethodInfo;
extern MethodInfo GUITexture_INTERNAL_set_pixelInset_m2992_MethodInfo;


// System.Void UnityEngine.GUITexture::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUITexture_INTERNAL_get_color_m2989 (GUITexture_t187 * __this, Color_t17 * ___value, MethodInfo* method)
{
	typedef void (*GUITexture_INTERNAL_get_color_m2989_ftn) (GUITexture_t187 *, Color_t17 *);
	static GUITexture_INTERNAL_get_color_m2989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUITexture_INTERNAL_get_color_m2989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUITexture::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUITexture::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUITexture_INTERNAL_set_color_m2990 (GUITexture_t187 * __this, Color_t17 * ___value, MethodInfo* method)
{
	typedef void (*GUITexture_INTERNAL_set_color_m2990_ftn) (GUITexture_t187 *, Color_t17 *);
	static GUITexture_INTERNAL_set_color_m2990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUITexture_INTERNAL_set_color_m2990_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUITexture::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Color UnityEngine.GUITexture::get_color()
extern MethodInfo GUITexture_get_color_m819_MethodInfo;
extern "C" Color_t17  GUITexture_get_color_m819 (GUITexture_t187 * __this, MethodInfo* method)
{
	Color_t17  V_0 = {0};
	{
		GUITexture_INTERNAL_get_color_m2989(__this, (&V_0), /*hidden argument*/&GUITexture_INTERNAL_get_color_m2989_MethodInfo);
		Color_t17  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUITexture::set_color(UnityEngine.Color)
extern MethodInfo GUITexture_set_color_m820_MethodInfo;
extern "C" void GUITexture_set_color_m820 (GUITexture_t187 * __this, Color_t17  ___value, MethodInfo* method)
{
	{
		GUITexture_INTERNAL_set_color_m2990(__this, (&___value), /*hidden argument*/&GUITexture_INTERNAL_set_color_m2990_MethodInfo);
		return;
	}
}
// UnityEngine.Texture UnityEngine.GUITexture::get_texture()
extern MethodInfo GUITexture_get_texture_m842_MethodInfo;
extern "C" Texture_t39 * GUITexture_get_texture_m842 (GUITexture_t187 * __this, MethodInfo* method)
{
	typedef Texture_t39 * (*GUITexture_get_texture_m842_ftn) (GUITexture_t187 *);
	static GUITexture_get_texture_m842_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUITexture_get_texture_m842_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUITexture::get_texture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUITexture::set_texture(UnityEngine.Texture)
extern MethodInfo GUITexture_set_texture_m832_MethodInfo;
extern "C" void GUITexture_set_texture_m832 (GUITexture_t187 * __this, Texture_t39 * ___value, MethodInfo* method)
{
	typedef void (*GUITexture_set_texture_m832_ftn) (GUITexture_t187 *, Texture_t39 *);
	static GUITexture_set_texture_m832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUITexture_set_texture_m832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUITexture::set_texture(UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUITexture::INTERNAL_get_pixelInset(UnityEngine.Rect&)
extern "C" void GUITexture_INTERNAL_get_pixelInset_m2991 (GUITexture_t187 * __this, Rect_t213 * ___value, MethodInfo* method)
{
	typedef void (*GUITexture_INTERNAL_get_pixelInset_m2991_ftn) (GUITexture_t187 *, Rect_t213 *);
	static GUITexture_INTERNAL_get_pixelInset_m2991_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUITexture_INTERNAL_get_pixelInset_m2991_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUITexture::INTERNAL_get_pixelInset(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUITexture::INTERNAL_set_pixelInset(UnityEngine.Rect&)
extern "C" void GUITexture_INTERNAL_set_pixelInset_m2992 (GUITexture_t187 * __this, Rect_t213 * ___value, MethodInfo* method)
{
	typedef void (*GUITexture_INTERNAL_set_pixelInset_m2992_ftn) (GUITexture_t187 *, Rect_t213 *);
	static GUITexture_INTERNAL_set_pixelInset_m2992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUITexture_INTERNAL_set_pixelInset_m2992_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUITexture::INTERNAL_set_pixelInset(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.GUITexture::get_pixelInset()
extern MethodInfo GUITexture_get_pixelInset_m835_MethodInfo;
extern "C" Rect_t213  GUITexture_get_pixelInset_m835 (GUITexture_t187 * __this, MethodInfo* method)
{
	Rect_t213  V_0 = {0};
	{
		GUITexture_INTERNAL_get_pixelInset_m2991(__this, (&V_0), /*hidden argument*/&GUITexture_INTERNAL_get_pixelInset_m2991_MethodInfo);
		Rect_t213  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUITexture::set_pixelInset(UnityEngine.Rect)
extern MethodInfo GUITexture_set_pixelInset_m818_MethodInfo;
extern "C" void GUITexture_set_pixelInset_m818 (GUITexture_t187 * __this, Rect_t213  ___value, MethodInfo* method)
{
	{
		GUITexture_INTERNAL_set_pixelInset_m2992(__this, (&___value), /*hidden argument*/&GUITexture_INTERNAL_set_pixelInset_m2992_MethodInfo);
		return;
	}
}
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUILayer_t641_il2cpp_TypeInfo;
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"

extern MethodInfo GUILayer_INTERNAL_CALL_HitTest_m2994_MethodInfo;


// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern MethodInfo GUILayer_HitTest_m2993_MethodInfo;
extern "C" GUIElement_t640 * GUILayer_HitTest_m2993 (GUILayer_t641 * __this, Vector3_t31  ___screenPosition, MethodInfo* method)
{
	{
		GUIElement_t640 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m2994(NULL /*static, unused*/, __this, (&___screenPosition), /*hidden argument*/&GUILayer_INTERNAL_CALL_HitTest_m2994_MethodInfo);
		return L_0;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t640 * GUILayer_INTERNAL_CALL_HitTest_m2994 (Object_t * __this /* static, unused */, GUILayer_t641 * ___self, Vector3_t31 * ___screenPosition, MethodInfo* method)
{
	typedef GUIElement_t640 * (*GUILayer_INTERNAL_CALL_HitTest_m2994_ftn) (GUILayer_t641 *, Vector3_t31 *);
	static GUILayer_INTERNAL_CALL_HitTest_m2994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m2994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___screenPosition);
}
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKey.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GradientColorKey_t642_il2cpp_TypeInfo;
// UnityEngine.GradientColorKey
#include "UnityEngine_UnityEngine_GradientColorKeyMethodDeclarations.h"



// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
extern MethodInfo GradientColorKey__ctor_m2995_MethodInfo;
extern "C" void GradientColorKey__ctor_m2995 (GradientColorKey_t642 * __this, Color_t17  ___col, float ___time, MethodInfo* method)
{
	{
		Color_t17  L_0 = ___col;
		__this->___color_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKey.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GradientAlphaKey_t643_il2cpp_TypeInfo;
// UnityEngine.GradientAlphaKey
#include "UnityEngine_UnityEngine_GradientAlphaKeyMethodDeclarations.h"



// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
extern MethodInfo GradientAlphaKey__ctor_m2996_MethodInfo;
extern "C" void GradientAlphaKey__ctor_m2996 (GradientAlphaKey_t643 * __this, float ___alpha, float ___time, MethodInfo* method)
{
	{
		float L_0 = ___alpha;
		__this->___alpha_0 = L_0;
		float L_1 = ___time;
		__this->___time_1 = L_1;
		return;
	}
}
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_Gradient.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Gradient_t644_il2cpp_TypeInfo;
// UnityEngine.Gradient
#include "UnityEngine_UnityEngine_GradientMethodDeclarations.h"

extern MethodInfo Gradient_Init_m2998_MethodInfo;
extern MethodInfo Gradient_Cleanup_m2999_MethodInfo;


// System.Void UnityEngine.Gradient::.ctor()
extern MethodInfo Gradient__ctor_m2997_MethodInfo;
extern "C" void Gradient__ctor_m2997 (Gradient_t644 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Gradient_Init_m2998(__this, /*hidden argument*/&Gradient_Init_m2998_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2998 (Gradient_t644 * __this, MethodInfo* method)
{
	typedef void (*Gradient_Init_m2998_ftn) (Gradient_t644 *);
	static Gradient_Init_m2998_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m2998_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2999 (Gradient_t644 * __this, MethodInfo* method)
{
	typedef void (*Gradient_Cleanup_m2999_ftn) (Gradient_t644 *);
	static Gradient_Cleanup_m2999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m2999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern MethodInfo Gradient_Finalize_m3000_MethodInfo;
extern "C" void Gradient_Finalize_m3000 (Gradient_t644 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Gradient_Cleanup_m2999(__this, /*hidden argument*/&Gradient_Cleanup_m2999_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Gradient
void Gradient_t644_marshal(const Gradient_t644& unmarshaled, Gradient_t644_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void Gradient_t644_marshal_back(const Gradient_t644_marshaled& marshaled, Gradient_t644& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void Gradient_t644_marshal_cleanup(Gradient_t644_marshaled& marshaled)
{
}
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScrollViewState_t645_il2cpp_TypeInfo;
// UnityEngine.GUI/ScrollViewState
#include "UnityEngine_UnityEngine_GUI_ScrollViewStateMethodDeclarations.h"



// System.Void UnityEngine.GUI/ScrollViewState::.ctor()
extern MethodInfo ScrollViewState__ctor_m3001_MethodInfo;
extern "C" void ScrollViewState__ctor_m3001 (ScrollViewState_t645 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WindowFunction_t646_il2cpp_TypeInfo;
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern MethodInfo WindowFunction__ctor_m3002_MethodInfo;
extern "C" void WindowFunction__ctor_m3002 (WindowFunction_t646 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern MethodInfo WindowFunction_Invoke_m3003_MethodInfo;
extern "C" void WindowFunction_Invoke_m3003 (WindowFunction_t646 * __this, int32_t ___id, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WindowFunction_Invoke_m3003((WindowFunction_t646 *)__this->___prev_9,___id, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___id, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___id, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___id,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t646(Il2CppObject* delegate, int32_t ___id)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo WindowFunction_BeginInvoke_m3004_MethodInfo;
extern "C" Object_t * WindowFunction_BeginInvoke_m3004 (WindowFunction_t646 * __this, int32_t ___id, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &___id);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern MethodInfo WindowFunction_EndInvoke_m3005_MethodInfo;
extern "C" void WindowFunction_EndInvoke_m3005 (WindowFunction_t646 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUI_t649_il2cpp_TypeInfo;
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCache.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
extern TypeInfo GUIUtility_t664_il2cpp_TypeInfo;
extern TypeInfo GenericStack_t648_il2cpp_TypeInfo;
extern TypeInfo DateTime_t650_il2cpp_TypeInfo;
extern TypeInfo GUILayoutUtility_t657_il2cpp_TypeInfo;
extern TypeInfo GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo;
extern TypeInfo GUILayoutOption_t653_il2cpp_TypeInfo;
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
extern Il2CppType GUILayoutOptionU5BU5D_t658_0_0_0;
extern MethodInfo GUIUtility_CheckOnGUI_m3064_MethodInfo;
extern MethodInfo GUIUtility_GetDefaultSkin_m3058_MethodInfo;
extern MethodInfo GUISkin_MakeCurrent_m3123_MethodInfo;
extern MethodInfo String_GetHashCode_m3849_MethodInfo;
extern MethodInfo GenericStack__ctor_m3825_MethodInfo;
extern MethodInfo DateTime_get_Now_m3850_MethodInfo;
extern MethodInfo GUI_set_nextScrollStepTime_m3007_MethodInfo;
extern MethodInfo GUILayoutUtility_SelectIDList_m3016_MethodInfo;
extern MethodInfo GUI_get_skin_m3009_MethodInfo;
extern MethodInfo Event_get_current_m3193_MethodInfo;
extern MethodInfo Event_get_type_m3189_MethodInfo;
extern MethodInfo GUILayout_Width_m3012_MethodInfo;
extern MethodInfo GUILayout_Height_m3013_MethodInfo;
extern MethodInfo GUILayoutUtility_BeginWindow_m3018_MethodInfo;
extern MethodInfo GUI_set_skin_m3008_MethodInfo;
extern MethodInfo GUILayoutUtility_Layout_m3019_MethodInfo;


// System.Void UnityEngine.GUI::.cctor()
extern MethodInfo GUI__cctor_m3006_MethodInfo;
extern "C" void GUI__cctor_m3006 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___scrollStepSize_0 = (10.0f);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___hotTextField_2 = (-1);
		NullCheck((String_t*) &_stringLiteral284);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3849_MethodInfo, (String_t*) &_stringLiteral284);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___boxHash_5 = L_0;
		NullCheck((String_t*) &_stringLiteral285);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3849_MethodInfo, (String_t*) &_stringLiteral285);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___repeatButtonHash_6 = L_1;
		NullCheck((String_t*) &_stringLiteral286);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3849_MethodInfo, (String_t*) &_stringLiteral286);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___toggleHash_7 = L_2;
		NullCheck((String_t*) &_stringLiteral287);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3849_MethodInfo, (String_t*) &_stringLiteral287);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___buttonGridHash_8 = L_3;
		NullCheck((String_t*) &_stringLiteral288);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3849_MethodInfo, (String_t*) &_stringLiteral288);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___sliderHash_9 = L_4;
		NullCheck((String_t*) &_stringLiteral289);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3849_MethodInfo, (String_t*) &_stringLiteral289);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___beginGroupHash_10 = L_5;
		NullCheck((String_t*) &_stringLiteral290);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3849_MethodInfo, (String_t*) &_stringLiteral290);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___scrollviewHash_11 = L_6;
		GenericStack_t648 * L_7 = (GenericStack_t648 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GenericStack_t648_il2cpp_TypeInfo));
		GenericStack__ctor_m3825(L_7, /*hidden argument*/&GenericStack__ctor_m3825_MethodInfo);
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___s_ScrollViewStates_12 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t650_il2cpp_TypeInfo));
		DateTime_t650  L_8 = DateTime_get_Now_m3850(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m3850_MethodInfo);
		GUI_set_nextScrollStepTime_m3007(NULL /*static, unused*/, L_8, /*hidden argument*/&GUI_set_nextScrollStepTime_m3007_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m3007 (Object_t * __this /* static, unused */, DateTime_t650  ___value, MethodInfo* method)
{
	{
		DateTime_t650  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___U3CnextScrollStepTimeU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m3008 (Object_t * __this /* static, unused */, GUISkin_t647 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		GUIUtility_CheckOnGUI_m3064(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_CheckOnGUI_m3064_MethodInfo);
		GUISkin_t647 * L_0 = ___value;
		bool L_1 = Object_op_Implicit_m211(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m211_MethodInfo);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		GUISkin_t647 * L_2 = GUIUtility_GetDefaultSkin_m3058(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_GetDefaultSkin_m3058_MethodInfo);
		___value = L_2;
	}

IL_0017:
	{
		GUISkin_t647 * L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___s_Skin_3 = L_3;
		GUISkin_t647 * L_4 = ___value;
		NullCheck(L_4);
		GUISkin_MakeCurrent_m3123(L_4, /*hidden argument*/&GUISkin_MakeCurrent_m3123_MethodInfo);
		return;
	}
}
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t647 * GUI_get_skin_m3009 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		GUIUtility_CheckOnGUI_m3064(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_CheckOnGUI_m3064_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		GUISkin_t647 * L_0 = ((GUI_t649_StaticFields*)InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo)->static_fields)->___s_Skin_3;
		return L_0;
	}
}
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern MethodInfo GUI_set_changed_m3010_MethodInfo;
extern "C" void GUI_set_changed_m3010 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*GUI_set_changed_m3010_ftn) (bool);
	static GUI_set_changed_m3010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUI_set_changed_m3010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern MethodInfo GUI_CallWindowDelegate_m3011_MethodInfo;
extern TypeInfo* GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var;
extern "C" void GUI_CallWindowDelegate_m3011 (Object_t * __this /* static, unused */, WindowFunction_t646 * ___func, int32_t ___id, GUISkin_t647 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t651 * ___style, MethodInfo* method)
{
	static bool GUI_CallWindowDelegate_m3011_init;
	if (!GUI_CallWindowDelegate_m3011_init)
	{
		GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GUILayoutOptionU5BU5D_t658_0_0_0);
		GUI_CallWindowDelegate_m3011_init = true;
	}
	GUISkin_t647 * V_0 = {0};
	GUILayoutOptionU5BU5D_t658* V_1 = {0};
	{
		int32_t L_0 = ___id;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUILayoutUtility_SelectIDList_m3016(NULL /*static, unused*/, L_0, 1, /*hidden argument*/&GUILayoutUtility_SelectIDList_m3016_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		GUISkin_t647 * L_1 = GUI_get_skin_m3009(NULL /*static, unused*/, /*hidden argument*/&GUI_get_skin_m3009_MethodInfo);
		V_0 = L_1;
		Event_t391 * L_2 = Event_get_current_m3193(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m3193_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m3189(L_2, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = ___forceRect;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		GUILayoutOptionU5BU5D_t658* L_5 = ((GUILayoutOptionU5BU5D_t658*)SZArrayNew(GUILayoutOptionU5BU5D_t658_il2cpp_TypeInfo_var, 2));
		float L_6 = ___width;
		GUILayoutOption_t653 * L_7 = GUILayout_Width_m3012(NULL /*static, unused*/, L_6, /*hidden argument*/&GUILayout_Width_m3012_MethodInfo);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_7);
		*((GUILayoutOption_t653 **)(GUILayoutOption_t653 **)SZArrayLdElema(L_5, 0)) = (GUILayoutOption_t653 *)L_7;
		GUILayoutOptionU5BU5D_t658* L_8 = L_5;
		float L_9 = ___height;
		GUILayoutOption_t653 * L_10 = GUILayout_Height_m3013(NULL /*static, unused*/, L_9, /*hidden argument*/&GUILayout_Height_m3013_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_10);
		*((GUILayoutOption_t653 **)(GUILayoutOption_t653 **)SZArrayLdElema(L_8, 1)) = (GUILayoutOption_t653 *)L_10;
		V_1 = L_8;
		int32_t L_11 = ___id;
		GUIStyle_t651 * L_12 = ___style;
		GUILayoutOptionU5BU5D_t658* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUILayoutUtility_BeginWindow_m3018(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/&GUILayoutUtility_BeginWindow_m3018_MethodInfo);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = ___id;
		GUIStyle_t651 * L_15 = ___style;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUILayoutUtility_BeginWindow_m3018(NULL /*static, unused*/, L_14, L_15, (GUILayoutOptionU5BU5D_t658*)(GUILayoutOptionU5BU5D_t658*)NULL, /*hidden argument*/&GUILayoutUtility_BeginWindow_m3018_MethodInfo);
	}

IL_0056:
	{
		GUISkin_t647 * L_16 = ____skin;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		GUI_set_skin_m3008(NULL /*static, unused*/, L_16, /*hidden argument*/&GUI_set_skin_m3008_MethodInfo);
		WindowFunction_t646 * L_17 = ___func;
		int32_t L_18 = ___id;
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(&WindowFunction_Invoke_m3003_MethodInfo, L_17, L_18);
		Event_t391 * L_19 = Event_get_current_m3193(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m3193_MethodInfo);
		NullCheck(L_19);
		int32_t L_20 = Event_get_type_m3189(L_19, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUILayoutUtility_Layout_m3019(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_Layout_m3019_MethodInfo);
	}

IL_0078:
	{
		GUISkin_t647 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		GUI_set_skin_m3008(NULL /*static, unused*/, L_21, /*hidden argument*/&GUI_set_skin_m3008_MethodInfo);
		return;
	}
}
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayout.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUILayout_t652_il2cpp_TypeInfo;

// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_Type.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOptionMethodDeclarations.h"
extern MethodInfo GUILayoutOption__ctor_m3054_MethodInfo;


// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t653 * GUILayout_Width_m3012 (Object_t * __this /* static, unused */, float ___width, MethodInfo* method)
{
	{
		float L_0 = ___width;
		float L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_1);
		GUILayoutOption_t653 * L_3 = (GUILayoutOption_t653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutOption_t653_il2cpp_TypeInfo));
		GUILayoutOption__ctor_m3054(L_3, 0, L_2, /*hidden argument*/&GUILayoutOption__ctor_m3054_MethodInfo);
		return L_3;
	}
}
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t653 * GUILayout_Height_m3013 (Object_t * __this /* static, unused */, float ___height, MethodInfo* method)
{
	{
		float L_0 = ___height;
		float L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_1);
		GUILayoutOption_t653 * L_3 = (GUILayoutOption_t653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutOption_t653_il2cpp_TypeInfo));
		GUILayoutOption__ctor_m3054(L_3, 1, L_2, /*hidden argument*/&GUILayoutOption__ctor_m3054_MethodInfo);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LayoutCache_t655_il2cpp_TypeInfo;
// UnityEngine.GUILayoutUtility/LayoutCache
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCacheMethodDeclarations.h"

// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroup.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
extern TypeInfo GUILayoutGroup_t654_il2cpp_TypeInfo;
extern TypeInfo Stack_t789_il2cpp_TypeInfo;
// UnityEngine.GUILayoutGroup
#include "UnityEngine_UnityEngine_GUILayoutGroupMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern MethodInfo GUILayoutGroup__ctor_m3039_MethodInfo;
extern MethodInfo Stack_Push_m3851_MethodInfo;


// System.Void UnityEngine.GUILayoutUtility/LayoutCache::.ctor()
extern MethodInfo LayoutCache__ctor_m3014_MethodInfo;
extern "C" void LayoutCache__ctor_m3014 (LayoutCache_t655 * __this, MethodInfo* method)
{
	{
		GUILayoutGroup_t654 * L_0 = (GUILayoutGroup_t654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t654_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m3039(L_0, /*hidden argument*/&GUILayoutGroup__ctor_m3039_MethodInfo);
		__this->___topLevel_0 = L_0;
		GenericStack_t648 * L_1 = (GenericStack_t648 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GenericStack_t648_il2cpp_TypeInfo));
		GenericStack__ctor_m3825(L_1, /*hidden argument*/&GenericStack__ctor_m3825_MethodInfo);
		__this->___layoutGroups_1 = L_1;
		GUILayoutGroup_t654 * L_2 = (GUILayoutGroup_t654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t654_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m3039(L_2, /*hidden argument*/&GUILayoutGroup__ctor_m3039_MethodInfo);
		__this->___windows_2 = L_2;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		GenericStack_t648 * L_3 = (__this->___layoutGroups_1);
		GUILayoutGroup_t654 * L_4 = (__this->___topLevel_0);
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(&Stack_Push_m3851_MethodInfo, L_3, L_4);
		return;
	}
}
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtility.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntry.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_20.h"
extern TypeInfo GUIStyle_t651_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t656_il2cpp_TypeInfo;
extern TypeInfo Rect_t213_il2cpp_TypeInfo;
extern TypeInfo GUILayoutEntry_t659_il2cpp_TypeInfo;
extern TypeInfo Mathf_t94_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t798_il2cpp_TypeInfo;
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUILayoutEntry
#include "UnityEngine_UnityEngine_GUILayoutEntryMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
extern Il2CppType Dictionary_2_t656_0_0_0;
extern Il2CppType Enumerator_t798_0_0_0;
extern MethodInfo GUIStyle__ctor_m3151_MethodInfo;
extern MethodInfo GUIStyle_set_stretchWidth_m3166_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3852_MethodInfo;
extern MethodInfo Rect__ctor_m817_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3853_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3854_MethodInfo;
extern MethodInfo Stack_Clear_m3855_MethodInfo;
extern MethodInfo GUILayoutEntry_set_style_m3030_MethodInfo;
extern MethodInfo GUILayoutGroup_ApplyOptions_m3041_MethodInfo;
extern MethodInfo GUILayoutGroup_CalcWidth_m3044_MethodInfo;
extern MethodInfo Mathf_Min_m270_MethodInfo;
extern MethodInfo GUILayoutGroup_SetHorizontal_m3045_MethodInfo;
extern MethodInfo GUILayoutGroup_CalcHeight_m3046_MethodInfo;
extern MethodInfo GUILayoutGroup_SetVertical_m3047_MethodInfo;
extern MethodInfo GUILayoutUtility_LayoutFreeGroup_m3021_MethodInfo;
extern MethodInfo GUILayoutUtility_LayoutSingleGroup_m3022_MethodInfo;
extern MethodInfo GUILayoutGroup_ResetCursor_m3043_MethodInfo;
extern MethodInfo Rect_get_x_m836_MethodInfo;
extern MethodInfo Mathf_Clamp_m315_MethodInfo;
extern MethodInfo Rect_get_y_m837_MethodInfo;
extern MethodInfo GUILayoutUtility_Internal_GetWindowRect_m3023_MethodInfo;
extern MethodInfo Rect_get_width_m827_MethodInfo;
extern MethodInfo Rect_get_height_m2306_MethodInfo;
extern MethodInfo GUILayoutUtility_Internal_MoveWindow_m3024_MethodInfo;
extern MethodInfo GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3025_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m3852_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3853_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3854_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m3856_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m3857_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m3858_GenericMethod;


// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern MethodInfo GUILayoutUtility__cctor_m3015_MethodInfo;
extern TypeInfo* Dictionary_2_t656_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3852_MethodInfo_var;
extern "C" void GUILayoutUtility__cctor_m3015 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool GUILayoutUtility__cctor_m3015_init;
	if (!GUILayoutUtility__cctor_m3015_init)
	{
		Dictionary_2_t656_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t656_0_0_0);
		Dictionary_2__ctor_m3852_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3852_GenericMethod);
		GUILayoutUtility__cctor_m3015_init = true;
	}
	{
		Dictionary_2_t656 * L_0 = (Dictionary_2_t656 *)il2cpp_codegen_object_new (Dictionary_2_t656_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3852(L_0, /*hidden argument*/Dictionary_2__ctor_m3852_MethodInfo_var);
		((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___storedLayouts_0 = L_0;
		Dictionary_2_t656 * L_1 = (Dictionary_2_t656 *)il2cpp_codegen_object_new (Dictionary_2_t656_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3852(L_1, /*hidden argument*/Dictionary_2__ctor_m3852_MethodInfo_var);
		((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___storedWindows_1 = L_1;
		LayoutCache_t655 * L_2 = (LayoutCache_t655 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LayoutCache_t655_il2cpp_TypeInfo));
		LayoutCache__ctor_m3014(L_2, /*hidden argument*/&LayoutCache__ctor_m3014_MethodInfo);
		((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2 = L_2;
		Rect_t213  L_3 = {0};
		Rect__ctor_m817(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m817_MethodInfo);
		((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___kDummyRect_3 = L_3;
		return;
	}
}
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern MethodInfo* Dictionary_2_TryGetValue_m3853_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m3854_MethodInfo_var;
extern "C" LayoutCache_t655 * GUILayoutUtility_SelectIDList_m3016 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method)
{
	static bool GUILayoutUtility_SelectIDList_m3016_init;
	if (!GUILayoutUtility_SelectIDList_m3016_init)
	{
		Dictionary_2_TryGetValue_m3853_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3853_GenericMethod);
		Dictionary_2_set_Item_m3854_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3854_GenericMethod);
		GUILayoutUtility_SelectIDList_m3016_init = true;
	}
	Dictionary_2_t656 * V_0 = {0};
	LayoutCache_t655 * V_1 = {0};
	Dictionary_2_t656 * G_B3_0 = {0};
	{
		bool L_0 = ___isWindow;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		Dictionary_2_t656 * L_1 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___storedWindows_1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		Dictionary_2_t656 * L_2 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___storedLayouts_0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Dictionary_2_t656 * L_3 = V_0;
		int32_t L_4 = ___instanceID;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, LayoutCache_t655 ** >::Invoke(Dictionary_2_TryGetValue_m3853_MethodInfo_var, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		LayoutCache_t655 * L_6 = (LayoutCache_t655 *)il2cpp_codegen_object_new (InitializedTypeInfo(&LayoutCache_t655_il2cpp_TypeInfo));
		LayoutCache__ctor_m3014(L_6, /*hidden argument*/&LayoutCache__ctor_m3014_MethodInfo);
		V_1 = L_6;
		Dictionary_2_t656 * L_7 = V_0;
		int32_t L_8 = ___instanceID;
		LayoutCache_t655 * L_9 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, LayoutCache_t655 * >::Invoke(Dictionary_2_set_Item_m3854_MethodInfo_var, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_10 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_11 = V_1;
		NullCheck(L_11);
		GUILayoutGroup_t654 * L_12 = (L_11->___topLevel_0);
		NullCheck(L_10);
		L_10->___topLevel_0 = L_12;
		LayoutCache_t655 * L_13 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_14 = V_1;
		NullCheck(L_14);
		GenericStack_t648 * L_15 = (L_14->___layoutGroups_1);
		NullCheck(L_13);
		L_13->___layoutGroups_1 = L_15;
		LayoutCache_t655 * L_16 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_17 = V_1;
		NullCheck(L_17);
		GUILayoutGroup_t654 * L_18 = (L_17->___windows_2);
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		LayoutCache_t655 * L_19 = V_1;
		return L_19;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern MethodInfo GUILayoutUtility_Begin_m3017_MethodInfo;
extern "C" void GUILayoutUtility_Begin_m3017 (Object_t * __this /* static, unused */, int32_t ___instanceID, MethodInfo* method)
{
	LayoutCache_t655 * V_0 = {0};
	GUILayoutGroup_t654 * V_1 = {0};
	{
		int32_t L_0 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_1 = GUILayoutUtility_SelectIDList_m3016(NULL /*static, unused*/, L_0, 0, /*hidden argument*/&GUILayoutUtility_SelectIDList_m3016_MethodInfo);
		V_0 = L_1;
		Event_t391 * L_2 = Event_get_current_m3193(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m3193_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m3189(L_2, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_4 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_5 = V_0;
		GUILayoutGroup_t654 * L_6 = (GUILayoutGroup_t654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t654_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m3039(L_6, /*hidden argument*/&GUILayoutGroup__ctor_m3039_MethodInfo);
		GUILayoutGroup_t654 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t654 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t655 * L_9 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_9);
		GenericStack_t648 * L_10 = (L_9->___layoutGroups_1);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(&Stack_Clear_m3855_MethodInfo, L_10);
		LayoutCache_t655 * L_11 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_11);
		GenericStack_t648 * L_12 = (L_11->___layoutGroups_1);
		LayoutCache_t655 * L_13 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_13);
		GUILayoutGroup_t654 * L_14 = (L_13->___topLevel_0);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(&Stack_Push_m3851_MethodInfo, L_12, L_14);
		LayoutCache_t655 * L_15 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_16 = V_0;
		GUILayoutGroup_t654 * L_17 = (GUILayoutGroup_t654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t654_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m3039(L_17, /*hidden argument*/&GUILayoutGroup__ctor_m3039_MethodInfo);
		GUILayoutGroup_t654 * L_18 = L_17;
		V_1 = L_18;
		NullCheck(L_16);
		L_16->___windows_2 = L_18;
		GUILayoutGroup_t654 * L_19 = V_1;
		NullCheck(L_15);
		L_15->___windows_2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_20 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_21 = V_0;
		NullCheck(L_21);
		GUILayoutGroup_t654 * L_22 = (L_21->___topLevel_0);
		NullCheck(L_20);
		L_20->___topLevel_0 = L_22;
		LayoutCache_t655 * L_23 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_24 = V_0;
		NullCheck(L_24);
		GenericStack_t648 * L_25 = (L_24->___layoutGroups_1);
		NullCheck(L_23);
		L_23->___layoutGroups_1 = L_25;
		LayoutCache_t655 * L_26 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_27 = V_0;
		NullCheck(L_27);
		GUILayoutGroup_t654 * L_28 = (L_27->___windows_2);
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m3018 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t651 * ___style, GUILayoutOptionU5BU5D_t658* ___options, MethodInfo* method)
{
	LayoutCache_t655 * V_0 = {0};
	GUILayoutGroup_t654 * V_1 = {0};
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_1 = GUILayoutUtility_SelectIDList_m3016(NULL /*static, unused*/, L_0, 1, /*hidden argument*/&GUILayoutUtility_SelectIDList_m3016_MethodInfo);
		V_0 = L_1;
		Event_t391 * L_2 = Event_get_current_m3193(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m3193_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Event_get_type_m3189(L_2, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_4 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_5 = V_0;
		GUILayoutGroup_t654 * L_6 = (GUILayoutGroup_t654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t654_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m3039(L_6, /*hidden argument*/&GUILayoutGroup__ctor_m3039_MethodInfo);
		GUILayoutGroup_t654 * L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->___topLevel_0 = L_7;
		GUILayoutGroup_t654 * L_8 = V_1;
		NullCheck(L_4);
		L_4->___topLevel_0 = L_8;
		LayoutCache_t655 * L_9 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_9);
		GUILayoutGroup_t654 * L_10 = (L_9->___topLevel_0);
		GUIStyle_t651 * L_11 = ___style;
		NullCheck(L_10);
		GUILayoutEntry_set_style_m3030(L_10, L_11, /*hidden argument*/&GUILayoutEntry_set_style_m3030_MethodInfo);
		LayoutCache_t655 * L_12 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t654 * L_13 = (L_12->___topLevel_0);
		int32_t L_14 = ___windowID;
		NullCheck(L_13);
		L_13->___windowID_16 = L_14;
		GUILayoutOptionU5BU5D_t658* L_15 = ___options;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_16 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_16);
		GUILayoutGroup_t654 * L_17 = (L_16->___topLevel_0);
		GUILayoutOptionU5BU5D_t658* L_18 = ___options;
		NullCheck(L_17);
		VirtActionInvoker1< GUILayoutOptionU5BU5D_t658* >::Invoke(&GUILayoutGroup_ApplyOptions_m3041_MethodInfo, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_19 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_19);
		GenericStack_t648 * L_20 = (L_19->___layoutGroups_1);
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(&Stack_Clear_m3855_MethodInfo, L_20);
		LayoutCache_t655 * L_21 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_21);
		GenericStack_t648 * L_22 = (L_21->___layoutGroups_1);
		LayoutCache_t655 * L_23 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t654 * L_24 = (L_23->___topLevel_0);
		NullCheck(L_22);
		VirtActionInvoker1< Object_t * >::Invoke(&Stack_Push_m3851_MethodInfo, L_22, L_24);
		LayoutCache_t655 * L_25 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_26 = V_0;
		GUILayoutGroup_t654 * L_27 = (GUILayoutGroup_t654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUILayoutGroup_t654_il2cpp_TypeInfo));
		GUILayoutGroup__ctor_m3039(L_27, /*hidden argument*/&GUILayoutGroup__ctor_m3039_MethodInfo);
		GUILayoutGroup_t654 * L_28 = L_27;
		V_1 = L_28;
		NullCheck(L_26);
		L_26->___windows_2 = L_28;
		GUILayoutGroup_t654 * L_29 = V_1;
		NullCheck(L_25);
		L_25->___windows_2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_30 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_31 = V_0;
		NullCheck(L_31);
		GUILayoutGroup_t654 * L_32 = (L_31->___topLevel_0);
		NullCheck(L_30);
		L_30->___topLevel_0 = L_32;
		LayoutCache_t655 * L_33 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_34 = V_0;
		NullCheck(L_34);
		GenericStack_t648 * L_35 = (L_34->___layoutGroups_1);
		NullCheck(L_33);
		L_33->___layoutGroups_1 = L_35;
		LayoutCache_t655 * L_36 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		LayoutCache_t655 * L_37 = V_0;
		NullCheck(L_37);
		GUILayoutGroup_t654 * L_38 = (L_37->___windows_2);
		NullCheck(L_36);
		L_36->___windows_2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m3019 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_0 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t654 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->___windowID_16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_3 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_3);
		GUILayoutGroup_t654 * L_4 = (L_3->___topLevel_0);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m3044_MethodInfo, L_4);
		LayoutCache_t655 * L_5 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t654 * L_6 = (L_5->___topLevel_0);
		int32_t L_7 = Screen_get_width_m382(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m382_MethodInfo);
		LayoutCache_t655 * L_8 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_8);
		GUILayoutGroup_t654 * L_9 = (L_8->___topLevel_0);
		NullCheck(L_9);
		float L_10 = (L_9->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_11 = Mathf_Min_m270(NULL /*static, unused*/, (((float)L_7)), L_10, /*hidden argument*/&Mathf_Min_m270_MethodInfo);
		NullCheck(L_6);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m3045_MethodInfo, L_6, (0.0f), L_11);
		LayoutCache_t655 * L_12 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_12);
		GUILayoutGroup_t654 * L_13 = (L_12->___topLevel_0);
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m3046_MethodInfo, L_13);
		LayoutCache_t655 * L_14 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_14);
		GUILayoutGroup_t654 * L_15 = (L_14->___topLevel_0);
		int32_t L_16 = Screen_get_height_m383(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m383_MethodInfo);
		LayoutCache_t655 * L_17 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_17);
		GUILayoutGroup_t654 * L_18 = (L_17->___topLevel_0);
		NullCheck(L_18);
		float L_19 = (L_18->___maxHeight_3);
		float L_20 = Mathf_Min_m270(NULL /*static, unused*/, (((float)L_16)), L_19, /*hidden argument*/&Mathf_Min_m270_MethodInfo);
		NullCheck(L_15);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m3047_MethodInfo, L_15, (0.0f), L_20);
		LayoutCache_t655 * L_21 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_21);
		GUILayoutGroup_t654 * L_22 = (L_21->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m3021(NULL /*static, unused*/, L_22, /*hidden argument*/&GUILayoutUtility_LayoutFreeGroup_m3021_MethodInfo);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_23 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_23);
		GUILayoutGroup_t654 * L_24 = (L_23->___topLevel_0);
		GUILayoutUtility_LayoutSingleGroup_m3022(NULL /*static, unused*/, L_24, /*hidden argument*/&GUILayoutUtility_LayoutSingleGroup_m3022_MethodInfo);
		LayoutCache_t655 * L_25 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_25);
		GUILayoutGroup_t654 * L_26 = (L_25->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m3021(NULL /*static, unused*/, L_26, /*hidden argument*/&GUILayoutUtility_LayoutFreeGroup_m3021_MethodInfo);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern MethodInfo GUILayoutUtility_LayoutFromEditorWindow_m3020_MethodInfo;
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m3020 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		LayoutCache_t655 * L_0 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_0);
		GUILayoutGroup_t654 * L_1 = (L_0->___topLevel_0);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m3044_MethodInfo, L_1);
		LayoutCache_t655 * L_2 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_2);
		GUILayoutGroup_t654 * L_3 = (L_2->___topLevel_0);
		int32_t L_4 = Screen_get_width_m382(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m382_MethodInfo);
		NullCheck(L_3);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m3045_MethodInfo, L_3, (0.0f), (((float)L_4)));
		LayoutCache_t655 * L_5 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_5);
		GUILayoutGroup_t654 * L_6 = (L_5->___topLevel_0);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m3046_MethodInfo, L_6);
		LayoutCache_t655 * L_7 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_7);
		GUILayoutGroup_t654 * L_8 = (L_7->___topLevel_0);
		int32_t L_9 = Screen_get_height_m383(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m383_MethodInfo);
		NullCheck(L_8);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m3047_MethodInfo, L_8, (0.0f), (((float)L_9)));
		LayoutCache_t655 * L_10 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___current_2;
		NullCheck(L_10);
		GUILayoutGroup_t654 * L_11 = (L_10->___windows_2);
		GUILayoutUtility_LayoutFreeGroup_m3021(NULL /*static, unused*/, L_11, /*hidden argument*/&GUILayoutUtility_LayoutFreeGroup_m3021_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern TypeInfo* Enumerator_t798_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3856_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3857_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3858_MethodInfo_var;
extern "C" void GUILayoutUtility_LayoutFreeGroup_m3021 (Object_t * __this /* static, unused */, GUILayoutGroup_t654 * ___toplevel, MethodInfo* method)
{
	static bool GUILayoutUtility_LayoutFreeGroup_m3021_init;
	if (!GUILayoutUtility_LayoutFreeGroup_m3021_init)
	{
		Enumerator_t798_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t798_0_0_0);
		List_1_GetEnumerator_m3856_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3856_GenericMethod);
		Enumerator_get_Current_m3857_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3857_GenericMethod);
		Enumerator_MoveNext_m3858_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3858_GenericMethod);
		GUILayoutUtility_LayoutFreeGroup_m3021_init = true;
	}
	GUILayoutGroup_t654 * V_0 = {0};
	Enumerator_t798  V_1 = {0};
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GUILayoutGroup_t654 * L_0 = ___toplevel;
		NullCheck(L_0);
		List_1_t660 * L_1 = (L_0->___entries_10);
		NullCheck(L_1);
		Enumerator_t798  L_2 = List_1_GetEnumerator_m3856(L_1, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			GUILayoutEntry_t659 * L_3 = Enumerator_get_Current_m3857((&V_1), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_0 = ((GUILayoutGroup_t654 *)Castclass(L_3, InitializedTypeInfo(&GUILayoutGroup_t654_il2cpp_TypeInfo)));
			GUILayoutGroup_t654 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUILayoutUtility_LayoutSingleGroup_m3022(NULL /*static, unused*/, L_4, /*hidden argument*/&GUILayoutUtility_LayoutSingleGroup_m3022_MethodInfo);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_m3858((&V_1), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_6 = V_1;
		Enumerator_t798  L_7 = L_6;
		Object_t * L_8 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0041:
	{
		GUILayoutGroup_t654 * L_9 = ___toplevel;
		NullCheck(L_9);
		GUILayoutGroup_ResetCursor_m3043(L_9, /*hidden argument*/&GUILayoutGroup_ResetCursor_m3043_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m3022 (Object_t * __this /* static, unused */, GUILayoutGroup_t654 * ___i, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_t213  V_4 = {0};
	{
		GUILayoutGroup_t654 * L_0 = ___i;
		NullCheck(L_0);
		bool L_1 = (L_0->___isWindow_15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		GUILayoutGroup_t654 * L_2 = ___i;
		NullCheck(L_2);
		float L_3 = (L_2->___minWidth_0);
		V_0 = L_3;
		GUILayoutGroup_t654 * L_4 = ___i;
		NullCheck(L_4);
		float L_5 = (L_4->___maxWidth_1);
		V_1 = L_5;
		GUILayoutGroup_t654 * L_6 = ___i;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m3044_MethodInfo, L_6);
		GUILayoutGroup_t654 * L_7 = ___i;
		GUILayoutGroup_t654 * L_8 = ___i;
		NullCheck(L_8);
		Rect_t213 * L_9 = &(L_8->___rect_4);
		float L_10 = Rect_get_x_m836(L_9, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		GUILayoutGroup_t654 * L_11 = ___i;
		NullCheck(L_11);
		float L_12 = (L_11->___maxWidth_1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_15 = Mathf_Clamp_m315(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m3045_MethodInfo, L_7, L_10, L_15);
		GUILayoutGroup_t654 * L_16 = ___i;
		NullCheck(L_16);
		float L_17 = (L_16->___minHeight_2);
		V_2 = L_17;
		GUILayoutGroup_t654 * L_18 = ___i;
		NullCheck(L_18);
		float L_19 = (L_18->___maxHeight_3);
		V_3 = L_19;
		GUILayoutGroup_t654 * L_20 = ___i;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m3046_MethodInfo, L_20);
		GUILayoutGroup_t654 * L_21 = ___i;
		GUILayoutGroup_t654 * L_22 = ___i;
		NullCheck(L_22);
		Rect_t213 * L_23 = &(L_22->___rect_4);
		float L_24 = Rect_get_y_m837(L_23, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		GUILayoutGroup_t654 * L_25 = ___i;
		NullCheck(L_25);
		float L_26 = (L_25->___maxHeight_3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = Mathf_Clamp_m315(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		NullCheck(L_21);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m3047_MethodInfo, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		GUILayoutGroup_t654 * L_30 = ___i;
		NullCheck(L_30);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcWidth_m3044_MethodInfo, L_30);
		GUILayoutGroup_t654 * L_31 = ___i;
		NullCheck(L_31);
		int32_t L_32 = (L_31->___windowID_16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		Rect_t213  L_33 = GUILayoutUtility_Internal_GetWindowRect_m3023(NULL /*static, unused*/, L_32, /*hidden argument*/&GUILayoutUtility_Internal_GetWindowRect_m3023_MethodInfo);
		V_4 = L_33;
		GUILayoutGroup_t654 * L_34 = ___i;
		float L_35 = Rect_get_x_m836((&V_4), /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		float L_36 = Rect_get_width_m827((&V_4), /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		GUILayoutGroup_t654 * L_37 = ___i;
		NullCheck(L_37);
		float L_38 = (L_37->___minWidth_0);
		GUILayoutGroup_t654 * L_39 = ___i;
		NullCheck(L_39);
		float L_40 = (L_39->___maxWidth_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_41 = Mathf_Clamp_m315(NULL /*static, unused*/, L_36, L_38, L_40, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		NullCheck(L_34);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetHorizontal_m3045_MethodInfo, L_34, L_35, L_41);
		GUILayoutGroup_t654 * L_42 = ___i;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(&GUILayoutGroup_CalcHeight_m3046_MethodInfo, L_42);
		GUILayoutGroup_t654 * L_43 = ___i;
		float L_44 = Rect_get_y_m837((&V_4), /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		float L_45 = Rect_get_height_m2306((&V_4), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		GUILayoutGroup_t654 * L_46 = ___i;
		NullCheck(L_46);
		float L_47 = (L_46->___minHeight_2);
		GUILayoutGroup_t654 * L_48 = ___i;
		NullCheck(L_48);
		float L_49 = (L_48->___maxHeight_3);
		float L_50 = Mathf_Clamp_m315(NULL /*static, unused*/, L_45, L_47, L_49, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		NullCheck(L_43);
		VirtActionInvoker2< float, float >::Invoke(&GUILayoutGroup_SetVertical_m3047_MethodInfo, L_43, L_44, L_50);
		GUILayoutGroup_t654 * L_51 = ___i;
		NullCheck(L_51);
		int32_t L_52 = (L_51->___windowID_16);
		GUILayoutGroup_t654 * L_53 = ___i;
		NullCheck(L_53);
		Rect_t213  L_54 = (L_53->___rect_4);
		GUILayoutUtility_Internal_MoveWindow_m3024(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/&GUILayoutUtility_Internal_MoveWindow_m3024_MethodInfo);
	}

IL_00e8:
	{
		return;
	}
}
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t213  GUILayoutUtility_Internal_GetWindowRect_m3023 (Object_t * __this /* static, unused */, int32_t ___windowID, MethodInfo* method)
{
	typedef Rect_t213  (*GUILayoutUtility_Internal_GetWindowRect_m3023_ftn) (int32_t);
	static GUILayoutUtility_Internal_GetWindowRect_m3023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_Internal_GetWindowRect_m3023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(___windowID);
}
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m3024 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t213  ___r, MethodInfo* method)
{
	{
		int32_t L_0 = ___windowID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3025(NULL /*static, unused*/, L_0, (&___r), /*hidden argument*/&GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3025_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3025 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t213 * ___r, MethodInfo* method)
{
	typedef void (*GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3025_ftn) (int32_t, Rect_t213 *);
	static GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m3025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(___windowID, ___r);
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern MethodInfo GUILayoutUtility_get_spaceStyle_m3026_MethodInfo;
extern "C" GUIStyle_t651 * GUILayoutUtility_get_spaceStyle_m3026 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUIStyle_t651 * L_0 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_1 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_1, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUIStyle_t651 * L_2 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4;
		NullCheck(L_2);
		GUIStyle_set_stretchWidth_m3166(L_2, 0, /*hidden argument*/&GUIStyle_set_stretchWidth_m3166_MethodInfo);
		GUIStyle_t651 * L_3 = ((GUILayoutUtility_t657_StaticFields*)InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo)->static_fields)->___s_SpaceStyle_4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern TypeInfo ObjectU5BU5D_t219_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t219_0_0_0;
extern MethodInfo GUILayoutEntry_ApplyStyleSettings_m3036_MethodInfo;
extern MethodInfo GUILayoutEntry_get_style_m3029_MethodInfo;
extern MethodInfo GUIStyle_get_margin_m3160_MethodInfo;
extern MethodInfo GUIStyle_get_none_m3172_MethodInfo;
extern MethodInfo Rect_set_x_m2376_MethodInfo;
extern MethodInfo Rect_set_width_m2375_MethodInfo;
extern MethodInfo Rect_set_y_m2374_MethodInfo;
extern MethodInfo Rect_set_height_m2372_MethodInfo;
extern MethodInfo GUIStyle_get_fixedWidth_m3163_MethodInfo;
extern MethodInfo GUIStyle_get_stretchWidth_m3165_MethodInfo;
extern MethodInfo GUIStyle_get_fixedHeight_m3164_MethodInfo;
extern MethodInfo GUIStyle_get_stretchHeight_m3167_MethodInfo;
extern MethodInfo String_Concat_m385_MethodInfo;
extern MethodInfo GUIStyle_get_name_m3156_MethodInfo;
extern MethodInfo Object_GetType_m2196_MethodInfo;
extern MethodInfo Rect_get_xMax_m2391_MethodInfo;
extern MethodInfo Rect_get_yMax_m2392_MethodInfo;
extern MethodInfo UnityString_Format_m3361_MethodInfo;
extern MethodInfo String_Concat_m2171_MethodInfo;


// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern MethodInfo GUILayoutEntry__ctor_m3027_MethodInfo;
extern "C" void GUILayoutEntry__ctor_m3027 (GUILayoutEntry_t659 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t651 * ____style, MethodInfo* method)
{
	{
		Rect_t213  L_0 = {0};
		Rect__ctor_m817(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Rect__ctor_m817_MethodInfo);
		__this->___rect_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_1 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		__this->___m_Style_7 = L_1;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		float L_2 = ____minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ____maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ____minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ____maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t651 * L_6 = ____style;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_7 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		____style = L_7;
	}

IL_005b:
	{
		GUIStyle_t651 * L_8 = ____style;
		GUILayoutEntry_set_style_m3030(__this, L_8, /*hidden argument*/&GUILayoutEntry_set_style_m3030_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern MethodInfo GUILayoutEntry__cctor_m3028_MethodInfo;
extern "C" void GUILayoutEntry__cctor_m3028 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Rect_t213  L_0 = {0};
		Rect__ctor_m817(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m817_MethodInfo);
		((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___kDummyRect_8 = L_0;
		((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___indent_9 = 0;
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C" GUIStyle_t651 * GUILayoutEntry_get_style_m3029 (GUILayoutEntry_t659 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_Style_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_set_style_m3030 (GUILayoutEntry_t659 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_Style_7 = L_0;
		GUIStyle_t651 * L_1 = ___value;
		VirtActionInvoker1< GUIStyle_t651 * >::Invoke(&GUILayoutEntry_ApplyStyleSettings_m3036_MethodInfo, __this, L_1);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern MethodInfo GUILayoutEntry_get_margin_m3031_MethodInfo;
extern "C" RectOffset_t449 * GUILayoutEntry_get_margin_m3031 (GUILayoutEntry_t659 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_0);
		RectOffset_t449 * L_1 = GUIStyle_get_margin_m3160(L_0, /*hidden argument*/&GUIStyle_get_margin_m3160_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern MethodInfo GUILayoutEntry_CalcWidth_m3032_MethodInfo;
extern "C" void GUILayoutEntry_CalcWidth_m3032 (GUILayoutEntry_t659 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern MethodInfo GUILayoutEntry_CalcHeight_m3033_MethodInfo;
extern "C" void GUILayoutEntry_CalcHeight_m3033 (GUILayoutEntry_t659 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern MethodInfo GUILayoutEntry_SetHorizontal_m3034_MethodInfo;
extern "C" void GUILayoutEntry_SetHorizontal_m3034 (GUILayoutEntry_t659 * __this, float ___x, float ___width, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___rect_4);
		float L_1 = ___x;
		Rect_set_x_m2376(L_0, L_1, /*hidden argument*/&Rect_set_x_m2376_MethodInfo);
		Rect_t213 * L_2 = &(__this->___rect_4);
		float L_3 = ___width;
		Rect_set_width_m2375(L_2, L_3, /*hidden argument*/&Rect_set_width_m2375_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern MethodInfo GUILayoutEntry_SetVertical_m3035_MethodInfo;
extern "C" void GUILayoutEntry_SetVertical_m3035 (GUILayoutEntry_t659 * __this, float ___y, float ___height, MethodInfo* method)
{
	{
		Rect_t213 * L_0 = &(__this->___rect_4);
		float L_1 = ___y;
		Rect_set_y_m2374(L_0, L_1, /*hidden argument*/&Rect_set_y_m2374_MethodInfo);
		Rect_t213 * L_2 = &(__this->___rect_4);
		float L_3 = ___height;
		Rect_set_height_m2372(L_2, L_3, /*hidden argument*/&Rect_set_height_m2372_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutEntry_ApplyStyleSettings_m3036 (GUILayoutEntry_t659 * __this, GUIStyle_t651 * ___style, MethodInfo* method)
{
	GUILayoutEntry_t659 * G_B3_0 = {0};
	GUILayoutEntry_t659 * G_B1_0 = {0};
	GUILayoutEntry_t659 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	GUILayoutEntry_t659 * G_B4_1 = {0};
	GUILayoutEntry_t659 * G_B7_0 = {0};
	GUILayoutEntry_t659 * G_B5_0 = {0};
	GUILayoutEntry_t659 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	GUILayoutEntry_t659 * G_B8_1 = {0};
	{
		GUIStyle_t651 * L_0 = ___style;
		NullCheck(L_0);
		float L_1 = GUIStyle_get_fixedWidth_m3163(L_0, /*hidden argument*/&GUIStyle_get_fixedWidth_m3163_MethodInfo);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		GUIStyle_t651 * L_2 = ___style;
		NullCheck(L_2);
		bool L_3 = GUIStyle_get_stretchWidth_m3165(L_2, /*hidden argument*/&GUIStyle_get_stretchWidth_m3165_MethodInfo);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t651 * L_4 = ___style;
		NullCheck(L_4);
		float L_5 = GUIStyle_get_fixedHeight_m3164(L_4, /*hidden argument*/&GUIStyle_get_fixedHeight_m3164_MethodInfo);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		GUIStyle_t651 * L_6 = ___style;
		NullCheck(L_6);
		bool L_7 = GUIStyle_get_stretchHeight_m3167(L_6, /*hidden argument*/&GUIStyle_get_stretchHeight_m3167_MethodInfo);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t651 * L_8 = ___style;
		__this->___m_Style_7 = L_8;
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern MethodInfo GUILayoutEntry_ApplyOptions_m3037_MethodInfo;
extern "C" void GUILayoutEntry_ApplyOptions_m3037 (GUILayoutEntry_t659 * __this, GUILayoutOptionU5BU5D_t658* ___options, MethodInfo* method)
{
	GUILayoutOption_t653 * V_0 = {0};
	GUILayoutOptionU5BU5D_t658* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		GUILayoutOptionU5BU5D_t658* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t658* L_1 = ___options;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		GUILayoutOptionU5BU5D_t658* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(GUILayoutOption_t653 **)(GUILayoutOption_t653 **)SZArrayLdElema(L_2, L_4));
		GUILayoutOption_t653 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___type_0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		GUILayoutOption_t653 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___value_1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo)))));
		V_4 = L_10;
		__this->___maxWidth_1 = L_10;
		float L_11 = V_4;
		__this->___minWidth_0 = L_11;
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		GUILayoutOption_t653 * L_12 = V_0;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___value_1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo)))));
		V_4 = L_14;
		__this->___maxHeight_3 = L_14;
		float L_15 = V_4;
		__this->___minHeight_2 = L_15;
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		GUILayoutOption_t653 * L_16 = V_0;
		NullCheck(L_16);
		Object_t * L_17 = (L_16->___value_1);
		__this->___minWidth_0 = ((*(float*)((float*)UnBox (L_17, InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo)))));
		float L_18 = (__this->___maxWidth_1);
		float L_19 = (__this->___minWidth_0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		GUILayoutOption_t653 * L_21 = V_0;
		NullCheck(L_21);
		Object_t * L_22 = (L_21->___value_1);
		__this->___maxWidth_1 = ((*(float*)((float*)UnBox (L_22, InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo)))));
		float L_23 = (__this->___minWidth_0);
		float L_24 = (__this->___maxWidth_1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->___maxWidth_1);
		__this->___minWidth_0 = L_25;
	}

IL_00f7:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		GUILayoutOption_t653 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = (L_26->___value_1);
		__this->___minHeight_2 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo)))));
		float L_28 = (__this->___maxHeight_3);
		float L_29 = (__this->___minHeight_2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		GUILayoutOption_t653 * L_31 = V_0;
		NullCheck(L_31);
		Object_t * L_32 = (L_31->___value_1);
		__this->___maxHeight_3 = ((*(float*)((float*)UnBox (L_32, InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo)))));
		float L_33 = (__this->___minHeight_2);
		float L_34 = (__this->___maxHeight_3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->___maxHeight_3);
		__this->___minHeight_2 = L_35;
	}

IL_0164:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		GUILayoutOption_t653 * L_36 = V_0;
		NullCheck(L_36);
		Object_t * L_37 = (L_36->___value_1);
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)UnBox (L_37, InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo)))));
		goto IL_019c;
	}

IL_0186:
	{
		GUILayoutOption_t653 * L_38 = V_0;
		NullCheck(L_38);
		Object_t * L_39 = (L_38->___value_1);
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)UnBox (L_39, InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo)))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		GUILayoutOptionU5BU5D_t658* L_42 = V_1;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->___maxWidth_1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->___maxWidth_1);
		float L_45 = (__this->___minWidth_0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->___minWidth_0);
		__this->___maxWidth_1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->___maxHeight_3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->___maxHeight_3);
		float L_49 = (__this->___minHeight_2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->___minHeight_2);
		__this->___maxHeight_3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
extern MethodInfo GUILayoutEntry_ToString_m3038_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* GUILayoutEntry_ToString_m3038 (GUILayoutEntry_t659 * __this, MethodInfo* method)
{
	static bool GUILayoutEntry_ToString_m3038_init;
	if (!GUILayoutEntry_ToString_m3038_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		GUILayoutEntry_ToString_m3038_init = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t219* G_B5_1 = {0};
	ObjectU5BU5D_t219* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	ObjectU5BU5D_t219* G_B5_5 = {0};
	ObjectU5BU5D_t219* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t219* G_B4_1 = {0};
	ObjectU5BU5D_t219* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	ObjectU5BU5D_t219* G_B4_5 = {0};
	ObjectU5BU5D_t219* G_B4_6 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t219* G_B6_2 = {0};
	ObjectU5BU5D_t219* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	ObjectU5BU5D_t219* G_B6_6 = {0};
	ObjectU5BU5D_t219* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t219* G_B8_1 = {0};
	ObjectU5BU5D_t219* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t219* G_B7_1 = {0};
	ObjectU5BU5D_t219* G_B7_2 = {0};
	String_t* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t219* G_B9_2 = {0};
	ObjectU5BU5D_t219* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t219* G_B11_1 = {0};
	ObjectU5BU5D_t219* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t219* G_B10_1 = {0};
	ObjectU5BU5D_t219* G_B10_2 = {0};
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t219* G_B12_2 = {0};
	ObjectU5BU5D_t219* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m385(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral163, /*hidden argument*/&String_Concat_m385_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo));
		int32_t L_5 = ((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___indent_9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t219* L_6 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)12)));
		String_t* L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_6;
		ObjectU5BU5D_t219* L_9 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 6));
		GUIStyle_t651 * L_10 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = (String_t*) &_stringLiteral291;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = (String_t*) &_stringLiteral291;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		GUIStyle_t651 * L_11 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = GUIStyle_get_name_m3156(L_11, /*hidden argument*/&GUIStyle_get_name_m3156_MethodInfo);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = (String_t*) &_stringLiteral292;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)G_B6_0;
		ObjectU5BU5D_t219* L_13 = G_B6_3;
		Type_t * L_14 = Object_GetType_m2196(__this, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_14;
		ObjectU5BU5D_t219* L_15 = L_13;
		Rect_t213 * L_16 = &(__this->___rect_4);
		float L_17 = Rect_get_x_m836(L_16, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		float L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_18);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		ArrayElementTypeCheck (L_15, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 2)) = (Object_t *)L_19;
		ObjectU5BU5D_t219* L_20 = L_15;
		Rect_t213 * L_21 = &(__this->___rect_4);
		float L_22 = Rect_get_xMax_m2391(L_21, /*hidden argument*/&Rect_get_xMax_m2391_MethodInfo);
		float L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t219* L_25 = L_20;
		Rect_t213 * L_26 = &(__this->___rect_4);
		float L_27 = Rect_get_y_m837(L_26, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		float L_28 = L_27;
		Object_t * L_29 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_28);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)L_29;
		ObjectU5BU5D_t219* L_30 = L_25;
		Rect_t213 * L_31 = &(__this->___rect_4);
		float L_32 = Rect_get_yMax_m2392(L_31, /*hidden argument*/&Rect_get_yMax_m2392_MethodInfo);
		float L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_33);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 5);
		ArrayElementTypeCheck (L_30, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 5)) = (Object_t *)L_34;
		String_t* L_35 = UnityString_Format_m3361(NULL /*static, unused*/, G_B6_4, L_30, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		NullCheck(G_B6_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_6, G_B6_5);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_6, G_B6_5)) = (Object_t *)L_35;
		ObjectU5BU5D_t219* L_36 = G_B6_7;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 2);
		ArrayElementTypeCheck (L_36, (String_t*) &_stringLiteral293);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 2)) = (Object_t *)(String_t*) &_stringLiteral293;
		ObjectU5BU5D_t219* L_37 = L_36;
		float L_38 = (__this->___minWidth_0);
		float L_39 = L_38;
		Object_t * L_40 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 3)) = (Object_t *)L_40;
		ObjectU5BU5D_t219* L_41 = L_37;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 4);
		ArrayElementTypeCheck (L_41, (String_t*) &_stringLiteral294);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 4)) = (Object_t *)(String_t*) &_stringLiteral294;
		ObjectU5BU5D_t219* L_42 = L_41;
		float L_43 = (__this->___maxWidth_1);
		float L_44 = L_43;
		Object_t * L_45 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 5);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 5)) = (Object_t *)L_45;
		ObjectU5BU5D_t219* L_46 = L_42;
		int32_t L_47 = (__this->___stretchWidth_5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = (String_t*) &_stringLiteral295;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		NullCheck(G_B9_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B9_2, G_B9_1);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B9_2, G_B9_1)) = (Object_t *)G_B9_0;
		ObjectU5BU5D_t219* L_49 = G_B9_3;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 7);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral296);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 7)) = (Object_t *)(String_t*) &_stringLiteral296;
		ObjectU5BU5D_t219* L_50 = L_49;
		float L_51 = (__this->___minHeight_2);
		float L_52 = L_51;
		Object_t * L_53 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_52);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 8);
		ArrayElementTypeCheck (L_50, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 8)) = (Object_t *)L_53;
		ObjectU5BU5D_t219* L_54 = L_50;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)9));
		ArrayElementTypeCheck (L_54, (String_t*) &_stringLiteral294);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral294;
		ObjectU5BU5D_t219* L_55 = L_54;
		float L_56 = (__this->___maxHeight_3);
		float L_57 = L_56;
		Object_t * L_58 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_57);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)10));
		ArrayElementTypeCheck (L_55, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, ((int32_t)10))) = (Object_t *)L_58;
		ObjectU5BU5D_t219* L_59 = L_55;
		int32_t L_60 = (__this->___stretchHeight_6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = (String_t*) &_stringLiteral295;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_61 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		NullCheck(G_B12_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B12_2, G_B12_1);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B12_2, G_B12_1)) = (Object_t *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_62 = String_Concat_m2171(NULL /*static, unused*/, G_B12_3, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		return L_62;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo List_1_t660_il2cpp_TypeInfo;
extern TypeInfo RectOffset_t449_il2cpp_TypeInfo;
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern Il2CppType List_1_t660_0_0_0;
extern MethodInfo List_1__ctor_m3859_MethodInfo;
extern MethodInfo RectOffset__ctor_m2637_MethodInfo;
extern MethodInfo RectOffset_get_left_m2631_MethodInfo;
extern MethodInfo RectOffset_set_left_m3142_MethodInfo;
extern MethodInfo RectOffset_get_right_m3143_MethodInfo;
extern MethodInfo RectOffset_set_right_m3144_MethodInfo;
extern MethodInfo RectOffset_get_top_m2632_MethodInfo;
extern MethodInfo RectOffset_set_top_m3145_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m3146_MethodInfo;
extern MethodInfo RectOffset_set_bottom_m3147_MethodInfo;
extern MethodInfo List_1_get_Count_m3860_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m3161_MethodInfo;
extern MethodInfo RectOffset_get_horizontal_m2622_MethodInfo;
extern MethodInfo Mathf_Min_m2451_MethodInfo;
extern MethodInfo Mathf_Max_m269_MethodInfo;
extern MethodInfo List_1_get_Item_m3861_MethodInfo;
extern MethodInfo Mathf_Max_m2449_MethodInfo;
extern MethodInfo GUILayoutGroup_get_margin_m3040_MethodInfo;
extern MethodInfo Mathf_Lerp_m897_MethodInfo;
extern MethodInfo Mathf_Round_m2516_MethodInfo;
extern MethodInfo RectOffset_get_vertical_m2623_MethodInfo;
extern MethodInfo String_Concat_m296_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m3859_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m3860_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m3861_GenericMethod;


// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern TypeInfo* List_1_t660_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m3859_MethodInfo_var;
extern "C" void GUILayoutGroup__ctor_m3039 (GUILayoutGroup_t654 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup__ctor_m3039_init;
	if (!GUILayoutGroup__ctor_m3039_init)
	{
		List_1_t660_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t660_0_0_0);
		List_1__ctor_m3859_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m3859_GenericMethod);
		GUILayoutGroup__ctor_m3039_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t660_il2cpp_TypeInfo_var);
		List_1_t660 * L_0 = (List_1_t660 *)il2cpp_codegen_object_new (List_1_t660_il2cpp_TypeInfo_var);
		List_1__ctor_m3859(L_0, /*hidden argument*/List_1__ctor_m3859_MethodInfo_var);
		__this->___entries_10 = L_0;
		__this->___isVertical_11 = 1;
		__this->___sameSize_14 = 1;
		__this->___windowID_16 = (-1);
		__this->___stretchableCountX_18 = ((int32_t)100);
		__this->___stretchableCountY_19 = ((int32_t)100);
		__this->___childMinWidth_22 = (100.0f);
		__this->___childMaxWidth_23 = (100.0f);
		__this->___childMinHeight_24 = (100.0f);
		__this->___childMaxHeight_25 = (100.0f);
		RectOffset_t449 * L_1 = (RectOffset_t449 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RectOffset_t449_il2cpp_TypeInfo));
		RectOffset__ctor_m2637(L_1, /*hidden argument*/&RectOffset__ctor_m2637_MethodInfo);
		__this->___m_Margin_26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_2 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		GUILayoutEntry__ctor_m3027(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, /*hidden argument*/&GUILayoutEntry__ctor_m3027_MethodInfo);
		return;
	}
}
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t449 * GUILayoutGroup_get_margin_m3040 (GUILayoutGroup_t654 * __this, MethodInfo* method)
{
	{
		RectOffset_t449 * L_0 = (__this->___m_Margin_26);
		return L_0;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m3041 (GUILayoutGroup_t654 * __this, GUILayoutOptionU5BU5D_t658* ___options, MethodInfo* method)
{
	GUILayoutOption_t653 * V_0 = {0};
	GUILayoutOptionU5BU5D_t658* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		GUILayoutOptionU5BU5D_t658* L_0 = ___options;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		GUILayoutOptionU5BU5D_t658* L_1 = ___options;
		GUILayoutEntry_ApplyOptions_m3037(__this, L_1, /*hidden argument*/&GUILayoutEntry_ApplyOptions_m3037_MethodInfo);
		GUILayoutOptionU5BU5D_t658* L_2 = ___options;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		GUILayoutOptionU5BU5D_t658* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(GUILayoutOption_t653 **)(GUILayoutOption_t653 **)SZArrayLdElema(L_3, L_5));
		GUILayoutOption_t653 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___type_0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->___userSpecifiedHeight_21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->___userSpecifiedWidth_20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		GUILayoutOption_t653 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (L_9->___value_1);
		__this->___spacing_13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo)))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		GUILayoutOptionU5BU5D_t658* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern MethodInfo GUILayoutGroup_ApplyStyleSettings_m3042_MethodInfo;
extern "C" void GUILayoutGroup_ApplyStyleSettings_m3042 (GUILayoutGroup_t654 * __this, GUIStyle_t651 * ___style, MethodInfo* method)
{
	RectOffset_t449 * V_0 = {0};
	{
		GUIStyle_t651 * L_0 = ___style;
		GUILayoutEntry_ApplyStyleSettings_m3036(__this, L_0, /*hidden argument*/&GUILayoutEntry_ApplyStyleSettings_m3036_MethodInfo);
		GUIStyle_t651 * L_1 = ___style;
		NullCheck(L_1);
		RectOffset_t449 * L_2 = GUIStyle_get_margin_m3160(L_1, /*hidden argument*/&GUIStyle_get_margin_m3160_MethodInfo);
		V_0 = L_2;
		RectOffset_t449 * L_3 = (__this->___m_Margin_26);
		RectOffset_t449 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_left_m2631(L_4, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		NullCheck(L_3);
		RectOffset_set_left_m3142(L_3, L_5, /*hidden argument*/&RectOffset_set_left_m3142_MethodInfo);
		RectOffset_t449 * L_6 = (__this->___m_Margin_26);
		RectOffset_t449 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = RectOffset_get_right_m3143(L_7, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
		NullCheck(L_6);
		RectOffset_set_right_m3144(L_6, L_8, /*hidden argument*/&RectOffset_set_right_m3144_MethodInfo);
		RectOffset_t449 * L_9 = (__this->___m_Margin_26);
		RectOffset_t449 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2632(L_10, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		NullCheck(L_9);
		RectOffset_set_top_m3145(L_9, L_11, /*hidden argument*/&RectOffset_set_top_m3145_MethodInfo);
		RectOffset_t449 * L_12 = (__this->___m_Margin_26);
		RectOffset_t449 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_bottom_m3146(L_13, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
		NullCheck(L_12);
		RectOffset_set_bottom_m3147(L_12, L_14, /*hidden argument*/&RectOffset_set_bottom_m3147_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m3043 (GUILayoutGroup_t654 * __this, MethodInfo* method)
{
	{
		__this->___cursor_17 = 0;
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern TypeInfo* Enumerator_t798_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3860_MethodInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3856_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3857_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3858_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3861_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcWidth_m3044 (GUILayoutGroup_t654 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup_CalcWidth_m3044_init;
	if (!GUILayoutGroup_CalcWidth_m3044_init)
	{
		Enumerator_t798_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t798_0_0_0);
		List_1_get_Count_m3860_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3860_GenericMethod);
		List_1_GetEnumerator_m3856_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3856_GenericMethod);
		Enumerator_get_Current_m3857_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3857_GenericMethod);
		Enumerator_MoveNext_m3858_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3858_GenericMethod);
		List_1_get_Item_m3861_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3861_GenericMethod);
		GUILayoutGroup_CalcWidth_m3044_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	GUILayoutEntry_t659 * V_3 = {0};
	Enumerator_t798  V_4 = {0};
	RectOffset_t449 * V_5 = {0};
	int32_t V_6 = 0;
	GUILayoutEntry_t659 * V_7 = {0};
	Enumerator_t798  V_8 = {0};
	RectOffset_t449 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	GUILayoutGroup_t654 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	GUILayoutGroup_t654 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	GUILayoutGroup_t654 * G_B40_3 = {0};
	{
		List_1_t660 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t651 * L_2 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_2);
		RectOffset_t449 * L_3 = GUIStyle_get_padding_m3161(L_2, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_horizontal_m2622(L_3, /*hidden argument*/&RectOffset_get_horizontal_m2622_MethodInfo);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		__this->___minWidth_0 = L_5;
		float L_6 = V_13;
		__this->___maxWidth_1 = L_6;
		return;
	}

IL_0033:
	{
		__this->___childMinWidth_22 = (0.0f);
		__this->___childMaxWidth_23 = (0.0f);
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountX_18 = 0;
		V_2 = 1;
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		List_1_t660 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t798  L_9 = List_1_GetEnumerator_m3856(L_8, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			GUILayoutEntry_t659 * L_10 = Enumerator_get_Current_m3857((&V_4), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_3 = L_10;
			GUILayoutEntry_t659 * L_11 = V_3;
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcWidth_m3032_MethodInfo, L_11);
			GUILayoutEntry_t659 * L_12 = V_3;
			NullCheck(L_12);
			RectOffset_t449 * L_13 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_12);
			V_5 = L_13;
			GUILayoutEntry_t659 * L_14 = V_3;
			NullCheck(L_14);
			GUIStyle_t651 * L_15 = GUILayoutEntry_get_style_m3029(L_14, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUIStyle_t651 * L_16 = GUILayoutUtility_get_spaceStyle_m3026(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m3026_MethodInfo);
			if ((((Object_t*)(GUIStyle_t651 *)L_15) == ((Object_t*)(GUIStyle_t651 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			RectOffset_t449 * L_18 = V_5;
			NullCheck(L_18);
			int32_t L_19 = RectOffset_get_left_m2631(L_18, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			int32_t L_21 = Mathf_Min_m2451(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Mathf_Min_m2451_MethodInfo);
			V_0 = L_21;
			RectOffset_t449 * L_22 = V_5;
			NullCheck(L_22);
			int32_t L_23 = RectOffset_get_right_m3143(L_22, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
			int32_t L_24 = V_1;
			int32_t L_25 = Mathf_Min_m2451(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&Mathf_Min_m2451_MethodInfo);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			RectOffset_t449 * L_26 = V_5;
			NullCheck(L_26);
			int32_t L_27 = RectOffset_get_left_m2631(L_26, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			V_0 = L_27;
			RectOffset_t449 * L_28 = V_5;
			NullCheck(L_28);
			int32_t L_29 = RectOffset_get_right_m3143(L_28, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			GUILayoutEntry_t659 * L_30 = V_3;
			NullCheck(L_30);
			float L_31 = (L_30->___minWidth_0);
			RectOffset_t449 * L_32 = V_5;
			NullCheck(L_32);
			int32_t L_33 = RectOffset_get_horizontal_m2622(L_32, /*hidden argument*/&RectOffset_get_horizontal_m2622_MethodInfo);
			float L_34 = (__this->___childMinWidth_22);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_35 = Mathf_Max_m269(NULL /*static, unused*/, ((float)((float)L_31+(float)(((float)L_33)))), L_34, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
			__this->___childMinWidth_22 = L_35;
			GUILayoutEntry_t659 * L_36 = V_3;
			NullCheck(L_36);
			float L_37 = (L_36->___maxWidth_1);
			RectOffset_t449 * L_38 = V_5;
			NullCheck(L_38);
			int32_t L_39 = RectOffset_get_horizontal_m2622(L_38, /*hidden argument*/&RectOffset_get_horizontal_m2622_MethodInfo);
			float L_40 = (__this->___childMaxWidth_23);
			float L_41 = Mathf_Max_m269(NULL /*static, unused*/, ((float)((float)L_37+(float)(((float)L_39)))), L_40, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
			__this->___childMaxWidth_23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t659 * L_43 = V_3;
			NullCheck(L_43);
			int32_t L_44 = (L_43->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = Enumerator_MoveNext_m3858((&V_4), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_46 = V_4;
		Enumerator_t798  L_47 = L_46;
		Object_t * L_48 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_48);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0143:
	{
		float L_49 = (__this->___childMinWidth_22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->___childMinWidth_22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->___childMaxWidth_23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->___childMaxWidth_23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		List_1_t660 * L_55 = (__this->___entries_10);
		NullCheck(L_55);
		Enumerator_t798  L_56 = List_1_GetEnumerator_m3856(L_55, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			GUILayoutEntry_t659 * L_57 = Enumerator_get_Current_m3857((&V_8), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_7 = L_57;
			GUILayoutEntry_t659 * L_58 = V_7;
			NullCheck(L_58);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcWidth_m3032_MethodInfo, L_58);
			GUILayoutEntry_t659 * L_59 = V_7;
			NullCheck(L_59);
			RectOffset_t449 * L_60 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_59);
			V_9 = L_60;
			GUILayoutEntry_t659 * L_61 = V_7;
			NullCheck(L_61);
			GUIStyle_t651 * L_62 = GUILayoutEntry_get_style_m3029(L_61, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUIStyle_t651 * L_63 = GUILayoutUtility_get_spaceStyle_m3026(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m3026_MethodInfo);
			if ((((Object_t*)(GUIStyle_t651 *)L_62) == ((Object_t*)(GUIStyle_t651 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			RectOffset_t449 * L_66 = V_9;
			NullCheck(L_66);
			int32_t L_67 = RectOffset_get_left_m2631(L_66, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			RectOffset_t449 * L_69 = V_9;
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_left_m2631(L_69, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->___childMinWidth_22);
			GUILayoutEntry_t659 * L_72 = V_7;
			NullCheck(L_72);
			float L_73 = (L_72->___minWidth_0);
			float L_74 = (__this->___spacing_13);
			int32_t L_75 = V_10;
			__this->___childMinWidth_22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t659 * L_77 = V_7;
			NullCheck(L_77);
			float L_78 = (L_77->___maxWidth_1);
			float L_79 = (__this->___spacing_13);
			int32_t L_80 = V_10;
			__this->___childMaxWidth_23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			RectOffset_t449 * L_81 = V_9;
			NullCheck(L_81);
			int32_t L_82 = RectOffset_get_right_m3143(L_81, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
			V_6 = L_82;
			int32_t L_83 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t659 * L_84 = V_7;
			NullCheck(L_84);
			int32_t L_85 = (L_84->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->___childMinWidth_22);
			GUILayoutEntry_t659 * L_87 = V_7;
			NullCheck(L_87);
			float L_88 = (L_87->___minWidth_0);
			__this->___childMinWidth_22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->___childMaxWidth_23);
			GUILayoutEntry_t659 * L_90 = V_7;
			NullCheck(L_90);
			float L_91 = (L_90->___maxWidth_1);
			__this->___childMaxWidth_23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->___stretchableCountX_18);
			GUILayoutEntry_t659 * L_93 = V_7;
			NullCheck(L_93);
			int32_t L_94 = (L_93->___stretchWidth_5);
			__this->___stretchableCountX_18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = Enumerator_MoveNext_m3858((&V_8), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_96 = V_8;
		Enumerator_t798  L_97 = L_96;
		Object_t * L_98 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_97);
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0291:
	{
		float L_99 = (__this->___childMinWidth_22);
		float L_100 = (__this->___spacing_13);
		__this->___childMinWidth_22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->___childMaxWidth_23);
		float L_102 = (__this->___spacing_13);
		__this->___childMaxWidth_23 = ((float)((float)L_101-(float)L_102));
		List_1_t660 * L_103 = (__this->___entries_10);
		NullCheck(L_103);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		List_1_t660 * L_105 = (__this->___entries_10);
		NullCheck(L_105);
		GUILayoutEntry_t659 * L_106 = (GUILayoutEntry_t659 *)VirtFuncInvoker1< GUILayoutEntry_t659 *, int32_t >::Invoke(List_1_get_Item_m3861_MethodInfo_var, L_105, 0);
		NullCheck(L_106);
		RectOffset_t449 * L_107 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_106);
		NullCheck(L_107);
		int32_t L_108 = RectOffset_get_left_m2631(L_107, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		GUIStyle_t651 * L_111 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_112 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		if ((!(((Object_t*)(GUIStyle_t651 *)L_111) == ((Object_t*)(GUIStyle_t651 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->___userSpecifiedWidth_20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		GUIStyle_t651 * L_114 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_114);
		RectOffset_t449 * L_115 = GUIStyle_get_padding_m3161(L_114, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_115);
		int32_t L_116 = RectOffset_get_left_m2631(L_115, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		int32_t L_118 = Mathf_Max_m2449(NULL /*static, unused*/, L_116, L_117, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
		V_11 = (((float)L_118));
		GUIStyle_t651 * L_119 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_119);
		RectOffset_t449 * L_120 = GUIStyle_get_padding_m3161(L_119, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_120);
		int32_t L_121 = RectOffset_get_right_m3143(L_120, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
		int32_t L_122 = V_1;
		int32_t L_123 = Mathf_Max_m2449(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		RectOffset_t449 * L_124 = (__this->___m_Margin_26);
		int32_t L_125 = V_0;
		NullCheck(L_124);
		RectOffset_set_left_m3142(L_124, L_125, /*hidden argument*/&RectOffset_set_left_m3142_MethodInfo);
		RectOffset_t449 * L_126 = (__this->___m_Margin_26);
		int32_t L_127 = V_1;
		NullCheck(L_126);
		RectOffset_set_right_m3144(L_126, L_127, /*hidden argument*/&RectOffset_set_right_m3144_MethodInfo);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (__this->___minWidth_0);
		float L_130 = (__this->___childMinWidth_22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_133 = Mathf_Max_m269(NULL /*static, unused*/, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		__this->___minWidth_0 = L_133;
		float L_134 = (__this->___maxWidth_1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (__this->___stretchWidth_5);
		int32_t L_136 = (__this->___stretchableCountX_18);
		GUIStyle_t651 * L_137 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_137);
		bool L_138 = GUIStyle_get_stretchWidth_m3165(L_137, /*hidden argument*/&GUIStyle_get_stretchWidth_m3165_MethodInfo);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		NullCheck(G_B40_3);
		G_B40_3->___stretchWidth_5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->___childMaxWidth_23);
		float L_140 = V_11;
		float L_141 = V_12;
		__this->___maxWidth_1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		__this->___stretchWidth_5 = 0;
	}

IL_03e2:
	{
		float L_142 = (__this->___maxWidth_1);
		float L_143 = (__this->___minWidth_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_144 = Mathf_Max_m269(NULL /*static, unused*/, L_142, L_143, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		__this->___maxWidth_1 = L_144;
		GUIStyle_t651 * L_145 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_145);
		float L_146 = GUIStyle_get_fixedWidth_m3163(L_145, /*hidden argument*/&GUIStyle_get_fixedWidth_m3163_MethodInfo);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		GUIStyle_t651 * L_147 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_147);
		float L_148 = GUIStyle_get_fixedWidth_m3163(L_147, /*hidden argument*/&GUIStyle_get_fixedWidth_m3163_MethodInfo);
		float L_149 = L_148;
		V_13 = L_149;
		__this->___minWidth_0 = L_149;
		float L_150 = V_13;
		__this->___maxWidth_1 = L_150;
		__this->___stretchWidth_5 = 0;
	}

IL_0431:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern TypeInfo* Enumerator_t798_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3856_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3857_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3858_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m3860_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3861_MethodInfo_var;
extern "C" void GUILayoutGroup_SetHorizontal_m3045 (GUILayoutGroup_t654 * __this, float ___x, float ___width, MethodInfo* method)
{
	static bool GUILayoutGroup_SetHorizontal_m3045_init;
	if (!GUILayoutGroup_SetHorizontal_m3045_init)
	{
		Enumerator_t798_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t798_0_0_0);
		List_1_GetEnumerator_m3856_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3856_GenericMethod);
		Enumerator_get_Current_m3857_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3857_GenericMethod);
		Enumerator_MoveNext_m3858_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3858_GenericMethod);
		List_1_get_Count_m3860_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3860_GenericMethod);
		List_1_get_Item_m3861_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3861_GenericMethod);
		GUILayoutGroup_SetHorizontal_m3045_init = true;
	}
	RectOffset_t449 * V_0 = {0};
	GUILayoutEntry_t659 * V_1 = {0};
	Enumerator_t798  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	GUILayoutEntry_t659 * V_8 = {0};
	Enumerator_t798  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	GUILayoutEntry_t659 * V_17 = {0};
	Enumerator_t798  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = ___x;
		float L_1 = ___width;
		GUILayoutEntry_SetHorizontal_m3034(__this, L_0, L_1, /*hidden argument*/&GUILayoutEntry_SetHorizontal_m3034_MethodInfo);
		bool L_2 = (__this->___resetCoords_12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		___x = (0.0f);
	}

IL_001a:
	{
		GUIStyle_t651 * L_3 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_3);
		RectOffset_t449 * L_4 = GUIStyle_get_padding_m3161(L_3, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		V_0 = L_4;
		bool L_5 = (__this->___isVertical_11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		GUIStyle_t651 * L_6 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_7 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		if ((((Object_t*)(GUIStyle_t651 *)L_6) == ((Object_t*)(GUIStyle_t651 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		List_1_t660 * L_8 = (__this->___entries_10);
		NullCheck(L_8);
		Enumerator_t798  L_9 = List_1_GetEnumerator_m3856(L_8, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			GUILayoutEntry_t659 * L_10 = Enumerator_get_Current_m3857((&V_2), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_1 = L_10;
			GUILayoutEntry_t659 * L_11 = V_1;
			NullCheck(L_11);
			RectOffset_t449 * L_12 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_11);
			NullCheck(L_12);
			int32_t L_13 = RectOffset_get_left_m2631(L_12, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			RectOffset_t449 * L_14 = V_0;
			NullCheck(L_14);
			int32_t L_15 = RectOffset_get_left_m2631(L_14, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			int32_t L_16 = Mathf_Max_m2449(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
			V_3 = (((float)L_16));
			float L_17 = ___x;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = ___width;
			GUILayoutEntry_t659 * L_20 = V_1;
			NullCheck(L_20);
			RectOffset_t449 * L_21 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_20);
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_right_m3143(L_21, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
			RectOffset_t449 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = RectOffset_get_right_m3143(L_23, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
			int32_t L_25 = Mathf_Max_m2449(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			GUILayoutEntry_t659 * L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = (L_27->___stretchWidth_5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			GUILayoutEntry_t659 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			NullCheck(L_29);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m3034_MethodInfo, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			GUILayoutEntry_t659 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			GUILayoutEntry_t659 * L_35 = V_1;
			NullCheck(L_35);
			float L_36 = (L_35->___minWidth_0);
			GUILayoutEntry_t659 * L_37 = V_1;
			NullCheck(L_37);
			float L_38 = (L_37->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_39 = Mathf_Clamp_m315(NULL /*static, unused*/, L_34, L_36, L_38, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
			NullCheck(L_32);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m3034_MethodInfo, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = Enumerator_MoveNext_m3858((&V_2), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_41 = V_2;
		Enumerator_t798  L_42 = L_41;
		Object_t * L_43 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_43);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = ___x;
		RectOffset_t449 * L_45 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutGroup_get_margin_m3040_MethodInfo, __this);
		NullCheck(L_45);
		int32_t L_46 = RectOffset_get_left_m2631(L_45, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = ___width;
		RectOffset_t449 * L_48 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutGroup_get_margin_m3040_MethodInfo, __this);
		NullCheck(L_48);
		int32_t L_49 = RectOffset_get_horizontal_m2622(L_48, /*hidden argument*/&RectOffset_get_horizontal_m2622_MethodInfo);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		List_1_t660 * L_50 = (__this->___entries_10);
		NullCheck(L_50);
		Enumerator_t798  L_51 = List_1_GetEnumerator_m3856(L_50, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			GUILayoutEntry_t659 * L_52 = Enumerator_get_Current_m3857((&V_9), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_8 = L_52;
			GUILayoutEntry_t659 * L_53 = V_8;
			NullCheck(L_53);
			int32_t L_54 = (L_53->___stretchWidth_5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			GUILayoutEntry_t659 * L_55 = V_8;
			float L_56 = V_6;
			GUILayoutEntry_t659 * L_57 = V_8;
			NullCheck(L_57);
			RectOffset_t449 * L_58 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_57);
			NullCheck(L_58);
			int32_t L_59 = RectOffset_get_left_m2631(L_58, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			float L_60 = V_7;
			GUILayoutEntry_t659 * L_61 = V_8;
			NullCheck(L_61);
			RectOffset_t449 * L_62 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_61);
			NullCheck(L_62);
			int32_t L_63 = RectOffset_get_horizontal_m2622(L_62, /*hidden argument*/&RectOffset_get_horizontal_m2622_MethodInfo);
			NullCheck(L_55);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m3034_MethodInfo, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			GUILayoutEntry_t659 * L_64 = V_8;
			float L_65 = V_6;
			GUILayoutEntry_t659 * L_66 = V_8;
			NullCheck(L_66);
			RectOffset_t449 * L_67 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_66);
			NullCheck(L_67);
			int32_t L_68 = RectOffset_get_left_m2631(L_67, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			float L_69 = V_7;
			GUILayoutEntry_t659 * L_70 = V_8;
			NullCheck(L_70);
			RectOffset_t449 * L_71 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_70);
			NullCheck(L_71);
			int32_t L_72 = RectOffset_get_horizontal_m2622(L_71, /*hidden argument*/&RectOffset_get_horizontal_m2622_MethodInfo);
			GUILayoutEntry_t659 * L_73 = V_8;
			NullCheck(L_73);
			float L_74 = (L_73->___minWidth_0);
			GUILayoutEntry_t659 * L_75 = V_8;
			NullCheck(L_75);
			float L_76 = (L_75->___maxWidth_1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_77 = Mathf_Clamp_m315(NULL /*static, unused*/, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
			NullCheck(L_64);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m3034_MethodInfo, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = Enumerator_MoveNext_m3858((&V_9), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_79 = V_9;
		Enumerator_t798  L_80 = L_79;
		Object_t * L_81 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_81);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		GUIStyle_t651 * L_82 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_83 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		if ((((Object_t*)(GUIStyle_t651 *)L_82) == ((Object_t*)(GUIStyle_t651 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		RectOffset_t449 * L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = RectOffset_get_left_m2631(L_84, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		V_10 = (((float)L_85));
		RectOffset_t449 * L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = RectOffset_get_right_m3143(L_86, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
		V_11 = (((float)L_87));
		List_1_t660 * L_88 = (__this->___entries_10);
		NullCheck(L_88);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		List_1_t660 * L_91 = (__this->___entries_10);
		NullCheck(L_91);
		GUILayoutEntry_t659 * L_92 = (GUILayoutEntry_t659 *)VirtFuncInvoker1< GUILayoutEntry_t659 *, int32_t >::Invoke(List_1_get_Item_m3861_MethodInfo_var, L_91, 0);
		NullCheck(L_92);
		RectOffset_t449 * L_93 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_92);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_left_m2631(L_93, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_95 = Mathf_Max_m269(NULL /*static, unused*/, L_90, (((float)L_94)), /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		V_10 = L_95;
		float L_96 = V_11;
		List_1_t660 * L_97 = (__this->___entries_10);
		List_1_t660 * L_98 = (__this->___entries_10);
		NullCheck(L_98);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_98);
		NullCheck(L_97);
		GUILayoutEntry_t659 * L_100 = (GUILayoutEntry_t659 *)VirtFuncInvoker1< GUILayoutEntry_t659 *, int32_t >::Invoke(List_1_get_Item_m3861_MethodInfo_var, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		NullCheck(L_100);
		RectOffset_t449 * L_101 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_100);
		NullCheck(L_101);
		int32_t L_102 = RectOffset_get_right_m3143(L_101, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
		float L_103 = Mathf_Max_m269(NULL /*static, unused*/, L_96, (((float)L_102)), /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = ___x;
		float L_105 = V_10;
		___x = ((float)((float)L_104+(float)L_105));
		float L_106 = ___width;
		float L_107 = V_11;
		float L_108 = V_10;
		___width = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = ___width;
		float L_110 = (__this->___spacing_13);
		List_1_t660 * L_111 = (__this->___entries_10);
		NullCheck(L_111);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->___childMinWidth_22);
		float L_114 = (__this->___childMaxWidth_23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->___childMinWidth_22);
		float L_117 = (__this->___childMaxWidth_23);
		float L_118 = (__this->___childMinWidth_22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_119 = Mathf_Clamp_m315(NULL /*static, unused*/, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->___childMaxWidth_23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->___stretchableCountX_18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->___childMaxWidth_23);
		int32_t L_125 = (__this->___stretchableCountX_18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		List_1_t660 * L_126 = (__this->___entries_10);
		NullCheck(L_126);
		Enumerator_t798  L_127 = List_1_GetEnumerator_m3856(L_126, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			GUILayoutEntry_t659 * L_128 = Enumerator_get_Current_m3857((&V_18), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_17 = L_128;
			GUILayoutEntry_t659 * L_129 = V_17;
			NullCheck(L_129);
			float L_130 = (L_129->___minWidth_0);
			GUILayoutEntry_t659 * L_131 = V_17;
			NullCheck(L_131);
			float L_132 = (L_131->___maxWidth_1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_134 = Mathf_Lerp_m897(NULL /*static, unused*/, L_130, L_132, L_133, /*hidden argument*/&Mathf_Lerp_m897_MethodInfo);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			GUILayoutEntry_t659 * L_137 = V_17;
			NullCheck(L_137);
			int32_t L_138 = (L_137->___stretchWidth_5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			GUILayoutEntry_t659 * L_139 = V_17;
			NullCheck(L_139);
			GUIStyle_t651 * L_140 = GUILayoutEntry_get_style_m3029(L_139, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUIStyle_t651 * L_141 = GUILayoutUtility_get_spaceStyle_m3026(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m3026_MethodInfo);
			if ((((Object_t*)(GUIStyle_t651 *)L_140) == ((Object_t*)(GUIStyle_t651 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			GUILayoutEntry_t659 * L_142 = V_17;
			NullCheck(L_142);
			RectOffset_t449 * L_143 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_142);
			NullCheck(L_143);
			int32_t L_144 = RectOffset_get_left_m2631(L_143, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = ___x;
			int32_t L_151 = V_21;
			___x = ((float)((float)L_150+(float)(((float)L_151))));
			GUILayoutEntry_t659 * L_152 = V_17;
			NullCheck(L_152);
			RectOffset_t449 * L_153 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_152);
			NullCheck(L_153);
			int32_t L_154 = RectOffset_get_right_m3143(L_153, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
			V_15 = L_154;
		}

IL_0371:
		{
			GUILayoutEntry_t659 * L_155 = V_17;
			float L_156 = ___x;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			NullCheck(L_155);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetHorizontal_m3034_MethodInfo, L_155, L_157, L_159);
			float L_160 = ___x;
			float L_161 = V_19;
			float L_162 = (__this->___spacing_13);
			___x = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = Enumerator_MoveNext_m3858((&V_18), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_164 = V_18;
		Enumerator_t798  L_165 = L_164;
		Object_t * L_166 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_165);
		NullCheck(L_166);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_03b0:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern TypeInfo* Enumerator_t798_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3860_MethodInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3856_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3857_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3858_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3861_MethodInfo_var;
extern "C" void GUILayoutGroup_CalcHeight_m3046 (GUILayoutGroup_t654 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup_CalcHeight_m3046_init;
	if (!GUILayoutGroup_CalcHeight_m3046_init)
	{
		Enumerator_t798_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t798_0_0_0);
		List_1_get_Count_m3860_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3860_GenericMethod);
		List_1_GetEnumerator_m3856_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3856_GenericMethod);
		Enumerator_get_Current_m3857_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3857_GenericMethod);
		Enumerator_MoveNext_m3858_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3858_GenericMethod);
		List_1_get_Item_m3861_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3861_GenericMethod);
		GUILayoutGroup_CalcHeight_m3046_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	GUILayoutEntry_t659 * V_4 = {0};
	Enumerator_t798  V_5 = {0};
	RectOffset_t449 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	GUILayoutEntry_t659 * V_9 = {0};
	Enumerator_t798  V_10 = {0};
	RectOffset_t449 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	GUILayoutGroup_t654 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	GUILayoutGroup_t654 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	GUILayoutGroup_t654 * G_B37_3 = {0};
	{
		List_1_t660 * L_0 = (__this->___entries_10);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		GUIStyle_t651 * L_2 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_2);
		RectOffset_t449 * L_3 = GUIStyle_get_padding_m3161(L_2, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = RectOffset_get_vertical_m2623(L_3, /*hidden argument*/&RectOffset_get_vertical_m2623_MethodInfo);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		__this->___minHeight_2 = L_5;
		float L_6 = V_14;
		__this->___maxHeight_3 = L_6;
		return;
	}

IL_0033:
	{
		float L_7 = (0.0f);
		V_14 = L_7;
		__this->___childMaxHeight_25 = L_7;
		float L_8 = V_14;
		__this->___childMinHeight_24 = L_8;
		V_0 = 0;
		V_1 = 0;
		__this->___stretchableCountY_19 = 0;
		bool L_9 = (__this->___isVertical_11);
		if (!L_9)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		List_1_t660 * L_10 = (__this->___entries_10);
		NullCheck(L_10);
		Enumerator_t798  L_11 = List_1_GetEnumerator_m3856(L_10, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_5 = L_11;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			GUILayoutEntry_t659 * L_12 = Enumerator_get_Current_m3857((&V_5), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_4 = L_12;
			GUILayoutEntry_t659 * L_13 = V_4;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcHeight_m3033_MethodInfo, L_13);
			GUILayoutEntry_t659 * L_14 = V_4;
			NullCheck(L_14);
			RectOffset_t449 * L_15 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_14);
			V_6 = L_15;
			GUILayoutEntry_t659 * L_16 = V_4;
			NullCheck(L_16);
			GUIStyle_t651 * L_17 = GUILayoutEntry_get_style_m3029(L_16, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUIStyle_t651 * L_18 = GUILayoutUtility_get_spaceStyle_m3026(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m3026_MethodInfo);
			if ((((Object_t*)(GUIStyle_t651 *)L_17) == ((Object_t*)(GUIStyle_t651 *)L_18)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_19 = V_3;
			if (L_19)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_20 = V_2;
			RectOffset_t449 * L_21 = V_6;
			NullCheck(L_21);
			int32_t L_22 = RectOffset_get_top_m2632(L_21, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			int32_t L_23 = Mathf_Max_m2449(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
			V_7 = L_23;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_24 = (__this->___childMinHeight_24);
			GUILayoutEntry_t659 * L_25 = V_4;
			NullCheck(L_25);
			float L_26 = (L_25->___minHeight_2);
			float L_27 = (__this->___spacing_13);
			int32_t L_28 = V_7;
			__this->___childMinHeight_24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t659 * L_30 = V_4;
			NullCheck(L_30);
			float L_31 = (L_30->___maxHeight_3);
			float L_32 = (__this->___spacing_13);
			int32_t L_33 = V_7;
			__this->___childMaxHeight_25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			RectOffset_t449 * L_34 = V_6;
			NullCheck(L_34);
			int32_t L_35 = RectOffset_get_bottom_m3146(L_34, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
			V_2 = L_35;
			int32_t L_36 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t659 * L_37 = V_4;
			NullCheck(L_37);
			int32_t L_38 = (L_37->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->___childMinHeight_24);
			GUILayoutEntry_t659 * L_40 = V_4;
			NullCheck(L_40);
			float L_41 = (L_40->___minHeight_2);
			__this->___childMinHeight_24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->___childMaxHeight_25);
			GUILayoutEntry_t659 * L_43 = V_4;
			NullCheck(L_43);
			float L_44 = (L_43->___maxHeight_3);
			__this->___childMaxHeight_25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t659 * L_46 = V_4;
			NullCheck(L_46);
			int32_t L_47 = (L_46->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = Enumerator_MoveNext_m3858((&V_5), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_48)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_49 = V_5;
		Enumerator_t798  L_50 = L_49;
		Object_t * L_51 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_51);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_51);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0177:
	{
		float L_52 = (__this->___childMinHeight_24);
		float L_53 = (__this->___spacing_13);
		__this->___childMinHeight_24 = ((float)((float)L_52-(float)L_53));
		float L_54 = (__this->___childMaxHeight_25);
		float L_55 = (__this->___spacing_13);
		__this->___childMaxHeight_25 = ((float)((float)L_54-(float)L_55));
		List_1_t660 * L_56 = (__this->___entries_10);
		NullCheck(L_56);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		List_1_t660 * L_58 = (__this->___entries_10);
		NullCheck(L_58);
		GUILayoutEntry_t659 * L_59 = (GUILayoutEntry_t659 *)VirtFuncInvoker1< GUILayoutEntry_t659 *, int32_t >::Invoke(List_1_get_Item_m3861_MethodInfo_var, L_58, 0);
		NullCheck(L_59);
		RectOffset_t449 * L_60 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_59);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m2632(L_60, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		V_0 = L_61;
		int32_t L_62 = V_2;
		V_1 = L_62;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_63 = 0;
		V_0 = L_63;
		V_1 = L_63;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		List_1_t660 * L_64 = (__this->___entries_10);
		NullCheck(L_64);
		Enumerator_t798  L_65 = List_1_GetEnumerator_m3856(L_64, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_10 = L_65;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			GUILayoutEntry_t659 * L_66 = Enumerator_get_Current_m3857((&V_10), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_9 = L_66;
			GUILayoutEntry_t659 * L_67 = V_9;
			NullCheck(L_67);
			VirtActionInvoker0::Invoke(&GUILayoutEntry_CalcHeight_m3033_MethodInfo, L_67);
			GUILayoutEntry_t659 * L_68 = V_9;
			NullCheck(L_68);
			RectOffset_t449 * L_69 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_68);
			V_11 = L_69;
			GUILayoutEntry_t659 * L_70 = V_9;
			NullCheck(L_70);
			GUIStyle_t651 * L_71 = GUILayoutEntry_get_style_m3029(L_70, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUIStyle_t651 * L_72 = GUILayoutUtility_get_spaceStyle_m3026(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m3026_MethodInfo);
			if ((((Object_t*)(GUIStyle_t651 *)L_71) == ((Object_t*)(GUIStyle_t651 *)L_72)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_73 = V_8;
			if (L_73)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			RectOffset_t449 * L_74 = V_11;
			NullCheck(L_74);
			int32_t L_75 = RectOffset_get_top_m2632(L_74, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			int32_t L_77 = Mathf_Min_m2451(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/&Mathf_Min_m2451_MethodInfo);
			V_0 = L_77;
			RectOffset_t449 * L_78 = V_11;
			NullCheck(L_78);
			int32_t L_79 = RectOffset_get_bottom_m3146(L_78, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
			int32_t L_80 = V_1;
			int32_t L_81 = Mathf_Min_m2451(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/&Mathf_Min_m2451_MethodInfo);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			RectOffset_t449 * L_82 = V_11;
			NullCheck(L_82);
			int32_t L_83 = RectOffset_get_top_m2632(L_82, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			V_0 = L_83;
			RectOffset_t449 * L_84 = V_11;
			NullCheck(L_84);
			int32_t L_85 = RectOffset_get_bottom_m3146(L_84, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			GUILayoutEntry_t659 * L_86 = V_9;
			NullCheck(L_86);
			float L_87 = (L_86->___minHeight_2);
			float L_88 = (__this->___childMinHeight_24);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_89 = Mathf_Max_m269(NULL /*static, unused*/, L_87, L_88, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
			__this->___childMinHeight_24 = L_89;
			GUILayoutEntry_t659 * L_90 = V_9;
			NullCheck(L_90);
			float L_91 = (L_90->___maxHeight_3);
			float L_92 = (__this->___childMaxHeight_25);
			float L_93 = Mathf_Max_m269(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
			__this->___childMaxHeight_25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->___stretchableCountY_19);
			GUILayoutEntry_t659 * L_95 = V_9;
			NullCheck(L_95);
			int32_t L_96 = (L_95->___stretchHeight_6);
			__this->___stretchableCountY_19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = Enumerator_MoveNext_m3858((&V_10), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_97)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_98 = V_10;
		Enumerator_t798  L_99 = L_98;
		Object_t * L_100 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_99);
		NullCheck(L_100);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_100);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		GUIStyle_t651 * L_101 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_102 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		if ((!(((Object_t*)(GUIStyle_t651 *)L_101) == ((Object_t*)(GUIStyle_t651 *)L_102))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_103 = (__this->___userSpecifiedHeight_21);
		if (!L_103)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		GUIStyle_t651 * L_104 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_104);
		RectOffset_t449 * L_105 = GUIStyle_get_padding_m3161(L_104, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_105);
		int32_t L_106 = RectOffset_get_top_m2632(L_105, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		int32_t L_108 = Mathf_Max_m2449(NULL /*static, unused*/, L_106, L_107, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
		V_12 = (((float)L_108));
		GUIStyle_t651 * L_109 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_109);
		RectOffset_t449 * L_110 = GUIStyle_get_padding_m3161(L_109, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		NullCheck(L_110);
		int32_t L_111 = RectOffset_get_bottom_m3146(L_110, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
		int32_t L_112 = V_1;
		int32_t L_113 = Mathf_Max_m2449(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		RectOffset_t449 * L_114 = (__this->___m_Margin_26);
		int32_t L_115 = V_0;
		NullCheck(L_114);
		RectOffset_set_top_m3145(L_114, L_115, /*hidden argument*/&RectOffset_set_top_m3145_MethodInfo);
		RectOffset_t449 * L_116 = (__this->___m_Margin_26);
		int32_t L_117 = V_1;
		NullCheck(L_116);
		RectOffset_set_bottom_m3147(L_116, L_117, /*hidden argument*/&RectOffset_set_bottom_m3147_MethodInfo);
		float L_118 = (0.0f);
		V_13 = L_118;
		V_12 = L_118;
	}

IL_0332:
	{
		float L_119 = (__this->___minHeight_2);
		float L_120 = (__this->___childMinHeight_24);
		float L_121 = V_12;
		float L_122 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_123 = Mathf_Max_m269(NULL /*static, unused*/, L_119, ((float)((float)((float)((float)L_120+(float)L_121))+(float)L_122)), /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		__this->___minHeight_2 = L_123;
		float L_124 = (__this->___maxHeight_3);
		if ((!(((float)L_124) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_125 = (__this->___stretchHeight_6);
		int32_t L_126 = (__this->___stretchableCountY_19);
		GUIStyle_t651 * L_127 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_127);
		bool L_128 = GUIStyle_get_stretchHeight_m3167(L_127, /*hidden argument*/&GUIStyle_get_stretchHeight_m3167_MethodInfo);
		G_B35_0 = L_126;
		G_B35_1 = L_125;
		G_B35_2 = __this;
		if (!L_128)
		{
			G_B36_0 = L_126;
			G_B36_1 = L_125;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		NullCheck(G_B37_3);
		G_B37_3->___stretchHeight_6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_129 = (__this->___childMaxHeight_25);
		float L_130 = V_12;
		float L_131 = V_13;
		__this->___maxHeight_3 = ((float)((float)((float)((float)L_129+(float)L_130))+(float)L_131));
		goto IL_03a8;
	}

IL_03a1:
	{
		__this->___stretchHeight_6 = 0;
	}

IL_03a8:
	{
		float L_132 = (__this->___maxHeight_3);
		float L_133 = (__this->___minHeight_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_134 = Mathf_Max_m269(NULL /*static, unused*/, L_132, L_133, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		__this->___maxHeight_3 = L_134;
		GUIStyle_t651 * L_135 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_135);
		float L_136 = GUIStyle_get_fixedHeight_m3164(L_135, /*hidden argument*/&GUIStyle_get_fixedHeight_m3164_MethodInfo);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		GUIStyle_t651 * L_137 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_137);
		float L_138 = GUIStyle_get_fixedHeight_m3164(L_137, /*hidden argument*/&GUIStyle_get_fixedHeight_m3164_MethodInfo);
		float L_139 = L_138;
		V_14 = L_139;
		__this->___minHeight_2 = L_139;
		float L_140 = V_14;
		__this->___maxHeight_3 = L_140;
		__this->___stretchHeight_6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern TypeInfo* Enumerator_t798_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m3860_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m3861_MethodInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3856_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3857_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3858_MethodInfo_var;
extern "C" void GUILayoutGroup_SetVertical_m3047 (GUILayoutGroup_t654 * __this, float ___y, float ___height, MethodInfo* method)
{
	static bool GUILayoutGroup_SetVertical_m3047_init;
	if (!GUILayoutGroup_SetVertical_m3047_init)
	{
		Enumerator_t798_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t798_0_0_0);
		List_1_get_Count_m3860_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m3860_GenericMethod);
		List_1_get_Item_m3861_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m3861_GenericMethod);
		List_1_GetEnumerator_m3856_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3856_GenericMethod);
		Enumerator_get_Current_m3857_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3857_GenericMethod);
		Enumerator_MoveNext_m3858_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3858_GenericMethod);
		GUILayoutGroup_SetVertical_m3047_init = true;
	}
	RectOffset_t449 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	GUILayoutEntry_t659 * V_8 = {0};
	Enumerator_t798  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	GUILayoutEntry_t659 * V_13 = {0};
	Enumerator_t798  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	GUILayoutEntry_t659 * V_20 = {0};
	Enumerator_t798  V_21 = {0};
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___y;
		float L_1 = ___height;
		GUILayoutEntry_SetVertical_m3035(__this, L_0, L_1, /*hidden argument*/&GUILayoutEntry_SetVertical_m3035_MethodInfo);
		List_1_t660 * L_2 = (__this->___entries_10);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		GUIStyle_t651 * L_4 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		NullCheck(L_4);
		RectOffset_t449 * L_5 = GUIStyle_get_padding_m3161(L_4, /*hidden argument*/&GUIStyle_get_padding_m3161_MethodInfo);
		V_0 = L_5;
		bool L_6 = (__this->___resetCoords_12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		___y = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->___isVertical_11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		GUIStyle_t651 * L_8 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_9 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		if ((((Object_t*)(GUIStyle_t651 *)L_8) == ((Object_t*)(GUIStyle_t651 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		RectOffset_t449 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = RectOffset_get_top_m2632(L_10, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		V_1 = (((float)L_11));
		RectOffset_t449 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_bottom_m3146(L_12, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
		V_2 = (((float)L_13));
		List_1_t660 * L_14 = (__this->___entries_10);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		List_1_t660 * L_17 = (__this->___entries_10);
		NullCheck(L_17);
		GUILayoutEntry_t659 * L_18 = (GUILayoutEntry_t659 *)VirtFuncInvoker1< GUILayoutEntry_t659 *, int32_t >::Invoke(List_1_get_Item_m3861_MethodInfo_var, L_17, 0);
		NullCheck(L_18);
		RectOffset_t449 * L_19 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_18);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_top_m2632(L_19, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_21 = Mathf_Max_m269(NULL /*static, unused*/, L_16, (((float)L_20)), /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		V_1 = L_21;
		float L_22 = V_2;
		List_1_t660 * L_23 = (__this->___entries_10);
		List_1_t660 * L_24 = (__this->___entries_10);
		NullCheck(L_24);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_24);
		NullCheck(L_23);
		GUILayoutEntry_t659 * L_26 = (GUILayoutEntry_t659 *)VirtFuncInvoker1< GUILayoutEntry_t659 *, int32_t >::Invoke(List_1_get_Item_m3861_MethodInfo_var, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		NullCheck(L_26);
		RectOffset_t449 * L_27 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_26);
		NullCheck(L_27);
		int32_t L_28 = RectOffset_get_bottom_m3146(L_27, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
		float L_29 = Mathf_Max_m269(NULL /*static, unused*/, L_22, (((float)L_28)), /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = ___y;
		float L_31 = V_1;
		___y = ((float)((float)L_30+(float)L_31));
		float L_32 = ___height;
		float L_33 = V_2;
		float L_34 = V_1;
		___height = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = ___height;
		float L_36 = (__this->___spacing_13);
		List_1_t660 * L_37 = (__this->___entries_10);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m3860_MethodInfo_var, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->___childMinHeight_24);
		float L_40 = (__this->___childMaxHeight_25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->___childMinHeight_24);
		float L_43 = (__this->___childMaxHeight_25);
		float L_44 = (__this->___childMinHeight_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_45 = Mathf_Clamp_m315(NULL /*static, unused*/, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->___childMaxHeight_25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->___stretchableCountY_19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->___childMaxHeight_25);
		int32_t L_51 = (__this->___stretchableCountY_19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		List_1_t660 * L_52 = (__this->___entries_10);
		NullCheck(L_52);
		Enumerator_t798  L_53 = List_1_GetEnumerator_m3856(L_52, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			GUILayoutEntry_t659 * L_54 = Enumerator_get_Current_m3857((&V_9), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_8 = L_54;
			GUILayoutEntry_t659 * L_55 = V_8;
			NullCheck(L_55);
			float L_56 = (L_55->___minHeight_2);
			GUILayoutEntry_t659 * L_57 = V_8;
			NullCheck(L_57);
			float L_58 = (L_57->___maxHeight_3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_60 = Mathf_Lerp_m897(NULL /*static, unused*/, L_56, L_58, L_59, /*hidden argument*/&Mathf_Lerp_m897_MethodInfo);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			GUILayoutEntry_t659 * L_63 = V_8;
			NullCheck(L_63);
			int32_t L_64 = (L_63->___stretchHeight_6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			GUILayoutEntry_t659 * L_65 = V_8;
			NullCheck(L_65);
			GUIStyle_t651 * L_66 = GUILayoutEntry_get_style_m3029(L_65, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUIStyle_t651 * L_67 = GUILayoutUtility_get_spaceStyle_m3026(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_get_spaceStyle_m3026_MethodInfo);
			if ((((Object_t*)(GUIStyle_t651 *)L_66) == ((Object_t*)(GUIStyle_t651 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			GUILayoutEntry_t659 * L_68 = V_8;
			NullCheck(L_68);
			RectOffset_t449 * L_69 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_68);
			NullCheck(L_69);
			int32_t L_70 = RectOffset_get_top_m2632(L_69, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = ___y;
			int32_t L_77 = V_12;
			___y = ((float)((float)L_76+(float)(((float)L_77))));
			GUILayoutEntry_t659 * L_78 = V_8;
			NullCheck(L_78);
			RectOffset_t449 * L_79 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_78);
			NullCheck(L_79);
			int32_t L_80 = RectOffset_get_bottom_m3146(L_79, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
			V_6 = L_80;
		}

IL_01eb:
		{
			GUILayoutEntry_t659 * L_81 = V_8;
			float L_82 = ___y;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			NullCheck(L_81);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m3035_MethodInfo, L_81, L_83, L_85);
			float L_86 = ___y;
			float L_87 = V_10;
			float L_88 = (__this->___spacing_13);
			___y = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = Enumerator_MoveNext_m3858((&V_9), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_90 = V_9;
		Enumerator_t798  L_91 = L_90;
		Object_t * L_92 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_92);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		GUIStyle_t651 * L_93 = GUILayoutEntry_get_style_m3029(__this, /*hidden argument*/&GUILayoutEntry_get_style_m3029_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_94 = GUIStyle_get_none_m3172(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m3172_MethodInfo);
		if ((((Object_t*)(GUIStyle_t651 *)L_93) == ((Object_t*)(GUIStyle_t651 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		List_1_t660 * L_95 = (__this->___entries_10);
		NullCheck(L_95);
		Enumerator_t798  L_96 = List_1_GetEnumerator_m3856(L_95, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			GUILayoutEntry_t659 * L_97 = Enumerator_get_Current_m3857((&V_14), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_13 = L_97;
			GUILayoutEntry_t659 * L_98 = V_13;
			NullCheck(L_98);
			RectOffset_t449 * L_99 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_98);
			NullCheck(L_99);
			int32_t L_100 = RectOffset_get_top_m2632(L_99, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			RectOffset_t449 * L_101 = V_0;
			NullCheck(L_101);
			int32_t L_102 = RectOffset_get_top_m2632(L_101, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			int32_t L_103 = Mathf_Max_m2449(NULL /*static, unused*/, L_100, L_102, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
			V_15 = (((float)L_103));
			float L_104 = ___y;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = ___height;
			GUILayoutEntry_t659 * L_107 = V_13;
			NullCheck(L_107);
			RectOffset_t449 * L_108 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_107);
			NullCheck(L_108);
			int32_t L_109 = RectOffset_get_bottom_m3146(L_108, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
			RectOffset_t449 * L_110 = V_0;
			NullCheck(L_110);
			int32_t L_111 = RectOffset_get_bottom_m3146(L_110, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
			int32_t L_112 = Mathf_Max_m2449(NULL /*static, unused*/, L_109, L_111, /*hidden argument*/&Mathf_Max_m2449_MethodInfo);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			GUILayoutEntry_t659 * L_114 = V_13;
			NullCheck(L_114);
			int32_t L_115 = (L_114->___stretchHeight_6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			GUILayoutEntry_t659 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			NullCheck(L_116);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m3035_MethodInfo, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			GUILayoutEntry_t659 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			GUILayoutEntry_t659 * L_122 = V_13;
			NullCheck(L_122);
			float L_123 = (L_122->___minHeight_2);
			GUILayoutEntry_t659 * L_124 = V_13;
			NullCheck(L_124);
			float L_125 = (L_124->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_126 = Mathf_Clamp_m315(NULL /*static, unused*/, L_121, L_123, L_125, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
			NullCheck(L_119);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m3035_MethodInfo, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = Enumerator_MoveNext_m3858((&V_14), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_128 = V_14;
		Enumerator_t798  L_129 = L_128;
		Object_t * L_130 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_130);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = ___y;
		RectOffset_t449 * L_132 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutGroup_get_margin_m3040_MethodInfo, __this);
		NullCheck(L_132);
		int32_t L_133 = RectOffset_get_top_m2632(L_132, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = ___height;
		RectOffset_t449 * L_135 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutGroup_get_margin_m3040_MethodInfo, __this);
		NullCheck(L_135);
		int32_t L_136 = RectOffset_get_vertical_m2623(L_135, /*hidden argument*/&RectOffset_get_vertical_m2623_MethodInfo);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		List_1_t660 * L_137 = (__this->___entries_10);
		NullCheck(L_137);
		Enumerator_t798  L_138 = List_1_GetEnumerator_m3856(L_137, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			GUILayoutEntry_t659 * L_139 = Enumerator_get_Current_m3857((&V_21), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_20 = L_139;
			GUILayoutEntry_t659 * L_140 = V_20;
			NullCheck(L_140);
			int32_t L_141 = (L_140->___stretchHeight_6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			GUILayoutEntry_t659 * L_142 = V_20;
			float L_143 = V_18;
			GUILayoutEntry_t659 * L_144 = V_20;
			NullCheck(L_144);
			RectOffset_t449 * L_145 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_144);
			NullCheck(L_145);
			int32_t L_146 = RectOffset_get_top_m2632(L_145, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			float L_147 = V_19;
			GUILayoutEntry_t659 * L_148 = V_20;
			NullCheck(L_148);
			RectOffset_t449 * L_149 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_148);
			NullCheck(L_149);
			int32_t L_150 = RectOffset_get_vertical_m2623(L_149, /*hidden argument*/&RectOffset_get_vertical_m2623_MethodInfo);
			NullCheck(L_142);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m3035_MethodInfo, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			GUILayoutEntry_t659 * L_151 = V_20;
			float L_152 = V_18;
			GUILayoutEntry_t659 * L_153 = V_20;
			NullCheck(L_153);
			RectOffset_t449 * L_154 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_153);
			NullCheck(L_154);
			int32_t L_155 = RectOffset_get_top_m2632(L_154, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
			float L_156 = V_19;
			GUILayoutEntry_t659 * L_157 = V_20;
			NullCheck(L_157);
			RectOffset_t449 * L_158 = (RectOffset_t449 *)VirtFuncInvoker0< RectOffset_t449 * >::Invoke(&GUILayoutEntry_get_margin_m3031_MethodInfo, L_157);
			NullCheck(L_158);
			int32_t L_159 = RectOffset_get_vertical_m2623(L_158, /*hidden argument*/&RectOffset_get_vertical_m2623_MethodInfo);
			GUILayoutEntry_t659 * L_160 = V_20;
			NullCheck(L_160);
			float L_161 = (L_160->___minHeight_2);
			GUILayoutEntry_t659 * L_162 = V_20;
			NullCheck(L_162);
			float L_163 = (L_162->___maxHeight_3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
			float L_164 = Mathf_Clamp_m315(NULL /*static, unused*/, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
			NullCheck(L_151);
			VirtActionInvoker2< float, float >::Invoke(&GUILayoutEntry_SetVertical_m3035_MethodInfo, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = Enumerator_MoveNext_m3858((&V_21), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_166 = V_21;
		Enumerator_t798  L_167 = L_166;
		Object_t * L_168 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_167);
		NullCheck(L_168);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_03c1:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutGroup::ToString()
extern MethodInfo GUILayoutGroup_ToString_m3048_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t798_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m3856_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m3857_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m3858_MethodInfo_var;
extern "C" String_t* GUILayoutGroup_ToString_m3048 (GUILayoutGroup_t654 * __this, MethodInfo* method)
{
	static bool GUILayoutGroup_ToString_m3048_init;
	if (!GUILayoutGroup_ToString_m3048_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Enumerator_t798_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t798_0_0_0);
		List_1_GetEnumerator_m3856_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m3856_GenericMethod);
		Enumerator_get_Current_m3857_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m3857_GenericMethod);
		Enumerator_MoveNext_m3858_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m3858_GenericMethod);
		GUILayoutGroup_ToString_m3048_init = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	GUILayoutEntry_t659 * V_3 = {0};
	Enumerator_t798  V_4 = {0};
	String_t* V_5 = {0};
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		String_t* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m385(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral163, /*hidden argument*/&String_Concat_m385_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo));
		int32_t L_6 = ((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___indent_9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_7 = V_0;
		V_5 = L_7;
		ObjectU5BU5D_t219* L_8 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 5));
		String_t* L_9 = V_5;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)L_9;
		ObjectU5BU5D_t219* L_10 = L_8;
		String_t* L_11 = GUILayoutEntry_ToString_m3038(__this, /*hidden argument*/&GUILayoutEntry_ToString_m3038_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 1)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_10;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral297);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 2)) = (Object_t *)(String_t*) &_stringLiteral297;
		ObjectU5BU5D_t219* L_13 = L_12;
		float L_14 = (__this->___childMinHeight_24);
		float L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 3)) = (Object_t *)L_16;
		ObjectU5BU5D_t219* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral298);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 4)) = (Object_t *)(String_t*) &_stringLiteral298;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_18 = String_Concat_m2171(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo));
		int32_t L_19 = ((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___indent_9;
		((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___indent_9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		List_1_t660 * L_20 = (__this->___entries_10);
		NullCheck(L_20);
		Enumerator_t798  L_21 = List_1_GetEnumerator_m3856(L_20, /*hidden argument*/List_1_GetEnumerator_m3856_MethodInfo_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			GUILayoutEntry_t659 * L_22 = Enumerator_get_Current_m3857((&V_4), /*hidden argument*/Enumerator_get_Current_m3857_MethodInfo_var);
			V_3 = L_22;
			String_t* L_23 = V_0;
			GUILayoutEntry_t659 * L_24 = V_3;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&GUILayoutEntry_ToString_m3038_MethodInfo, L_24);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_26 = String_Concat_m296(NULL /*static, unused*/, L_23, L_25, (String_t*) &_stringLiteral299, /*hidden argument*/&String_Concat_m296_MethodInfo);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = Enumerator_MoveNext_m3858((&V_4), /*hidden argument*/Enumerator_MoveNext_m3858_MethodInfo_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		Enumerator_t798  L_28 = V_4;
		Enumerator_t798  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t798_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m861_MethodInfo, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_00bf:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_33 = String_Concat_m296(NULL /*static, unused*/, L_31, L_32, (String_t*) &_stringLiteral300, /*hidden argument*/&String_Concat_m296_MethodInfo);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo));
		int32_t L_34 = ((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___indent_9;
		((GUILayoutEntry_t659_StaticFields*)InitializedTypeInfo(&GUILayoutEntry_t659_il2cpp_TypeInfo)->static_fields)->___indent_9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		String_t* L_35 = V_0;
		return L_35;
	}
}
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIScrollGroup_t661_il2cpp_TypeInfo;
// UnityEngine.GUIScrollGroup
#include "UnityEngine_UnityEngine_GUIScrollGroupMethodDeclarations.h"

extern MethodInfo GUIScrollGroup_SetHorizontal_m3051_MethodInfo;
extern MethodInfo GUIScrollGroup_CalcHeight_m3052_MethodInfo;


// System.Void UnityEngine.GUIScrollGroup::.ctor()
extern MethodInfo GUIScrollGroup__ctor_m3049_MethodInfo;
extern "C" void GUIScrollGroup__ctor_m3049 (GUIScrollGroup_t661 * __this, MethodInfo* method)
{
	{
		__this->___allowHorizontalScroll_33 = 1;
		__this->___allowVerticalScroll_34 = 1;
		GUILayoutGroup__ctor_m3039(__this, /*hidden argument*/&GUILayoutGroup__ctor_m3039_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
extern MethodInfo GUIScrollGroup_CalcWidth_m3050_MethodInfo;
extern "C" void GUIScrollGroup_CalcWidth_m3050 (GUIScrollGroup_t661 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___minWidth_0);
		V_0 = L_0;
		float L_1 = (__this->___maxWidth_1);
		V_1 = L_1;
		bool L_2 = (__this->___allowHorizontalScroll_33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		__this->___minWidth_0 = (0.0f);
		__this->___maxWidth_1 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcWidth_m3044(__this, /*hidden argument*/&GUILayoutGroup_CalcWidth_m3044_MethodInfo);
		float L_3 = (__this->___minWidth_0);
		__this->___calcMinWidth_27 = L_3;
		float L_4 = (__this->___maxWidth_1);
		__this->___calcMaxWidth_28 = L_4;
		bool L_5 = (__this->___allowHorizontalScroll_33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (__this->___minWidth_0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		__this->___minWidth_0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		__this->___minWidth_0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		__this->___maxWidth_1 = L_10;
		__this->___stretchWidth_5 = 0;
	}

IL_009e:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUIScrollGroup_SetHorizontal_m3051 (GUIScrollGroup_t661 * __this, float ___x, float ___width, MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->___needsVerticalScrollbar_36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = ___width;
		GUIStyle_t651 * L_2 = (__this->___verticalScrollbar_38);
		NullCheck(L_2);
		float L_3 = GUIStyle_get_fixedWidth_m3163(L_2, /*hidden argument*/&GUIStyle_get_fixedWidth_m3163_MethodInfo);
		GUIStyle_t651 * L_4 = (__this->___verticalScrollbar_38);
		NullCheck(L_4);
		RectOffset_t449 * L_5 = GUIStyle_get_margin_m3160(L_4, /*hidden argument*/&GUIStyle_get_margin_m3160_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_left_m2631(L_5, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = ___width;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->___allowHorizontalScroll_33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinWidth_27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->___needsHorizontalScrollbar_35 = 1;
		float L_11 = (__this->___calcMinWidth_27);
		__this->___minWidth_0 = L_11;
		float L_12 = (__this->___calcMaxWidth_28);
		__this->___maxWidth_1 = L_12;
		float L_13 = ___x;
		float L_14 = (__this->___calcMinWidth_27);
		GUILayoutGroup_SetHorizontal_m3045(__this, L_13, L_14, /*hidden argument*/&GUILayoutGroup_SetHorizontal_m3045_MethodInfo);
		Rect_t213 * L_15 = &(__this->___rect_4);
		float L_16 = ___width;
		Rect_set_width_m2375(L_15, L_16, /*hidden argument*/&Rect_set_width_m2375_MethodInfo);
		float L_17 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->___needsHorizontalScrollbar_35 = 0;
		bool L_18 = (__this->___allowHorizontalScroll_33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->___calcMinWidth_27);
		__this->___minWidth_0 = L_19;
		float L_20 = (__this->___calcMaxWidth_28);
		__this->___maxWidth_1 = L_20;
	}

IL_00bb:
	{
		float L_21 = ___x;
		float L_22 = V_0;
		GUILayoutGroup_SetHorizontal_m3045(__this, L_21, L_22, /*hidden argument*/&GUILayoutGroup_SetHorizontal_m3045_MethodInfo);
		Rect_t213 * L_23 = &(__this->___rect_4);
		float L_24 = ___width;
		Rect_set_width_m2375(L_23, L_24, /*hidden argument*/&Rect_set_width_m2375_MethodInfo);
		float L_25 = V_0;
		__this->___clientWidth_31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
extern "C" void GUIScrollGroup_CalcHeight_m3052 (GUIScrollGroup_t661 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (__this->___minHeight_2);
		V_0 = L_0;
		float L_1 = (__this->___maxHeight_3);
		V_1 = L_1;
		bool L_2 = (__this->___allowVerticalScroll_34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		__this->___minHeight_2 = (0.0f);
		__this->___maxHeight_3 = (0.0f);
	}

IL_002f:
	{
		GUILayoutGroup_CalcHeight_m3046(__this, /*hidden argument*/&GUILayoutGroup_CalcHeight_m3046_MethodInfo);
		float L_3 = (__this->___minHeight_2);
		__this->___calcMinHeight_29 = L_3;
		float L_4 = (__this->___maxHeight_3);
		__this->___calcMaxHeight_30 = L_4;
		bool L_5 = (__this->___needsHorizontalScrollbar_35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		GUIStyle_t651 * L_6 = (__this->___horizontalScrollbar_37);
		NullCheck(L_6);
		float L_7 = GUIStyle_get_fixedHeight_m3164(L_6, /*hidden argument*/&GUIStyle_get_fixedHeight_m3164_MethodInfo);
		GUIStyle_t651 * L_8 = (__this->___horizontalScrollbar_37);
		NullCheck(L_8);
		RectOffset_t449 * L_9 = GUIStyle_get_margin_m3160(L_8, /*hidden argument*/&GUIStyle_get_margin_m3160_MethodInfo);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_top_m2632(L_9, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (__this->___minHeight_2);
		float L_12 = V_2;
		__this->___minHeight_2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (__this->___maxHeight_3);
		float L_14 = V_2;
		__this->___maxHeight_3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->___allowVerticalScroll_34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (__this->___minHeight_2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		__this->___minHeight_2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		__this->___minHeight_2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		__this->___maxHeight_3 = L_20;
		__this->___stretchHeight_6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
extern MethodInfo GUIScrollGroup_SetVertical_m3053_MethodInfo;
extern "C" void GUIScrollGroup_SetVertical_m3053 (GUIScrollGroup_t661 * __this, float ___y, float ___height, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___height;
		V_0 = L_0;
		bool L_1 = (__this->___needsHorizontalScrollbar_35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		GUIStyle_t651 * L_3 = (__this->___horizontalScrollbar_37);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedHeight_m3164(L_3, /*hidden argument*/&GUIStyle_get_fixedHeight_m3164_MethodInfo);
		GUIStyle_t651 * L_5 = (__this->___horizontalScrollbar_37);
		NullCheck(L_5);
		RectOffset_t449 * L_6 = GUIStyle_get_margin_m3160(L_5, /*hidden argument*/&GUIStyle_get_margin_m3160_MethodInfo);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_top_m2632(L_6, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->___allowVerticalScroll_34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->___calcMinHeight_29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->___needsHorizontalScrollbar_35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->___needsVerticalScrollbar_36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		Rect_t213 * L_13 = &(__this->___rect_4);
		float L_14 = Rect_get_width_m827(L_13, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		GUIStyle_t651 * L_15 = (__this->___verticalScrollbar_38);
		NullCheck(L_15);
		float L_16 = GUIStyle_get_fixedWidth_m3163(L_15, /*hidden argument*/&GUIStyle_get_fixedWidth_m3163_MethodInfo);
		GUIStyle_t651 * L_17 = (__this->___verticalScrollbar_38);
		NullCheck(L_17);
		RectOffset_t449 * L_18 = GUIStyle_get_margin_m3160(L_17, /*hidden argument*/&GUIStyle_get_margin_m3160_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_left_m2631(L_18, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		__this->___clientWidth_31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->___clientWidth_31);
		float L_21 = (__this->___calcMinWidth_27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->___calcMinWidth_27);
		__this->___clientWidth_31 = L_22;
	}

IL_00a6:
	{
		Rect_t213 * L_23 = &(__this->___rect_4);
		float L_24 = Rect_get_width_m827(L_23, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		V_1 = L_24;
		Rect_t213 * L_25 = &(__this->___rect_4);
		float L_26 = Rect_get_x_m836(L_25, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		float L_27 = (__this->___clientWidth_31);
		VirtActionInvoker2< float, float >::Invoke(&GUIScrollGroup_SetHorizontal_m3051_MethodInfo, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(&GUIScrollGroup_CalcHeight_m3052_MethodInfo, __this);
		Rect_t213 * L_28 = &(__this->___rect_4);
		float L_29 = V_1;
		Rect_set_width_m2375(L_28, L_29, /*hidden argument*/&Rect_set_width_m2375_MethodInfo);
	}

IL_00db:
	{
		float L_30 = (__this->___minHeight_2);
		V_2 = L_30;
		float L_31 = (__this->___maxHeight_3);
		V_3 = L_31;
		float L_32 = (__this->___calcMinHeight_29);
		__this->___minHeight_2 = L_32;
		float L_33 = (__this->___calcMaxHeight_30);
		__this->___maxHeight_3 = L_33;
		float L_34 = ___y;
		float L_35 = (__this->___calcMinHeight_29);
		GUILayoutGroup_SetVertical_m3047(__this, L_34, L_35, /*hidden argument*/&GUILayoutGroup_SetVertical_m3047_MethodInfo);
		float L_36 = V_2;
		__this->___minHeight_2 = L_36;
		float L_37 = V_3;
		__this->___maxHeight_3 = L_37;
		Rect_t213 * L_38 = &(__this->___rect_4);
		float L_39 = ___height;
		Rect_set_height_m2372(L_38, L_39, /*hidden argument*/&Rect_set_height_m2372_MethodInfo);
		float L_40 = (__this->___calcMinHeight_29);
		__this->___clientHeight_32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->___allowVerticalScroll_34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->___calcMinHeight_29);
		__this->___minHeight_2 = L_42;
		float L_43 = (__this->___calcMaxHeight_30);
		__this->___maxHeight_3 = L_43;
	}

IL_015c:
	{
		float L_44 = ___y;
		float L_45 = V_0;
		GUILayoutGroup_SetVertical_m3047(__this, L_44, L_45, /*hidden argument*/&GUILayoutGroup_SetVertical_m3047_MethodInfo);
		Rect_t213 * L_46 = &(__this->___rect_4);
		float L_47 = ___height;
		Rect_set_height_m2372(L_46, L_47, /*hidden argument*/&Rect_set_height_m2372_MethodInfo);
		float L_48 = V_0;
		__this->___clientHeight_32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Type_t662_il2cpp_TypeInfo;
// UnityEngine.GUILayoutOption/Type
#include "UnityEngine_UnityEngine_GUILayoutOption_TypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
extern "C" void GUILayoutOption__ctor_m3054 (GUILayoutOption_t653 * __this, int32_t ___type, Object_t * ___value, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		int32_t L_0 = ___type;
		__this->___type_0 = L_0;
		Object_t * L_1 = ___value;
		__this->___value_1 = L_1;
		return;
	}
}
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExitGUIException_t663_il2cpp_TypeInfo;
// UnityEngine.ExitGUIException
#include "UnityEngine_UnityEngine_ExitGUIExceptionMethodDeclarations.h"



// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtility.h"
#ifndef _MSC_VER
#else
#endif

extern TypeInfo GUIContent_t500_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
extern MethodInfo Vector2_get_zero_m2173_MethodInfo;
extern MethodInfo GUIUtility_Internal_GetDefaultSkin_m3059_MethodInfo;
extern MethodInfo GUIContent_ClearStaticCache_m3128_MethodInfo;
extern MethodInfo GUIUtility_Internal_ExitGUI_m3061_MethodInfo;
extern MethodInfo Exception_get_InnerException_m3862_MethodInfo;
extern MethodInfo GUIUtility_Internal_GetGUIDepth_m3065_MethodInfo;


// System.Void UnityEngine.GUIUtility::.cctor()
extern MethodInfo GUIUtility__cctor_m3055_MethodInfo;
extern "C" void GUIUtility__cctor_m3055 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = Vector2_get_zero_m2173(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2173_MethodInfo);
		((GUIUtility_t664_StaticFields*)InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo)->static_fields)->___s_EditorScreenPointOffset_2 = L_0;
		((GUIUtility_t664_StaticFields*)InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo)->static_fields)->___s_HasKeyboardFocus_3 = 0;
		return;
	}
}
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern MethodInfo GUIUtility_get_systemCopyBuffer_m3056_MethodInfo;
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m3056 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*GUIUtility_get_systemCopyBuffer_m3056_ftn) ();
	static GUIUtility_get_systemCopyBuffer_m3056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_get_systemCopyBuffer_m3056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern MethodInfo GUIUtility_set_systemCopyBuffer_m3057_MethodInfo;
extern "C" void GUIUtility_set_systemCopyBuffer_m3057 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method)
{
	typedef void (*GUIUtility_set_systemCopyBuffer_m3057_ftn) (String_t*);
	static GUIUtility_set_systemCopyBuffer_m3057_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_set_systemCopyBuffer_m3057_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" GUISkin_t647 * GUIUtility_GetDefaultSkin_m3058 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		int32_t L_0 = ((GUIUtility_t664_StaticFields*)InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo)->static_fields)->___s_SkinMode_0;
		GUISkin_t647 * L_1 = GUIUtility_Internal_GetDefaultSkin_m3059(NULL /*static, unused*/, L_0, /*hidden argument*/&GUIUtility_Internal_GetDefaultSkin_m3059_MethodInfo);
		return L_1;
	}
}
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t647 * GUIUtility_Internal_GetDefaultSkin_m3059 (Object_t * __this /* static, unused */, int32_t ___skinMode, MethodInfo* method)
{
	typedef GUISkin_t647 * (*GUIUtility_Internal_GetDefaultSkin_m3059_ftn) (int32_t);
	static GUIUtility_Internal_GetDefaultSkin_m3059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetDefaultSkin_m3059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(___skinMode);
}
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern MethodInfo GUIUtility_BeginGUI_m3060_MethodInfo;
extern "C" void GUIUtility_BeginGUI_m3060 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, MethodInfo* method)
{
	{
		int32_t L_0 = ___skinMode;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		((GUIUtility_t664_StaticFields*)InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo)->static_fields)->___s_SkinMode_0 = L_0;
		int32_t L_1 = ___instanceID;
		((GUIUtility_t664_StaticFields*)InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo)->static_fields)->___s_OriginalID_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		GUI_set_skin_m3008(NULL /*static, unused*/, (GUISkin_t647 *)NULL, /*hidden argument*/&GUI_set_skin_m3008_MethodInfo);
		int32_t L_2 = ___useGUILayout;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___instanceID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
		GUILayoutUtility_SelectIDList_m3016(NULL /*static, unused*/, L_3, 0, /*hidden argument*/&GUILayoutUtility_SelectIDList_m3016_MethodInfo);
		int32_t L_4 = ___instanceID;
		GUILayoutUtility_Begin_m3017(NULL /*static, unused*/, L_4, /*hidden argument*/&GUILayoutUtility_Begin_m3017_MethodInfo);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t649_il2cpp_TypeInfo));
		GUI_set_changed_m3010(NULL /*static, unused*/, 0, /*hidden argument*/&GUI_set_changed_m3010_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m3061 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*GUIUtility_Internal_ExitGUI_m3061_ftn) ();
	static GUIUtility_Internal_ExitGUI_m3061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_ExitGUI_m3061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern MethodInfo GUIUtility_EndGUI_m3062_MethodInfo;
extern "C" void GUIUtility_EndGUI_m3062 (Object_t * __this /* static, unused */, int32_t ___layoutType, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Event_t391 * L_0 = Event_get_current_m3193(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m3193_MethodInfo);
			NullCheck(L_0);
			int32_t L_1 = Event_get_type_m3189(L_0, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = ___layoutType;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUILayoutUtility_Layout_m3019(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_Layout_m3019_MethodInfo);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUILayoutUtility_LayoutFromEditorWindow_m3020(NULL /*static, unused*/, /*hidden argument*/&GUILayoutUtility_LayoutFromEditorWindow_m3020_MethodInfo);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
			int32_t L_4 = ((GUIUtility_t664_StaticFields*)InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo)->static_fields)->___s_OriginalID_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUILayoutUtility_t657_il2cpp_TypeInfo));
			GUILayoutUtility_SelectIDList_m3016(NULL /*static, unused*/, L_4, 0, /*hidden argument*/&GUILayoutUtility_SelectIDList_m3016_MethodInfo);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
			GUIContent_ClearStaticCache_m3128(NULL /*static, unused*/, /*hidden argument*/&GUIContent_ClearStaticCache_m3128_MethodInfo);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		GUIUtility_Internal_ExitGUI_m3061(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_Internal_ExitGUI_m3061_MethodInfo);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern MethodInfo GUIUtility_EndGUIFromException_m3063_MethodInfo;
extern "C" bool GUIUtility_EndGUIFromException_m3063 (Object_t * __this /* static, unused */, Exception_t234 * ___exception, MethodInfo* method)
{
	{
		Exception_t234 * L_0 = ___exception;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Exception_t234 * L_1 = ___exception;
		if (((ExitGUIException_t663 *)IsInst(L_1, InitializedTypeInfo(&ExitGUIException_t663_il2cpp_TypeInfo))))
		{
			goto IL_0025;
		}
	}
	{
		Exception_t234 * L_2 = ___exception;
		NullCheck(L_2);
		Exception_t234 * L_3 = (Exception_t234 *)VirtFuncInvoker0< Exception_t234 * >::Invoke(&Exception_get_InnerException_m3862_MethodInfo, L_2);
		if (((ExitGUIException_t663 *)IsInst(L_3, InitializedTypeInfo(&ExitGUIException_t663_il2cpp_TypeInfo))))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		GUIUtility_Internal_ExitGUI_m3061(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_Internal_ExitGUI_m3061_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" void GUIUtility_CheckOnGUI_m3064 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t664_il2cpp_TypeInfo));
		int32_t L_0 = GUIUtility_Internal_GetGUIDepth_m3065(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_Internal_GetGUIDepth_m3065_MethodInfo);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t514 * L_1 = (ArgumentException_t514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t514_il2cpp_TypeInfo));
		ArgumentException__ctor_m2604(L_1, (String_t*) &_stringLiteral301, /*hidden argument*/&ArgumentException__ctor_m2604_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m3065 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*GUIUtility_Internal_GetGUIDepth_m3065_ftn) ();
	static GUIUtility_Internal_GetGUIDepth_m3065_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIUtility_Internal_GetGUIDepth_m3065_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUISettings_t665_il2cpp_TypeInfo;
// UnityEngine.GUISettings
#include "UnityEngine_UnityEngine_GUISettingsMethodDeclarations.h"

extern TypeInfo Color_t17_il2cpp_TypeInfo;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern MethodInfo Color_get_white_m230_MethodInfo;
extern MethodInfo Color__ctor_m317_MethodInfo;


// System.Void UnityEngine.GUISettings::.ctor()
extern MethodInfo GUISettings__ctor_m3066_MethodInfo;
extern "C" void GUISettings__ctor_m3066 (GUISettings_t665 * __this, MethodInfo* method)
{
	{
		__this->___m_DoubleClickSelectsWord_0 = 1;
		__this->___m_TripleClickSelectsLine_1 = 1;
		Color_t17  L_0 = Color_get_white_m230(NULL /*static, unused*/, /*hidden argument*/&Color_get_white_m230_MethodInfo);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_t17  L_1 = {0};
		Color__ctor_m317(&L_1, (0.5f), (0.5f), (1.0f), /*hidden argument*/&Color__ctor_m317_MethodInfo);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkinChangedDelegate_t666_il2cpp_TypeInfo;
// UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine_UnityEngine_GUISkin_SkinChangedDelegateMethodDeclarations.h"



// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo SkinChangedDelegate__ctor_m3067_MethodInfo;
extern "C" void SkinChangedDelegate__ctor_m3067 (SkinChangedDelegate_t666 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern MethodInfo SkinChangedDelegate_Invoke_m3068_MethodInfo;
extern "C" void SkinChangedDelegate_Invoke_m3068 (SkinChangedDelegate_t666 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SkinChangedDelegate_Invoke_m3068((SkinChangedDelegate_t666 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t666(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo SkinChangedDelegate_BeginInvoke_m3069_MethodInfo;
extern "C" Object_t * SkinChangedDelegate_BeginInvoke_m3069 (SkinChangedDelegate_t666 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo SkinChangedDelegate_EndInvoke_m3070_MethodInfo;
extern "C" void SkinChangedDelegate_EndInvoke_m3070 (SkinChangedDelegate_t666 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUISkin_t647_il2cpp_TypeInfo;

// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_2.h"
extern TypeInfo GUIStyleU5BU5D_t667_il2cpp_TypeInfo;
extern TypeInfo StringComparer_t799_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t668_il2cpp_TypeInfo;
extern TypeInfo EventType_t673_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t800_il2cpp_TypeInfo;
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5MethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1MethodDeclarations.h"
extern Il2CppType GUIStyleU5BU5D_t667_0_0_0;
extern Il2CppType Dictionary_2_t668_0_0_0;
extern Il2CppType Enumerator_t800_0_0_0;
extern MethodInfo Object_op_Equality_m243_MethodInfo;
extern MethodInfo GUIStyle_SetDefaultFont_m3171_MethodInfo;
extern MethodInfo GUISkin_Apply_m3119_MethodInfo;
extern MethodInfo GUISkin_BuildStyleCache_m3120_MethodInfo;
extern MethodInfo StringComparer_get_OrdinalIgnoreCase_m3863_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m3864_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m3865_MethodInfo;
extern MethodInfo GUIStyle_set_name_m3157_MethodInfo;
extern MethodInfo GUISkin_get_error_m3118_MethodInfo;
extern MethodInfo GUIStyle_set_stretchHeight_m3168_MethodInfo;
extern MethodInfo GUIStyle_get_normal_m3158_MethodInfo;
extern MethodInfo Color_get_red_m3218_MethodInfo;
extern MethodInfo GUIStyleState_set_textColor_m3136_MethodInfo;
extern MethodInfo GUISkin_FindStyle_m3122_MethodInfo;
extern MethodInfo Object_get_name_m295_MethodInfo;
extern MethodInfo Debug_LogWarning_m329_MethodInfo;
extern MethodInfo Debug_LogError_m331_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m3866_MethodInfo;
extern MethodInfo GUISkin_get_font_m3073_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m3864_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m3865_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m3866_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m3867_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m3868_GenericMethod;


// System.Void UnityEngine.GUISkin::.ctor()
extern MethodInfo GUISkin__ctor_m3071_MethodInfo;
extern TypeInfo* GUIStyleU5BU5D_t667_il2cpp_TypeInfo_var;
extern "C" void GUISkin__ctor_m3071 (GUISkin_t647 * __this, MethodInfo* method)
{
	static bool GUISkin__ctor_m3071_init;
	if (!GUISkin__ctor_m3071_init)
	{
		GUIStyleU5BU5D_t667_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GUIStyleU5BU5D_t667_0_0_0);
		GUISkin__ctor_m3071_init = true;
	}
	{
		GUISettings_t665 * L_0 = (GUISettings_t665 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUISettings_t665_il2cpp_TypeInfo));
		GUISettings__ctor_m3066(L_0, /*hidden argument*/&GUISettings__ctor_m3066_MethodInfo);
		__this->___m_Settings_24 = L_0;
		ScriptableObject__ctor_m2839(__this, /*hidden argument*/&ScriptableObject__ctor_m2839_MethodInfo);
		__this->___m_CustomStyles_23 = ((GUIStyleU5BU5D_t667*)SZArrayNew(GUIStyleU5BU5D_t667_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
extern MethodInfo GUISkin_OnEnable_m3072_MethodInfo;
extern "C" void GUISkin_OnEnable_m3072 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t339 * GUISkin_get_font_m3073 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		Font_t339 * L_0 = (__this->___m_Font_2);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern MethodInfo GUISkin_set_font_m3074_MethodInfo;
extern "C" void GUISkin_set_font_m3074 (GUISkin_t647 * __this, Font_t339 * ___value, MethodInfo* method)
{
	{
		Font_t339 * L_0 = ___value;
		__this->___m_Font_2 = L_0;
		GUISkin_t647 * L_1 = ((GUISkin_t647_StaticFields*)InitializedTypeInfo(&GUISkin_t647_il2cpp_TypeInfo)->static_fields)->___current_28;
		bool L_2 = Object_op_Equality_m243(NULL /*static, unused*/, L_1, __this, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Font_t339 * L_3 = (__this->___m_Font_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_SetDefaultFont_m3171(NULL /*static, unused*/, L_3, /*hidden argument*/&GUIStyle_SetDefaultFont_m3171_MethodInfo);
	}

IL_0022:
	{
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern MethodInfo GUISkin_get_box_m3075_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_box_m3075 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_box_3);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_box_m3076_MethodInfo;
extern "C" void GUISkin_set_box_m3076 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_box_3 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern MethodInfo GUISkin_get_label_m3077_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_label_m3077 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_label_6);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_label_m3078_MethodInfo;
extern "C" void GUISkin_set_label_m3078 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_label_6 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern MethodInfo GUISkin_get_textField_m3079_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_textField_m3079 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_textField_7);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_textField_m3080_MethodInfo;
extern "C" void GUISkin_set_textField_m3080 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_textField_7 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern MethodInfo GUISkin_get_textArea_m3081_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_textArea_m3081 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_textArea_8);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_textArea_m3082_MethodInfo;
extern "C" void GUISkin_set_textArea_m3082 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_textArea_8 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern MethodInfo GUISkin_get_button_m3083_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_button_m3083 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_button_4);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_button_m3084_MethodInfo;
extern "C" void GUISkin_set_button_m3084 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_button_4 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern MethodInfo GUISkin_get_toggle_m3085_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_toggle_m3085 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_toggle_5);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_toggle_m3086_MethodInfo;
extern "C" void GUISkin_set_toggle_m3086 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_toggle_5 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern MethodInfo GUISkin_get_window_m3087_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_window_m3087 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_window_9);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_window_m3088_MethodInfo;
extern "C" void GUISkin_set_window_m3088 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_window_9 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern MethodInfo GUISkin_get_horizontalSlider_m3089_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_horizontalSlider_m3089 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_horizontalSlider_10);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalSlider_m3090_MethodInfo;
extern "C" void GUISkin_set_horizontalSlider_m3090 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_horizontalSlider_10 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern MethodInfo GUISkin_get_horizontalSliderThumb_m3091_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_horizontalSliderThumb_m3091 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_horizontalSliderThumb_11);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalSliderThumb_m3092_MethodInfo;
extern "C" void GUISkin_set_horizontalSliderThumb_m3092 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_horizontalSliderThumb_11 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern MethodInfo GUISkin_get_verticalSlider_m3093_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_verticalSlider_m3093 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_verticalSlider_12);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalSlider_m3094_MethodInfo;
extern "C" void GUISkin_set_verticalSlider_m3094 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_verticalSlider_12 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern MethodInfo GUISkin_get_verticalSliderThumb_m3095_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_verticalSliderThumb_m3095 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_verticalSliderThumb_13);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalSliderThumb_m3096_MethodInfo;
extern "C" void GUISkin_set_verticalSliderThumb_m3096 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_verticalSliderThumb_13 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern MethodInfo GUISkin_get_horizontalScrollbar_m3097_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_horizontalScrollbar_m3097 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_horizontalScrollbar_14);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbar_m3098_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbar_m3098 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_horizontalScrollbar_14 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern MethodInfo GUISkin_get_horizontalScrollbarThumb_m3099_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_horizontalScrollbarThumb_m3099 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_horizontalScrollbarThumb_15);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbarThumb_m3100_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbarThumb_m3100 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_horizontalScrollbarThumb_15 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern MethodInfo GUISkin_get_horizontalScrollbarLeftButton_m3101_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_horizontalScrollbarLeftButton_m3101 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_horizontalScrollbarLeftButton_16);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbarLeftButton_m3102_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m3102 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_horizontalScrollbarLeftButton_16 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern MethodInfo GUISkin_get_horizontalScrollbarRightButton_m3103_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_horizontalScrollbarRightButton_m3103 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_horizontalScrollbarRightButton_17);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_horizontalScrollbarRightButton_m3104_MethodInfo;
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m3104 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_horizontalScrollbarRightButton_17 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern MethodInfo GUISkin_get_verticalScrollbar_m3105_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_verticalScrollbar_m3105 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_verticalScrollbar_18);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbar_m3106_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbar_m3106 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_verticalScrollbar_18 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern MethodInfo GUISkin_get_verticalScrollbarThumb_m3107_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_verticalScrollbarThumb_m3107 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_verticalScrollbarThumb_19);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbarThumb_m3108_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbarThumb_m3108 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_verticalScrollbarThumb_19 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern MethodInfo GUISkin_get_verticalScrollbarUpButton_m3109_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_verticalScrollbarUpButton_m3109 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_verticalScrollbarUpButton_20);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbarUpButton_m3110_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbarUpButton_m3110 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_verticalScrollbarUpButton_20 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern MethodInfo GUISkin_get_verticalScrollbarDownButton_m3111_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_verticalScrollbarDownButton_m3111 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_verticalScrollbarDownButton_21);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_verticalScrollbarDownButton_m3112_MethodInfo;
extern "C" void GUISkin_set_verticalScrollbarDownButton_m3112 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_verticalScrollbarDownButton_21 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern MethodInfo GUISkin_get_scrollView_m3113_MethodInfo;
extern "C" GUIStyle_t651 * GUISkin_get_scrollView_m3113 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = (__this->___m_ScrollView_22);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern MethodInfo GUISkin_set_scrollView_m3114_MethodInfo;
extern "C" void GUISkin_set_scrollView_m3114 (GUISkin_t647 * __this, GUIStyle_t651 * ___value, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ___value;
		__this->___m_ScrollView_22 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern MethodInfo GUISkin_get_customStyles_m3115_MethodInfo;
extern "C" GUIStyleU5BU5D_t667* GUISkin_get_customStyles_m3115 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t667* L_0 = (__this->___m_CustomStyles_23);
		return L_0;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern MethodInfo GUISkin_set_customStyles_m3116_MethodInfo;
extern "C" void GUISkin_set_customStyles_m3116 (GUISkin_t647 * __this, GUIStyleU5BU5D_t667* ___value, MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t667* L_0 = ___value;
		__this->___m_CustomStyles_23 = L_0;
		GUISkin_Apply_m3119(__this, /*hidden argument*/&GUISkin_Apply_m3119_MethodInfo);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern MethodInfo GUISkin_get_settings_m3117_MethodInfo;
extern "C" GUISettings_t665 * GUISkin_get_settings_m3117 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUISettings_t665 * L_0 = (__this->___m_Settings_24);
		return L_0;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" GUIStyle_t651 * GUISkin_get_error_m3118 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		GUIStyle_t651 * L_0 = ((GUISkin_t647_StaticFields*)InitializedTypeInfo(&GUISkin_t647_il2cpp_TypeInfo)->static_fields)->___ms_Error_25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_1 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_1, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		((GUISkin_t647_StaticFields*)InitializedTypeInfo(&GUISkin_t647_il2cpp_TypeInfo)->static_fields)->___ms_Error_25 = L_1;
	}

IL_0014:
	{
		GUIStyle_t651 * L_2 = ((GUISkin_t647_StaticFields*)InitializedTypeInfo(&GUISkin_t647_il2cpp_TypeInfo)->static_fields)->___ms_Error_25;
		return L_2;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
extern "C" void GUISkin_Apply_m3119 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		GUIStyleU5BU5D_t667* L_0 = (__this->___m_CustomStyles_23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m380(NULL /*static, unused*/, (String_t*) &_stringLiteral302, /*hidden argument*/&Debug_Log_m380_MethodInfo);
	}

IL_0015:
	{
		GUISkin_BuildStyleCache_m3120(__this, /*hidden argument*/&GUISkin_BuildStyleCache_m3120_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern TypeInfo* Dictionary_2_t668_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m3864_MethodInfo_var;
extern MethodInfo* Dictionary_2_set_Item_m3865_MethodInfo_var;
extern "C" void GUISkin_BuildStyleCache_m3120 (GUISkin_t647 * __this, MethodInfo* method)
{
	static bool GUISkin_BuildStyleCache_m3120_init;
	if (!GUISkin_BuildStyleCache_m3120_init)
	{
		Dictionary_2_t668_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t668_0_0_0);
		Dictionary_2__ctor_m3864_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m3864_GenericMethod);
		Dictionary_2_set_Item_m3865_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m3865_GenericMethod);
		GUISkin_BuildStyleCache_m3120_init = true;
	}
	int32_t V_0 = 0;
	{
		GUIStyle_t651 * L_0 = (__this->___m_box_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_1 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_1, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_box_3 = L_1;
	}

IL_0016:
	{
		GUIStyle_t651 * L_2 = (__this->___m_button_4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_3 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_3, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_button_4 = L_3;
	}

IL_002c:
	{
		GUIStyle_t651 * L_4 = (__this->___m_toggle_5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_5 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_5, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_toggle_5 = L_5;
	}

IL_0042:
	{
		GUIStyle_t651 * L_6 = (__this->___m_label_6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_7 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_7, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_label_6 = L_7;
	}

IL_0058:
	{
		GUIStyle_t651 * L_8 = (__this->___m_window_9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_9 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_9, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_window_9 = L_9;
	}

IL_006e:
	{
		GUIStyle_t651 * L_10 = (__this->___m_textField_7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_11 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_11, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_textField_7 = L_11;
	}

IL_0084:
	{
		GUIStyle_t651 * L_12 = (__this->___m_textArea_8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_13 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_13, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_textArea_8 = L_13;
	}

IL_009a:
	{
		GUIStyle_t651 * L_14 = (__this->___m_horizontalSlider_10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_15 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_15, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_horizontalSlider_10 = L_15;
	}

IL_00b0:
	{
		GUIStyle_t651 * L_16 = (__this->___m_horizontalSliderThumb_11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_17 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_17, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_horizontalSliderThumb_11 = L_17;
	}

IL_00c6:
	{
		GUIStyle_t651 * L_18 = (__this->___m_verticalSlider_12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_19 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_19, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_verticalSlider_12 = L_19;
	}

IL_00dc:
	{
		GUIStyle_t651 * L_20 = (__this->___m_verticalSliderThumb_13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_21 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_21, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_verticalSliderThumb_13 = L_21;
	}

IL_00f2:
	{
		GUIStyle_t651 * L_22 = (__this->___m_horizontalScrollbar_14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_23 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_23, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_horizontalScrollbar_14 = L_23;
	}

IL_0108:
	{
		GUIStyle_t651 * L_24 = (__this->___m_horizontalScrollbarThumb_15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_25 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_25, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_horizontalScrollbarThumb_15 = L_25;
	}

IL_011e:
	{
		GUIStyle_t651 * L_26 = (__this->___m_horizontalScrollbarLeftButton_16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_27 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_27, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_horizontalScrollbarLeftButton_16 = L_27;
	}

IL_0134:
	{
		GUIStyle_t651 * L_28 = (__this->___m_horizontalScrollbarRightButton_17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_29 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_29, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_horizontalScrollbarRightButton_17 = L_29;
	}

IL_014a:
	{
		GUIStyle_t651 * L_30 = (__this->___m_verticalScrollbar_18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_31 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_31, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_verticalScrollbar_18 = L_31;
	}

IL_0160:
	{
		GUIStyle_t651 * L_32 = (__this->___m_verticalScrollbarThumb_19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_33 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_33, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_verticalScrollbarThumb_19 = L_33;
	}

IL_0176:
	{
		GUIStyle_t651 * L_34 = (__this->___m_verticalScrollbarUpButton_20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_35 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_35, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_verticalScrollbarUpButton_20 = L_35;
	}

IL_018c:
	{
		GUIStyle_t651 * L_36 = (__this->___m_verticalScrollbarDownButton_21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_37 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_37, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_verticalScrollbarDownButton_21 = L_37;
	}

IL_01a2:
	{
		GUIStyle_t651 * L_38 = (__this->___m_ScrollView_22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_39 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_39, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		__this->___m_ScrollView_22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StringComparer_t799_il2cpp_TypeInfo));
		StringComparer_t799 * L_40 = StringComparer_get_OrdinalIgnoreCase_m3863(NULL /*static, unused*/, /*hidden argument*/&StringComparer_get_OrdinalIgnoreCase_m3863_MethodInfo);
		Dictionary_2_t668 * L_41 = (Dictionary_2_t668 *)il2cpp_codegen_object_new (Dictionary_2_t668_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3864(L_41, L_40, /*hidden argument*/Dictionary_2__ctor_m3864_MethodInfo_var);
		__this->___styles_26 = L_41;
		Dictionary_2_t668 * L_42 = (__this->___styles_26);
		GUIStyle_t651 * L_43 = (__this->___m_box_3);
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_42, (String_t*) &_stringLiteral303, L_43);
		GUIStyle_t651 * L_44 = (__this->___m_box_3);
		NullCheck(L_44);
		GUIStyle_set_name_m3157(L_44, (String_t*) &_stringLiteral303, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_45 = (__this->___styles_26);
		GUIStyle_t651 * L_46 = (__this->___m_button_4);
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_45, (String_t*) &_stringLiteral304, L_46);
		GUIStyle_t651 * L_47 = (__this->___m_button_4);
		NullCheck(L_47);
		GUIStyle_set_name_m3157(L_47, (String_t*) &_stringLiteral304, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_48 = (__this->___styles_26);
		GUIStyle_t651 * L_49 = (__this->___m_toggle_5);
		NullCheck(L_48);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_48, (String_t*) &_stringLiteral305, L_49);
		GUIStyle_t651 * L_50 = (__this->___m_toggle_5);
		NullCheck(L_50);
		GUIStyle_set_name_m3157(L_50, (String_t*) &_stringLiteral305, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_51 = (__this->___styles_26);
		GUIStyle_t651 * L_52 = (__this->___m_label_6);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_51, (String_t*) &_stringLiteral306, L_52);
		GUIStyle_t651 * L_53 = (__this->___m_label_6);
		NullCheck(L_53);
		GUIStyle_set_name_m3157(L_53, (String_t*) &_stringLiteral306, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_54 = (__this->___styles_26);
		GUIStyle_t651 * L_55 = (__this->___m_window_9);
		NullCheck(L_54);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_54, (String_t*) &_stringLiteral307, L_55);
		GUIStyle_t651 * L_56 = (__this->___m_window_9);
		NullCheck(L_56);
		GUIStyle_set_name_m3157(L_56, (String_t*) &_stringLiteral307, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_57 = (__this->___styles_26);
		GUIStyle_t651 * L_58 = (__this->___m_textField_7);
		NullCheck(L_57);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_57, (String_t*) &_stringLiteral308, L_58);
		GUIStyle_t651 * L_59 = (__this->___m_textField_7);
		NullCheck(L_59);
		GUIStyle_set_name_m3157(L_59, (String_t*) &_stringLiteral308, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_60 = (__this->___styles_26);
		GUIStyle_t651 * L_61 = (__this->___m_textArea_8);
		NullCheck(L_60);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_60, (String_t*) &_stringLiteral309, L_61);
		GUIStyle_t651 * L_62 = (__this->___m_textArea_8);
		NullCheck(L_62);
		GUIStyle_set_name_m3157(L_62, (String_t*) &_stringLiteral309, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_63 = (__this->___styles_26);
		GUIStyle_t651 * L_64 = (__this->___m_horizontalSlider_10);
		NullCheck(L_63);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_63, (String_t*) &_stringLiteral310, L_64);
		GUIStyle_t651 * L_65 = (__this->___m_horizontalSlider_10);
		NullCheck(L_65);
		GUIStyle_set_name_m3157(L_65, (String_t*) &_stringLiteral310, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_66 = (__this->___styles_26);
		GUIStyle_t651 * L_67 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_66, (String_t*) &_stringLiteral311, L_67);
		GUIStyle_t651 * L_68 = (__this->___m_horizontalSliderThumb_11);
		NullCheck(L_68);
		GUIStyle_set_name_m3157(L_68, (String_t*) &_stringLiteral311, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_69 = (__this->___styles_26);
		GUIStyle_t651 * L_70 = (__this->___m_verticalSlider_12);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_69, (String_t*) &_stringLiteral312, L_70);
		GUIStyle_t651 * L_71 = (__this->___m_verticalSlider_12);
		NullCheck(L_71);
		GUIStyle_set_name_m3157(L_71, (String_t*) &_stringLiteral312, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_72 = (__this->___styles_26);
		GUIStyle_t651 * L_73 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_72, (String_t*) &_stringLiteral313, L_73);
		GUIStyle_t651 * L_74 = (__this->___m_verticalSliderThumb_13);
		NullCheck(L_74);
		GUIStyle_set_name_m3157(L_74, (String_t*) &_stringLiteral313, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_75 = (__this->___styles_26);
		GUIStyle_t651 * L_76 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_75, (String_t*) &_stringLiteral314, L_76);
		GUIStyle_t651 * L_77 = (__this->___m_horizontalScrollbar_14);
		NullCheck(L_77);
		GUIStyle_set_name_m3157(L_77, (String_t*) &_stringLiteral314, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_78 = (__this->___styles_26);
		GUIStyle_t651 * L_79 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_78, (String_t*) &_stringLiteral315, L_79);
		GUIStyle_t651 * L_80 = (__this->___m_horizontalScrollbarThumb_15);
		NullCheck(L_80);
		GUIStyle_set_name_m3157(L_80, (String_t*) &_stringLiteral315, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_81 = (__this->___styles_26);
		GUIStyle_t651 * L_82 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_81);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_81, (String_t*) &_stringLiteral316, L_82);
		GUIStyle_t651 * L_83 = (__this->___m_horizontalScrollbarLeftButton_16);
		NullCheck(L_83);
		GUIStyle_set_name_m3157(L_83, (String_t*) &_stringLiteral316, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_84 = (__this->___styles_26);
		GUIStyle_t651 * L_85 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_84, (String_t*) &_stringLiteral317, L_85);
		GUIStyle_t651 * L_86 = (__this->___m_horizontalScrollbarRightButton_17);
		NullCheck(L_86);
		GUIStyle_set_name_m3157(L_86, (String_t*) &_stringLiteral317, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_87 = (__this->___styles_26);
		GUIStyle_t651 * L_88 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_87);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_87, (String_t*) &_stringLiteral318, L_88);
		GUIStyle_t651 * L_89 = (__this->___m_verticalScrollbar_18);
		NullCheck(L_89);
		GUIStyle_set_name_m3157(L_89, (String_t*) &_stringLiteral318, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_90 = (__this->___styles_26);
		GUIStyle_t651 * L_91 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_90);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_90, (String_t*) &_stringLiteral319, L_91);
		GUIStyle_t651 * L_92 = (__this->___m_verticalScrollbarThumb_19);
		NullCheck(L_92);
		GUIStyle_set_name_m3157(L_92, (String_t*) &_stringLiteral319, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_93 = (__this->___styles_26);
		GUIStyle_t651 * L_94 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_93);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_93, (String_t*) &_stringLiteral320, L_94);
		GUIStyle_t651 * L_95 = (__this->___m_verticalScrollbarUpButton_20);
		NullCheck(L_95);
		GUIStyle_set_name_m3157(L_95, (String_t*) &_stringLiteral320, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_96 = (__this->___styles_26);
		GUIStyle_t651 * L_97 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_96);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_96, (String_t*) &_stringLiteral321, L_97);
		GUIStyle_t651 * L_98 = (__this->___m_verticalScrollbarDownButton_21);
		NullCheck(L_98);
		GUIStyle_set_name_m3157(L_98, (String_t*) &_stringLiteral321, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		Dictionary_2_t668 * L_99 = (__this->___styles_26);
		GUIStyle_t651 * L_100 = (__this->___m_ScrollView_22);
		NullCheck(L_99);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_99, (String_t*) &_stringLiteral322, L_100);
		GUIStyle_t651 * L_101 = (__this->___m_ScrollView_22);
		NullCheck(L_101);
		GUIStyle_set_name_m3157(L_101, (String_t*) &_stringLiteral322, /*hidden argument*/&GUIStyle_set_name_m3157_MethodInfo);
		GUIStyleU5BU5D_t667* L_102 = (__this->___m_CustomStyles_23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		GUIStyleU5BU5D_t667* L_103 = (__this->___m_CustomStyles_23);
		int32_t L_104 = V_0;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		int32_t L_105 = L_104;
		if ((*(GUIStyle_t651 **)(GUIStyle_t651 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		Dictionary_2_t668 * L_106 = (__this->___styles_26);
		GUIStyleU5BU5D_t667* L_107 = (__this->___m_CustomStyles_23);
		int32_t L_108 = V_0;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, L_108);
		int32_t L_109 = L_108;
		NullCheck((*(GUIStyle_t651 **)(GUIStyle_t651 **)SZArrayLdElema(L_107, L_109)));
		String_t* L_110 = GUIStyle_get_name_m3156((*(GUIStyle_t651 **)(GUIStyle_t651 **)SZArrayLdElema(L_107, L_109)), /*hidden argument*/&GUIStyle_get_name_m3156_MethodInfo);
		GUIStyleU5BU5D_t667* L_111 = (__this->___m_CustomStyles_23);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_112);
		int32_t L_113 = L_112;
		NullCheck(L_106);
		VirtActionInvoker2< String_t*, GUIStyle_t651 * >::Invoke(Dictionary_2_set_Item_m3865_MethodInfo_var, L_106, L_110, (*(GUIStyle_t651 **)(GUIStyle_t651 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		GUIStyleU5BU5D_t667* L_116 = (__this->___m_CustomStyles_23);
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((Array_t *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		GUIStyle_t651 * L_117 = GUISkin_get_error_m3118(NULL /*static, unused*/, /*hidden argument*/&GUISkin_get_error_m3118_MethodInfo);
		NullCheck(L_117);
		GUIStyle_set_stretchHeight_m3168(L_117, 1, /*hidden argument*/&GUIStyle_set_stretchHeight_m3168_MethodInfo);
		GUIStyle_t651 * L_118 = GUISkin_get_error_m3118(NULL /*static, unused*/, /*hidden argument*/&GUISkin_get_error_m3118_MethodInfo);
		NullCheck(L_118);
		GUIStyleState_t669 * L_119 = GUIStyle_get_normal_m3158(L_118, /*hidden argument*/&GUIStyle_get_normal_m3158_MethodInfo);
		Color_t17  L_120 = Color_get_red_m3218(NULL /*static, unused*/, /*hidden argument*/&Color_get_red_m3218_MethodInfo);
		NullCheck(L_119);
		GUIStyleState_set_textColor_m3136(L_119, L_120, /*hidden argument*/&GUIStyleState_set_textColor_m3136_MethodInfo);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern MethodInfo GUISkin_GetStyle_m3121_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" GUIStyle_t651 * GUISkin_GetStyle_m3121 (GUISkin_t647 * __this, String_t* ___styleName, MethodInfo* method)
{
	static bool GUISkin_GetStyle_m3121_init;
	if (!GUISkin_GetStyle_m3121_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		GUISkin_GetStyle_m3121_init = true;
	}
	GUIStyle_t651 * V_0 = {0};
	{
		String_t* L_0 = ___styleName;
		GUIStyle_t651 * L_1 = GUISkin_FindStyle_m3122(__this, L_0, /*hidden argument*/&GUISkin_FindStyle_m3122_MethodInfo);
		V_0 = L_1;
		GUIStyle_t651 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		GUIStyle_t651 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		ObjectU5BU5D_t219* L_4 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 6));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral323);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0)) = (Object_t *)(String_t*) &_stringLiteral323;
		ObjectU5BU5D_t219* L_5 = L_4;
		String_t* L_6 = ___styleName;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t219* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral324);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)(String_t*) &_stringLiteral324;
		ObjectU5BU5D_t219* L_8 = L_7;
		String_t* L_9 = Object_get_name_m295(__this, /*hidden argument*/&Object_get_name_m295_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t219* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral325);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral325;
		ObjectU5BU5D_t219* L_11 = L_10;
		Event_t391 * L_12 = Event_get_current_m3193(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m3193_MethodInfo);
		NullCheck(L_12);
		int32_t L_13 = Event_get_type_m3189(L_12, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&EventType_t673_il2cpp_TypeInfo), &L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m2171(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		Debug_LogWarning_m329(NULL /*static, unused*/, L_16, /*hidden argument*/&Debug_LogWarning_m329_MethodInfo);
		GUIStyle_t651 * L_17 = GUISkin_get_error_m3118(NULL /*static, unused*/, /*hidden argument*/&GUISkin_get_error_m3118_MethodInfo);
		return L_17;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern MethodInfo* Dictionary_2_TryGetValue_m3866_MethodInfo_var;
extern "C" GUIStyle_t651 * GUISkin_FindStyle_m3122 (GUISkin_t647 * __this, String_t* ___styleName, MethodInfo* method)
{
	static bool GUISkin_FindStyle_m3122_init;
	if (!GUISkin_FindStyle_m3122_init)
	{
		Dictionary_2_TryGetValue_m3866_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m3866_GenericMethod);
		GUISkin_FindStyle_m3122_init = true;
	}
	GUIStyle_t651 * V_0 = {0};
	{
		bool L_0 = Object_op_Equality_m243(NULL /*static, unused*/, __this, (Object_t93 *)NULL, /*hidden argument*/&Object_op_Equality_m243_MethodInfo);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Debug_LogError_m331(NULL /*static, unused*/, (String_t*) &_stringLiteral326, /*hidden argument*/&Debug_LogError_m331_MethodInfo);
		return (GUIStyle_t651 *)NULL;
	}

IL_0018:
	{
		Dictionary_2_t668 * L_1 = (__this->___styles_26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUISkin_BuildStyleCache_m3120(__this, /*hidden argument*/&GUISkin_BuildStyleCache_m3120_MethodInfo);
	}

IL_0029:
	{
		Dictionary_2_t668 * L_2 = (__this->___styles_26);
		String_t* L_3 = ___styleName;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, GUIStyle_t651 ** >::Invoke(Dictionary_2_TryGetValue_m3866_MethodInfo_var, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		GUIStyle_t651 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (GUIStyle_t651 *)NULL;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" void GUISkin_MakeCurrent_m3123 (GUISkin_t647 * __this, MethodInfo* method)
{
	{
		((GUISkin_t647_StaticFields*)InitializedTypeInfo(&GUISkin_t647_il2cpp_TypeInfo)->static_fields)->___current_28 = __this;
		Font_t339 * L_0 = GUISkin_get_font_m3073(__this, /*hidden argument*/&GUISkin_get_font_m3073_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_SetDefaultFont_m3171(NULL /*static, unused*/, L_0, /*hidden argument*/&GUIStyle_SetDefaultFont_m3171_MethodInfo);
		SkinChangedDelegate_t666 * L_1 = ((GUISkin_t647_StaticFields*)InitializedTypeInfo(&GUISkin_t647_il2cpp_TypeInfo)->static_fields)->___m_SkinChanged_27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		SkinChangedDelegate_t666 * L_2 = ((GUISkin_t647_StaticFields*)InitializedTypeInfo(&GUISkin_t647_il2cpp_TypeInfo)->static_fields)->___m_SkinChanged_27;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&SkinChangedDelegate_Invoke_m3068_MethodInfo, L_2);
	}

IL_0025:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern MethodInfo GUISkin_GetEnumerator_m3124_MethodInfo;
extern TypeInfo* Enumerator_t800_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Values_m3867_MethodInfo_var;
extern MethodInfo* ValueCollection_GetEnumerator_m3868_MethodInfo_var;
extern "C" Object_t * GUISkin_GetEnumerator_m3124 (GUISkin_t647 * __this, MethodInfo* method)
{
	static bool GUISkin_GetEnumerator_m3124_init;
	if (!GUISkin_GetEnumerator_m3124_init)
	{
		Enumerator_t800_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t800_0_0_0);
		Dictionary_2_get_Values_m3867_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Values_m3867_GenericMethod);
		ValueCollection_GetEnumerator_m3868_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ValueCollection_GetEnumerator_m3868_GenericMethod);
		GUISkin_GetEnumerator_m3124_init = true;
	}
	{
		Dictionary_2_t668 * L_0 = (__this->___styles_26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		GUISkin_BuildStyleCache_m3120(__this, /*hidden argument*/&GUISkin_BuildStyleCache_m3120_MethodInfo);
	}

IL_0011:
	{
		Dictionary_2_t668 * L_1 = (__this->___styles_26);
		NullCheck(L_1);
		ValueCollection_t801 * L_2 = Dictionary_2_get_Values_m3867(L_1, /*hidden argument*/Dictionary_2_get_Values_m3867_MethodInfo_var);
		NullCheck(L_2);
		Enumerator_t800  L_3 = ValueCollection_GetEnumerator_m3868(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m3868_MethodInfo_var);
		Enumerator_t800  L_4 = L_3;
		Object_t * L_5 = Box(Enumerator_t800_il2cpp_TypeInfo_var, &L_4);
		return (Object_t *)L_5;
	}
}
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo GUIContent__ctor_m2418_MethodInfo;
extern MethodInfo GUIContent__ctor_m3125_MethodInfo;


// System.Void UnityEngine.GUIContent::.ctor()
extern "C" void GUIContent__ctor_m3125 (GUIContent_t500 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" void GUIContent__ctor_m2418 (GUIContent_t500 * __this, String_t* ___text, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Text_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_Tooltip_2 = L_1;
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		String_t* L_2 = ___text;
		__this->___m_Text_0 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
extern MethodInfo GUIContent__cctor_m3126_MethodInfo;
extern "C" void GUIContent__cctor_m3126 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		GUIContent_t500 * L_1 = (GUIContent_t500 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
		GUIContent__ctor_m2418(L_1, L_0, /*hidden argument*/&GUIContent__ctor_m2418_MethodInfo);
		((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___none_3 = L_1;
		GUIContent_t500 * L_2 = (GUIContent_t500 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
		GUIContent__ctor_m3125(L_2, /*hidden argument*/&GUIContent__ctor_m3125_MethodInfo);
		((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___s_Text_4 = L_2;
		GUIContent_t500 * L_3 = (GUIContent_t500 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
		GUIContent__ctor_m3125(L_3, /*hidden argument*/&GUIContent__ctor_m3125_MethodInfo);
		((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___s_Image_5 = L_3;
		GUIContent_t500 * L_4 = (GUIContent_t500 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
		GUIContent__ctor_m3125(L_4, /*hidden argument*/&GUIContent__ctor_m3125_MethodInfo);
		((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___s_TextImage_6 = L_4;
		return;
	}
}
// System.String UnityEngine.GUIContent::get_text()
extern MethodInfo GUIContent_get_text_m2417_MethodInfo;
extern "C" String_t* GUIContent_get_text_m2417 (GUIContent_t500 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Text_0);
		return L_0;
	}
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern MethodInfo GUIContent_set_text_m3127_MethodInfo;
extern "C" void GUIContent_set_text_m3127 (GUIContent_t500 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_Text_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" void GUIContent_ClearStaticCache_m3128 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo));
		GUIContent_t500 * L_0 = ((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___s_Text_4;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		GUIContent_t500 * L_1 = ((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___s_Image_5;
		NullCheck(L_1);
		L_1->___m_Image_1 = (Texture_t39 *)NULL;
		GUIContent_t500 * L_2 = ((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___s_TextImage_6;
		NullCheck(L_2);
		L_2->___m_Text_0 = (String_t*)NULL;
		GUIContent_t500 * L_3 = ((GUIContent_t500_StaticFields*)InitializedTypeInfo(&GUIContent_t500_il2cpp_TypeInfo)->static_fields)->___s_TextImage_6;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t39 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GUIStyleState_t669_il2cpp_TypeInfo;

extern MethodInfo GUIStyleState_INTERNAL_set_textColor_m3135_MethodInfo;
extern MethodInfo GUIStyleState_Init_m3132_MethodInfo;
extern MethodInfo GUIStyleState_GetBackgroundInternal_m3134_MethodInfo;
extern MethodInfo GUIStyleState_Cleanup_m3133_MethodInfo;


// System.Void UnityEngine.GUIStyleState::.ctor()
extern MethodInfo GUIStyleState__ctor_m3129_MethodInfo;
extern "C" void GUIStyleState__ctor_m3129 (GUIStyleState_t669 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		GUIStyleState_Init_m3132(__this, /*hidden argument*/&GUIStyleState_Init_m3132_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern MethodInfo GUIStyleState__ctor_m3130_MethodInfo;
extern "C" void GUIStyleState__ctor_m3130 (GUIStyleState_t669 * __this, GUIStyle_t651 * ___sourceStyle, IntPtr_t ___source, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		GUIStyle_t651 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		Texture2D_t15 * L_2 = GUIStyleState_GetBackgroundInternal_m3134(__this, /*hidden argument*/&GUIStyleState_GetBackgroundInternal_m3134_MethodInfo);
		__this->___m_Background_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
extern MethodInfo GUIStyleState_Finalize_m3131_MethodInfo;
extern "C" void GUIStyleState_Finalize_m3131 (GUIStyleState_t669 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t651 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			GUIStyleState_Cleanup_m3133(__this, /*hidden argument*/&GUIStyleState_Cleanup_m3133_MethodInfo);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m3132 (GUIStyleState_t669 * __this, MethodInfo* method)
{
	typedef void (*GUIStyleState_Init_m3132_ftn) (GUIStyleState_t669 *);
	static GUIStyleState_Init_m3132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m3132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m3133 (GUIStyleState_t669 * __this, MethodInfo* method)
{
	typedef void (*GUIStyleState_Cleanup_m3133_ftn) (GUIStyleState_t669 *);
	static GUIStyleState_Cleanup_m3133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_m3133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t15 * GUIStyleState_GetBackgroundInternal_m3134 (GUIStyleState_t669 * __this, MethodInfo* method)
{
	typedef Texture2D_t15 * (*GUIStyleState_GetBackgroundInternal_m3134_ftn) (GUIStyleState_t669 *);
	static GUIStyleState_GetBackgroundInternal_m3134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_GetBackgroundInternal_m3134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m3135 (GUIStyleState_t669 * __this, Color_t17 * ___value, MethodInfo* method)
{
	typedef void (*GUIStyleState_INTERNAL_set_textColor_m3135_ftn) (GUIStyleState_t669 *, Color_t17 *);
	static GUIStyleState_INTERNAL_set_textColor_m3135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_INTERNAL_set_textColor_m3135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m3136 (GUIStyleState_t669 * __this, Color_t17  ___value, MethodInfo* method)
{
	{
		GUIStyleState_INTERNAL_set_textColor_m3135(__this, (&___value), /*hidden argument*/&GUIStyleState_INTERNAL_set_textColor_m3135_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo RectOffset_Init_m3140_MethodInfo;
extern MethodInfo RectOffset_Cleanup_m3141_MethodInfo;
extern MethodInfo RectOffset_INTERNAL_CALL_Remove_m3149_MethodInfo;


// System.Void UnityEngine.RectOffset::.ctor()
extern "C" void RectOffset__ctor_m2637 (RectOffset_t449 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		RectOffset_Init_m3140(__this, /*hidden argument*/&RectOffset_Init_m3140_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern MethodInfo RectOffset__ctor_m3137_MethodInfo;
extern "C" void RectOffset__ctor_m3137 (RectOffset_t449 * __this, GUIStyle_t651 * ___sourceStyle, IntPtr_t ___source, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		GUIStyle_t651 * L_0 = ___sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		IntPtr_t L_1 = ___source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo RectOffset__ctor_m3138_MethodInfo;
extern "C" void RectOffset__ctor_m3138 (RectOffset_t449 * __this, int32_t ___left, int32_t ___right, int32_t ___top, int32_t ___bottom, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		RectOffset_Init_m3140(__this, /*hidden argument*/&RectOffset_Init_m3140_MethodInfo);
		int32_t L_0 = ___left;
		RectOffset_set_left_m3142(__this, L_0, /*hidden argument*/&RectOffset_set_left_m3142_MethodInfo);
		int32_t L_1 = ___right;
		RectOffset_set_right_m3144(__this, L_1, /*hidden argument*/&RectOffset_set_right_m3144_MethodInfo);
		int32_t L_2 = ___top;
		RectOffset_set_top_m3145(__this, L_2, /*hidden argument*/&RectOffset_set_top_m3145_MethodInfo);
		int32_t L_3 = ___bottom;
		RectOffset_set_bottom_m3147(__this, L_3, /*hidden argument*/&RectOffset_set_bottom_m3147_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectOffset::Finalize()
extern MethodInfo RectOffset_Finalize_m3139_MethodInfo;
extern "C" void RectOffset_Finalize_m3139 (RectOffset_t449 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GUIStyle_t651 * L_0 = (__this->___m_SourceStyle_1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			RectOffset_Cleanup_m3141(__this, /*hidden argument*/&RectOffset_Cleanup_m3141_MethodInfo);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.RectOffset::Init()
extern "C" void RectOffset_Init_m3140 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef void (*RectOffset_Init_m3140_ftn) (RectOffset_t449 *);
	static RectOffset_Init_m3140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Init_m3140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::Cleanup()
extern "C" void RectOffset_Cleanup_m3141 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef void (*RectOffset_Cleanup_m3141_ftn) (RectOffset_t449 *);
	static RectOffset_Cleanup_m3141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_Cleanup_m3141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C" int32_t RectOffset_get_left_m2631 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_left_m2631_ftn) (RectOffset_t449 *);
	static RectOffset_get_left_m2631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_left_m2631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_left(System.Int32)
extern "C" void RectOffset_set_left_m3142 (RectOffset_t449 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_left_m3142_ftn) (RectOffset_t449 *, int32_t);
	static RectOffset_set_left_m3142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_left_m3142_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C" int32_t RectOffset_get_right_m3143 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_right_m3143_ftn) (RectOffset_t449 *);
	static RectOffset_get_right_m3143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_right_m3143_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_right(System.Int32)
extern "C" void RectOffset_set_right_m3144 (RectOffset_t449 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_right_m3144_ftn) (RectOffset_t449 *, int32_t);
	static RectOffset_set_right_m3144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_right_m3144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C" int32_t RectOffset_get_top_m2632 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_top_m2632_ftn) (RectOffset_t449 *);
	static RectOffset_get_top_m2632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_top_m2632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_top(System.Int32)
extern "C" void RectOffset_set_top_m3145 (RectOffset_t449 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_top_m3145_ftn) (RectOffset_t449 *, int32_t);
	static RectOffset_set_top_m3145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_top_m3145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C" int32_t RectOffset_get_bottom_m3146 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_bottom_m3146_ftn) (RectOffset_t449 *);
	static RectOffset_get_bottom_m3146_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_bottom_m3146_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
extern "C" void RectOffset_set_bottom_m3147 (RectOffset_t449 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*RectOffset_set_bottom_m3147_ftn) (RectOffset_t449 *, int32_t);
	static RectOffset_set_bottom_m3147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_set_bottom_m3147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.RectOffset::get_horizontal()
extern "C" int32_t RectOffset_get_horizontal_m2622 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_horizontal_m2622_ftn) (RectOffset_t449 *);
	static RectOffset_get_horizontal_m2622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_horizontal_m2622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.RectOffset::get_vertical()
extern "C" int32_t RectOffset_get_vertical_m2623 (RectOffset_t449 * __this, MethodInfo* method)
{
	typedef int32_t (*RectOffset_get_vertical_m2623_ftn) (RectOffset_t449 *);
	static RectOffset_get_vertical_m2623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_get_vertical_m2623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
extern MethodInfo RectOffset_Remove_m3148_MethodInfo;
extern "C" Rect_t213  RectOffset_Remove_m3148 (RectOffset_t449 * __this, Rect_t213  ___rect, MethodInfo* method)
{
	{
		Rect_t213  L_0 = RectOffset_INTERNAL_CALL_Remove_m3149(NULL /*static, unused*/, __this, (&___rect), /*hidden argument*/&RectOffset_INTERNAL_CALL_Remove_m3149_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Rect UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)
extern "C" Rect_t213  RectOffset_INTERNAL_CALL_Remove_m3149 (Object_t * __this /* static, unused */, RectOffset_t449 * ___self, Rect_t213 * ___rect, MethodInfo* method)
{
	typedef Rect_t213  (*RectOffset_INTERNAL_CALL_Remove_m3149_ftn) (RectOffset_t449 *, Rect_t213 *);
	static RectOffset_INTERNAL_CALL_Remove_m3149_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectOffset_INTERNAL_CALL_Remove_m3149_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)");
	return _il2cpp_icall_func(___self, ___rect);
}
// System.String UnityEngine.RectOffset::ToString()
extern MethodInfo RectOffset_ToString_m3150_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* RectOffset_ToString_m3150 (RectOffset_t449 * __this, MethodInfo* method)
{
	static bool RectOffset_ToString_m3150_init;
	if (!RectOffset_ToString_m3150_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		RectOffset_ToString_m3150_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 4));
		int32_t L_1 = RectOffset_get_left_m2631(__this, /*hidden argument*/&RectOffset_get_left_m2631_MethodInfo);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		int32_t L_5 = RectOffset_get_right_m3143(__this, /*hidden argument*/&RectOffset_get_right_m3143_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		int32_t L_9 = RectOffset_get_top_m2632(__this, /*hidden argument*/&RectOffset_get_top_m2632_MethodInfo);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		int32_t L_13 = RectOffset_get_bottom_m3146(__this, /*hidden argument*/&RectOffset_get_bottom_m3146_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral327, L_12, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_16;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontStyle_t552_il2cpp_TypeInfo;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyleMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo GUIStyle_GetStyleStatePtr_m3159_MethodInfo;
extern MethodInfo GUIStyle_GetRectOffsetPtr_m3162_MethodInfo;
extern MethodInfo GUIStyle_Internal_GetLineHeight_m3169_MethodInfo;
extern MethodInfo GUIStyle_Init_m3154_MethodInfo;
extern MethodInfo GUIStyle_Cleanup_m3155_MethodInfo;
extern MethodInfo GUIStyle_Internal_GetCursorPixelPosition_m3174_MethodInfo;
extern MethodInfo GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3175_MethodInfo;
extern MethodInfo GUIStyle_Internal_CalcSize_m3177_MethodInfo;
extern MethodInfo GUIStyle_Internal_CalcHeight_m3179_MethodInfo;


// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m3151 (GUIStyle_t651 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		GUIStyle_Init_m3154(__this, /*hidden argument*/&GUIStyle_Init_m3154_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
extern MethodInfo GUIStyle__cctor_m3152_MethodInfo;
extern "C" void GUIStyle__cctor_m3152 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((GUIStyle_t651_StaticFields*)InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo)->static_fields)->___showKeyboardFocus_14 = 1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
extern MethodInfo GUIStyle_Finalize_m3153_MethodInfo;
extern "C" void GUIStyle_Finalize_m3153 (GUIStyle_t651 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GUIStyle_Cleanup_m3155(__this, /*hidden argument*/&GUIStyle_Cleanup_m3155_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m3154 (GUIStyle_t651 * __this, MethodInfo* method)
{
	typedef void (*GUIStyle_Init_m3154_ftn) (GUIStyle_t651 *);
	static GUIStyle_Init_m3154_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Init_m3154_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m3155 (GUIStyle_t651 * __this, MethodInfo* method)
{
	typedef void (*GUIStyle_Cleanup_m3155_ftn) (GUIStyle_t651 *);
	static GUIStyle_Cleanup_m3155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Cleanup_m3155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m3156 (GUIStyle_t651 * __this, MethodInfo* method)
{
	typedef String_t* (*GUIStyle_get_name_m3156_ftn) (GUIStyle_t651 *);
	static GUIStyle_get_name_m3156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_name_m3156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m3157 (GUIStyle_t651 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*GUIStyle_set_name_m3157_ftn) (GUIStyle_t651 *, String_t*);
	static GUIStyle_set_name_m3157_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_name_m3157_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t669 * GUIStyle_get_normal_m3158 (GUIStyle_t651 * __this, MethodInfo* method)
{
	{
		GUIStyleState_t669 * L_0 = (__this->___m_Normal_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetStyleStatePtr_m3159(__this, 0, /*hidden argument*/&GUIStyle_GetStyleStatePtr_m3159_MethodInfo);
		GUIStyleState_t669 * L_2 = (GUIStyleState_t669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyleState_t669_il2cpp_TypeInfo));
		GUIStyleState__ctor_m3130(L_2, __this, L_1, /*hidden argument*/&GUIStyleState__ctor_m3130_MethodInfo);
		__this->___m_Normal_1 = L_2;
	}

IL_001e:
	{
		GUIStyleState_t669 * L_3 = (__this->___m_Normal_1);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m3159 (GUIStyle_t651 * __this, int32_t ___idx, MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetStyleStatePtr_m3159_ftn) (GUIStyle_t651 *, int32_t);
	static GUIStyle_GetStyleStatePtr_m3159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m3159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t449 * GUIStyle_get_margin_m3160 (GUIStyle_t651 * __this, MethodInfo* method)
{
	{
		RectOffset_t449 * L_0 = (__this->___m_Margin_11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m3162(__this, 1, /*hidden argument*/&GUIStyle_GetRectOffsetPtr_m3162_MethodInfo);
		RectOffset_t449 * L_2 = (RectOffset_t449 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RectOffset_t449_il2cpp_TypeInfo));
		RectOffset__ctor_m3137(L_2, __this, L_1, /*hidden argument*/&RectOffset__ctor_m3137_MethodInfo);
		__this->___m_Margin_11 = L_2;
	}

IL_001e:
	{
		RectOffset_t449 * L_3 = (__this->___m_Margin_11);
		return L_3;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t449 * GUIStyle_get_padding_m3161 (GUIStyle_t651 * __this, MethodInfo* method)
{
	{
		RectOffset_t449 * L_0 = (__this->___m_Padding_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_1 = GUIStyle_GetRectOffsetPtr_m3162(__this, 2, /*hidden argument*/&GUIStyle_GetRectOffsetPtr_m3162_MethodInfo);
		RectOffset_t449 * L_2 = (RectOffset_t449 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RectOffset_t449_il2cpp_TypeInfo));
		RectOffset__ctor_m3137(L_2, __this, L_1, /*hidden argument*/&RectOffset__ctor_m3137_MethodInfo);
		__this->___m_Padding_10 = L_2;
	}

IL_001e:
	{
		RectOffset_t449 * L_3 = (__this->___m_Padding_10);
		return L_3;
	}
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m3162 (GUIStyle_t651 * __this, int32_t ___idx, MethodInfo* method)
{
	typedef IntPtr_t (*GUIStyle_GetRectOffsetPtr_m3162_ftn) (GUIStyle_t651 *, int32_t);
	static GUIStyle_GetRectOffsetPtr_m3162_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_m3162_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, ___idx);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m3163 (GUIStyle_t651 * __this, MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedWidth_m3163_ftn) (GUIStyle_t651 *);
	static GUIStyle_get_fixedWidth_m3163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m3163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m3164 (GUIStyle_t651 * __this, MethodInfo* method)
{
	typedef float (*GUIStyle_get_fixedHeight_m3164_ftn) (GUIStyle_t651 *);
	static GUIStyle_get_fixedHeight_m3164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m3164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m3165 (GUIStyle_t651 * __this, MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchWidth_m3165_ftn) (GUIStyle_t651 *);
	static GUIStyle_get_stretchWidth_m3165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m3165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m3166 (GUIStyle_t651 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchWidth_m3166_ftn) (GUIStyle_t651 *, bool);
	static GUIStyle_set_stretchWidth_m3166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchWidth_m3166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m3167 (GUIStyle_t651 * __this, MethodInfo* method)
{
	typedef bool (*GUIStyle_get_stretchHeight_m3167_ftn) (GUIStyle_t651 *);
	static GUIStyle_get_stretchHeight_m3167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m3167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m3168 (GUIStyle_t651 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GUIStyle_set_stretchHeight_m3168_ftn) (GUIStyle_t651 *, bool);
	static GUIStyle_set_stretchHeight_m3168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m3168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m3169 (Object_t * __this /* static, unused */, IntPtr_t ___target, MethodInfo* method)
{
	typedef float (*GUIStyle_Internal_GetLineHeight_m3169_ftn) (IntPtr_t);
	static GUIStyle_Internal_GetLineHeight_m3169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetLineHeight_m3169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	return _il2cpp_icall_func(___target);
}
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern MethodInfo GUIStyle_get_lineHeight_m3170_MethodInfo;
extern "C" float GUIStyle_get_lineHeight_m3170 (GUIStyle_t651 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		float L_1 = GUIStyle_Internal_GetLineHeight_m3169(NULL /*static, unused*/, L_0, /*hidden argument*/&GUIStyle_Internal_GetLineHeight_m3169_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_2 = roundf(L_1);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m3171 (Object_t * __this /* static, unused */, Font_t339 * ___font, MethodInfo* method)
{
	typedef void (*GUIStyle_SetDefaultFont_m3171_ftn) (Font_t339 *);
	static GUIStyle_SetDefaultFont_m3171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_m3171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font);
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t651 * GUIStyle_get_none_m3172 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_0 = ((GUIStyle_t651_StaticFields*)InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo)->static_fields)->___s_None_15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_1 = (GUIStyle_t651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle__ctor_m3151(L_1, /*hidden argument*/&GUIStyle__ctor_m3151_MethodInfo);
		((GUIStyle_t651_StaticFields*)InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo)->static_fields)->___s_None_15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_t651 * L_2 = ((GUIStyle_t651_StaticFields*)InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo)->static_fields)->___s_None_15;
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern MethodInfo GUIStyle_GetCursorPixelPosition_m3173_MethodInfo;
extern "C" Vector2_t62  GUIStyle_GetCursorPixelPosition_m3173 (GUIStyle_t651 * __this, Rect_t213  ___position, GUIContent_t500 * ___content, int32_t ___cursorStringIndex, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		Rect_t213  L_1 = ___position;
		GUIContent_t500 * L_2 = ___content;
		int32_t L_3 = ___cursorStringIndex;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_Internal_GetCursorPixelPosition_m3174(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (&V_0), /*hidden argument*/&GUIStyle_Internal_GetCursorPixelPosition_m3174_MethodInfo);
		Vector2_t62  L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m3174 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t213  ___position, GUIContent_t500 * ___content, int32_t ___cursorStringIndex, Vector2_t62 * ___ret, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___target;
		GUIContent_t500 * L_1 = ___content;
		int32_t L_2 = ___cursorStringIndex;
		Vector2_t62 * L_3 = ___ret;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3175(NULL /*static, unused*/, L_0, (&___position), L_1, L_2, L_3, /*hidden argument*/&GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3175_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3175 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t213 * ___position, GUIContent_t500 * ___content, int32_t ___cursorStringIndex, Vector2_t62 * ___ret, MethodInfo* method)
{
	typedef void (*GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3175_ftn) (IntPtr_t, Rect_t213 *, GUIContent_t500 *, int32_t, Vector2_t62 *);
	static GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3175_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___target, ___position, ___content, ___cursorStringIndex, ___ret);
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern MethodInfo GUIStyle_CalcSize_m3176_MethodInfo;
extern "C" Vector2_t62  GUIStyle_CalcSize_m3176 (GUIStyle_t651 * __this, GUIContent_t500 * ___content, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t500 * L_1 = ___content;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		GUIStyle_Internal_CalcSize_m3177(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/&GUIStyle_Internal_CalcSize_m3177_MethodInfo);
		Vector2_t62  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m3177 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t500 * ___content, Vector2_t62 * ___ret, MethodInfo* method)
{
	typedef void (*GUIStyle_Internal_CalcSize_m3177_ftn) (IntPtr_t, GUIContent_t500 *, Vector2_t62 *);
	static GUIStyle_Internal_CalcSize_m3177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSize_m3177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___target, ___content, ___ret);
}
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern MethodInfo GUIStyle_CalcHeight_m3178_MethodInfo;
extern "C" float GUIStyle_CalcHeight_m3178 (GUIStyle_t651 * __this, GUIContent_t500 * ___content, float ___width, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		GUIContent_t500 * L_1 = ___content;
		float L_2 = ___width;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t651_il2cpp_TypeInfo));
		float L_3 = GUIStyle_Internal_CalcHeight_m3179(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&GUIStyle_Internal_CalcHeight_m3179_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m3179 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t500 * ___content, float ___width, MethodInfo* method)
{
	typedef float (*GUIStyle_Internal_CalcHeight_m3179_ftn) (IntPtr_t, GUIContent_t500 *, float);
	static GUIStyle_Internal_CalcHeight_m3179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcHeight_m3179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(___target, ___content, ___width);
}
// System.String UnityEngine.GUIStyle::ToString()
extern MethodInfo GUIStyle_ToString_m3180_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* GUIStyle_ToString_m3180 (GUIStyle_t651 * __this, MethodInfo* method)
{
	static bool GUIStyle_ToString_m3180_init;
	if (!GUIStyle_ToString_m3180_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		GUIStyle_ToString_m3180_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 1));
		String_t* L_1 = GUIStyle_get_name_m3156(__this, /*hidden argument*/&GUIStyle_get_name_m3156_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		String_t* L_2 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral328, L_0, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_2;
	}
}
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboard_InternalConstructorHelperArguments_t670_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstrucMethodDeclarations.h"



// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboardType_t506_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardTypeMethodDeclarations.h"



// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchScreenKeyboard_t386_il2cpp_TypeInfo;
// UnityEngine.TouchScreenKeyboard
#include "UnityEngine_UnityEngine_TouchScreenKeyboardMethodDeclarations.h"

extern TypeInfo Convert_t802_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern MethodInfo Application_get_platform_m2410_MethodInfo;
extern MethodInfo Convert_ToUInt32_m3869_MethodInfo;
extern MethodInfo Convert_ToUInt32_m3870_MethodInfo;
extern MethodInfo TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3184_MethodInfo;
extern MethodInfo TouchScreenKeyboard_Destroy_m3182_MethodInfo;
extern MethodInfo TouchScreenKeyboard_Open_m3185_MethodInfo;
extern MethodInfo TouchScreenKeyboard__ctor_m3181_MethodInfo;


// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" void TouchScreenKeyboard__ctor_m3181 (TouchScreenKeyboard_t386 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method)
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t670  V_0 = {0};
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Initobj (InitializedTypeInfo(&TouchScreenKeyboard_InternalConstructorHelperArguments_t670_il2cpp_TypeInfo), (&V_0));
		int32_t L_0 = ___keyboardType;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TouchScreenKeyboardType_t506_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t802_il2cpp_TypeInfo));
		uint32_t L_3 = Convert_ToUInt32_m3869(NULL /*static, unused*/, L_2, /*hidden argument*/&Convert_ToUInt32_m3869_MethodInfo);
		(&V_0)->___keyboardType_0 = L_3;
		bool L_4 = ___autocorrection;
		uint32_t L_5 = Convert_ToUInt32_m3870(NULL /*static, unused*/, L_4, /*hidden argument*/&Convert_ToUInt32_m3870_MethodInfo);
		(&V_0)->___autocorrection_1 = L_5;
		bool L_6 = ___multiline;
		uint32_t L_7 = Convert_ToUInt32_m3870(NULL /*static, unused*/, L_6, /*hidden argument*/&Convert_ToUInt32_m3870_MethodInfo);
		(&V_0)->___multiline_2 = L_7;
		bool L_8 = ___secure;
		uint32_t L_9 = Convert_ToUInt32_m3870(NULL /*static, unused*/, L_8, /*hidden argument*/&Convert_ToUInt32_m3870_MethodInfo);
		(&V_0)->___secure_3 = L_9;
		bool L_10 = ___alert;
		uint32_t L_11 = Convert_ToUInt32_m3870(NULL /*static, unused*/, L_10, /*hidden argument*/&Convert_ToUInt32_m3870_MethodInfo);
		(&V_0)->___alert_4 = L_11;
		String_t* L_12 = ___text;
		String_t* L_13 = ___textPlaceholder;
		TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3184(__this, (&V_0), L_12, L_13, /*hidden argument*/&TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3184_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" void TouchScreenKeyboard_Destroy_m3182 (TouchScreenKeyboard_t386 * __this, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_Destroy_m3182_ftn) (TouchScreenKeyboard_t386 *);
	static TouchScreenKeyboard_Destroy_m3182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Destroy_m3182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern MethodInfo TouchScreenKeyboard_Finalize_m3183_MethodInfo;
extern "C" void TouchScreenKeyboard_Finalize_m3183 (TouchScreenKeyboard_t386 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		TouchScreenKeyboard_Destroy_m3182(__this, /*hidden argument*/&TouchScreenKeyboard_Destroy_m3182_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3184 (TouchScreenKeyboard_t386 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t670 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3184_ftn) (TouchScreenKeyboard_t386 *, TouchScreenKeyboard_InternalConstructorHelperArguments_t670 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	_il2cpp_icall_func(__this, ___arguments, ___text, ___textPlaceholder);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
extern MethodInfo TouchScreenKeyboard_get_isSupported_m2425_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_isSupported_m2425 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = Application_get_platform_m2410(NULL /*static, unused*/, /*hidden argument*/&Application_get_platform_m2410_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 0)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 2)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 3)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 4)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 5)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 6)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 7)
		{
			goto IL_0035;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)18))) == 8)
		{
			goto IL_0052;
		}
	}

IL_0035:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 0)
		{
			goto IL_0052;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 1)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 2)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)8)) == 3)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0056;
	}

IL_0052:
	{
		return 1;
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 0;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern MethodInfo TouchScreenKeyboard_Open_m2489_MethodInfo;
extern "C" TouchScreenKeyboard_t386 * TouchScreenKeyboard_Open_m2489 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, MethodInfo* method)
{
	String_t* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = ___secure;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t386 * L_8 = TouchScreenKeyboard_Open_m3185(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/&TouchScreenKeyboard_Open_m3185_MethodInfo);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
extern MethodInfo TouchScreenKeyboard_Open_m2490_MethodInfo;
extern "C" TouchScreenKeyboard_t386 * TouchScreenKeyboard_Open_m2490 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, MethodInfo* method)
{
	String_t* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___text;
		int32_t L_2 = ___keyboardType;
		bool L_3 = ___autocorrection;
		bool L_4 = ___multiline;
		bool L_5 = V_2;
		bool L_6 = V_1;
		String_t* L_7 = V_0;
		TouchScreenKeyboard_t386 * L_8 = TouchScreenKeyboard_Open_m3185(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/&TouchScreenKeyboard_Open_m3185_MethodInfo);
		return L_8;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" TouchScreenKeyboard_t386 * TouchScreenKeyboard_Open_m3185 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method)
{
	{
		String_t* L_0 = ___text;
		int32_t L_1 = ___keyboardType;
		bool L_2 = ___autocorrection;
		bool L_3 = ___multiline;
		bool L_4 = ___secure;
		bool L_5 = ___alert;
		String_t* L_6 = ___textPlaceholder;
		TouchScreenKeyboard_t386 * L_7 = (TouchScreenKeyboard_t386 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TouchScreenKeyboard_t386_il2cpp_TypeInfo));
		TouchScreenKeyboard__ctor_m3181(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/&TouchScreenKeyboard__ctor_m3181_MethodInfo);
		return L_7;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern MethodInfo TouchScreenKeyboard_get_text_m2412_MethodInfo;
extern "C" String_t* TouchScreenKeyboard_get_text_m2412 (TouchScreenKeyboard_t386 * __this, MethodInfo* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m2412_ftn) (TouchScreenKeyboard_t386 *);
	static TouchScreenKeyboard_get_text_m2412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m2412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern MethodInfo TouchScreenKeyboard_set_text_m2413_MethodInfo;
extern "C" void TouchScreenKeyboard_set_text_m2413 (TouchScreenKeyboard_t386 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m2413_ftn) (TouchScreenKeyboard_t386 *, String_t*);
	static TouchScreenKeyboard_set_text_m2413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m2413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern MethodInfo TouchScreenKeyboard_set_hideInput_m2488_MethodInfo;
extern "C" void TouchScreenKeyboard_set_hideInput_m2488 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_hideInput_m2488_ftn) (bool);
	static TouchScreenKeyboard_set_hideInput_m2488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_hideInput_m2488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern MethodInfo TouchScreenKeyboard_get_active_m2411_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_active_m2411 (TouchScreenKeyboard_t386 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m2411_ftn) (TouchScreenKeyboard_t386 *);
	static TouchScreenKeyboard_get_active_m2411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m2411_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern MethodInfo TouchScreenKeyboard_set_active_m2487_MethodInfo;
extern "C" void TouchScreenKeyboard_set_active_m2487 (TouchScreenKeyboard_t386 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m2487_ftn) (TouchScreenKeyboard_t386 *, bool);
	static TouchScreenKeyboard_set_active_m2487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m2487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern MethodInfo TouchScreenKeyboard_get_done_m2429_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_done_m2429 (TouchScreenKeyboard_t386 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_done_m2429_ftn) (TouchScreenKeyboard_t386 *);
	static TouchScreenKeyboard_get_done_m2429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_done_m2429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_done()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
extern MethodInfo TouchScreenKeyboard_get_wasCanceled_m2426_MethodInfo;
extern "C" bool TouchScreenKeyboard_get_wasCanceled_m2426 (TouchScreenKeyboard_t386 * __this, MethodInfo* method)
{
	typedef bool (*TouchScreenKeyboard_get_wasCanceled_m2426_ftn) (TouchScreenKeyboard_t386 *);
	static TouchScreenKeyboard_get_wasCanceled_m2426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_wasCanceled_m2426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_wasCanceled()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Event_t391_il2cpp_TypeInfo;

// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// System.Char
#include "mscorlib_System_Char.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern TypeInfo Vector2_t62_il2cpp_TypeInfo;
extern TypeInfo EventModifiers_t674_il2cpp_TypeInfo;
extern TypeInfo KeyCode_t672_il2cpp_TypeInfo;
extern MethodInfo Event_Internal_GetMousePosition_m3191_MethodInfo;
extern MethodInfo Event_Init_m3186_MethodInfo;
extern MethodInfo Event_Cleanup_m3188_MethodInfo;
extern MethodInfo Event__ctor_m2422_MethodInfo;
extern MethodInfo Event_Internal_SetNativeEvent_m3194_MethodInfo;
extern MethodInfo Event_get_isKey_m3196_MethodInfo;
extern MethodInfo Event_get_keyCode_m2442_MethodInfo;
extern MethodInfo Event_get_isMouse_m3197_MethodInfo;
extern MethodInfo Event_get_mousePosition_m3190_MethodInfo;
extern MethodInfo Vector2_GetHashCode_m3202_MethodInfo;
extern MethodInfo Event_get_modifiers_m2441_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m3871_MethodInfo;
extern MethodInfo Vector2_op_Equality_m2683_MethodInfo;
extern MethodInfo Event_get_character_m2443_MethodInfo;
extern MethodInfo Event_get_commandName_m3192_MethodInfo;
extern MethodInfo String_Concat_m795_MethodInfo;


// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m2422 (Event_t391 * __this, MethodInfo* method)
{
	{
		Object__ctor_m373(__this, /*hidden argument*/&Object__ctor_m373_MethodInfo);
		Event_Init_m3186(__this, /*hidden argument*/&Event_Init_m3186_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m3186 (Event_t391 * __this, MethodInfo* method)
{
	typedef void (*Event_Init_m3186_ftn) (Event_t391 *);
	static Event_Init_m3186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Init_m3186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Event::Finalize()
extern MethodInfo Event_Finalize_m3187_MethodInfo;
extern "C" void Event_Finalize_m3187 (Event_t391 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Event_Cleanup_m3188(__this, /*hidden argument*/&Event_Cleanup_m3188_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m3188 (Event_t391 * __this, MethodInfo* method)
{
	typedef void (*Event_Cleanup_m3188_ftn) (Event_t391 *);
	static Event_Cleanup_m3188_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Cleanup_m3188_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern MethodInfo Event_get_rawType_m2445_MethodInfo;
extern "C" int32_t Event_get_rawType_m2445 (Event_t391 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_rawType_m2445_ftn) (Event_t391 *);
	static Event_get_rawType_m2445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_rawType_m2445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m3189 (Event_t391 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_type_m3189_ftn) (Event_t391 *);
	static Event_get_type_m3189_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_type_m3189_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t62  Event_get_mousePosition_m3190 (Event_t391 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		Event_Internal_GetMousePosition_m3191(__this, (&V_0), /*hidden argument*/&Event_Internal_GetMousePosition_m3191_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m3191 (Event_t391 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*Event_Internal_GetMousePosition_m3191_ftn) (Event_t391 *, Vector2_t62 *);
	static Event_Internal_GetMousePosition_m3191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_GetMousePosition_m3191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m2441 (Event_t391 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_modifiers_m2441_ftn) (Event_t391 *);
	static Event_get_modifiers_m2441_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_modifiers_m2441_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m2443 (Event_t391 * __this, MethodInfo* method)
{
	typedef uint16_t (*Event_get_character_m2443_ftn) (Event_t391 *);
	static Event_get_character_m2443_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_character_m2443_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m3192 (Event_t391 * __this, MethodInfo* method)
{
	typedef String_t* (*Event_get_commandName_m3192_ftn) (Event_t391 *);
	static Event_get_commandName_m3192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_commandName_m3192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m2442 (Event_t391 * __this, MethodInfo* method)
{
	typedef int32_t (*Event_get_keyCode_m2442_ftn) (Event_t391 *);
	static Event_get_keyCode_m2442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_get_keyCode_m2442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t391 * Event_get_current_m3193 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Event_t391 * L_0 = ((Event_t391_StaticFields*)InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo)->static_fields)->___s_Current_1;
		return L_0;
	}
}
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m3194 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, MethodInfo* method)
{
	typedef void (*Event_Internal_SetNativeEvent_m3194_ftn) (IntPtr_t);
	static Event_Internal_SetNativeEvent_m3194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_Internal_SetNativeEvent_m3194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(___ptr);
}
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern MethodInfo Event_Internal_MakeMasterEventCurrent_m3195_MethodInfo;
extern "C" void Event_Internal_MakeMasterEventCurrent_m3195 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Event_t391 * L_0 = ((Event_t391_StaticFields*)InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Event_t391 * L_1 = (Event_t391 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo));
		Event__ctor_m2422(L_1, /*hidden argument*/&Event__ctor_m2422_MethodInfo);
		((Event_t391_StaticFields*)InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2 = L_1;
	}

IL_0014:
	{
		Event_t391 * L_2 = ((Event_t391_StaticFields*)InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2;
		((Event_t391_StaticFields*)InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo)->static_fields)->___s_Current_1 = L_2;
		Event_t391 * L_3 = ((Event_t391_StaticFields*)InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo)->static_fields)->___s_MasterEvent_2;
		NullCheck(L_3);
		IntPtr_t L_4 = (L_3->___m_Ptr_0);
		Event_Internal_SetNativeEvent_m3194(NULL /*static, unused*/, L_4, /*hidden argument*/&Event_Internal_SetNativeEvent_m3194_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern MethodInfo Event_PopEvent_m2446_MethodInfo;
extern "C" bool Event_PopEvent_m2446 (Object_t * __this /* static, unused */, Event_t391 * ___outEvent, MethodInfo* method)
{
	typedef bool (*Event_PopEvent_m2446_ftn) (Event_t391 *);
	static Event_PopEvent_m2446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Event_PopEvent_m2446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(___outEvent);
}
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m3196 (Event_t391 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m3197 (Event_t391 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Event::GetHashCode()
extern MethodInfo Event_GetHashCode_m3198_MethodInfo;
extern "C" int32_t Event_GetHashCode_m3198 (Event_t391 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t62  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = Event_get_isKey_m3196(__this, /*hidden argument*/&Event_get_isKey_m3196_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = Event_get_keyCode_m2442(__this, /*hidden argument*/&Event_get_keyCode_m2442_MethodInfo);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = Event_get_isMouse_m3197(__this, /*hidden argument*/&Event_get_isMouse_m3197_MethodInfo);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector2_t62  L_3 = Event_get_mousePosition_m3190(__this, /*hidden argument*/&Event_get_mousePosition_m3190_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = Vector2_GetHashCode_m3202((&V_1), /*hidden argument*/&Vector2_GetHashCode_m3202_MethodInfo);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = Event_get_modifiers_m2441(__this, /*hidden argument*/&Event_get_modifiers_m2441_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern MethodInfo Event_Equals_m3199_MethodInfo;
extern "C" bool Event_Equals_m3199 (Event_t391 * __this, Object_t * ___obj, MethodInfo* method)
{
	Event_t391 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___obj;
		bool L_2 = Object_ReferenceEquals_m3871(NULL /*static, unused*/, __this, L_1, /*hidden argument*/&Object_ReferenceEquals_m3871_MethodInfo);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		Object_t * L_3 = ___obj;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2196(L_3, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		Type_t * L_5 = Object_GetType_m2196(__this, /*hidden argument*/&Object_GetType_m2196_MethodInfo);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		Object_t * L_6 = ___obj;
		V_0 = ((Event_t391 *)Castclass(L_6, InitializedTypeInfo(&Event_t391_il2cpp_TypeInfo)));
		int32_t L_7 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		Event_t391 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m3189(L_8, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = Event_get_modifiers_m2441(__this, /*hidden argument*/&Event_get_modifiers_m2441_MethodInfo);
		Event_t391 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = Event_get_modifiers_m2441(L_11, /*hidden argument*/&Event_get_modifiers_m2441_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = Event_get_isKey_m3196(__this, /*hidden argument*/&Event_get_isKey_m3196_MethodInfo);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = Event_get_keyCode_m2442(__this, /*hidden argument*/&Event_get_keyCode_m2442_MethodInfo);
		Event_t391 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Event_get_keyCode_m2442(L_15, /*hidden argument*/&Event_get_keyCode_m2442_MethodInfo);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = Event_get_isMouse_m3197(__this, /*hidden argument*/&Event_get_isMouse_m3197_MethodInfo);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		Vector2_t62  L_18 = Event_get_mousePosition_m3190(__this, /*hidden argument*/&Event_get_mousePosition_m3190_MethodInfo);
		Event_t391 * L_19 = V_0;
		NullCheck(L_19);
		Vector2_t62  L_20 = Event_get_mousePosition_m3190(L_19, /*hidden argument*/&Event_get_mousePosition_m3190_MethodInfo);
		bool L_21 = Vector2_op_Equality_m2683(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Vector2_op_Equality_m2683_MethodInfo);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
// System.String UnityEngine.Event::ToString()
extern MethodInfo Event_ToString_m3200_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Event_ToString_m3200 (Event_t391 * __this, MethodInfo* method)
{
	static bool Event_ToString_m3200_init;
	if (!Event_ToString_m3200_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Event_ToString_m3200_init = true;
	}
	{
		bool L_0 = Event_get_isKey_m3196(__this, /*hidden argument*/&Event_get_isKey_m3196_MethodInfo);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = Event_get_character_m2443(__this, /*hidden argument*/&Event_get_character_m2443_MethodInfo);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t219* L_2 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 3));
		int32_t L_3 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&EventType_t673_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		ObjectU5BU5D_t219* L_6 = L_2;
		int32_t L_7 = Event_get_modifiers_m2441(__this, /*hidden argument*/&Event_get_modifiers_m2441_MethodInfo);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&EventModifiers_t674_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 1)) = (Object_t *)L_9;
		ObjectU5BU5D_t219* L_10 = L_6;
		int32_t L_11 = Event_get_keyCode_m2442(__this, /*hidden argument*/&Event_get_keyCode_m2442_MethodInfo);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&KeyCode_t672_il2cpp_TypeInfo), &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		ArrayElementTypeCheck (L_10, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 2)) = (Object_t *)L_13;
		String_t* L_14 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral329, L_10, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_14;
	}

IL_0051:
	{
		ObjectU5BU5D_t219* L_15 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 8));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral330);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)(String_t*) &_stringLiteral330;
		ObjectU5BU5D_t219* L_16 = L_15;
		int32_t L_17 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&EventType_t673_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1)) = (Object_t *)L_19;
		ObjectU5BU5D_t219* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral331);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2)) = (Object_t *)(String_t*) &_stringLiteral331;
		ObjectU5BU5D_t219* L_21 = L_20;
		uint16_t L_22 = Event_get_character_m2443(__this, /*hidden argument*/&Event_get_character_m2443_MethodInfo);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Int32_t92_il2cpp_TypeInfo), &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t219* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral332);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)(String_t*) &_stringLiteral332;
		ObjectU5BU5D_t219* L_26 = L_25;
		int32_t L_27 = Event_get_modifiers_m2441(__this, /*hidden argument*/&Event_get_modifiers_m2441_MethodInfo);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(InitializedTypeInfo(&EventModifiers_t674_il2cpp_TypeInfo), &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5)) = (Object_t *)L_29;
		ObjectU5BU5D_t219* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, (String_t*) &_stringLiteral333);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6)) = (Object_t *)(String_t*) &_stringLiteral333;
		ObjectU5BU5D_t219* L_31 = L_30;
		int32_t L_32 = Event_get_keyCode_m2442(__this, /*hidden argument*/&Event_get_keyCode_m2442_MethodInfo);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&KeyCode_t672_il2cpp_TypeInfo), &L_33);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 7);
		ArrayElementTypeCheck (L_31, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 7)) = (Object_t *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_35 = String_Concat_m2171(NULL /*static, unused*/, L_31, /*hidden argument*/&String_Concat_m2171_MethodInfo);
		String_t* L_36 = UnityString_Format_m3361(NULL /*static, unused*/, L_35, ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = Event_get_isMouse_m3197(__this, /*hidden argument*/&Event_get_isMouse_m3197_MethodInfo);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		ObjectU5BU5D_t219* L_38 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 3));
		int32_t L_39 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(InitializedTypeInfo(&EventType_t673_il2cpp_TypeInfo), &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 0);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 0)) = (Object_t *)L_41;
		ObjectU5BU5D_t219* L_42 = L_38;
		Vector2_t62  L_43 = Event_get_mousePosition_m3190(__this, /*hidden argument*/&Event_get_mousePosition_m3190_MethodInfo);
		Vector2_t62  L_44 = L_43;
		Object_t * L_45 = Box(InitializedTypeInfo(&Vector2_t62_il2cpp_TypeInfo), &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		ArrayElementTypeCheck (L_42, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 1)) = (Object_t *)L_45;
		ObjectU5BU5D_t219* L_46 = L_42;
		int32_t L_47 = Event_get_modifiers_m2441(__this, /*hidden argument*/&Event_get_modifiers_m2441_MethodInfo);
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(InitializedTypeInfo(&EventModifiers_t674_il2cpp_TypeInfo), &L_48);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		ArrayElementTypeCheck (L_46, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 2)) = (Object_t *)L_49;
		String_t* L_50 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral334, L_46, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		ObjectU5BU5D_t219* L_53 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 2));
		int32_t L_54 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		int32_t L_55 = L_54;
		Object_t * L_56 = Box(InitializedTypeInfo(&EventType_t673_il2cpp_TypeInfo), &L_55);
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
		ArrayElementTypeCheck (L_53, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 0)) = (Object_t *)L_56;
		ObjectU5BU5D_t219* L_57 = L_53;
		String_t* L_58 = Event_get_commandName_m3192(__this, /*hidden argument*/&Event_get_commandName_m3192_MethodInfo);
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 1);
		ArrayElementTypeCheck (L_57, L_58);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_57, 1)) = (Object_t *)L_58;
		String_t* L_59 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral335, L_57, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_60 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		int32_t L_61 = Event_get_type_m3189(__this, /*hidden argument*/&Event_get_type_m3189_MethodInfo);
		int32_t L_62 = L_61;
		Object_t * L_63 = Box(InitializedTypeInfo(&EventType_t673_il2cpp_TypeInfo), &L_62);
		String_t* L_64 = String_Concat_m795(NULL /*static, unused*/, L_60, L_63, /*hidden argument*/&String_Concat_m795_MethodInfo);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void Event_t391_marshal(const Event_t391& unmarshaled, Event_t391_marshaled& marshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
void Event_t391_marshal_back(const Event_t391_marshaled& marshaled, Event_t391& unmarshaled)
{
	Il2CppCodeGenException* ___s_Current_1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(___s_Current_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void Event_t391_marshal_cleanup(Event_t391_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCodeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiersMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
extern TypeInfo IndexOutOfRangeException_t803_il2cpp_TypeInfo;
extern TypeInfo Vector3_t31_il2cpp_TypeInfo;
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern MethodInfo IndexOutOfRangeException__ctor_m3872_MethodInfo;
extern MethodInfo Vector2__ctor_m252_MethodInfo;
extern MethodInfo Single_Equals_m3873_MethodInfo;
extern MethodInfo Vector2_op_Subtraction_m2192_MethodInfo;
extern MethodInfo Vector2_SqrMagnitude_m3204_MethodInfo;
extern MethodInfo Vector3__ctor_m348_MethodInfo;


// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m252 (Vector2_t62 * __this, float ___x, float ___y, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern MethodInfo Vector2_get_Item_m2387_MethodInfo;
extern "C" float Vector2_get_Item_m2387 (Vector2_t62 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->___x_1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->___y_2);
		return L_4;
	}

IL_0022:
	{
		IndexOutOfRangeException_t803 * L_5 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_5, (String_t*) &_stringLiteral336, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern MethodInfo Vector2_set_Item_m2396_MethodInfo;
extern "C" void Vector2_set_Item_m2396 (Vector2_t62 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = ___value;
		__this->___x_1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = ___value;
		__this->___y_2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		IndexOutOfRangeException_t803 * L_5 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_5, (String_t*) &_stringLiteral336, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_Scale_m2477_MethodInfo;
extern "C" Vector2_t62  Vector2_Scale_m2477 (Object_t * __this /* static, unused */, Vector2_t62  ___a, Vector2_t62  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t62  L_4 = {0};
		Vector2__ctor_m252(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_4;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern MethodInfo Vector2_ToString_m3201_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Vector2_ToString_m3201 (Vector2_t62 * __this, MethodInfo* method)
{
	static bool Vector2_ToString_m3201_init;
	if (!Vector2_ToString_m3201_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Vector2_ToString_m3201_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral337, L_4, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m3202 (Vector2_t62 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3845(L_0, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3845(L_2, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern MethodInfo Vector2_Equals_m3203_MethodInfo;
extern "C" bool Vector2_Equals_m3203 (Vector2_t62 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Vector2_t62_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t62 *)((Vector2_t62 *)UnBox (L_1, InitializedTypeInfo(&Vector2_t62_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3873(L_2, L_3, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3873(L_5, L_6, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern MethodInfo Vector2_get_sqrMagnitude_m2174_MethodInfo;
extern "C" float Vector2_get_sqrMagnitude_m2174 (Vector2_t62 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m3204 (Object_t * __this /* static, unused */, Vector2_t62  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t62  Vector2_get_zero_m2173 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = {0};
		Vector2__ctor_m252(&L_0, (0.0f), (0.0f), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern MethodInfo Vector2_get_one_m2383_MethodInfo;
extern "C" Vector2_t62  Vector2_get_one_m2383 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = {0};
		Vector2__ctor_m252(&L_0, (1.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern MethodInfo Vector2_get_up_m2625_MethodInfo;
extern "C" Vector2_t62  Vector2_get_up_m2625 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = {0};
		Vector2__ctor_m252(&L_0, (0.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_op_Addition_m882_MethodInfo;
extern "C" Vector2_t62  Vector2_op_Addition_m882 (Object_t * __this /* static, unused */, Vector2_t62  ___a, Vector2_t62  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t62  L_4 = {0};
		Vector2__ctor_m252(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t62  Vector2_op_Subtraction_m2192 (Object_t * __this /* static, unused */, Vector2_t62  ___a, Vector2_t62  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t62  L_4 = {0};
		Vector2__ctor_m252(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern MethodInfo Vector2_op_Multiply_m2384_MethodInfo;
extern "C" Vector2_t62  Vector2_op_Multiply_m2384 (Object_t * __this /* static, unused */, Vector2_t62  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t62  L_4 = {0};
		Vector2__ctor_m252(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern MethodInfo Vector2_op_Division_m2440_MethodInfo;
extern "C" Vector2_t62  Vector2_op_Division_m2440 (Object_t * __this /* static, unused */, Vector2_t62  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t62  L_4 = {0};
		Vector2__ctor_m252(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m2683 (Object_t * __this /* static, unused */, Vector2_t62  ___lhs, Vector2_t62  ___rhs, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = ___lhs;
		Vector2_t62  L_1 = ___rhs;
		Vector2_t62  L_2 = Vector2_op_Subtraction_m2192(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector2_op_Subtraction_m2192_MethodInfo);
		float L_3 = Vector2_SqrMagnitude_m3204(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector2_SqrMagnitude_m3204_MethodInfo);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo Vector2_op_Inequality_m2469_MethodInfo;
extern "C" bool Vector2_op_Inequality_m2469 (Object_t * __this /* static, unused */, Vector2_t62  ___lhs, Vector2_t62  ___rhs, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = ___lhs;
		Vector2_t62  L_1 = ___rhs;
		Vector2_t62  L_2 = Vector2_op_Subtraction_m2192(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector2_op_Subtraction_m2192_MethodInfo);
		float L_3 = Vector2_SqrMagnitude_m3204(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector2_SqrMagnitude_m3204_MethodInfo);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern MethodInfo Vector2_op_Implicit_m772_MethodInfo;
extern "C" Vector2_t62  Vector2_op_Implicit_m772 (Object_t * __this /* static, unused */, Vector3_t31  ___v, MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector2_t62  L_2 = {0};
		Vector2__ctor_m252(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern MethodInfo Vector2_op_Implicit_m2236_MethodInfo;
extern "C" Vector3_t31  Vector2_op_Implicit_m2236 (Object_t * __this /* static, unused */, Vector2_t62  ___v, MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector3_t31  L_2 = {0};
		Vector3__ctor_m348(&L_2, L_0, L_1, (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Vector3_Normalize_m3208_MethodInfo;
extern MethodInfo Mathf_Sqrt_m327_MethodInfo;
extern MethodInfo Mathf_Clamp01_m2362_MethodInfo;
extern MethodInfo Vector3_INTERNAL_CALL_Slerp_m3205_MethodInfo;
extern MethodInfo Vector3_Magnitude_m3211_MethodInfo;
extern MethodInfo Vector3_op_Division_m3214_MethodInfo;
extern MethodInfo Vector3_get_zero_m259_MethodInfo;
extern MethodInfo Single_ToString_m3874_MethodInfo;
extern MethodInfo Vector3_get_normalized_m2557_MethodInfo;
extern MethodInfo Vector3_Dot_m281_MethodInfo;
extern MethodInfo Mathf_Acos_m3304_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m283_MethodInfo;
extern MethodInfo Vector3_SqrMagnitude_m3212_MethodInfo;


// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m348 (Vector3_t31 * __this, float ___x, float ___y, float ___z, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern MethodInfo Vector3__ctor_m901_MethodInfo;
extern "C" void Vector3__ctor_m901 (Vector3_t31 * __this, float ___x, float ___y, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_Lerp_m791_MethodInfo;
extern "C" Vector3_t31  Vector3_Lerp_m791 (Object_t * __this /* static, unused */, Vector3_t31  ___from, Vector3_t31  ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m2362(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m2362_MethodInfo);
		___t = L_1;
		float L_2 = ((&___from)->___x_1);
		float L_3 = ((&___to)->___x_1);
		float L_4 = ((&___from)->___x_1);
		float L_5 = ___t;
		float L_6 = ((&___from)->___y_2);
		float L_7 = ((&___to)->___y_2);
		float L_8 = ((&___from)->___y_2);
		float L_9 = ___t;
		float L_10 = ((&___from)->___z_3);
		float L_11 = ((&___to)->___z_3);
		float L_12 = ((&___from)->___z_3);
		float L_13 = ___t;
		Vector3_t31  L_14 = {0};
		Vector3__ctor_m348(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_14;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_Slerp_m308_MethodInfo;
extern "C" Vector3_t31  Vector3_Slerp_m308 (Object_t * __this /* static, unused */, Vector3_t31  ___from, Vector3_t31  ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___t;
		Vector3_t31  L_1 = Vector3_INTERNAL_CALL_Slerp_m3205(NULL /*static, unused*/, (&___from), (&___to), L_0, /*hidden argument*/&Vector3_INTERNAL_CALL_Slerp_m3205_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t31  Vector3_INTERNAL_CALL_Slerp_m3205 (Object_t * __this /* static, unused */, Vector3_t31 * ___from, Vector3_t31 * ___to, float ___t, MethodInfo* method)
{
	typedef Vector3_t31  (*Vector3_INTERNAL_CALL_Slerp_m3205_ftn) (Vector3_t31 *, Vector3_t31 *, float);
	static Vector3_INTERNAL_CALL_Slerp_m3205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Vector3_INTERNAL_CALL_Slerp_m3205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)");
	return _il2cpp_icall_func(___from, ___to, ___t);
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern MethodInfo Vector3_get_Item_m2532_MethodInfo;
extern "C" float Vector3_get_Item_m2532 (Vector3_t31 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_002e:
	{
		IndexOutOfRangeException_t803 * L_5 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_5, (String_t*) &_stringLiteral338, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern MethodInfo Vector3_set_Item_m2533_MethodInfo;
extern "C" void Vector3_set_Item_m2533 (Vector3_t31 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		IndexOutOfRangeException_t803 * L_5 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_5, (String_t*) &_stringLiteral338, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern MethodInfo Vector3_GetHashCode_m3206_MethodInfo;
extern "C" int32_t Vector3_GetHashCode_m3206 (Vector3_t31 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3845(L_0, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3845(L_2, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3845(L_4, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern MethodInfo Vector3_Equals_m3207_MethodInfo;
extern "C" bool Vector3_Equals_m3207 (Vector3_t31 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t31 *)((Vector3_t31 *)UnBox (L_1, InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3873(L_2, L_3, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3873(L_5, L_6, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m3873(L_8, L_9, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t31  Vector3_Normalize_m3208 (Object_t * __this /* static, unused */, Vector3_t31  ___value, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t31  L_0 = ___value;
		float L_1 = Vector3_Magnitude_m3211(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_Magnitude_m3211_MethodInfo);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t31  L_3 = ___value;
		float L_4 = V_0;
		Vector3_t31  L_5 = Vector3_op_Division_m3214(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Division_m3214_MethodInfo);
		return L_5;
	}

IL_001a:
	{
		Vector3_t31  L_6 = Vector3_get_zero_m259(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m259_MethodInfo);
		return L_6;
	}
}
// System.Void UnityEngine.Vector3::Normalize()
extern MethodInfo Vector3_Normalize_m361_MethodInfo;
extern "C" void Vector3_Normalize_m361 (Vector3_t31 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector3_Magnitude_m3211(NULL /*static, unused*/, (*(Vector3_t31 *)__this), /*hidden argument*/&Vector3_Magnitude_m3211_MethodInfo);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_002e;
		}
	}
	{
		float L_2 = V_0;
		Vector3_t31  L_3 = Vector3_op_Division_m3214(NULL /*static, unused*/, (*(Vector3_t31 *)__this), L_2, /*hidden argument*/&Vector3_op_Division_m3214_MethodInfo);
		*__this = L_3;
		goto IL_0039;
	}

IL_002e:
	{
		Vector3_t31  L_4 = Vector3_get_zero_m259(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m259_MethodInfo);
		*__this = L_4;
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t31  Vector3_get_normalized_m2557 (Vector3_t31 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Vector3_Normalize_m3208(NULL /*static, unused*/, (*(Vector3_t31 *)__this), /*hidden argument*/&Vector3_Normalize_m3208_MethodInfo);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern MethodInfo Vector3_ToString_m3209_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m3209 (Vector3_t31 * __this, MethodInfo* method)
{
	static bool Vector3_ToString_m3209_init;
	if (!Vector3_ToString_m3209_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Vector3_ToString_m3209_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral339, L_8, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_12;
	}
}
// System.String UnityEngine.Vector3::ToString(System.String)
extern MethodInfo Vector3_ToString_m3210_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Vector3_ToString_m3210 (Vector3_t31 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Vector3_ToString_m3210_init;
	if (!Vector3_ToString_m3210_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Vector3_ToString_m3210_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 3));
		float* L_1 = &(__this->___x_1);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3874(L_1, L_2, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float* L_5 = &(__this->___y_2);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3874(L_5, L_6, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float* L_9 = &(__this->___z_3);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3874(L_9, L_10, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral340, L_8, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m281 (Object_t * __this /* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Angle_m285_MethodInfo;
extern "C" float Vector3_Angle_m285 (Object_t * __this /* static, unused */, Vector3_t31  ___from, Vector3_t31  ___to, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Vector3_get_normalized_m2557((&___from), /*hidden argument*/&Vector3_get_normalized_m2557_MethodInfo);
		Vector3_t31  L_1 = Vector3_get_normalized_m2557((&___to), /*hidden argument*/&Vector3_get_normalized_m2557_MethodInfo);
		float L_2 = Vector3_Dot_m281(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Dot_m281_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_3 = Mathf_Clamp_m315(NULL /*static, unused*/, L_2, (-1.0f), (1.0f), /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		float L_4 = acosf(L_3);
		return ((float)((float)L_4*(float)(57.29578f)));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Distance_m797_MethodInfo;
extern "C" float Vector3_Distance_m797 (Object_t * __this /* static, unused */, Vector3_t31  ___a, Vector3_t31  ___b, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m348((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = ((&V_0)->___y_2);
		float L_10 = ((&V_0)->___z_3);
		float L_11 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" float Vector3_Magnitude_m3211 (Object_t * __this /* static, unused */, Vector3_t31  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
extern MethodInfo Vector3_get_magnitude_m284_MethodInfo;
extern "C" float Vector3_get_magnitude_m284 (Vector3_t31 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m3212 (Object_t * __this /* static, unused */, Vector3_t31  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern MethodInfo Vector3_get_sqrMagnitude_m2561_MethodInfo;
extern "C" float Vector3_get_sqrMagnitude_m2561 (Vector3_t31 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Min_m2542_MethodInfo;
extern "C" Vector3_t31  Vector3_Min_m2542 (Object_t * __this /* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_2 = Mathf_Min_m270(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Min_m270_MethodInfo);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Min_m270(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Min_m270_MethodInfo);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Min_m270(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Mathf_Min_m270_MethodInfo);
		Vector3_t31  L_9 = {0};
		Vector3__ctor_m348(&L_9, L_2, L_5, L_8, /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_Max_m2543_MethodInfo;
extern "C" Vector3_t31  Vector3_Max_m2543 (Object_t * __this /* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_2 = Mathf_Max_m269(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		float L_3 = ((&___lhs)->___y_2);
		float L_4 = ((&___rhs)->___y_2);
		float L_5 = Mathf_Max_m269(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		float L_6 = ((&___lhs)->___z_3);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = Mathf_Max_m269(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		Vector3_t31  L_9 = {0};
		Vector3__ctor_m348(&L_9, L_2, L_5, L_8, /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t31  Vector3_get_zero_m259 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern MethodInfo Vector3_get_one_m255_MethodInfo;
extern "C" Vector3_t31  Vector3_get_one_m255 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern MethodInfo Vector3_get_forward_m257_MethodInfo;
extern "C" Vector3_t31  Vector3_get_forward_m257 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern MethodInfo Vector3_get_back_m3213_MethodInfo;
extern "C" Vector3_t31  Vector3_get_back_m3213 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern MethodInfo Vector3_get_up_m258_MethodInfo;
extern "C" Vector3_t31  Vector3_get_up_m258 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern MethodInfo Vector3_get_down_m807_MethodInfo;
extern "C" Vector3_t31  Vector3_get_down_m807 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (0.0f), (-1.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern MethodInfo Vector3_get_left_m786_MethodInfo;
extern "C" Vector3_t31  Vector3_get_left_m786 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern MethodInfo Vector3_get_right_m2563_MethodInfo;
extern "C" Vector3_t31  Vector3_get_right_m2563 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = {0};
		Vector3__ctor_m348(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Addition_m341_MethodInfo;
extern "C" Vector3_t31  Vector3_op_Addition_m341 (Object_t * __this /* static, unused */, Vector3_t31  ___a, Vector3_t31  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t31  L_6 = {0};
		Vector3__ctor_m348(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t31  Vector3_op_Subtraction_m283 (Object_t * __this /* static, unused */, Vector3_t31  ___a, Vector3_t31  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t31  L_6 = {0};
		Vector3__ctor_m348(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern MethodInfo Vector3_op_Multiply_m275_MethodInfo;
extern "C" Vector3_t31  Vector3_op_Multiply_m275 (Object_t * __this /* static, unused */, Vector3_t31  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t31  L_6 = {0};
		Vector3__ctor_m348(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Multiply_m340_MethodInfo;
extern "C" Vector3_t31  Vector3_op_Multiply_m340 (Object_t * __this /* static, unused */, float ___d, Vector3_t31  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t31  L_6 = {0};
		Vector3__ctor_m348(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t31  Vector3_op_Division_m3214 (Object_t * __this /* static, unused */, Vector3_t31  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t31  L_6 = {0};
		Vector3__ctor_m348(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Equality_m3215_MethodInfo;
extern "C" bool Vector3_op_Equality_m3215 (Object_t * __this /* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___lhs;
		Vector3_t31  L_1 = ___rhs;
		Vector3_t31  L_2 = Vector3_op_Subtraction_m283(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m283_MethodInfo);
		float L_3 = Vector3_SqrMagnitude_m3212(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector3_SqrMagnitude_m3212_MethodInfo);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Vector3_op_Inequality_m790_MethodInfo;
extern "C" bool Vector3_op_Inequality_m790 (Object_t * __this /* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___lhs;
		Vector3_t31  L_1 = ___rhs;
		Vector3_t31  L_2 = Vector3_op_Subtraction_m283(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m283_MethodInfo);
		float L_3 = Vector3_SqrMagnitude_m3212(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector3_SqrMagnitude_m3212_MethodInfo);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Color__ctor_m231_MethodInfo;
extern MethodInfo Color_op_Implicit_m242_MethodInfo;
extern MethodInfo Vector4_GetHashCode_m3291_MethodInfo;


// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m231 (Color_t17 * __this, float ___r, float ___g, float ___b, float ___a, MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		float L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m317 (Color_t17 * __this, float ___r, float ___g, float ___b, MethodInfo* method)
{
	{
		float L_0 = ___r;
		__this->___r_0 = L_0;
		float L_1 = ___g;
		__this->___g_1 = L_1;
		float L_2 = ___b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
// System.String UnityEngine.Color::ToString()
extern MethodInfo Color_ToString_m3216_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Color_ToString_m3216 (Color_t17 * __this, MethodInfo* method)
{
	static bool Color_ToString_m3216_init;
	if (!Color_ToString_m3216_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Color_ToString_m3216_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___r_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float L_5 = (__this->___g_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float L_9 = (__this->___b_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		float L_13 = (__this->___a_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral341, L_12, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_16;
	}
}
// System.Int32 UnityEngine.Color::GetHashCode()
extern MethodInfo Color_GetHashCode_m3217_MethodInfo;
extern "C" int32_t Color_GetHashCode_m3217 (Color_t17 * __this, MethodInfo* method)
{
	Vector4_t91  V_0 = {0};
	{
		Vector4_t91  L_0 = Color_op_Implicit_m242(NULL /*static, unused*/, (*(Color_t17 *)__this), /*hidden argument*/&Color_op_Implicit_m242_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m3291((&V_0), /*hidden argument*/&Vector4_GetHashCode_m3291_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern MethodInfo Color_Equals_m2318_MethodInfo;
extern "C" bool Color_Equals_m2318 (Color_t17 * __this, Object_t * ___other, MethodInfo* method)
{
	Color_t17  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Color_t17_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Color_t17 *)((Color_t17 *)UnBox (L_1, InitializedTypeInfo(&Color_t17_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___r_0);
		float L_3 = ((&V_0)->___r_0);
		bool L_4 = Single_Equals_m3873(L_2, L_3, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___g_1);
		float L_6 = ((&V_0)->___g_1);
		bool L_7 = Single_Equals_m3873(L_5, L_6, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___b_2);
		float L_9 = ((&V_0)->___b_2);
		bool L_10 = Single_Equals_m3873(L_8, L_9, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___a_3);
		float L_12 = ((&V_0)->___a_3);
		bool L_13 = Single_Equals_m3873(L_11, L_12, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern MethodInfo Color_Lerp_m859_MethodInfo;
extern "C" Color_t17  Color_Lerp_m859 (Object_t * __this /* static, unused */, Color_t17  ___a, Color_t17  ___b, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m2362(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m2362_MethodInfo);
		___t = L_1;
		float L_2 = ((&___a)->___r_0);
		float L_3 = ((&___b)->___r_0);
		float L_4 = ((&___a)->___r_0);
		float L_5 = ___t;
		float L_6 = ((&___a)->___g_1);
		float L_7 = ((&___b)->___g_1);
		float L_8 = ((&___a)->___g_1);
		float L_9 = ___t;
		float L_10 = ((&___a)->___b_2);
		float L_11 = ((&___b)->___b_2);
		float L_12 = ((&___a)->___b_2);
		float L_13 = ___t;
		float L_14 = ((&___a)->___a_3);
		float L_15 = ((&___b)->___a_3);
		float L_16 = ((&___a)->___a_3);
		float L_17 = ___t;
		Color_t17  L_18 = {0};
		Color__ctor_m231(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), /*hidden argument*/&Color__ctor_m231_MethodInfo);
		return L_18;
	}
}
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t17  Color_get_red_m3218 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t17  L_0 = {0};
		Color__ctor_m231(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Color__ctor_m231_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t17  Color_get_white_m230 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t17  L_0 = {0};
		Color__ctor_m231(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/&Color__ctor_m231_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::get_black()
extern MethodInfo Color_get_black_m235_MethodInfo;
extern "C" Color_t17  Color_get_black_m235 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Color_t17  L_0 = {0};
		Color__ctor_m231(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Color__ctor_m231_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern MethodInfo Color_op_Multiply_m2556_MethodInfo;
extern "C" Color_t17  Color_op_Multiply_m2556 (Object_t * __this /* static, unused */, Color_t17  ___a, float ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t17  L_8 = {0};
		Color__ctor_m231(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/&Color__ctor_m231_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
extern MethodInfo Color_op_Multiply_m233_MethodInfo;
extern "C" Color_t17  Color_op_Multiply_m233 (Object_t * __this /* static, unused */, float ___b, Color_t17  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___r_0);
		float L_1 = ___b;
		float L_2 = ((&___a)->___g_1);
		float L_3 = ___b;
		float L_4 = ((&___a)->___b_2);
		float L_5 = ___b;
		float L_6 = ((&___a)->___a_3);
		float L_7 = ___b;
		Color_t17  L_8 = {0};
		Color__ctor_m231(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/&Color__ctor_m231_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t91  Color_op_Implicit_m242 (Object_t * __this /* static, unused */, Color_t17  ___c, MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		float L_1 = ((&___c)->___g_1);
		float L_2 = ((&___c)->___b_2);
		float L_3 = ((&___c)->___a_3);
		Vector4_t91  L_4 = {0};
		Vector4__ctor_m214(&L_4, L_0, L_1, L_2, L_3, /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Color32_t471_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Byte_t517_il2cpp_TypeInfo;
extern MethodInfo Color32__ctor_m2278_MethodInfo;


// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Color32__ctor_m2278 (Color32_t471 * __this, uint8_t ___r, uint8_t ___g, uint8_t ___b, uint8_t ___a, MethodInfo* method)
{
	{
		uint8_t L_0 = ___r;
		__this->___r_0 = L_0;
		uint8_t L_1 = ___g;
		__this->___g_1 = L_1;
		uint8_t L_2 = ___b;
		__this->___b_2 = L_2;
		uint8_t L_3 = ___a;
		__this->___a_3 = L_3;
		return;
	}
}
// System.String UnityEngine.Color32::ToString()
extern MethodInfo Color32_ToString_m3219_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Color32_ToString_m3219 (Color32_t471 * __this, MethodInfo* method)
{
	static bool Color32_ToString_m3219_init;
	if (!Color32_ToString_m3219_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Color32_ToString_m3219_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 4));
		uint8_t L_1 = (__this->___r_0);
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		uint8_t L_5 = (__this->___g_1);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		uint8_t L_9 = (__this->___b_2);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		uint8_t L_13 = (__this->___a_3);
		uint8_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Byte_t517_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral342, L_12, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern MethodInfo Color32_op_Implicit_m2310_MethodInfo;
extern "C" Color32_t471  Color32_op_Implicit_m2310 (Object_t * __this /* static, unused */, Color_t17  ___c, MethodInfo* method)
{
	{
		float L_0 = ((&___c)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m2362(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m2362_MethodInfo);
		float L_2 = ((&___c)->___g_1);
		float L_3 = Mathf_Clamp01_m2362(NULL /*static, unused*/, L_2, /*hidden argument*/&Mathf_Clamp01_m2362_MethodInfo);
		float L_4 = ((&___c)->___b_2);
		float L_5 = Mathf_Clamp01_m2362(NULL /*static, unused*/, L_4, /*hidden argument*/&Mathf_Clamp01_m2362_MethodInfo);
		float L_6 = ((&___c)->___a_3);
		float L_7 = Mathf_Clamp01_m2362(NULL /*static, unused*/, L_6, /*hidden argument*/&Mathf_Clamp01_m2362_MethodInfo);
		Color32_t471  L_8 = {0};
		Color32__ctor_m2278(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), /*hidden argument*/&Color32__ctor_m2278_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern MethodInfo Color32_op_Implicit_m2279_MethodInfo;
extern "C" Color_t17  Color32_op_Implicit_m2279 (Object_t * __this /* static, unused */, Color32_t471  ___c, MethodInfo* method)
{
	{
		uint8_t L_0 = ((&___c)->___r_0);
		uint8_t L_1 = ((&___c)->___g_1);
		uint8_t L_2 = ((&___c)->___b_2);
		uint8_t L_3 = ((&___c)->___a_3);
		Color_t17  L_4 = {0};
		Color__ctor_m231(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), /*hidden argument*/&Color__ctor_m231_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Quaternion_t98_il2cpp_TypeInfo;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"

extern MethodInfo Quaternion__ctor_m3220_MethodInfo;
extern MethodInfo Quaternion_Internal_ToEulerRad_m3228_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_AngleAxis_m3222_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Slerp_m3223_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Inverse_m3224_MethodInfo;
extern MethodInfo Quaternion_Internal_FromEulerRad_m3230_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3229_MethodInfo;
extern MethodInfo Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3231_MethodInfo;
extern MethodInfo Quaternion_Dot_m3221_MethodInfo;


// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m3220 (Quaternion_t98 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		float L_3 = ___w;
		__this->___w_3 = L_3;
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern MethodInfo Quaternion_get_identity_m276_MethodInfo;
extern "C" Quaternion_t98  Quaternion_get_identity_m276 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Quaternion_t98  L_0 = {0};
		Quaternion__ctor_m3220(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Quaternion__ctor_m3220_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m3221 (Object_t * __this /* static, unused */, Quaternion_t98  ___a, Quaternion_t98  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern MethodInfo Quaternion_AngleAxis_m775_MethodInfo;
extern "C" Quaternion_t98  Quaternion_AngleAxis_m775 (Object_t * __this /* static, unused */, float ___angle, Vector3_t31  ___axis, MethodInfo* method)
{
	{
		float L_0 = ___angle;
		Quaternion_t98  L_1 = Quaternion_INTERNAL_CALL_AngleAxis_m3222(NULL /*static, unused*/, L_0, (&___axis), /*hidden argument*/&Quaternion_INTERNAL_CALL_AngleAxis_m3222_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t98  Quaternion_INTERNAL_CALL_AngleAxis_m3222 (Object_t * __this /* static, unused */, float ___angle, Vector3_t31 * ___axis, MethodInfo* method)
{
	typedef Quaternion_t98  (*Quaternion_INTERNAL_CALL_AngleAxis_m3222_ftn) (float, Vector3_t31 *);
	static Quaternion_INTERNAL_CALL_AngleAxis_m3222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_AngleAxis_m3222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___angle, ___axis);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern MethodInfo Quaternion_Slerp_m776_MethodInfo;
extern "C" Quaternion_t98  Quaternion_Slerp_m776 (Object_t * __this /* static, unused */, Quaternion_t98  ___from, Quaternion_t98  ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___t;
		Quaternion_t98  L_1 = Quaternion_INTERNAL_CALL_Slerp_m3223(NULL /*static, unused*/, (&___from), (&___to), L_0, /*hidden argument*/&Quaternion_INTERNAL_CALL_Slerp_m3223_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t98  Quaternion_INTERNAL_CALL_Slerp_m3223 (Object_t * __this /* static, unused */, Quaternion_t98 * ___from, Quaternion_t98 * ___to, float ___t, MethodInfo* method)
{
	typedef Quaternion_t98  (*Quaternion_INTERNAL_CALL_Slerp_m3223_ftn) (Quaternion_t98 *, Quaternion_t98 *, float);
	static Quaternion_INTERNAL_CALL_Slerp_m3223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Slerp_m3223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)");
	return _il2cpp_icall_func(___from, ___to, ___t);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern MethodInfo Quaternion_Inverse_m2558_MethodInfo;
extern "C" Quaternion_t98  Quaternion_Inverse_m2558 (Object_t * __this /* static, unused */, Quaternion_t98  ___rotation, MethodInfo* method)
{
	{
		Quaternion_t98  L_0 = Quaternion_INTERNAL_CALL_Inverse_m3224(NULL /*static, unused*/, (&___rotation), /*hidden argument*/&Quaternion_INTERNAL_CALL_Inverse_m3224_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t98  Quaternion_INTERNAL_CALL_Inverse_m3224 (Object_t * __this /* static, unused */, Quaternion_t98 * ___rotation, MethodInfo* method)
{
	typedef Quaternion_t98  (*Quaternion_INTERNAL_CALL_Inverse_m3224_ftn) (Quaternion_t98 *);
	static Quaternion_INTERNAL_CALL_Inverse_m3224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Inverse_m3224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// System.String UnityEngine.Quaternion::ToString()
extern MethodInfo Quaternion_ToString_m3225_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Quaternion_ToString_m3225 (Quaternion_t98 * __this, MethodInfo* method)
{
	static bool Quaternion_ToString_m3225_init;
	if (!Quaternion_ToString_m3225_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Quaternion_ToString_m3225_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral343, L_12, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern MethodInfo Quaternion_get_eulerAngles_m3226_MethodInfo;
extern "C" Vector3_t31  Quaternion_get_eulerAngles_m3226 (Quaternion_t98 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Quaternion_Internal_ToEulerRad_m3228(NULL /*static, unused*/, (*(Quaternion_t98 *)__this), /*hidden argument*/&Quaternion_Internal_ToEulerRad_m3228_MethodInfo);
		Vector3_t31  L_1 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_0, (57.29578f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern MethodInfo Quaternion_Euler_m375_MethodInfo;
extern "C" Quaternion_t98  Quaternion_Euler_m375 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		Vector3_t31  L_3 = {0};
		Vector3__ctor_m348(&L_3, L_0, L_1, L_2, /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		Vector3_t31  L_4 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_3, (0.0174532924f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		Quaternion_t98  L_5 = Quaternion_Internal_FromEulerRad_m3230(NULL /*static, unused*/, L_4, /*hidden argument*/&Quaternion_Internal_FromEulerRad_m3230_MethodInfo);
		return L_5;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern MethodInfo Quaternion_Euler_m3227_MethodInfo;
extern "C" Quaternion_t98  Quaternion_Euler_m3227 (Object_t * __this /* static, unused */, Vector3_t31  ___euler, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___euler;
		Vector3_t31  L_1 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_0, (0.0174532924f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		Quaternion_t98  L_2 = Quaternion_Internal_FromEulerRad_m3230(NULL /*static, unused*/, L_1, /*hidden argument*/&Quaternion_Internal_FromEulerRad_m3230_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t31  Quaternion_Internal_ToEulerRad_m3228 (Object_t * __this /* static, unused */, Quaternion_t98  ___rotation, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3229(NULL /*static, unused*/, (&___rotation), /*hidden argument*/&Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3229_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t31  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3229 (Object_t * __this /* static, unused */, Quaternion_t98 * ___rotation, MethodInfo* method)
{
	typedef Vector3_t31  (*Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3229_ftn) (Quaternion_t98 *);
	static Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m3229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___rotation);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t98  Quaternion_Internal_FromEulerRad_m3230 (Object_t * __this /* static, unused */, Vector3_t31  ___euler, MethodInfo* method)
{
	{
		Quaternion_t98  L_0 = Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3231(NULL /*static, unused*/, (&___euler), /*hidden argument*/&Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3231_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t98  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3231 (Object_t * __this /* static, unused */, Vector3_t31 * ___euler, MethodInfo* method)
{
	typedef Quaternion_t98  (*Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3231_ftn) (Vector3_t31 *);
	static Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m3231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___euler);
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern MethodInfo Quaternion_GetHashCode_m3232_MethodInfo;
extern "C" int32_t Quaternion_GetHashCode_m3232 (Quaternion_t98 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m3845(L_0, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m3845(L_2, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m3845(L_4, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m3845(L_6, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern MethodInfo Quaternion_Equals_m3233_MethodInfo;
extern "C" bool Quaternion_Equals_m3233 (Quaternion_t98 * __this, Object_t * ___other, MethodInfo* method)
{
	Quaternion_t98  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Quaternion_t98_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Quaternion_t98 *)((Quaternion_t98 *)UnBox (L_1, InitializedTypeInfo(&Quaternion_t98_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m3873(L_2, L_3, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m3873(L_5, L_6, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m3873(L_8, L_9, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m3873(L_11, L_12, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern MethodInfo Quaternion_op_Multiply_m2346_MethodInfo;
extern "C" Vector3_t31  Quaternion_op_Multiply_m2346 (Object_t * __this /* static, unused */, Quaternion_t98  ___rotation, Vector3_t31  ___point, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t31  V_12 = {0};
	{
		float L_0 = ((&___rotation)->___x_0);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&___rotation)->___y_1);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&___rotation)->___z_2);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&___rotation)->___x_0);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&___rotation)->___y_1);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&___rotation)->___z_2);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&___rotation)->___x_0);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&___rotation)->___x_0);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&___rotation)->___y_1);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&___rotation)->___w_3);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&___rotation)->___w_3);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&___rotation)->___w_3);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&___point)->___x_1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&___point)->___y_2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&___point)->___z_3);
		(&V_12)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&___point)->___x_1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&___point)->___y_2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&___point)->___z_3);
		(&V_12)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&___point)->___x_1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&___point)->___y_2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&___point)->___z_3);
		(&V_12)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		Vector3_t31  L_48 = V_12;
		return L_48;
	}
}
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern MethodInfo Quaternion_op_Inequality_m2468_MethodInfo;
extern "C" bool Quaternion_op_Inequality_m2468 (Object_t * __this /* static, unused */, Quaternion_t98  ___lhs, Quaternion_t98  ___rhs, MethodInfo* method)
{
	{
		Quaternion_t98  L_0 = ___lhs;
		Quaternion_t98  L_1 = ___rhs;
		float L_2 = Quaternion_Dot_m3221(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_Dot_m3221_MethodInfo);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Rect_get_xMin_m2408_MethodInfo;
extern MethodInfo Rect_get_yMin_m2407_MethodInfo;


// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m817 (Rect_t213 * __this, float ___left, float ___top, float ___width, float ___height, MethodInfo* method)
{
	{
		float L_0 = ___left;
		__this->___m_XMin_0 = L_0;
		float L_1 = ___top;
		__this->___m_YMin_1 = L_1;
		float L_2 = ___width;
		__this->___m_Width_2 = L_2;
		float L_3 = ___height;
		__this->___m_Height_3 = L_3;
		return;
	}
}
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m836 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m2376 (Rect_t213 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_XMin_0 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m837 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m2374 (Rect_t213 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_YMin_1 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
extern MethodInfo Rect_get_position_m2385_MethodInfo;
extern "C" Vector2_t62  Rect_get_position_m2385 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		float L_1 = (__this->___m_YMin_1);
		Vector2_t62  L_2 = {0};
		Vector2__ctor_m252(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
extern MethodInfo Rect_get_center_m2519_MethodInfo;
extern "C" Vector2_t62  Rect_get_center_m2519 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = Rect_get_x_m836(__this, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		float L_1 = (__this->___m_Width_2);
		float L_2 = Rect_get_y_m837(__this, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		float L_3 = (__this->___m_Height_3);
		Vector2_t62  L_4 = {0};
		Vector2__ctor_m252(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_4;
	}
}
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m827 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m2375 (Rect_t213 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Width_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m2306 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		return L_0;
	}
}
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m2372 (Rect_t213 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Height_3 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
extern MethodInfo Rect_get_size_m2370_MethodInfo;
extern "C" Vector2_t62  Rect_get_size_m2370 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_Height_3);
		Vector2_t62  L_2 = {0};
		Vector2__ctor_m252(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m252_MethodInfo);
		return L_2;
	}
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m2408 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_XMin_0);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m2407 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_YMin_1);
		return L_0;
	}
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m2391 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Width_2);
		float L_1 = (__this->___m_XMin_0);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m2392 (Rect_t213 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Height_3);
		float L_1 = (__this->___m_YMin_1);
		return ((float)((float)L_0+(float)L_1));
	}
}
// System.String UnityEngine.Rect::ToString()
extern MethodInfo Rect_ToString_m3234_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Rect_ToString_m3234 (Rect_t213 * __this, MethodInfo* method)
{
	static bool Rect_ToString_m3234_init;
	if (!Rect_ToString_m3234_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Rect_ToString_m3234_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 4));
		float L_1 = Rect_get_x_m836(__this, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float L_5 = Rect_get_y_m837(__this, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float L_9 = Rect_get_width_m827(__this, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		float L_13 = Rect_get_height_m2306(__this, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral344, L_12, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_16;
	}
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern MethodInfo Rect_Contains_m839_MethodInfo;
extern "C" bool Rect_Contains_m839 (Rect_t213 * __this, Vector3_t31  ___point, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___point)->___x_1);
		float L_1 = Rect_get_xMin_m2408(__this, /*hidden argument*/&Rect_get_xMin_m2408_MethodInfo);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&___point)->___x_1);
		float L_3 = Rect_get_xMax_m2391(__this, /*hidden argument*/&Rect_get_xMax_m2391_MethodInfo);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&___point)->___y_2);
		float L_5 = Rect_get_yMin_m2407(__this, /*hidden argument*/&Rect_get_yMin_m2407_MethodInfo);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&___point)->___y_2);
		float L_7 = Rect_get_yMax_m2392(__this, /*hidden argument*/&Rect_get_yMax_m2392_MethodInfo);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
// System.Int32 UnityEngine.Rect::GetHashCode()
extern MethodInfo Rect_GetHashCode_m3235_MethodInfo;
extern "C" int32_t Rect_GetHashCode_m3235 (Rect_t213 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = Rect_get_x_m836(__this, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m3845((&V_0), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float L_2 = Rect_get_width_m827(__this, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m3845((&V_1), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float L_4 = Rect_get_y_m837(__this, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m3845((&V_2), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float L_6 = Rect_get_height_m2306(__this, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m3845((&V_3), /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern MethodInfo Rect_Equals_m3236_MethodInfo;
extern "C" bool Rect_Equals_m3236 (Rect_t213 * __this, Object_t * ___other, MethodInfo* method)
{
	Rect_t213  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Rect_t213_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Rect_t213 *)((Rect_t213 *)UnBox (L_1, InitializedTypeInfo(&Rect_t213_il2cpp_TypeInfo)))));
		float L_2 = Rect_get_x_m836(__this, /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		V_1 = L_2;
		float L_3 = Rect_get_x_m836((&V_0), /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		bool L_4 = Single_Equals_m3873((&V_1), L_3, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = Rect_get_y_m837(__this, /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		V_2 = L_5;
		float L_6 = Rect_get_y_m837((&V_0), /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		bool L_7 = Single_Equals_m3873((&V_2), L_6, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = Rect_get_width_m827(__this, /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		V_3 = L_8;
		float L_9 = Rect_get_width_m827((&V_0), /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		bool L_10 = Single_Equals_m3873((&V_3), L_9, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = Rect_get_height_m2306(__this, /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		V_4 = L_11;
		float L_12 = Rect_get_height_m2306((&V_0), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		bool L_13 = Single_Equals_m3873((&V_4), L_12, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
extern MethodInfo Rect_op_Equality_m2512_MethodInfo;
extern "C" bool Rect_op_Equality_m2512 (Object_t * __this /* static, unused */, Rect_t213  ___lhs, Rect_t213  ___rhs, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = Rect_get_x_m836((&___lhs), /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		float L_1 = Rect_get_x_m836((&___rhs), /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = Rect_get_y_m837((&___lhs), /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		float L_3 = Rect_get_y_m837((&___rhs), /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = Rect_get_width_m827((&___lhs), /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		float L_5 = Rect_get_width_m827((&___rhs), /*hidden argument*/&Rect_get_width_m827_MethodInfo);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = Rect_get_height_m2306((&___lhs), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		float L_7 = Rect_get_height_m2306((&___rhs), /*hidden argument*/&Rect_get_height_m2306_MethodInfo);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Matrix4x4_t33_il2cpp_TypeInfo;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"

extern MethodInfo Matrix4x4_get_Item_m400_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m3239_MethodInfo;
extern MethodInfo Matrix4x4_Inverse_m272_MethodInfo;
extern MethodInfo Matrix4x4_Transpose_m3243_MethodInfo;
extern MethodInfo Matrix4x4_GetColumn_m3249_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Inverse_m3242_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Transpose_m3244_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_Invert_m3246_MethodInfo;
extern MethodInfo Matrix4x4_get_Item_m3237_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m3238_MethodInfo;
extern MethodInfo Matrix4x4_TRS_m376_MethodInfo;
extern MethodInfo Matrix4x4_INTERNAL_CALL_TRS_m3256_MethodInfo;
extern MethodInfo Matrix4x4_op_Equality_m3262_MethodInfo;


// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m3237 (Matrix4x4_t33 * __this, int32_t ___row, int32_t ___column, MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = Matrix4x4_get_Item_m400(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), /*hidden argument*/&Matrix4x4_get_Item_m400_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m3238 (Matrix4x4_t33 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___row;
		int32_t L_1 = ___column;
		float L_2 = ___value;
		Matrix4x4_set_Item_m3239(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, /*hidden argument*/&Matrix4x4_set_Item_m3239_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C" float Matrix4x4_get_Item_m400 (Matrix4x4_t33 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->___m00_0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->___m10_1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->___m20_2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->___m30_3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->___m01_4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->___m11_5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->___m21_6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->___m31_7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->___m02_8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->___m12_9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->___m22_10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->___m32_11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->___m03_12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->___m13_13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->___m23_14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->___m33_15);
		return L_17;
	}

IL_00bd:
	{
		IndexOutOfRangeException_t803 * L_18 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_18, (String_t*) &_stringLiteral345, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C" void Matrix4x4_set_Item_m3239 (Matrix4x4_t33 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = ___value;
		__this->___m00_0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = ___value;
		__this->___m10_1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = ___value;
		__this->___m20_2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = ___value;
		__this->___m30_3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = ___value;
		__this->___m01_4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = ___value;
		__this->___m11_5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = ___value;
		__this->___m21_6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = ___value;
		__this->___m31_7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = ___value;
		__this->___m02_8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = ___value;
		__this->___m12_9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = ___value;
		__this->___m22_10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = ___value;
		__this->___m32_11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = ___value;
		__this->___m03_12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = ___value;
		__this->___m13_13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = ___value;
		__this->___m23_14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = ___value;
		__this->___m33_15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		IndexOutOfRangeException_t803 * L_18 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_18, (String_t*) &_stringLiteral345, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern MethodInfo Matrix4x4_GetHashCode_m3240_MethodInfo;
extern "C" int32_t Matrix4x4_GetHashCode_m3240 (Matrix4x4_t33 * __this, MethodInfo* method)
{
	Vector4_t91  V_0 = {0};
	Vector4_t91  V_1 = {0};
	Vector4_t91  V_2 = {0};
	Vector4_t91  V_3 = {0};
	{
		Vector4_t91  L_0 = Matrix4x4_GetColumn_m3249(__this, 0, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector4_GetHashCode_m3291((&V_0), /*hidden argument*/&Vector4_GetHashCode_m3291_MethodInfo);
		Vector4_t91  L_2 = Matrix4x4_GetColumn_m3249(__this, 1, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Vector4_GetHashCode_m3291((&V_1), /*hidden argument*/&Vector4_GetHashCode_m3291_MethodInfo);
		Vector4_t91  L_4 = Matrix4x4_GetColumn_m3249(__this, 2, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = Vector4_GetHashCode_m3291((&V_2), /*hidden argument*/&Vector4_GetHashCode_m3291_MethodInfo);
		Vector4_t91  L_6 = Matrix4x4_GetColumn_m3249(__this, 3, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_3 = L_6;
		int32_t L_7 = Vector4_GetHashCode_m3291((&V_3), /*hidden argument*/&Vector4_GetHashCode_m3291_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern MethodInfo Matrix4x4_Equals_m3241_MethodInfo;
extern "C" bool Matrix4x4_Equals_m3241 (Matrix4x4_t33 * __this, Object_t * ___other, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	Vector4_t91  V_1 = {0};
	Vector4_t91  V_2 = {0};
	Vector4_t91  V_3 = {0};
	Vector4_t91  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Matrix4x4_t33_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Matrix4x4_t33 *)((Matrix4x4_t33 *)UnBox (L_1, InitializedTypeInfo(&Matrix4x4_t33_il2cpp_TypeInfo)))));
		Vector4_t91  L_2 = Matrix4x4_GetColumn_m3249(__this, 0, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_1 = L_2;
		Vector4_t91  L_3 = Matrix4x4_GetColumn_m3249((&V_0), 0, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Vector4_t91_il2cpp_TypeInfo), &L_4);
		bool L_6 = Vector4_Equals_m3292((&V_1), L_5, /*hidden argument*/&Vector4_Equals_m3292_MethodInfo);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t91  L_7 = Matrix4x4_GetColumn_m3249(__this, 1, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_2 = L_7;
		Vector4_t91  L_8 = Matrix4x4_GetColumn_m3249((&V_0), 1, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Vector4_t91_il2cpp_TypeInfo), &L_9);
		bool L_11 = Vector4_Equals_m3292((&V_2), L_10, /*hidden argument*/&Vector4_Equals_m3292_MethodInfo);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t91  L_12 = Matrix4x4_GetColumn_m3249(__this, 2, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_3 = L_12;
		Vector4_t91  L_13 = Matrix4x4_GetColumn_m3249((&V_0), 2, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Vector4_t91_il2cpp_TypeInfo), &L_14);
		bool L_16 = Vector4_Equals_m3292((&V_3), L_15, /*hidden argument*/&Vector4_Equals_m3292_MethodInfo);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		Vector4_t91  L_17 = Matrix4x4_GetColumn_m3249(__this, 3, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		V_4 = L_17;
		Vector4_t91  L_18 = Matrix4x4_GetColumn_m3249((&V_0), 3, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Vector4_t91_il2cpp_TypeInfo), &L_19);
		bool L_21 = Vector4_Equals_m3292((&V_4), L_20, /*hidden argument*/&Vector4_Equals_m3292_MethodInfo);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t33  Matrix4x4_Inverse_m272 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___m, MethodInfo* method)
{
	{
		Matrix4x4_t33  L_0 = Matrix4x4_INTERNAL_CALL_Inverse_m3242(NULL /*static, unused*/, (&___m), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Inverse_m3242_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t33  Matrix4x4_INTERNAL_CALL_Inverse_m3242 (Object_t * __this /* static, unused */, Matrix4x4_t33 * ___m, MethodInfo* method)
{
	typedef Matrix4x4_t33  (*Matrix4x4_INTERNAL_CALL_Inverse_m3242_ftn) (Matrix4x4_t33 *);
	static Matrix4x4_INTERNAL_CALL_Inverse_m3242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Inverse_m3242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C" Matrix4x4_t33  Matrix4x4_Transpose_m3243 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___m, MethodInfo* method)
{
	{
		Matrix4x4_t33  L_0 = Matrix4x4_INTERNAL_CALL_Transpose_m3244(NULL /*static, unused*/, (&___m), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Transpose_m3244_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C" Matrix4x4_t33  Matrix4x4_INTERNAL_CALL_Transpose_m3244 (Object_t * __this /* static, unused */, Matrix4x4_t33 * ___m, MethodInfo* method)
{
	typedef Matrix4x4_t33  (*Matrix4x4_INTERNAL_CALL_Transpose_m3244_ftn) (Matrix4x4_t33 *);
	static Matrix4x4_INTERNAL_CALL_Transpose_m3244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Transpose_m3244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___m);
}
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern MethodInfo Matrix4x4_Invert_m3245_MethodInfo;
extern "C" bool Matrix4x4_Invert_m3245 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___inMatrix, Matrix4x4_t33 * ___dest, MethodInfo* method)
{
	{
		Matrix4x4_t33 * L_0 = ___dest;
		bool L_1 = Matrix4x4_INTERNAL_CALL_Invert_m3246(NULL /*static, unused*/, (&___inMatrix), L_0, /*hidden argument*/&Matrix4x4_INTERNAL_CALL_Invert_m3246_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C" bool Matrix4x4_INTERNAL_CALL_Invert_m3246 (Object_t * __this /* static, unused */, Matrix4x4_t33 * ___inMatrix, Matrix4x4_t33 * ___dest, MethodInfo* method)
{
	typedef bool (*Matrix4x4_INTERNAL_CALL_Invert_m3246_ftn) (Matrix4x4_t33 *, Matrix4x4_t33 *);
	static Matrix4x4_INTERNAL_CALL_Invert_m3246_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_Invert_m3246_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(___inMatrix, ___dest);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern MethodInfo Matrix4x4_get_inverse_m399_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_get_inverse_m399 (Matrix4x4_t33 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t33  L_0 = Matrix4x4_Inverse_m272(NULL /*static, unused*/, (*(Matrix4x4_t33 *)__this), /*hidden argument*/&Matrix4x4_Inverse_m272_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern MethodInfo Matrix4x4_get_transpose_m3247_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_get_transpose_m3247 (Matrix4x4_t33 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t33  L_0 = Matrix4x4_Transpose_m3243(NULL /*static, unused*/, (*(Matrix4x4_t33 *)__this), /*hidden argument*/&Matrix4x4_Transpose_m3243_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern MethodInfo Matrix4x4_get_isIdentity_m3248_MethodInfo;
extern "C" bool Matrix4x4_get_isIdentity_m3248 (Matrix4x4_t33 * __this, MethodInfo* method)
{
	typedef bool (*Matrix4x4_get_isIdentity_m3248_ftn) (Matrix4x4_t33 *);
	static Matrix4x4_get_isIdentity_m3248_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_get_isIdentity_m3248_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t91  Matrix4x4_GetColumn_m3249 (Matrix4x4_t33 * __this, int32_t ___i, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m3237(__this, 0, L_0, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m3237(__this, 1, L_2, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m3237(__this, 2, L_4, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m3237(__this, 3, L_6, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		Vector4_t91  L_8 = {0};
		Vector4__ctor_m214(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern MethodInfo Matrix4x4_GetRow_m3250_MethodInfo;
extern "C" Vector4_t91  Matrix4x4_GetRow_m3250 (Matrix4x4_t33 * __this, int32_t ___i, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = Matrix4x4_get_Item_m3237(__this, L_0, 0, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = Matrix4x4_get_Item_m3237(__this, L_2, 1, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = Matrix4x4_get_Item_m3237(__this, L_4, 2, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = Matrix4x4_get_Item_m3237(__this, L_6, 3, /*hidden argument*/&Matrix4x4_get_Item_m3237_MethodInfo);
		Vector4_t91  L_8 = {0};
		Vector4__ctor_m214(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_8;
	}
}
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_SetColumn_m3251_MethodInfo;
extern "C" void Matrix4x4_SetColumn_m3251 (Matrix4x4_t33 * __this, int32_t ___i, Vector4_t91  ___v, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m3238(__this, 0, L_0, L_1, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m3238(__this, 1, L_2, L_3, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m3238(__this, 2, L_4, L_5, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m3238(__this, 3, L_6, L_7, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_SetRow_m362_MethodInfo;
extern "C" void Matrix4x4_SetRow_m362 (Matrix4x4_t33 * __this, int32_t ___i, Vector4_t91  ___v, MethodInfo* method)
{
	{
		int32_t L_0 = ___i;
		float L_1 = ((&___v)->___x_1);
		Matrix4x4_set_Item_m3238(__this, L_0, 0, L_1, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		int32_t L_2 = ___i;
		float L_3 = ((&___v)->___y_2);
		Matrix4x4_set_Item_m3238(__this, L_2, 1, L_3, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		int32_t L_4 = ___i;
		float L_5 = ((&___v)->___z_3);
		Matrix4x4_set_Item_m3238(__this, L_4, 2, L_5, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		int32_t L_6 = ___i;
		float L_7 = ((&___v)->___w_4);
		Matrix4x4_set_Item_m3238(__this, L_6, 3, L_7, /*hidden argument*/&Matrix4x4_set_Item_m3238_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyPoint_m3252_MethodInfo;
extern "C" Vector3_t31  Matrix4x4_MultiplyPoint_m3252 (Matrix4x4_t33 * __this, Vector3_t31  ___v, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->___m30_3);
		float L_22 = ((&___v)->___x_1);
		float L_23 = (__this->___m31_7);
		float L_24 = ((&___v)->___y_2);
		float L_25 = (__this->___m32_11);
		float L_26 = ((&___v)->___z_3);
		float L_27 = (__this->___m33_15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		Vector3_t31 * L_29 = (&V_0);
		float L_30 = (L_29->___x_1);
		float L_31 = V_1;
		L_29->___x_1 = ((float)((float)L_30*(float)L_31));
		Vector3_t31 * L_32 = (&V_0);
		float L_33 = (L_32->___y_2);
		float L_34 = V_1;
		L_32->___y_2 = ((float)((float)L_33*(float)L_34));
		Vector3_t31 * L_35 = (&V_0);
		float L_36 = (L_35->___z_3);
		float L_37 = V_1;
		L_35->___z_3 = ((float)((float)L_36*(float)L_37));
		Vector3_t31  L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyPoint3x4_m2541_MethodInfo;
extern "C" Vector3_t31  Matrix4x4_MultiplyPoint3x4_m2541 (Matrix4x4_t33 * __this, Vector3_t31  ___v, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = (__this->___m03_12);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->___m10_1);
		float L_8 = ((&___v)->___x_1);
		float L_9 = (__this->___m11_5);
		float L_10 = ((&___v)->___y_2);
		float L_11 = (__this->___m12_9);
		float L_12 = ((&___v)->___z_3);
		float L_13 = (__this->___m13_13);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->___m20_2);
		float L_15 = ((&___v)->___x_1);
		float L_16 = (__this->___m21_6);
		float L_17 = ((&___v)->___y_2);
		float L_18 = (__this->___m22_10);
		float L_19 = ((&___v)->___z_3);
		float L_20 = (__this->___m23_14);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		Vector3_t31  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_MultiplyVector_m3253_MethodInfo;
extern "C" Vector3_t31  Matrix4x4_MultiplyVector_m3253 (Matrix4x4_t33 * __this, Vector3_t31  ___v, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	{
		float L_0 = (__this->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = (__this->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = (__this->___m02_8);
		float L_5 = ((&___v)->___z_3);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->___m10_1);
		float L_7 = ((&___v)->___x_1);
		float L_8 = (__this->___m11_5);
		float L_9 = ((&___v)->___y_2);
		float L_10 = (__this->___m12_9);
		float L_11 = ((&___v)->___z_3);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->___m20_2);
		float L_13 = ((&___v)->___x_1);
		float L_14 = (__this->___m21_6);
		float L_15 = ((&___v)->___y_2);
		float L_16 = (__this->___m22_10);
		float L_17 = ((&___v)->___z_3);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		Vector3_t31  L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern MethodInfo Matrix4x4_Scale_m3254_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_Scale_m3254 (Object_t * __this /* static, unused */, Vector3_t31  ___v, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t33_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___v)->___x_1);
		(&V_0)->___m00_0 = L_0;
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		float L_1 = ((&___v)->___y_2);
		(&V_0)->___m11_5 = L_1;
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		float L_2 = ((&___v)->___z_3);
		(&V_0)->___m22_10 = L_2;
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t33  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern MethodInfo Matrix4x4_get_zero_m3255_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_get_zero_m3255 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t33_il2cpp_TypeInfo), (&V_0));
		(&V_0)->___m00_0 = (0.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (0.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (0.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (0.0f);
		Matrix4x4_t33  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern MethodInfo Matrix4x4_get_identity_m274_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_get_identity_m274 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t33_il2cpp_TypeInfo), (&V_0));
		(&V_0)->___m00_0 = (1.0f);
		(&V_0)->___m01_4 = (0.0f);
		(&V_0)->___m02_8 = (0.0f);
		(&V_0)->___m03_12 = (0.0f);
		(&V_0)->___m10_1 = (0.0f);
		(&V_0)->___m11_5 = (1.0f);
		(&V_0)->___m12_9 = (0.0f);
		(&V_0)->___m13_13 = (0.0f);
		(&V_0)->___m20_2 = (0.0f);
		(&V_0)->___m21_6 = (0.0f);
		(&V_0)->___m22_10 = (1.0f);
		(&V_0)->___m23_14 = (0.0f);
		(&V_0)->___m30_3 = (0.0f);
		(&V_0)->___m31_7 = (0.0f);
		(&V_0)->___m32_11 = (0.0f);
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_t33  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern MethodInfo Matrix4x4_SetTRS_m277_MethodInfo;
extern "C" void Matrix4x4_SetTRS_m277 (Matrix4x4_t33 * __this, Vector3_t31  ___pos, Quaternion_t98  ___q, Vector3_t31  ___s, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___pos;
		Quaternion_t98  L_1 = ___q;
		Vector3_t31  L_2 = ___s;
		Matrix4x4_t33  L_3 = Matrix4x4_TRS_m376(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Matrix4x4_TRS_m376_MethodInfo);
		*__this = L_3;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Matrix4x4_t33  Matrix4x4_TRS_m376 (Object_t * __this /* static, unused */, Vector3_t31  ___pos, Quaternion_t98  ___q, Vector3_t31  ___s, MethodInfo* method)
{
	{
		Matrix4x4_t33  L_0 = Matrix4x4_INTERNAL_CALL_TRS_m3256(NULL /*static, unused*/, (&___pos), (&___q), (&___s), /*hidden argument*/&Matrix4x4_INTERNAL_CALL_TRS_m3256_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" Matrix4x4_t33  Matrix4x4_INTERNAL_CALL_TRS_m3256 (Object_t * __this /* static, unused */, Vector3_t31 * ___pos, Quaternion_t98 * ___q, Vector3_t31 * ___s, MethodInfo* method)
{
	typedef Matrix4x4_t33  (*Matrix4x4_INTERNAL_CALL_TRS_m3256_ftn) (Vector3_t31 *, Quaternion_t98 *, Vector3_t31 *);
	static Matrix4x4_INTERNAL_CALL_TRS_m3256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_INTERNAL_CALL_TRS_m3256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___pos, ___q, ___s);
}
// System.String UnityEngine.Matrix4x4::ToString()
extern MethodInfo Matrix4x4_ToString_m3257_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m3257 (Matrix4x4_t33 * __this, MethodInfo* method)
{
	static bool Matrix4x4_ToString_m3257_init;
	if (!Matrix4x4_ToString_m3257_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Matrix4x4_ToString_m3257_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)16)));
		float L_1 = (__this->___m00_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float L_5 = (__this->___m01_4);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float L_9 = (__this->___m02_8);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		float L_13 = (__this->___m03_12);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t219* L_16 = L_12;
		float L_17 = (__this->___m10_1);
		float L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t219* L_20 = L_16;
		float L_21 = (__this->___m11_5);
		float L_22 = L_21;
		Object_t * L_23 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t219* L_24 = L_20;
		float L_25 = (__this->___m12_9);
		float L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t219* L_28 = L_24;
		float L_29 = (__this->___m13_13);
		float L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t219* L_32 = L_28;
		float L_33 = (__this->___m20_2);
		float L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t219* L_36 = L_32;
		float L_37 = (__this->___m21_6);
		float L_38 = L_37;
		Object_t * L_39 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_38);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t219* L_40 = L_36;
		float L_41 = (__this->___m22_10);
		float L_42 = L_41;
		Object_t * L_43 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_42);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t219* L_44 = L_40;
		float L_45 = (__this->___m23_14);
		float L_46 = L_45;
		Object_t * L_47 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t219* L_48 = L_44;
		float L_49 = (__this->___m30_3);
		float L_50 = L_49;
		Object_t * L_51 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t219* L_52 = L_48;
		float L_53 = (__this->___m31_7);
		float L_54 = L_53;
		Object_t * L_55 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_54);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t219* L_56 = L_52;
		float L_57 = (__this->___m32_11);
		float L_58 = L_57;
		Object_t * L_59 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_58);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t219* L_60 = L_56;
		float L_61 = (__this->___m33_15);
		float L_62 = L_61;
		Object_t * L_63 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_62);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral346, L_60, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_64;
	}
}
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern MethodInfo Matrix4x4_ToString_m3258_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Matrix4x4_ToString_m3258 (Matrix4x4_t33 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Matrix4x4_ToString_m3258_init;
	if (!Matrix4x4_ToString_m3258_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Matrix4x4_ToString_m3258_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, ((int32_t)16)));
		float* L_1 = &(__this->___m00_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Single_ToString_m3874(L_1, L_2, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float* L_5 = &(__this->___m01_4);
		String_t* L_6 = ___format;
		String_t* L_7 = Single_ToString_m3874(L_5, L_6, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float* L_9 = &(__this->___m02_8);
		String_t* L_10 = ___format;
		String_t* L_11 = Single_ToString_m3874(L_9, L_10, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		float* L_13 = &(__this->___m03_12);
		String_t* L_14 = ___format;
		String_t* L_15 = Single_ToString_m3874(L_13, L_14, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		ObjectU5BU5D_t219* L_16 = L_12;
		float* L_17 = &(__this->___m10_1);
		String_t* L_18 = ___format;
		String_t* L_19 = Single_ToString_m3874(L_17, L_18, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 4)) = (Object_t *)L_19;
		ObjectU5BU5D_t219* L_20 = L_16;
		float* L_21 = &(__this->___m11_5);
		String_t* L_22 = ___format;
		String_t* L_23 = Single_ToString_m3874(L_21, L_22, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 5);
		ArrayElementTypeCheck (L_20, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 5)) = (Object_t *)L_23;
		ObjectU5BU5D_t219* L_24 = L_20;
		float* L_25 = &(__this->___m12_9);
		String_t* L_26 = ___format;
		String_t* L_27 = Single_ToString_m3874(L_25, L_26, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 6);
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 6)) = (Object_t *)L_27;
		ObjectU5BU5D_t219* L_28 = L_24;
		float* L_29 = &(__this->___m13_13);
		String_t* L_30 = ___format;
		String_t* L_31 = Single_ToString_m3874(L_29, L_30, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 7);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 7)) = (Object_t *)L_31;
		ObjectU5BU5D_t219* L_32 = L_28;
		float* L_33 = &(__this->___m20_2);
		String_t* L_34 = ___format;
		String_t* L_35 = Single_ToString_m3874(L_33, L_34, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 8);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 8)) = (Object_t *)L_35;
		ObjectU5BU5D_t219* L_36 = L_32;
		float* L_37 = &(__this->___m21_6);
		String_t* L_38 = ___format;
		String_t* L_39 = Single_ToString_m3874(L_37, L_38, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)9));
		ArrayElementTypeCheck (L_36, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, ((int32_t)9))) = (Object_t *)L_39;
		ObjectU5BU5D_t219* L_40 = L_36;
		float* L_41 = &(__this->___m22_10);
		String_t* L_42 = ___format;
		String_t* L_43 = Single_ToString_m3874(L_41, L_42, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)10));
		ArrayElementTypeCheck (L_40, L_43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, ((int32_t)10))) = (Object_t *)L_43;
		ObjectU5BU5D_t219* L_44 = L_40;
		float* L_45 = &(__this->___m23_14);
		String_t* L_46 = ___format;
		String_t* L_47 = Single_ToString_m3874(L_45, L_46, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)11));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)11))) = (Object_t *)L_47;
		ObjectU5BU5D_t219* L_48 = L_44;
		float* L_49 = &(__this->___m30_3);
		String_t* L_50 = ___format;
		String_t* L_51 = Single_ToString_m3874(L_49, L_50, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)12));
		ArrayElementTypeCheck (L_48, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, ((int32_t)12))) = (Object_t *)L_51;
		ObjectU5BU5D_t219* L_52 = L_48;
		float* L_53 = &(__this->___m31_7);
		String_t* L_54 = ___format;
		String_t* L_55 = Single_ToString_m3874(L_53, L_54, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)13));
		ArrayElementTypeCheck (L_52, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, ((int32_t)13))) = (Object_t *)L_55;
		ObjectU5BU5D_t219* L_56 = L_52;
		float* L_57 = &(__this->___m32_11);
		String_t* L_58 = ___format;
		String_t* L_59 = Single_ToString_m3874(L_57, L_58, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)14));
		ArrayElementTypeCheck (L_56, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_56, ((int32_t)14))) = (Object_t *)L_59;
		ObjectU5BU5D_t219* L_60 = L_56;
		float* L_61 = &(__this->___m33_15);
		String_t* L_62 = ___format;
		String_t* L_63 = Single_ToString_m3874(L_61, L_62, /*hidden argument*/&Single_ToString_m3874_MethodInfo);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)15));
		ArrayElementTypeCheck (L_60, L_63);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, ((int32_t)15))) = (Object_t *)L_63;
		String_t* L_64 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral347, L_60, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_64;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Matrix4x4_Ortho_m3259_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_Ortho_m3259 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method)
{
	typedef Matrix4x4_t33  (*Matrix4x4_Ortho_m3259_ftn) (float, float, float, float, float, float);
	static Matrix4x4_Ortho_m3259_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Ortho_m3259_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___left, ___right, ___bottom, ___top, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Matrix4x4_Perspective_m3260_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_Perspective_m3260 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method)
{
	typedef Matrix4x4_t33  (*Matrix4x4_Perspective_m3260_ftn) (float, float, float, float);
	static Matrix4x4_Perspective_m3260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Matrix4x4_Perspective_m3260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(___fov, ___aspect, ___zNear, ___zFar);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern MethodInfo Matrix4x4_op_Multiply_m263_MethodInfo;
extern "C" Matrix4x4_t33  Matrix4x4_op_Multiply_m263 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___lhs, Matrix4x4_t33  ___rhs, MethodInfo* method)
{
	Matrix4x4_t33  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Matrix4x4_t33_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___rhs)->___m00_0);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___rhs)->___m10_1);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___rhs)->___m20_2);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___rhs)->___m30_3);
		(&V_0)->___m00_0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m00_0);
		float L_9 = ((&___rhs)->___m01_4);
		float L_10 = ((&___lhs)->___m01_4);
		float L_11 = ((&___rhs)->___m11_5);
		float L_12 = ((&___lhs)->___m02_8);
		float L_13 = ((&___rhs)->___m21_6);
		float L_14 = ((&___lhs)->___m03_12);
		float L_15 = ((&___rhs)->___m31_7);
		(&V_0)->___m01_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m00_0);
		float L_17 = ((&___rhs)->___m02_8);
		float L_18 = ((&___lhs)->___m01_4);
		float L_19 = ((&___rhs)->___m12_9);
		float L_20 = ((&___lhs)->___m02_8);
		float L_21 = ((&___rhs)->___m22_10);
		float L_22 = ((&___lhs)->___m03_12);
		float L_23 = ((&___rhs)->___m32_11);
		(&V_0)->___m02_8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m00_0);
		float L_25 = ((&___rhs)->___m03_12);
		float L_26 = ((&___lhs)->___m01_4);
		float L_27 = ((&___rhs)->___m13_13);
		float L_28 = ((&___lhs)->___m02_8);
		float L_29 = ((&___rhs)->___m23_14);
		float L_30 = ((&___lhs)->___m03_12);
		float L_31 = ((&___rhs)->___m33_15);
		(&V_0)->___m03_12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&___lhs)->___m10_1);
		float L_33 = ((&___rhs)->___m00_0);
		float L_34 = ((&___lhs)->___m11_5);
		float L_35 = ((&___rhs)->___m10_1);
		float L_36 = ((&___lhs)->___m12_9);
		float L_37 = ((&___rhs)->___m20_2);
		float L_38 = ((&___lhs)->___m13_13);
		float L_39 = ((&___rhs)->___m30_3);
		(&V_0)->___m10_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&___lhs)->___m10_1);
		float L_41 = ((&___rhs)->___m01_4);
		float L_42 = ((&___lhs)->___m11_5);
		float L_43 = ((&___rhs)->___m11_5);
		float L_44 = ((&___lhs)->___m12_9);
		float L_45 = ((&___rhs)->___m21_6);
		float L_46 = ((&___lhs)->___m13_13);
		float L_47 = ((&___rhs)->___m31_7);
		(&V_0)->___m11_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&___lhs)->___m10_1);
		float L_49 = ((&___rhs)->___m02_8);
		float L_50 = ((&___lhs)->___m11_5);
		float L_51 = ((&___rhs)->___m12_9);
		float L_52 = ((&___lhs)->___m12_9);
		float L_53 = ((&___rhs)->___m22_10);
		float L_54 = ((&___lhs)->___m13_13);
		float L_55 = ((&___rhs)->___m32_11);
		(&V_0)->___m12_9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&___lhs)->___m10_1);
		float L_57 = ((&___rhs)->___m03_12);
		float L_58 = ((&___lhs)->___m11_5);
		float L_59 = ((&___rhs)->___m13_13);
		float L_60 = ((&___lhs)->___m12_9);
		float L_61 = ((&___rhs)->___m23_14);
		float L_62 = ((&___lhs)->___m13_13);
		float L_63 = ((&___rhs)->___m33_15);
		(&V_0)->___m13_13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&___lhs)->___m20_2);
		float L_65 = ((&___rhs)->___m00_0);
		float L_66 = ((&___lhs)->___m21_6);
		float L_67 = ((&___rhs)->___m10_1);
		float L_68 = ((&___lhs)->___m22_10);
		float L_69 = ((&___rhs)->___m20_2);
		float L_70 = ((&___lhs)->___m23_14);
		float L_71 = ((&___rhs)->___m30_3);
		(&V_0)->___m20_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&___lhs)->___m20_2);
		float L_73 = ((&___rhs)->___m01_4);
		float L_74 = ((&___lhs)->___m21_6);
		float L_75 = ((&___rhs)->___m11_5);
		float L_76 = ((&___lhs)->___m22_10);
		float L_77 = ((&___rhs)->___m21_6);
		float L_78 = ((&___lhs)->___m23_14);
		float L_79 = ((&___rhs)->___m31_7);
		(&V_0)->___m21_6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&___lhs)->___m20_2);
		float L_81 = ((&___rhs)->___m02_8);
		float L_82 = ((&___lhs)->___m21_6);
		float L_83 = ((&___rhs)->___m12_9);
		float L_84 = ((&___lhs)->___m22_10);
		float L_85 = ((&___rhs)->___m22_10);
		float L_86 = ((&___lhs)->___m23_14);
		float L_87 = ((&___rhs)->___m32_11);
		(&V_0)->___m22_10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&___lhs)->___m20_2);
		float L_89 = ((&___rhs)->___m03_12);
		float L_90 = ((&___lhs)->___m21_6);
		float L_91 = ((&___rhs)->___m13_13);
		float L_92 = ((&___lhs)->___m22_10);
		float L_93 = ((&___rhs)->___m23_14);
		float L_94 = ((&___lhs)->___m23_14);
		float L_95 = ((&___rhs)->___m33_15);
		(&V_0)->___m23_14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&___lhs)->___m30_3);
		float L_97 = ((&___rhs)->___m00_0);
		float L_98 = ((&___lhs)->___m31_7);
		float L_99 = ((&___rhs)->___m10_1);
		float L_100 = ((&___lhs)->___m32_11);
		float L_101 = ((&___rhs)->___m20_2);
		float L_102 = ((&___lhs)->___m33_15);
		float L_103 = ((&___rhs)->___m30_3);
		(&V_0)->___m30_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&___lhs)->___m30_3);
		float L_105 = ((&___rhs)->___m01_4);
		float L_106 = ((&___lhs)->___m31_7);
		float L_107 = ((&___rhs)->___m11_5);
		float L_108 = ((&___lhs)->___m32_11);
		float L_109 = ((&___rhs)->___m21_6);
		float L_110 = ((&___lhs)->___m33_15);
		float L_111 = ((&___rhs)->___m31_7);
		(&V_0)->___m31_7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&___lhs)->___m30_3);
		float L_113 = ((&___rhs)->___m02_8);
		float L_114 = ((&___lhs)->___m31_7);
		float L_115 = ((&___rhs)->___m12_9);
		float L_116 = ((&___lhs)->___m32_11);
		float L_117 = ((&___rhs)->___m22_10);
		float L_118 = ((&___lhs)->___m33_15);
		float L_119 = ((&___rhs)->___m32_11);
		(&V_0)->___m32_11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&___lhs)->___m30_3);
		float L_121 = ((&___rhs)->___m03_12);
		float L_122 = ((&___lhs)->___m31_7);
		float L_123 = ((&___rhs)->___m13_13);
		float L_124 = ((&___lhs)->___m32_11);
		float L_125 = ((&___rhs)->___m23_14);
		float L_126 = ((&___lhs)->___m33_15);
		float L_127 = ((&___rhs)->___m33_15);
		(&V_0)->___m33_15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		Matrix4x4_t33  L_128 = V_0;
		return L_128;
	}
}
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern MethodInfo Matrix4x4_op_Multiply_m3261_MethodInfo;
extern "C" Vector4_t91  Matrix4x4_op_Multiply_m3261 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___lhs, Vector4_t91  ___v, MethodInfo* method)
{
	Vector4_t91  V_0 = {0};
	{
		float L_0 = ((&___lhs)->___m00_0);
		float L_1 = ((&___v)->___x_1);
		float L_2 = ((&___lhs)->___m01_4);
		float L_3 = ((&___v)->___y_2);
		float L_4 = ((&___lhs)->___m02_8);
		float L_5 = ((&___v)->___z_3);
		float L_6 = ((&___lhs)->___m03_12);
		float L_7 = ((&___v)->___w_4);
		(&V_0)->___x_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&___lhs)->___m10_1);
		float L_9 = ((&___v)->___x_1);
		float L_10 = ((&___lhs)->___m11_5);
		float L_11 = ((&___v)->___y_2);
		float L_12 = ((&___lhs)->___m12_9);
		float L_13 = ((&___v)->___z_3);
		float L_14 = ((&___lhs)->___m13_13);
		float L_15 = ((&___v)->___w_4);
		(&V_0)->___y_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&___lhs)->___m20_2);
		float L_17 = ((&___v)->___x_1);
		float L_18 = ((&___lhs)->___m21_6);
		float L_19 = ((&___v)->___y_2);
		float L_20 = ((&___lhs)->___m22_10);
		float L_21 = ((&___v)->___z_3);
		float L_22 = ((&___lhs)->___m23_14);
		float L_23 = ((&___v)->___w_4);
		(&V_0)->___z_3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&___lhs)->___m30_3);
		float L_25 = ((&___v)->___x_1);
		float L_26 = ((&___lhs)->___m31_7);
		float L_27 = ((&___v)->___y_2);
		float L_28 = ((&___lhs)->___m32_11);
		float L_29 = ((&___v)->___z_3);
		float L_30 = ((&___lhs)->___m33_15);
		float L_31 = ((&___v)->___w_4);
		(&V_0)->___w_4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		Vector4_t91  L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" bool Matrix4x4_op_Equality_m3262 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___lhs, Matrix4x4_t33  ___rhs, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		Vector4_t91  L_0 = Matrix4x4_GetColumn_m3249((&___lhs), 0, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_1 = Matrix4x4_GetColumn_m3249((&___rhs), 0, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		bool L_2 = Vector4_op_Equality_m3297(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector4_op_Equality_m3297_MethodInfo);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t91  L_3 = Matrix4x4_GetColumn_m3249((&___lhs), 1, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_4 = Matrix4x4_GetColumn_m3249((&___rhs), 1, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		bool L_5 = Vector4_op_Equality_m3297(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector4_op_Equality_m3297_MethodInfo);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t91  L_6 = Matrix4x4_GetColumn_m3249((&___lhs), 2, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_7 = Matrix4x4_GetColumn_m3249((&___rhs), 2, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		bool L_8 = Vector4_op_Equality_m3297(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector4_op_Equality_m3297_MethodInfo);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t91  L_9 = Matrix4x4_GetColumn_m3249((&___lhs), 3, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		Vector4_t91  L_10 = Matrix4x4_GetColumn_m3249((&___rhs), 3, /*hidden argument*/&Matrix4x4_GetColumn_m3249_MethodInfo);
		bool L_11 = Vector4_op_Equality_m3297(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Vector4_op_Equality_m3297_MethodInfo);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern MethodInfo Matrix4x4_op_Inequality_m3263_MethodInfo;
extern "C" bool Matrix4x4_op_Inequality_m3263 (Object_t * __this /* static, unused */, Matrix4x4_t33  ___lhs, Matrix4x4_t33  ___rhs, MethodInfo* method)
{
	{
		Matrix4x4_t33  L_0 = ___lhs;
		Matrix4x4_t33  L_1 = ___rhs;
		bool L_2 = Matrix4x4_op_Equality_m3262(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Matrix4x4_op_Equality_m3262_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Bounds_t408_il2cpp_TypeInfo;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"

// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
extern MethodInfo Bounds_get_center_m2536_MethodInfo;
extern MethodInfo Bounds_get_extents_m3266_MethodInfo;
extern MethodInfo Bounds_get_max_m2545_MethodInfo;
extern MethodInfo Bounds_SetMinMax_m3270_MethodInfo;
extern MethodInfo Bounds_get_min_m2528_MethodInfo;
extern MethodInfo Bounds_set_extents_m3267_MethodInfo;
extern MethodInfo Bounds_set_center_m2538_MethodInfo;
extern MethodInfo Bounds_Encapsulate_m2544_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_Contains_m3276_MethodInfo;
extern MethodInfo Bounds_Internal_Contains_m3275_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_SqrDistance_m3279_MethodInfo;
extern MethodInfo Bounds_Internal_SqrDistance_m3278_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_IntersectRay_m3282_MethodInfo;
extern MethodInfo Bounds_Internal_IntersectRay_m3281_MethodInfo;
extern MethodInfo Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3286_MethodInfo;
extern MethodInfo Bounds_Internal_GetClosestPoint_m3285_MethodInfo;
extern MethodInfo Bounds_op_Equality_m3290_MethodInfo;


// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Bounds__ctor_m2535_MethodInfo;
extern "C" void Bounds__ctor_m2535 (Bounds_t408 * __this, Vector3_t31  ___center, Vector3_t31  ___size, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___center;
		__this->___m_Center_0 = L_0;
		Vector3_t31  L_1 = ___size;
		Vector3_t31  L_2 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		__this->___m_Extents_1 = L_2;
		return;
	}
}
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern MethodInfo Bounds_GetHashCode_m3264_MethodInfo;
extern "C" int32_t Bounds_GetHashCode_m3264 (Bounds_t408 * __this, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	Vector3_t31  V_1 = {0};
	{
		Vector3_t31  L_0 = Bounds_get_center_m2536(__this, /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Vector3_GetHashCode_m3206((&V_0), /*hidden argument*/&Vector3_GetHashCode_m3206_MethodInfo);
		Vector3_t31  L_2 = Bounds_get_extents_m3266(__this, /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		V_1 = L_2;
		int32_t L_3 = Vector3_GetHashCode_m3206((&V_1), /*hidden argument*/&Vector3_GetHashCode_m3206_MethodInfo);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern MethodInfo Bounds_Equals_m3265_MethodInfo;
extern "C" bool Bounds_Equals_m3265 (Bounds_t408 * __this, Object_t * ___other, MethodInfo* method)
{
	Bounds_t408  V_0 = {0};
	Vector3_t31  V_1 = {0};
	Vector3_t31  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Bounds_t408_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Bounds_t408 *)((Bounds_t408 *)UnBox (L_1, InitializedTypeInfo(&Bounds_t408_il2cpp_TypeInfo)))));
		Vector3_t31  L_2 = Bounds_get_center_m2536(__this, /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		V_1 = L_2;
		Vector3_t31  L_3 = Bounds_get_center_m2536((&V_0), /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		Vector3_t31  L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo), &L_4);
		bool L_6 = Vector3_Equals_m3207((&V_1), L_5, /*hidden argument*/&Vector3_Equals_m3207_MethodInfo);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		Vector3_t31  L_7 = Bounds_get_extents_m3266(__this, /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		V_2 = L_7;
		Vector3_t31  L_8 = Bounds_get_extents_m3266((&V_0), /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo), &L_9);
		bool L_11 = Vector3_Equals_m3207((&V_2), L_10, /*hidden argument*/&Vector3_Equals_m3207_MethodInfo);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t31  Bounds_get_center_m2536 (Bounds_t408 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Center_0);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m2538 (Bounds_t408 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___value;
		__this->___m_Center_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern MethodInfo Bounds_get_size_m2527_MethodInfo;
extern "C" Vector3_t31  Bounds_get_size_m2527 (Bounds_t408 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Extents_1);
		Vector3_t31  L_1 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_0, (2.0f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern MethodInfo Bounds_set_size_m2537_MethodInfo;
extern "C" void Bounds_set_size_m2537 (Bounds_t408 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___value;
		Vector3_t31  L_1 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_0, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		__this->___m_Extents_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t31  Bounds_get_extents_m3266 (Bounds_t408 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Extents_1);
		return L_0;
	}
}
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m3267 (Bounds_t408 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___value;
		__this->___m_Extents_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t31  Bounds_get_min_m2528 (Bounds_t408 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Bounds_get_center_m2536(__this, /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		Vector3_t31  L_1 = Bounds_get_extents_m3266(__this, /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_2 = Vector3_op_Subtraction_m283(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m283_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern MethodInfo Bounds_set_min_m3268_MethodInfo;
extern "C" void Bounds_set_min_m3268 (Bounds_t408 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___value;
		Vector3_t31  L_1 = Bounds_get_max_m2545(__this, /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		Bounds_SetMinMax_m3270(__this, L_0, L_1, /*hidden argument*/&Bounds_SetMinMax_m3270_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t31  Bounds_get_max_m2545 (Bounds_t408 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Bounds_get_center_m2536(__this, /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		Vector3_t31  L_1 = Bounds_get_extents_m3266(__this, /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_2 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern MethodInfo Bounds_set_max_m3269_MethodInfo;
extern "C" void Bounds_set_max_m3269 (Bounds_t408 * __this, Vector3_t31  ___value, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Bounds_get_min_m2528(__this, /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		Vector3_t31  L_1 = ___value;
		Bounds_SetMinMax_m3270(__this, L_0, L_1, /*hidden argument*/&Bounds_SetMinMax_m3270_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m3270 (Bounds_t408 * __this, Vector3_t31  ___min, Vector3_t31  ___max, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___max;
		Vector3_t31  L_1 = ___min;
		Vector3_t31  L_2 = Vector3_op_Subtraction_m283(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m283_MethodInfo);
		Vector3_t31  L_3 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_2, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		Bounds_set_extents_m3267(__this, L_3, /*hidden argument*/&Bounds_set_extents_m3267_MethodInfo);
		Vector3_t31  L_4 = ___min;
		Vector3_t31  L_5 = Bounds_get_extents_m3266(__this, /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_6 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		Bounds_set_center_m2538(__this, L_6, /*hidden argument*/&Bounds_set_center_m2538_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m2544 (Bounds_t408 * __this, Vector3_t31  ___point, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Bounds_get_min_m2528(__this, /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		Vector3_t31  L_1 = ___point;
		Vector3_t31  L_2 = Vector3_Min_m2542(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Min_m2542_MethodInfo);
		Vector3_t31  L_3 = Bounds_get_max_m2545(__this, /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		Vector3_t31  L_4 = ___point;
		Vector3_t31  L_5 = Vector3_Max_m2543(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Max_m2543_MethodInfo);
		Bounds_SetMinMax_m3270(__this, L_2, L_5, /*hidden argument*/&Bounds_SetMinMax_m3270_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern MethodInfo Bounds_Encapsulate_m3271_MethodInfo;
extern "C" void Bounds_Encapsulate_m3271 (Bounds_t408 * __this, Bounds_t408  ___bounds, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Bounds_get_center_m2536((&___bounds), /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		Vector3_t31  L_1 = Bounds_get_extents_m3266((&___bounds), /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_2 = Vector3_op_Subtraction_m283(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m283_MethodInfo);
		Bounds_Encapsulate_m2544(__this, L_2, /*hidden argument*/&Bounds_Encapsulate_m2544_MethodInfo);
		Vector3_t31  L_3 = Bounds_get_center_m2536((&___bounds), /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		Vector3_t31  L_4 = Bounds_get_extents_m3266((&___bounds), /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_5 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		Bounds_Encapsulate_m2544(__this, L_5, /*hidden argument*/&Bounds_Encapsulate_m2544_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern MethodInfo Bounds_Expand_m3272_MethodInfo;
extern "C" void Bounds_Expand_m3272 (Bounds_t408 * __this, float ___amount, MethodInfo* method)
{
	{
		float L_0 = ___amount;
		___amount = ((float)((float)L_0*(float)(0.5f)));
		Vector3_t31  L_1 = Bounds_get_extents_m3266(__this, /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		float L_2 = ___amount;
		float L_3 = ___amount;
		float L_4 = ___amount;
		Vector3_t31  L_5 = {0};
		Vector3__ctor_m348(&L_5, L_2, L_3, L_4, /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		Vector3_t31  L_6 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_1, L_5, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		Bounds_set_extents_m3267(__this, L_6, /*hidden argument*/&Bounds_set_extents_m3267_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern MethodInfo Bounds_Expand_m3273_MethodInfo;
extern "C" void Bounds_Expand_m3273 (Bounds_t408 * __this, Vector3_t31  ___amount, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Bounds_get_extents_m3266(__this, /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_1 = ___amount;
		Vector3_t31  L_2 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		Vector3_t31  L_3 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		Bounds_set_extents_m3267(__this, L_3, /*hidden argument*/&Bounds_set_extents_m3267_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern MethodInfo Bounds_Intersects_m3274_MethodInfo;
extern "C" bool Bounds_Intersects_m3274 (Bounds_t408 * __this, Bounds_t408  ___bounds, MethodInfo* method)
{
	Vector3_t31  V_0 = {0};
	Vector3_t31  V_1 = {0};
	Vector3_t31  V_2 = {0};
	Vector3_t31  V_3 = {0};
	Vector3_t31  V_4 = {0};
	Vector3_t31  V_5 = {0};
	Vector3_t31  V_6 = {0};
	Vector3_t31  V_7 = {0};
	Vector3_t31  V_8 = {0};
	Vector3_t31  V_9 = {0};
	Vector3_t31  V_10 = {0};
	Vector3_t31  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		Vector3_t31  L_0 = Bounds_get_min_m2528(__this, /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		Vector3_t31  L_2 = Bounds_get_max_m2545((&___bounds), /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t31  L_4 = Bounds_get_max_m2545(__this, /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_1);
		Vector3_t31  L_6 = Bounds_get_min_m2528((&___bounds), /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		V_3 = L_6;
		float L_7 = ((&V_3)->___x_1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t31  L_8 = Bounds_get_min_m2528(__this, /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		V_4 = L_8;
		float L_9 = ((&V_4)->___y_2);
		Vector3_t31  L_10 = Bounds_get_max_m2545((&___bounds), /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		V_5 = L_10;
		float L_11 = ((&V_5)->___y_2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t31  L_12 = Bounds_get_max_m2545(__this, /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		V_6 = L_12;
		float L_13 = ((&V_6)->___y_2);
		Vector3_t31  L_14 = Bounds_get_min_m2528((&___bounds), /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		V_7 = L_14;
		float L_15 = ((&V_7)->___y_2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t31  L_16 = Bounds_get_min_m2528(__this, /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		V_8 = L_16;
		float L_17 = ((&V_8)->___z_3);
		Vector3_t31  L_18 = Bounds_get_max_m2545((&___bounds), /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		V_9 = L_18;
		float L_19 = ((&V_9)->___z_3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t31  L_20 = Bounds_get_max_m2545(__this, /*hidden argument*/&Bounds_get_max_m2545_MethodInfo);
		V_10 = L_20;
		float L_21 = ((&V_10)->___z_3);
		Vector3_t31  L_22 = Bounds_get_min_m2528((&___bounds), /*hidden argument*/&Bounds_get_min_m2528_MethodInfo);
		V_11 = L_22;
		float L_23 = ((&V_11)->___z_3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" bool Bounds_Internal_Contains_m3275 (Object_t * __this /* static, unused */, Bounds_t408  ___m, Vector3_t31  ___point, MethodInfo* method)
{
	{
		bool L_0 = Bounds_INTERNAL_CALL_Internal_Contains_m3276(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_Contains_m3276_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_Contains_m3276 (Object_t * __this /* static, unused */, Bounds_t408 * ___m, Vector3_t31 * ___point, MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_Contains_m3276_ftn) (Bounds_t408 *, Vector3_t31 *);
	static Bounds_INTERNAL_CALL_Internal_Contains_m3276_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_Contains_m3276_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern MethodInfo Bounds_Contains_m3277_MethodInfo;
extern "C" bool Bounds_Contains_m3277 (Bounds_t408 * __this, Vector3_t31  ___point, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___point;
		bool L_1 = Bounds_Internal_Contains_m3275(NULL /*static, unused*/, (*(Bounds_t408 *)__this), L_0, /*hidden argument*/&Bounds_Internal_Contains_m3275_MethodInfo);
		return L_1;
	}
}
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C" float Bounds_Internal_SqrDistance_m3278 (Object_t * __this /* static, unused */, Bounds_t408  ___m, Vector3_t31  ___point, MethodInfo* method)
{
	{
		float L_0 = Bounds_INTERNAL_CALL_Internal_SqrDistance_m3279(NULL /*static, unused*/, (&___m), (&___point), /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_SqrDistance_m3279_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" float Bounds_INTERNAL_CALL_Internal_SqrDistance_m3279 (Object_t * __this /* static, unused */, Bounds_t408 * ___m, Vector3_t31 * ___point, MethodInfo* method)
{
	typedef float (*Bounds_INTERNAL_CALL_Internal_SqrDistance_m3279_ftn) (Bounds_t408 *, Vector3_t31 *);
	static Bounds_INTERNAL_CALL_Internal_SqrDistance_m3279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_SqrDistance_m3279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___m, ___point);
}
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern MethodInfo Bounds_SqrDistance_m3280_MethodInfo;
extern "C" float Bounds_SqrDistance_m3280 (Bounds_t408 * __this, Vector3_t31  ___point, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___point;
		float L_1 = Bounds_Internal_SqrDistance_m3278(NULL /*static, unused*/, (*(Bounds_t408 *)__this), L_0, /*hidden argument*/&Bounds_Internal_SqrDistance_m3278_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_Internal_IntersectRay_m3281 (Object_t * __this /* static, unused */, Ray_t226 * ___ray, Bounds_t408 * ___bounds, float* ___distance, MethodInfo* method)
{
	{
		Ray_t226 * L_0 = ___ray;
		Bounds_t408 * L_1 = ___bounds;
		float* L_2 = ___distance;
		bool L_3 = Bounds_INTERNAL_CALL_Internal_IntersectRay_m3282(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_IntersectRay_m3282_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C" bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m3282 (Object_t * __this /* static, unused */, Ray_t226 * ___ray, Bounds_t408 * ___bounds, float* ___distance, MethodInfo* method)
{
	typedef bool (*Bounds_INTERNAL_CALL_Internal_IntersectRay_m3282_ftn) (Ray_t226 *, Bounds_t408 *, float*);
	static Bounds_INTERNAL_CALL_Internal_IntersectRay_m3282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_IntersectRay_m3282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(___ray, ___bounds, ___distance);
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern MethodInfo Bounds_IntersectRay_m3283_MethodInfo;
extern "C" bool Bounds_IntersectRay_m3283 (Bounds_t408 * __this, Ray_t226  ___ray, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = Bounds_Internal_IntersectRay_m3281(NULL /*static, unused*/, (&___ray), __this, (&V_0), /*hidden argument*/&Bounds_Internal_IntersectRay_m3281_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern MethodInfo Bounds_IntersectRay_m3284_MethodInfo;
extern "C" bool Bounds_IntersectRay_m3284 (Bounds_t408 * __this, Ray_t226  ___ray, float* ___distance, MethodInfo* method)
{
	{
		float* L_0 = ___distance;
		bool L_1 = Bounds_Internal_IntersectRay_m3281(NULL /*static, unused*/, (&___ray), __this, L_0, /*hidden argument*/&Bounds_Internal_IntersectRay_m3281_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t31  Bounds_Internal_GetClosestPoint_m3285 (Object_t * __this /* static, unused */, Bounds_t408 * ___bounds, Vector3_t31 * ___point, MethodInfo* method)
{
	{
		Bounds_t408 * L_0 = ___bounds;
		Vector3_t31 * L_1 = ___point;
		Vector3_t31  L_2 = Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3286(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3286_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C" Vector3_t31  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3286 (Object_t * __this /* static, unused */, Bounds_t408 * ___bounds, Vector3_t31 * ___point, MethodInfo* method)
{
	typedef Vector3_t31  (*Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3286_ftn) (Bounds_t408 *, Vector3_t31 *);
	static Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3286_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3286_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___bounds, ___point);
}
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
extern MethodInfo Bounds_ClosestPoint_m3287_MethodInfo;
extern "C" Vector3_t31  Bounds_ClosestPoint_m3287 (Bounds_t408 * __this, Vector3_t31  ___point, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = Bounds_Internal_GetClosestPoint_m3285(NULL /*static, unused*/, __this, (&___point), /*hidden argument*/&Bounds_Internal_GetClosestPoint_m3285_MethodInfo);
		return L_0;
	}
}
// System.String UnityEngine.Bounds::ToString()
extern MethodInfo Bounds_ToString_m3288_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m3288 (Bounds_t408 * __this, MethodInfo* method)
{
	static bool Bounds_ToString_m3288_init;
	if (!Bounds_ToString_m3288_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Bounds_ToString_m3288_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 2));
		Vector3_t31  L_1 = (__this->___m_Center_0);
		Vector3_t31  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		Vector3_t31  L_5 = (__this->___m_Extents_1);
		Vector3_t31  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral348, L_4, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_8;
	}
}
// System.String UnityEngine.Bounds::ToString(System.String)
extern MethodInfo Bounds_ToString_m3289_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Bounds_ToString_m3289 (Bounds_t408 * __this, String_t* ___format, MethodInfo* method)
{
	static bool Bounds_ToString_m3289_init;
	if (!Bounds_ToString_m3289_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Bounds_ToString_m3289_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 2));
		Vector3_t31 * L_1 = &(__this->___m_Center_0);
		String_t* L_2 = ___format;
		String_t* L_3 = Vector3_ToString_m3210(L_1, L_2, /*hidden argument*/&Vector3_ToString_m3210_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		Vector3_t31 * L_5 = &(__this->___m_Extents_1);
		String_t* L_6 = ___format;
		String_t* L_7 = Vector3_ToString_m3210(L_5, L_6, /*hidden argument*/&Vector3_ToString_m3210_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral348, L_4, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_8;
	}
}
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m3290 (Object_t * __this /* static, unused */, Bounds_t408  ___lhs, Bounds_t408  ___rhs, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Vector3_t31  L_0 = Bounds_get_center_m2536((&___lhs), /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		Vector3_t31  L_1 = Bounds_get_center_m2536((&___rhs), /*hidden argument*/&Bounds_get_center_m2536_MethodInfo);
		bool L_2 = Vector3_op_Equality_m3215(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Equality_m3215_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t31  L_3 = Bounds_get_extents_m3266((&___lhs), /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		Vector3_t31  L_4 = Bounds_get_extents_m3266((&___rhs), /*hidden argument*/&Bounds_get_extents_m3266_MethodInfo);
		bool L_5 = Vector3_op_Equality_m3215(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Equality_m3215_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern MethodInfo Bounds_op_Inequality_m2531_MethodInfo;
extern "C" bool Bounds_op_Inequality_m2531 (Object_t * __this /* static, unused */, Bounds_t408  ___lhs, Bounds_t408  ___rhs, MethodInfo* method)
{
	{
		Bounds_t408  L_0 = ___lhs;
		Bounds_t408  L_1 = ___rhs;
		bool L_2 = Bounds_op_Equality_m3290(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Bounds_op_Equality_m3290_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Vector4_Dot_m3294_MethodInfo;
extern MethodInfo Vector4_op_Subtraction_m3296_MethodInfo;
extern MethodInfo Vector4_SqrMagnitude_m3295_MethodInfo;


// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m214 (Vector4_t91 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		float L_3 = ___w;
		__this->___w_4 = L_3;
		return;
	}
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern MethodInfo Vector4_get_Item_m2386_MethodInfo;
extern "C" float Vector4_get_Item_m2386 (Vector4_t91 * __this, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->___x_1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->___y_2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->___z_3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->___w_4);
		return L_5;
	}

IL_0039:
	{
		IndexOutOfRangeException_t803 * L_6 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_6, (String_t*) &_stringLiteral349, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern MethodInfo Vector4_set_Item_m2388_MethodInfo;
extern "C" void Vector4_set_Item_m2388 (Vector4_t91 * __this, int32_t ___index, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = ___value;
		__this->___x_1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = ___value;
		__this->___y_2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = ___value;
		__this->___z_3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = ___value;
		__this->___w_4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		IndexOutOfRangeException_t803 * L_6 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_6, (String_t*) &_stringLiteral349, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m3291 (Vector4_t91 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m3845(L_0, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m3845(L_2, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m3845(L_4, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		float* L_6 = &(__this->___w_4);
		int32_t L_7 = Single_GetHashCode_m3845(L_6, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" bool Vector4_Equals_m3292 (Vector4_t91 * __this, Object_t * ___other, MethodInfo* method)
{
	Vector4_t91  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&Vector4_t91_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t91 *)((Vector4_t91 *)UnBox (L_1, InitializedTypeInfo(&Vector4_t91_il2cpp_TypeInfo)))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m3873(L_2, L_3, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m3873(L_5, L_6, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m3873(L_8, L_9, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_4);
		float L_12 = ((&V_0)->___w_4);
		bool L_13 = Single_Equals_m3873(L_11, L_12, /*hidden argument*/&Single_Equals_m3873_MethodInfo);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern MethodInfo Vector4_ToString_m3293_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Vector4_ToString_m3293 (Vector4_t91 * __this, MethodInfo* method)
{
	static bool Vector4_ToString_m3293_init;
	if (!Vector4_ToString_m3293_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Vector4_ToString_m3293_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 4));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t219* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t219* L_12 = L_8;
		float L_13 = (__this->___w_4);
		float L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Single_t110_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral343, L_12, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m3294 (Object_t * __this /* static, unused */, Vector4_t91  ___a, Vector4_t91  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m3295 (Object_t * __this /* static, unused */, Vector4_t91  ___a, MethodInfo* method)
{
	{
		Vector4_t91  L_0 = ___a;
		Vector4_t91  L_1 = ___a;
		float L_2 = Vector4_Dot_m3294(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector4_Dot_m3294_MethodInfo);
		return L_2;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern MethodInfo Vector4_get_sqrMagnitude_m2365_MethodInfo;
extern "C" float Vector4_get_sqrMagnitude_m2365 (Vector4_t91 * __this, MethodInfo* method)
{
	{
		float L_0 = Vector4_Dot_m3294(NULL /*static, unused*/, (*(Vector4_t91 *)__this), (*(Vector4_t91 *)__this), /*hidden argument*/&Vector4_Dot_m3294_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern MethodInfo Vector4_get_zero_m278_MethodInfo;
extern "C" Vector4_t91  Vector4_get_zero_m278 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector4_t91  L_0 = {0};
		Vector4__ctor_m214(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
extern MethodInfo Vector4_get_one_m352_MethodInfo;
extern "C" Vector4_t91  Vector4_get_one_m352 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector4_t91  L_0 = {0};
		Vector4__ctor_m214(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t91  Vector4_op_Subtraction_m3296 (Object_t * __this /* static, unused */, Vector4_t91  ___a, Vector4_t91  ___b, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		float L_6 = ((&___a)->___w_4);
		float L_7 = ((&___b)->___w_4);
		Vector4_t91  L_8 = {0};
		Vector4__ctor_m214(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern MethodInfo Vector4_op_Multiply_m240_MethodInfo;
extern "C" Vector4_t91  Vector4_op_Multiply_m240 (Object_t * __this /* static, unused */, Vector4_t91  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t91  L_8 = {0};
		Vector4__ctor_m214(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
extern MethodInfo Vector4_op_Multiply_m353_MethodInfo;
extern "C" Vector4_t91  Vector4_op_Multiply_m353 (Object_t * __this /* static, unused */, float ___d, Vector4_t91  ___a, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t91  L_8 = {0};
		Vector4__ctor_m214(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern MethodInfo Vector4_op_Division_m2382_MethodInfo;
extern "C" Vector4_t91  Vector4_op_Division_m2382 (Object_t * __this /* static, unused */, Vector4_t91  ___a, float ___d, MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_4);
		float L_7 = ___d;
		Vector4_t91  L_8 = {0};
		Vector4__ctor_m214(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_8;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m3297 (Object_t * __this /* static, unused */, Vector4_t91  ___lhs, Vector4_t91  ___rhs, MethodInfo* method)
{
	{
		Vector4_t91  L_0 = ___lhs;
		Vector4_t91  L_1 = ___rhs;
		Vector4_t91  L_2 = Vector4_op_Subtraction_m3296(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector4_op_Subtraction_m3296_MethodInfo);
		float L_3 = Vector4_SqrMagnitude_m3295(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector4_SqrMagnitude_m3295_MethodInfo);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern MethodInfo Vector4_op_Implicit_m349_MethodInfo;
extern "C" Vector4_t91  Vector4_op_Implicit_m349 (Object_t * __this /* static, unused */, Vector3_t31  ___v, MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		float L_2 = ((&___v)->___z_3);
		Vector4_t91  L_3 = {0};
		Vector4__ctor_m214(&L_3, L_0, L_1, L_2, (0.0f), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern MethodInfo Vector4_op_Implicit_m401_MethodInfo;
extern "C" Vector4_t91  Vector4_op_Implicit_m401 (Object_t * __this /* static, unused */, Vector2_t62  ___v, MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector4_t91  L_2 = {0};
		Vector4__ctor_m214(&L_2, L_0, L_1, (0.0f), (0.0f), /*hidden argument*/&Vector4__ctor_m214_MethodInfo);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Ray_t226_il2cpp_TypeInfo;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"



// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Ray__ctor_m3298_MethodInfo;
extern "C" void Ray__ctor_m3298 (Ray_t226 * __this, Vector3_t31  ___origin, Vector3_t31  ___direction, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___origin;
		__this->___m_Origin_0 = L_0;
		Vector3_t31  L_1 = Vector3_get_normalized_m2557((&___direction), /*hidden argument*/&Vector3_get_normalized_m2557_MethodInfo);
		__this->___m_Direction_1 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern MethodInfo Ray_get_origin_m2237_MethodInfo;
extern "C" Vector3_t31  Ray_get_origin_m2237 (Ray_t226 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Origin_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern MethodInfo Ray_get_direction_m2238_MethodInfo;
extern "C" Vector3_t31  Ray_get_direction_m2238 (Ray_t226 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Direction_1);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern MethodInfo Ray_GetPoint_m2433_MethodInfo;
extern "C" Vector3_t31  Ray_GetPoint_m2433 (Ray_t226 * __this, float ___distance, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Origin_0);
		Vector3_t31  L_1 = (__this->___m_Direction_1);
		float L_2 = ___distance;
		Vector3_t31  L_3 = Vector3_op_Multiply_m275(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Multiply_m275_MethodInfo);
		Vector3_t31  L_4 = Vector3_op_Addition_m341(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&Vector3_op_Addition_m341_MethodInfo);
		return L_4;
	}
}
// System.String UnityEngine.Ray::ToString()
extern MethodInfo Ray_ToString_m3299_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Ray_ToString_m3299 (Ray_t226 * __this, MethodInfo* method)
{
	static bool Ray_ToString_m3299_init;
	if (!Ray_ToString_m3299_init)
	{
		ObjectU5BU5D_t219_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t219_0_0_0);
		Ray_ToString_m3299_init = true;
	}
	{
		ObjectU5BU5D_t219* L_0 = ((ObjectU5BU5D_t219*)SZArrayNew(ObjectU5BU5D_t219_il2cpp_TypeInfo_var, 2));
		Vector3_t31  L_1 = (__this->___m_Origin_0);
		Vector3_t31  L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t219* L_4 = L_0;
		Vector3_t31  L_5 = (__this->___m_Direction_1);
		Vector3_t31  L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Vector3_t31_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m3361(NULL /*static, unused*/, (String_t*) &_stringLiteral350, L_4, /*hidden argument*/&UnityString_Format_m3361_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Plane_t507_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"

extern MethodInfo Plane_get_normal_m3300_MethodInfo;
extern MethodInfo Plane_get_distance_m3301_MethodInfo;
extern MethodInfo Mathf_Approximately_m2215_MethodInfo;


// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Plane__ctor_m2431_MethodInfo;
extern "C" void Plane__ctor_m2431 (Plane_t507 * __this, Vector3_t31  ___inNormal, Vector3_t31  ___inPoint, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = ___inNormal;
		Vector3_t31  L_1 = Vector3_Normalize_m3208(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_Normalize_m3208_MethodInfo);
		__this->___m_Normal_0 = L_1;
		Vector3_t31  L_2 = ___inNormal;
		Vector3_t31  L_3 = ___inPoint;
		float L_4 = Vector3_Dot_m281(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_Dot_m281_MethodInfo);
		__this->___m_Distance_1 = ((-L_4));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" Vector3_t31  Plane_get_normal_m3300 (Plane_t507 * __this, MethodInfo* method)
{
	{
		Vector3_t31  L_0 = (__this->___m_Normal_0);
		return L_0;
	}
}
// System.Single UnityEngine.Plane::get_distance()
extern "C" float Plane_get_distance_m3301 (Plane_t507 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern MethodInfo Plane_Raycast_m2432_MethodInfo;
extern "C" bool Plane_Raycast_m2432 (Plane_t507 * __this, Ray_t226  ___ray, float* ___enter, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t31  L_0 = Ray_get_direction_m2238((&___ray), /*hidden argument*/&Ray_get_direction_m2238_MethodInfo);
		Vector3_t31  L_1 = Plane_get_normal_m3300(__this, /*hidden argument*/&Plane_get_normal_m3300_MethodInfo);
		float L_2 = Vector3_Dot_m281(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Dot_m281_MethodInfo);
		V_0 = L_2;
		Vector3_t31  L_3 = Ray_get_origin_m2237((&___ray), /*hidden argument*/&Ray_get_origin_m2237_MethodInfo);
		Vector3_t31  L_4 = Plane_get_normal_m3300(__this, /*hidden argument*/&Plane_get_normal_m3300_MethodInfo);
		float L_5 = Vector3_Dot_m281(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Dot_m281_MethodInfo);
		float L_6 = Plane_get_distance_m3301(__this, /*hidden argument*/&Plane_get_distance_m3301_MethodInfo);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		bool L_8 = Mathf_Approximately_m2215(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/&Mathf_Approximately_m2215_MethodInfo);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = ___enter;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = ___enter;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = ___enter;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternal.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MathfInternal_t675_il2cpp_TypeInfo;
// UnityEngineInternal.MathfInternal
#include "UnityEngine_UnityEngineInternal_MathfInternalMethodDeclarations.h"



// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern MethodInfo MathfInternal__cctor_m3302_MethodInfo;
extern "C" void MathfInternal__cctor_m3302 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((MathfInternal_t675_StaticFields*)InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo)->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		((MathfInternal_t675_StaticFields*)InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo)->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		float L_0 = ((MathfInternal_t675_StaticFields*)InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo)->static_fields)->___FloatMinDenormal_1;
		((MathfInternal_t675_StaticFields*)InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo)->static_fields)->___IsFlushToZeroEnabled_2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_Mathf.h"
#ifndef _MSC_VER
#else
#endif

// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
extern MethodInfo Math_Sin_m3875_MethodInfo;
extern MethodInfo Math_Cos_m3876_MethodInfo;
extern MethodInfo Math_Tan_m3877_MethodInfo;
extern MethodInfo Math_Acos_m3878_MethodInfo;
extern MethodInfo Math_Atan2_m3879_MethodInfo;
extern MethodInfo Math_Sqrt_m3880_MethodInfo;
extern MethodInfo Math_Abs_m3881_MethodInfo;
extern MethodInfo Math_Pow_m3882_MethodInfo;
extern MethodInfo Math_Log_m3883_MethodInfo;
extern MethodInfo Math_Floor_m3884_MethodInfo;
extern MethodInfo Math_Round_m3885_MethodInfo;
extern MethodInfo Math_Ceiling_m3886_MethodInfo;
extern MethodInfo Mathf_Abs_m367_MethodInfo;
extern MethodInfo Mathf_Floor_m316_MethodInfo;


// System.Void UnityEngine.Mathf::.cctor()
extern MethodInfo Mathf__cctor_m3303_MethodInfo;
extern "C" void Mathf__cctor_m3303 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo));
		bool L_0 = ((MathfInternal_t675_StaticFields*)InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo)->static_fields)->___IsFlushToZeroEnabled_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo));
		float L_1 = ((MathfInternal_t675_StaticFields*)InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo)->static_fields)->___FloatMinNormal_0;
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo));
		float L_2 = ((MathfInternal_t675_StaticFields*)InitializedTypeInfo(&MathfInternal_t675_il2cpp_TypeInfo)->static_fields)->___FloatMinDenormal_1;
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t94_StaticFields*)InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo)->static_fields)->___Epsilon_0 = G_B3_0;
		return;
	}
}
// System.Single UnityEngine.Mathf::Sin(System.Single)
extern MethodInfo Mathf_Sin_m239_MethodInfo;
extern "C" float Mathf_Sin_m239 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Cos(System.Single)
extern MethodInfo Mathf_Cos_m238_MethodInfo;
extern "C" float Mathf_Cos_m238 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Tan(System.Single)
extern MethodInfo Mathf_Tan_m360_MethodInfo;
extern "C" float Mathf_Tan_m360 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = tan((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Acos(System.Single)
extern "C" float Mathf_Acos_m3304 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = acos((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Atan2(System.Single,System.Single)
extern MethodInfo Mathf_Atan2_m774_MethodInfo;
extern "C" float Mathf_Atan2_m774 (Object_t * __this /* static, unused */, float ___y, float ___x, MethodInfo* method)
{
	{
		float L_0 = ___y;
		float L_1 = ___x;
		double L_2 = atan2((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
extern "C" float Mathf_Sqrt_m327 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C" float Mathf_Abs_m367 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" float Mathf_Min_m270 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" int32_t Mathf_Min_m2451 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" float Mathf_Max_m269 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a;
		float L_1 = ___b;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" int32_t Mathf_Max_m2449 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a;
		int32_t L_1 = ___b;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = ___a;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = ___b;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
extern MethodInfo Mathf_Pow_m335_MethodInfo;
extern "C" float Mathf_Pow_m335 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern MethodInfo Mathf_Log_m408_MethodInfo;
extern "C" float Mathf_Log_m408 (Object_t * __this /* static, unused */, float ___f, float ___p, MethodInfo* method)
{
	{
		float L_0 = ___f;
		float L_1 = ___p;
		double L_2 = Math_Log_m3883(NULL /*static, unused*/, (((double)L_0)), (((double)L_1)), /*hidden argument*/&Math_Log_m3883_MethodInfo);
		return (((float)L_2));
	}
}
// System.Single UnityEngine.Mathf::Floor(System.Single)
extern "C" float Mathf_Floor_m316 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Single UnityEngine.Mathf::Round(System.Single)
extern "C" float Mathf_Round_m2516 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern MethodInfo Mathf_CeilToInt_m392_MethodInfo;
extern "C" int32_t Mathf_CeilToInt_m392 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern MethodInfo Mathf_FloorToInt_m328_MethodInfo;
extern "C" int32_t Mathf_FloorToInt_m328 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern MethodInfo Mathf_RoundToInt_m822_MethodInfo;
extern "C" int32_t Mathf_RoundToInt_m822 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	{
		float L_0 = ___f;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern MethodInfo Mathf_Sign_m2534_MethodInfo;
extern "C" float Mathf_Sign_m2534 (Object_t * __this /* static, unused */, float ___f, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Clamp_m315 (Object_t * __this /* static, unused */, float ___value, float ___min, float ___max, MethodInfo* method)
{
	{
		float L_0 = ___value;
		float L_1 = ___min;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = ___value;
		float L_4 = ___max;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		float L_6 = ___value;
		return L_6;
	}
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern MethodInfo Mathf_Clamp_m393_MethodInfo;
extern "C" int32_t Mathf_Clamp_m393 (Object_t * __this /* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = ___min;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___min;
		___value = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = ___value;
		int32_t L_4 = ___max;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___max;
		___value = L_5;
	}

IL_0019:
	{
		int32_t L_6 = ___value;
		return L_6;
	}
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" float Mathf_Clamp01_m2362 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = ___value;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = ___value;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" float Mathf_Lerp_m897 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___t, MethodInfo* method)
{
	{
		float L_0 = ___from;
		float L_1 = ___to;
		float L_2 = ___from;
		float L_3 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_4 = Mathf_Clamp01_m2362(NULL /*static, unused*/, L_3, /*hidden argument*/&Mathf_Clamp01_m2362_MethodInfo);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" bool Mathf_Approximately_m2215 (Object_t * __this /* static, unused */, float ___a, float ___b, MethodInfo* method)
{
	{
		float L_0 = ___b;
		float L_1 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = ___a;
		float L_4 = fabsf(L_3);
		float L_5 = ___b;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m269(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		float L_8 = ((Mathf_t94_StaticFields*)InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo)->static_fields)->___Epsilon_0;
		float L_9 = Mathf_Max_m269(NULL /*static, unused*/, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
extern MethodInfo Mathf_SmoothDamp_m2530_MethodInfo;
extern "C" float Mathf_SmoothDamp_m2530 (Object_t * __this /* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = ___smoothTime;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_1 = Mathf_Max_m269(NULL /*static, unused*/, (0.0001f), L_0, /*hidden argument*/&Mathf_Max_m269_MethodInfo);
		___smoothTime = L_1;
		float L_2 = ___smoothTime;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = ___deltaTime;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = ___current;
		float L_12 = ___target;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = ___target;
		V_4 = L_13;
		float L_14 = ___maxSpeed;
		float L_15 = ___smoothTime;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = Mathf_Clamp_m315(NULL /*static, unused*/, L_16, ((-L_17)), L_18, /*hidden argument*/&Mathf_Clamp_m315_MethodInfo);
		V_3 = L_19;
		float L_20 = ___current;
		float L_21 = V_3;
		___target = ((float)((float)L_20-(float)L_21));
		float* L_22 = ___currentVelocity;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___deltaTime;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = ___currentVelocity;
		float* L_27 = ___currentVelocity;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = ___target;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = ___current;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = ___currentVelocity;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = ___deltaTime;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
extern MethodInfo Mathf_Repeat_m2398_MethodInfo;
extern "C" float Mathf_Repeat_m2398 (Object_t * __this /* static, unused */, float ___t, float ___length, MethodInfo* method)
{
	{
		float L_0 = ___t;
		float L_1 = ___t;
		float L_2 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t94_il2cpp_TypeInfo));
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = ___length;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern MethodInfo Mathf_InverseLerp_m2397_MethodInfo;
extern "C" float Mathf_InverseLerp_m2397 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___from;
		float L_1 = ___to;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = ___value;
		float L_3 = ___from;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return (0.0f);
	}

IL_0014:
	{
		float L_4 = ___value;
		float L_5 = ___to;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		return (1.0f);
	}

IL_0021:
	{
		float L_6 = ___value;
		float L_7 = ___from;
		___value = ((float)((float)L_6-(float)L_7));
		float L_8 = ___value;
		float L_9 = ___to;
		float L_10 = ___from;
		___value = ((float)((float)L_8/(float)((float)((float)L_9-(float)L_10))));
		float L_11 = ___value;
		return L_11;
	}

IL_002f:
	{
		float L_12 = ___from;
		float L_13 = ___to;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_005e;
		}
	}
	{
		float L_14 = ___value;
		float L_15 = ___to;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		return (1.0f);
	}

IL_0043:
	{
		float L_16 = ___value;
		float L_17 = ___from;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0f);
	}

IL_0050:
	{
		float L_18 = ___value;
		float L_19 = ___to;
		float L_20 = ___from;
		float L_21 = ___to;
		return ((float)((float)(1.0f)-(float)((float)((float)((float)((float)L_18-(float)L_19))/(float)((float)((float)L_20-(float)L_21))))));
	}

IL_005e:
	{
		return (0.0f);
	}
}
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DrivenTransformProperties_t676_il2cpp_TypeInfo;
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformPropertiesMethodDeclarations.h"



// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DrivenRectTransformTracker_t403_il2cpp_TypeInfo;
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTrackerMethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"


// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern MethodInfo DrivenRectTransformTracker_Add_m2518_MethodInfo;
extern "C" void DrivenRectTransformTracker_Add_m2518 (DrivenRectTransformTracker_t403 * __this, Object_t93 * ___driver, RectTransform_t345 * ___rectTransform, int32_t ___drivenProperties, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern MethodInfo DrivenRectTransformTracker_Clear_m2517_MethodInfo;
extern "C" void DrivenRectTransformTracker_Clear_m2517 (DrivenRectTransformTracker_t403 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_Edge.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Edge_t677_il2cpp_TypeInfo;
// UnityEngine.RectTransform/Edge
#include "UnityEngine_UnityEngine_RectTransform_EdgeMethodDeclarations.h"



// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_Axis.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Axis_t678_il2cpp_TypeInfo;
// UnityEngine.RectTransform/Axis
#include "UnityEngine_UnityEngine_RectTransform_AxisMethodDeclarations.h"



// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertie.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReapplyDrivenProperties_t521_il2cpp_TypeInfo;
// UnityEngine.RectTransform/ReapplyDrivenProperties
#include "UnityEngine_UnityEngine_RectTransform_ReapplyDrivenPropertieMethodDeclarations.h"



// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern MethodInfo ReapplyDrivenProperties__ctor_m2648_MethodInfo;
extern "C" void ReapplyDrivenProperties__ctor_m2648 (ReapplyDrivenProperties_t521 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern MethodInfo ReapplyDrivenProperties_Invoke_m3305_MethodInfo;
extern "C" void ReapplyDrivenProperties_Invoke_m3305 (ReapplyDrivenProperties_t521 * __this, RectTransform_t345 * ___driven, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReapplyDrivenProperties_Invoke_m3305((ReapplyDrivenProperties_t521 *)__this->___prev_9,___driven, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, RectTransform_t345 * ___driven, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, RectTransform_t345 * ___driven, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___driven,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t521(Il2CppObject* delegate, RectTransform_t345 * ___driven)
{
	// Marshaling of parameter '___driven' to native representation
	RectTransform_t345 * ____driven_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern MethodInfo ReapplyDrivenProperties_BeginInvoke_m3306_MethodInfo;
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m3306 (ReapplyDrivenProperties_t521 * __this, RectTransform_t345 * ___driven, AsyncCallback_t380 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern MethodInfo ReapplyDrivenProperties_EndInvoke_m3307_MethodInfo;
extern "C" void ReapplyDrivenProperties_EndInvoke_m3307 (ReapplyDrivenProperties_t521 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransform_t345_il2cpp_TypeInfo;
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo RectTransform_INTERNAL_get_rect_m3309_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_anchorMin_m3310_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_anchorMin_m3311_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_anchorMax_m3312_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_anchorMax_m3313_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_anchoredPosition_m3314_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_anchoredPosition_m3315_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_sizeDelta_m3316_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_sizeDelta_m3317_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_get_pivot_m3318_MethodInfo;
extern MethodInfo RectTransform_INTERNAL_set_pivot_m3319_MethodInfo;
extern MethodInfo Delegate_Combine_m2321_MethodInfo;
extern MethodInfo Delegate_Remove_m2322_MethodInfo;
extern MethodInfo RectTransform_get_rect_m2305_MethodInfo;
extern MethodInfo RectTransform_GetLocalCorners_m3321_MethodInfo;
extern MethodInfo Component_get_transform_m279_MethodInfo;
extern MethodInfo Transform_TransformPoint_m2559_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m2377_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m2474_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m2470_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m2378_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m2472_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m2379_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m2471_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m2373_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m2475_MethodInfo;
extern MethodInfo RectTransform_GetParentSize_m3322_MethodInfo;
extern MethodInfo Transform_get_parent_m2162_MethodInfo;


// System.Void UnityEngine.RectTransform::add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern MethodInfo RectTransform_add_reapplyDrivenProperties_m2649_MethodInfo;
extern "C" void RectTransform_add_reapplyDrivenProperties_m2649 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t521 * ___value, MethodInfo* method)
{
	{
		ReapplyDrivenProperties_t521 * L_0 = ((RectTransform_t345_StaticFields*)InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t521 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Combine_m2321(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m2321_MethodInfo);
		((RectTransform_t345_StaticFields*)InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t521 *)Castclass(L_2, InitializedTypeInfo(&ReapplyDrivenProperties_t521_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.RectTransform::remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties)
extern MethodInfo RectTransform_remove_reapplyDrivenProperties_m3308_MethodInfo;
extern "C" void RectTransform_remove_reapplyDrivenProperties_m3308 (Object_t * __this /* static, unused */, ReapplyDrivenProperties_t521 * ___value, MethodInfo* method)
{
	{
		ReapplyDrivenProperties_t521 * L_0 = ((RectTransform_t345_StaticFields*)InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		ReapplyDrivenProperties_t521 * L_1 = ___value;
		Delegate_t493 * L_2 = Delegate_Remove_m2322(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m2322_MethodInfo);
		((RectTransform_t345_StaticFields*)InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2 = ((ReapplyDrivenProperties_t521 *)Castclass(L_2, InitializedTypeInfo(&ReapplyDrivenProperties_t521_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void RectTransform_INTERNAL_get_rect_m3309 (RectTransform_t345 * __this, Rect_t213 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_rect_m3309_ftn) (RectTransform_t345 *, Rect_t213 *);
	static RectTransform_INTERNAL_get_rect_m3309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_rect_m3309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C" Rect_t213  RectTransform_get_rect_m2305 (RectTransform_t345 * __this, MethodInfo* method)
{
	Rect_t213  V_0 = {0};
	{
		RectTransform_INTERNAL_get_rect_m3309(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_rect_m3309_MethodInfo);
		Rect_t213  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMin_m3310 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMin_m3310_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_get_anchorMin_m3310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMin_m3310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMin_m3311 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMin_m3311_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_set_anchorMin_m3311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMin_m3311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
extern "C" Vector2_t62  RectTransform_get_anchorMin_m2377 (RectTransform_t345 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMin_m3310(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_anchorMin_m3310_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMin_m2474 (RectTransform_t345 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMin_m3311(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_anchorMin_m3311_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchorMax_m3312 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchorMax_m3312_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_get_anchorMax_m3312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchorMax_m3312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchorMax_m3313 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchorMax_m3313_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_set_anchorMax_m3313_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchorMax_m3313_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
extern "C" Vector2_t62  RectTransform_get_anchorMax_m2470 (RectTransform_t345 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchorMax_m3312(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_anchorMax_m3312_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchorMax_m2378 (RectTransform_t345 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchorMax_m3313(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_anchorMax_m3313_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_anchoredPosition_m3314 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_anchoredPosition_m3314_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_get_anchoredPosition_m3314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_anchoredPosition_m3314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_anchoredPosition_m3315 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_anchoredPosition_m3315_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_set_anchoredPosition_m3315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_anchoredPosition_m3315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" Vector2_t62  RectTransform_get_anchoredPosition_m2471 (RectTransform_t345 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		RectTransform_INTERNAL_get_anchoredPosition_m3314(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_anchoredPosition_m3314_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" void RectTransform_set_anchoredPosition_m2475 (RectTransform_t345 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_anchoredPosition_m3315(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_anchoredPosition_m3315_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_sizeDelta_m3316 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_sizeDelta_m3316_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_get_sizeDelta_m3316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_sizeDelta_m3316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_sizeDelta_m3317 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_sizeDelta_m3317_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_set_sizeDelta_m3317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_sizeDelta_m3317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" Vector2_t62  RectTransform_get_sizeDelta_m2472 (RectTransform_t345 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		RectTransform_INTERNAL_get_sizeDelta_m3316(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_sizeDelta_m3316_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" void RectTransform_set_sizeDelta_m2379 (RectTransform_t345 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_sizeDelta_m3317(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_sizeDelta_m3317_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_get_pivot_m3318 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_get_pivot_m3318_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_get_pivot_m3318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_get_pivot_m3318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)
extern "C" void RectTransform_INTERNAL_set_pivot_m3319 (RectTransform_t345 * __this, Vector2_t62 * ___value, MethodInfo* method)
{
	typedef void (*RectTransform_INTERNAL_set_pivot_m3319_ftn) (RectTransform_t345 *, Vector2_t62 *);
	static RectTransform_INTERNAL_set_pivot_m3319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransform_INTERNAL_set_pivot_m3319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C" Vector2_t62  RectTransform_get_pivot_m2373 (RectTransform_t345 * __this, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		RectTransform_INTERNAL_get_pivot_m3318(__this, (&V_0), /*hidden argument*/&RectTransform_INTERNAL_get_pivot_m3318_MethodInfo);
		Vector2_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern MethodInfo RectTransform_set_pivot_m2476_MethodInfo;
extern "C" void RectTransform_set_pivot_m2476 (RectTransform_t345 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		RectTransform_INTERNAL_set_pivot_m3319(__this, (&___value), /*hidden argument*/&RectTransform_INTERNAL_set_pivot_m3319_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
extern MethodInfo RectTransform_SendReapplyDrivenProperties_m3320_MethodInfo;
extern "C" void RectTransform_SendReapplyDrivenProperties_m3320 (Object_t * __this /* static, unused */, RectTransform_t345 * ___driven, MethodInfo* method)
{
	{
		ReapplyDrivenProperties_t521 * L_0 = ((RectTransform_t345_StaticFields*)InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReapplyDrivenProperties_t521 * L_1 = ((RectTransform_t345_StaticFields*)InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)->static_fields)->___reapplyDrivenProperties_2;
		RectTransform_t345 * L_2 = ___driven;
		NullCheck(L_1);
		VirtActionInvoker1< RectTransform_t345 * >::Invoke(&ReapplyDrivenProperties_Invoke_m3305_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
extern "C" void RectTransform_GetLocalCorners_m3321 (RectTransform_t345 * __this, Vector3U5BU5D_t105* ___fourCornersArray, MethodInfo* method)
{
	Rect_t213  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Vector3U5BU5D_t105* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t105* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m331(NULL /*static, unused*/, (String_t*) &_stringLiteral351, /*hidden argument*/&Debug_LogError_m331_MethodInfo);
		return;
	}

IL_001a:
	{
		Rect_t213  L_2 = RectTransform_get_rect_m2305(__this, /*hidden argument*/&RectTransform_get_rect_m2305_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_x_m836((&V_0), /*hidden argument*/&Rect_get_x_m836_MethodInfo);
		V_1 = L_3;
		float L_4 = Rect_get_y_m837((&V_0), /*hidden argument*/&Rect_get_y_m837_MethodInfo);
		V_2 = L_4;
		float L_5 = Rect_get_xMax_m2391((&V_0), /*hidden argument*/&Rect_get_xMax_m2391_MethodInfo);
		V_3 = L_5;
		float L_6 = Rect_get_yMax_m2392((&V_0), /*hidden argument*/&Rect_get_yMax_m2392_MethodInfo);
		V_4 = L_6;
		Vector3U5BU5D_t105* L_7 = ___fourCornersArray;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t31  L_10 = {0};
		Vector3__ctor_m348(&L_10, L_8, L_9, (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		*((Vector3_t31 *)(Vector3_t31 *)SZArrayLdElema(L_7, 0)) = L_10;
		Vector3U5BU5D_t105* L_11 = ___fourCornersArray;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		float L_12 = V_1;
		float L_13 = V_4;
		Vector3_t31  L_14 = {0};
		Vector3__ctor_m348(&L_14, L_12, L_13, (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		*((Vector3_t31 *)(Vector3_t31 *)SZArrayLdElema(L_11, 1)) = L_14;
		Vector3U5BU5D_t105* L_15 = ___fourCornersArray;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 2);
		float L_16 = V_3;
		float L_17 = V_4;
		Vector3_t31  L_18 = {0};
		Vector3__ctor_m348(&L_18, L_16, L_17, (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		*((Vector3_t31 *)(Vector3_t31 *)SZArrayLdElema(L_15, 2)) = L_18;
		Vector3U5BU5D_t105* L_19 = ___fourCornersArray;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		float L_20 = V_3;
		float L_21 = V_2;
		Vector3_t31  L_22 = {0};
		Vector3__ctor_m348(&L_22, L_20, L_21, (0.0f), /*hidden argument*/&Vector3__ctor_m348_MethodInfo);
		*((Vector3_t31 *)(Vector3_t31 *)SZArrayLdElema(L_19, 3)) = L_22;
		return;
	}
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
extern MethodInfo RectTransform_GetWorldCorners_m2540_MethodInfo;
extern "C" void RectTransform_GetWorldCorners_m2540 (RectTransform_t345 * __this, Vector3U5BU5D_t105* ___fourCornersArray, MethodInfo* method)
{
	Transform_t48 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Vector3U5BU5D_t105* L_0 = ___fourCornersArray;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Vector3U5BU5D_t105* L_1 = ___fourCornersArray;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		Debug_LogError_m331(NULL /*static, unused*/, (String_t*) &_stringLiteral352, /*hidden argument*/&Debug_LogError_m331_MethodInfo);
		return;
	}

IL_001a:
	{
		Vector3U5BU5D_t105* L_2 = ___fourCornersArray;
		RectTransform_GetLocalCorners_m3321(__this, L_2, /*hidden argument*/&RectTransform_GetLocalCorners_m3321_MethodInfo);
		Transform_t48 * L_3 = Component_get_transform_m279(__this, /*hidden argument*/&Component_get_transform_m279_MethodInfo);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		Vector3U5BU5D_t105* L_4 = ___fourCornersArray;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Transform_t48 * L_6 = V_0;
		Vector3U5BU5D_t105* L_7 = ___fourCornersArray;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		NullCheck(L_6);
		Vector3_t31  L_9 = Transform_TransformPoint_m2559(L_6, (*(Vector3_t31 *)((Vector3_t31 *)(Vector3_t31 *)SZArrayLdElema(L_7, L_8))), /*hidden argument*/&Transform_TransformPoint_m2559_MethodInfo);
		*((Vector3_t31 *)(Vector3_t31 *)SZArrayLdElema(L_4, L_5)) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge,System.Single,System.Single)
extern MethodInfo RectTransform_SetInsetAndSizeFromParentEdge_m2644_MethodInfo;
extern "C" void RectTransform_SetInsetAndSizeFromParentEdge_m2644 (RectTransform_t345 * __this, int32_t ___edge, float ___inset, float ___size, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Vector2_t62  V_3 = {0};
	Vector2_t62  V_4 = {0};
	Vector2_t62  V_5 = {0};
	Vector2_t62  V_6 = {0};
	Vector2_t62  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	Vector2_t62 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	Vector2_t62 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	Vector2_t62 * G_B13_2 = {0};
	{
		int32_t L_0 = ___edge;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___edge;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = ___edge;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___edge;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		Vector2_t62  L_5 = RectTransform_get_anchorMin_m2377(__this, /*hidden argument*/&RectTransform_get_anchorMin_m2377_MethodInfo);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		Vector2_set_Item_m2396((&V_3), L_6, L_7, /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		Vector2_t62  L_8 = V_3;
		RectTransform_set_anchorMin_m2474(__this, L_8, /*hidden argument*/&RectTransform_set_anchorMin_m2474_MethodInfo);
		Vector2_t62  L_9 = RectTransform_get_anchorMax_m2470(__this, /*hidden argument*/&RectTransform_get_anchorMax_m2470_MethodInfo);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		Vector2_set_Item_m2396((&V_3), L_10, L_11, /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		Vector2_t62  L_12 = V_3;
		RectTransform_set_anchorMax_m2378(__this, L_12, /*hidden argument*/&RectTransform_set_anchorMax_m2378_MethodInfo);
		Vector2_t62  L_13 = RectTransform_get_sizeDelta_m2472(__this, /*hidden argument*/&RectTransform_get_sizeDelta_m2472_MethodInfo);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = ___size;
		Vector2_set_Item_m2396((&V_4), L_14, L_15, /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		Vector2_t62  L_16 = V_4;
		RectTransform_set_sizeDelta_m2379(__this, L_16, /*hidden argument*/&RectTransform_set_sizeDelta_m2379_MethodInfo);
		Vector2_t62  L_17 = RectTransform_get_anchoredPosition_m2471(__this, /*hidden argument*/&RectTransform_get_anchoredPosition_m2471_MethodInfo);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = ___inset;
		float L_21 = ___size;
		Vector2_t62  L_22 = RectTransform_get_pivot_m2373(__this, /*hidden argument*/&RectTransform_get_pivot_m2373_MethodInfo);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = Vector2_get_Item_m2387((&V_6), L_23, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = ___inset;
		float L_26 = ___size;
		Vector2_t62  L_27 = RectTransform_get_pivot_m2373(__this, /*hidden argument*/&RectTransform_get_pivot_m2373_MethodInfo);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = Vector2_get_Item_m2387((&V_7), L_28, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		Vector2_set_Item_m2396(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		Vector2_t62  L_30 = V_5;
		RectTransform_set_anchoredPosition_m2475(__this, L_30, /*hidden argument*/&RectTransform_set_anchoredPosition_m2475_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
extern MethodInfo RectTransform_SetSizeWithCurrentAnchors_m2614_MethodInfo;
extern "C" void RectTransform_SetSizeWithCurrentAnchors_m2614 (RectTransform_t345 * __this, int32_t ___axis, float ___size, MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector2_t62  V_1 = {0};
	Vector2_t62  V_2 = {0};
	Vector2_t62  V_3 = {0};
	Vector2_t62  V_4 = {0};
	{
		int32_t L_0 = ___axis;
		V_0 = L_0;
		Vector2_t62  L_1 = RectTransform_get_sizeDelta_m2472(__this, /*hidden argument*/&RectTransform_get_sizeDelta_m2472_MethodInfo);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = ___size;
		Vector2_t62  L_4 = RectTransform_GetParentSize_m3322(__this, /*hidden argument*/&RectTransform_GetParentSize_m3322_MethodInfo);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = Vector2_get_Item_m2387((&V_2), L_5, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		Vector2_t62  L_7 = RectTransform_get_anchorMax_m2470(__this, /*hidden argument*/&RectTransform_get_anchorMax_m2470_MethodInfo);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = Vector2_get_Item_m2387((&V_3), L_8, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		Vector2_t62  L_10 = RectTransform_get_anchorMin_m2377(__this, /*hidden argument*/&RectTransform_get_anchorMin_m2377_MethodInfo);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = Vector2_get_Item_m2387((&V_4), L_11, /*hidden argument*/&Vector2_get_Item_m2387_MethodInfo);
		Vector2_set_Item_m2396((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), /*hidden argument*/&Vector2_set_Item_m2396_MethodInfo);
		Vector2_t62  L_13 = V_1;
		RectTransform_set_sizeDelta_m2379(__this, L_13, /*hidden argument*/&RectTransform_set_sizeDelta_m2379_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransform::GetParentSize()
extern "C" Vector2_t62  RectTransform_GetParentSize_m3322 (RectTransform_t345 * __this, MethodInfo* method)
{
	RectTransform_t345 * V_0 = {0};
	Rect_t213  V_1 = {0};
	{
		Transform_t48 * L_0 = Transform_get_parent_m2162(__this, /*hidden argument*/&Transform_get_parent_m2162_MethodInfo);
		V_0 = ((RectTransform_t345 *)IsInst(L_0, InitializedTypeInfo(&RectTransform_t345_il2cpp_TypeInfo)));
		RectTransform_t345 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m211(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m211_MethodInfo);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Vector2_t62  L_3 = Vector2_get_zero_m2173(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2173_MethodInfo);
		return L_3;
	}

IL_001d:
	{
		RectTransform_t345 * L_4 = V_0;
		NullCheck(L_4);
		Rect_t213  L_5 = RectTransform_get_rect_m2305(L_4, /*hidden argument*/&RectTransform_get_rect_m2305_MethodInfo);
		V_1 = L_5;
		Vector2_t62  L_6 = Rect_get_size_m2370((&V_1), /*hidden argument*/&Rect_get_size_m2370_MethodInfo);
		return L_6;
	}
}
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResourceRequest_t679_il2cpp_TypeInfo;
// UnityEngine.ResourceRequest
#include "UnityEngine_UnityEngine_ResourceRequestMethodDeclarations.h"

// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
extern MethodInfo Resources_Load_m3325_MethodInfo;


// System.Void UnityEngine.ResourceRequest::.ctor()
extern MethodInfo ResourceRequest__ctor_m3323_MethodInfo;
extern "C" void ResourceRequest__ctor_m3323 (ResourceRequest_t679 * __this, MethodInfo* method)
{
	{
		AsyncOperation__ctor_m3362(__this, /*hidden argument*/&AsyncOperation__ctor_m3362_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
extern MethodInfo ResourceRequest_get_asset_m3324_MethodInfo;
extern "C" Object_t93 * ResourceRequest_get_asset_m3324 (ResourceRequest_t679 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Path_1);
		Type_t * L_1 = (__this->___m_Type_2);
		Object_t93 * L_2 = Resources_Load_m3325(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Resources_Load_m3325_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Resources_t680_il2cpp_TypeInfo;



// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t93 * Resources_Load_m3325 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method)
{
	typedef Object_t93 * (*Resources_Load_m3325_ftn) (String_t*, Type_t *);
	static Resources_Load_m3325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m3325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(___path, ___systemTypeInstance);
}
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariables.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SerializePrivateVariables_t681_il2cpp_TypeInfo;
// UnityEngine.SerializePrivateVariables
#include "UnityEngine_UnityEngine_SerializePrivateVariablesMethodDeclarations.h"



// System.Void UnityEngine.SerializePrivateVariables::.ctor()
extern MethodInfo SerializePrivateVariables__ctor_m3326_MethodInfo;
extern "C" void SerializePrivateVariables__ctor_m3326 (SerializePrivateVariables_t681 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SerializeField_t241_il2cpp_TypeInfo;
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"



// System.Void UnityEngine.SerializeField::.ctor()
extern MethodInfo SerializeField__ctor_m912_MethodInfo;
extern "C" void SerializeField__ctor_m912 (SerializeField_t241 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3847(__this, /*hidden argument*/&Attribute__ctor_m3847_MethodInfo);
		return;
	}
}
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Shader_t3_il2cpp_TypeInfo;
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"



// System.Boolean UnityEngine.Shader::get_isSupported()
extern MethodInfo Shader_get_isSupported_m224_MethodInfo;
extern "C" bool Shader_get_isSupported_m224 (Shader_t3 * __this, MethodInfo* method)
{
	typedef bool (*Shader_get_isSupported_m224_ftn) (Shader_t3 *);
	static Shader_get_isSupported_m224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_get_isSupported_m224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::get_isSupported()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern MethodInfo Shader_PropertyToID_m3327_MethodInfo;
extern "C" int32_t Shader_PropertyToID_m3327 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Shader_PropertyToID_m3327_ftn) (String_t*);
	static Shader_PropertyToID_m3327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m3327_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(___name);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Material_t4_il2cpp_TypeInfo;
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"

extern MethodInfo Material_GetColor_m858_MethodInfo;
extern MethodInfo Material_SetColor_m320_MethodInfo;
extern MethodInfo Material_GetTexture_m3332_MethodInfo;
extern MethodInfo Material_SetTextureOffset_m3334_MethodInfo;
extern MethodInfo Material_Internal_CreateWithShader_m3340_MethodInfo;
extern MethodInfo Material_Internal_CreateWithMaterial_m3341_MethodInfo;
extern MethodInfo Material_SetColor_m3328_MethodInfo;
extern MethodInfo Material_INTERNAL_CALL_SetColor_m3329_MethodInfo;
extern MethodInfo Material_GetColor_m3330_MethodInfo;
extern MethodInfo Material_SetTexture_m3331_MethodInfo;
extern MethodInfo Material_GetTexture_m3333_MethodInfo;
extern MethodInfo Material_INTERNAL_CALL_SetTextureOffset_m3335_MethodInfo;
extern MethodInfo Material_SetMatrix_m3336_MethodInfo;
extern MethodInfo Material_INTERNAL_CALL_SetMatrix_m3337_MethodInfo;
extern MethodInfo Material_SetFloat_m3338_MethodInfo;
extern MethodInfo Material_SetFloat_m226_MethodInfo;
extern MethodInfo Material_HasProperty_m3339_MethodInfo;


// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern MethodInfo Material__ctor_m246_MethodInfo;
extern "C" void Material__ctor_m246 (Material_t4 * __this, Shader_t3 * ___shader, MethodInfo* method)
{
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		Shader_t3 * L_0 = ___shader;
		Material_Internal_CreateWithShader_m3340(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&Material_Internal_CreateWithShader_m3340_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern MethodInfo Material__ctor_m2581_MethodInfo;
extern "C" void Material__ctor_m2581 (Material_t4 * __this, Material_t4 * ___source, MethodInfo* method)
{
	{
		Object__ctor_m3443(__this, /*hidden argument*/&Object__ctor_m3443_MethodInfo);
		Material_t4 * L_0 = ___source;
		Material_Internal_CreateWithMaterial_m3341(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&Material_Internal_CreateWithMaterial_m3341_MethodInfo);
		return;
	}
}
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern MethodInfo Material_get_shader_m251_MethodInfo;
extern "C" Shader_t3 * Material_get_shader_m251 (Material_t4 * __this, MethodInfo* method)
{
	typedef Shader_t3 * (*Material_get_shader_m251_ftn) (Material_t4 *);
	static Material_get_shader_m251_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_get_shader_m251_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::get_shader()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Color UnityEngine.Material::get_color()
extern MethodInfo Material_get_color_m889_MethodInfo;
extern "C" Color_t17  Material_get_color_m889 (Material_t4 * __this, MethodInfo* method)
{
	{
		Color_t17  L_0 = Material_GetColor_m858(__this, (String_t*) &_stringLiteral353, /*hidden argument*/&Material_GetColor_m858_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern MethodInfo Material_set_color_m798_MethodInfo;
extern "C" void Material_set_color_m798 (Material_t4 * __this, Color_t17  ___value, MethodInfo* method)
{
	{
		Color_t17  L_0 = ___value;
		Material_SetColor_m320(__this, (String_t*) &_stringLiteral353, L_0, /*hidden argument*/&Material_SetColor_m320_MethodInfo);
		return;
	}
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern MethodInfo Material_get_mainTexture_m2589_MethodInfo;
extern "C" Texture_t39 * Material_get_mainTexture_m2589 (Material_t4 * __this, MethodInfo* method)
{
	{
		Texture_t39 * L_0 = Material_GetTexture_m3332(__this, (String_t*) &_stringLiteral70, /*hidden argument*/&Material_GetTexture_m3332_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern MethodInfo Material_set_mainTextureOffset_m794_MethodInfo;
extern "C" void Material_set_mainTextureOffset_m794 (Material_t4 * __this, Vector2_t62  ___value, MethodInfo* method)
{
	{
		Vector2_t62  L_0 = ___value;
		Material_SetTextureOffset_m3334(__this, (String_t*) &_stringLiteral70, L_0, /*hidden argument*/&Material_SetTextureOffset_m3334_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m320 (Material_t4 * __this, String_t* ___propertyName, Color_t17  ___color, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m3327(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m3327_MethodInfo);
		Color_t17  L_2 = ___color;
		Material_SetColor_m3328(__this, L_1, L_2, /*hidden argument*/&Material_SetColor_m3328_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m3328 (Material_t4 * __this, int32_t ___nameID, Color_t17  ___color, MethodInfo* method)
{
	{
		int32_t L_0 = ___nameID;
		Material_INTERNAL_CALL_SetColor_m3329(NULL /*static, unused*/, __this, L_0, (&___color), /*hidden argument*/&Material_INTERNAL_CALL_SetColor_m3329_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m3329 (Object_t * __this /* static, unused */, Material_t4 * ___self, int32_t ___nameID, Color_t17 * ___color, MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetColor_m3329_ftn) (Material_t4 *, int32_t, Color_t17 *);
	static Material_INTERNAL_CALL_SetColor_m3329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetColor_m3329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___nameID, ___color);
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t17  Material_GetColor_m858 (Material_t4 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m3327(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m3327_MethodInfo);
		Color_t17  L_2 = Material_GetColor_m3330(__this, L_1, /*hidden argument*/&Material_GetColor_m3330_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t17  Material_GetColor_m3330 (Material_t4 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef Color_t17  (*Material_GetColor_m3330_ftn) (Material_t4 *, int32_t);
	static Material_GetColor_m3330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetColor_m3330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetColor(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern MethodInfo Material_SetVector_m215_MethodInfo;
extern "C" void Material_SetVector_m215 (Material_t4 * __this, String_t* ___propertyName, Vector4_t91  ___vector, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		float L_1 = ((&___vector)->___x_1);
		float L_2 = ((&___vector)->___y_2);
		float L_3 = ((&___vector)->___z_3);
		float L_4 = ((&___vector)->___w_4);
		Color_t17  L_5 = {0};
		Color__ctor_m231(&L_5, L_1, L_2, L_3, L_4, /*hidden argument*/&Color__ctor_m231_MethodInfo);
		Material_SetColor_m320(__this, L_0, L_5, /*hidden argument*/&Material_SetColor_m320_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern MethodInfo Material_SetTexture_m223_MethodInfo;
extern "C" void Material_SetTexture_m223 (Material_t4 * __this, String_t* ___propertyName, Texture_t39 * ___texture, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m3327(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m3327_MethodInfo);
		Texture_t39 * L_2 = ___texture;
		Material_SetTexture_m3331(__this, L_1, L_2, /*hidden argument*/&Material_SetTexture_m3331_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m3331 (Material_t4 * __this, int32_t ___nameID, Texture_t39 * ___texture, MethodInfo* method)
{
	typedef void (*Material_SetTexture_m3331_ftn) (Material_t4 *, int32_t, Texture_t39 *);
	static Material_SetTexture_m3331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetTexture_m3331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___nameID, ___texture);
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t39 * Material_GetTexture_m3332 (Material_t4 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m3327(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m3327_MethodInfo);
		Texture_t39 * L_2 = Material_GetTexture_m3333(__this, L_1, /*hidden argument*/&Material_GetTexture_m3333_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t39 * Material_GetTexture_m3333 (Material_t4 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef Texture_t39 * (*Material_GetTexture_m3333_ftn) (Material_t4 *, int32_t);
	static Material_GetTexture_m3333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_GetTexture_m3333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" void Material_SetTextureOffset_m3334 (Material_t4 * __this, String_t* ___propertyName, Vector2_t62  ___offset, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		Material_INTERNAL_CALL_SetTextureOffset_m3335(NULL /*static, unused*/, __this, L_0, (&___offset), /*hidden argument*/&Material_INTERNAL_CALL_SetTextureOffset_m3335_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C" void Material_INTERNAL_CALL_SetTextureOffset_m3335 (Object_t * __this /* static, unused */, Material_t4 * ___self, String_t* ___propertyName, Vector2_t62 * ___offset, MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetTextureOffset_m3335_ftn) (Material_t4 *, String_t*, Vector2_t62 *);
	static Material_INTERNAL_CALL_SetTextureOffset_m3335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetTextureOffset_m3335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___propertyName, ___offset);
}
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern MethodInfo Material_SetMatrix_m273_MethodInfo;
extern "C" void Material_SetMatrix_m273 (Material_t4 * __this, String_t* ___propertyName, Matrix4x4_t33  ___matrix, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m3327(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m3327_MethodInfo);
		Matrix4x4_t33  L_2 = ___matrix;
		Material_SetMatrix_m3336(__this, L_1, L_2, /*hidden argument*/&Material_SetMatrix_m3336_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Material_SetMatrix_m3336 (Material_t4 * __this, int32_t ___nameID, Matrix4x4_t33  ___matrix, MethodInfo* method)
{
	{
		int32_t L_0 = ___nameID;
		Material_INTERNAL_CALL_SetMatrix_m3337(NULL /*static, unused*/, __this, L_0, (&___matrix), /*hidden argument*/&Material_INTERNAL_CALL_SetMatrix_m3337_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Material_INTERNAL_CALL_SetMatrix_m3337 (Object_t * __this /* static, unused */, Material_t4 * ___self, int32_t ___nameID, Matrix4x4_t33 * ___matrix, MethodInfo* method)
{
	typedef void (*Material_INTERNAL_CALL_SetMatrix_m3337_ftn) (Material_t4 *, int32_t, Matrix4x4_t33 *);
	static Material_INTERNAL_CALL_SetMatrix_m3337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_INTERNAL_CALL_SetMatrix_m3337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___self, ___nameID, ___matrix);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m226 (Material_t4 * __this, String_t* ___propertyName, float ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m3327(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m3327_MethodInfo);
		float L_2 = ___value;
		Material_SetFloat_m3338(__this, L_1, L_2, /*hidden argument*/&Material_SetFloat_m3338_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m3338 (Material_t4 * __this, int32_t ___nameID, float ___value, MethodInfo* method)
{
	typedef void (*Material_SetFloat_m3338_ftn) (Material_t4 *, int32_t, float);
	static Material_SetFloat_m3338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetFloat_m3338_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___nameID, ___value);
}
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern MethodInfo Material_SetInt_m2583_MethodInfo;
extern "C" void Material_SetInt_m2583 (Material_t4 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = ___value;
		Material_SetFloat_m226(__this, L_0, (((float)L_1)), /*hidden argument*/&Material_SetFloat_m226_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
extern MethodInfo Material_SetBuffer_m347_MethodInfo;
extern "C" void Material_SetBuffer_m347 (Material_t4 * __this, String_t* ___propertyName, ComputeBuffer_t49 * ___buffer, MethodInfo* method)
{
	typedef void (*Material_SetBuffer_m347_ftn) (Material_t4 *, String_t*, ComputeBuffer_t49 *);
	static Material_SetBuffer_m347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetBuffer_m347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)");
	_il2cpp_icall_func(__this, ___propertyName, ___buffer);
}
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern MethodInfo Material_HasProperty_m2578_MethodInfo;
extern "C" bool Material_HasProperty_m2578 (Material_t4 * __this, String_t* ___propertyName, MethodInfo* method)
{
	{
		String_t* L_0 = ___propertyName;
		int32_t L_1 = Shader_PropertyToID_m3327(NULL /*static, unused*/, L_0, /*hidden argument*/&Shader_PropertyToID_m3327_MethodInfo);
		bool L_2 = Material_HasProperty_m3339(__this, L_1, /*hidden argument*/&Material_HasProperty_m3339_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m3339 (Material_t4 * __this, int32_t ___nameID, MethodInfo* method)
{
	typedef bool (*Material_HasProperty_m3339_ftn) (Material_t4 *, int32_t);
	static Material_HasProperty_m3339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_HasProperty_m3339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, ___nameID);
}
// System.Int32 UnityEngine.Material::get_passCount()
extern MethodInfo Material_get_passCount_m390_MethodInfo;
extern "C" int32_t Material_get_passCount_m390 (Material_t4 * __this, MethodInfo* method)
{
	typedef int32_t (*Material_get_passCount_m390_ftn) (Material_t4 *);
	static Material_get_passCount_m390_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_get_passCount_m390_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::get_passCount()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern MethodInfo Material_SetPass_m350_MethodInfo;
extern "C" bool Material_SetPass_m350 (Material_t4 * __this, int32_t ___pass, MethodInfo* method)
{
	typedef bool (*Material_SetPass_m350_ftn) (Material_t4 *, int32_t);
	static Material_SetPass_m350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_SetPass_m350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetPass(System.Int32)");
	return _il2cpp_icall_func(__this, ___pass);
}
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m3340 (Object_t * __this /* static, unused */, Material_t4 * ___mono, Shader_t3 * ___shader, MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithShader_m3340_ftn) (Material_t4 *, Shader_t3 *);
	static Material_Internal_CreateWithShader_m3340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithShader_m3340_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)");
	_il2cpp_icall_func(___mono, ___shader);
}
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m3341 (Object_t * __this /* static, unused */, Material_t4 * ___mono, Material_t4 * ___source, MethodInfo* method)
{
	typedef void (*Material_Internal_CreateWithMaterial_m3341_ftn) (Material_t4 *, Material_t4 *);
	static Material_Internal_CreateWithMaterial_m3341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Material_Internal_CreateWithMaterial_m3341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(___mono, ___source);
}
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SphericalHarmonicsL2_t682_il2cpp_TypeInfo;
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2MethodDeclarations.h"

extern MethodInfo SphericalHarmonicsL2_ClearInternal_m3343_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3344_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_AddAmbientLightInternal_m3346_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3347_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_AddDirectionalLightInternal_m3349_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3350_MethodInfo;
extern MethodInfo SphericalHarmonicsL2_op_Equality_m3358_MethodInfo;


// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern MethodInfo SphericalHarmonicsL2_Clear_m3342_MethodInfo;
extern "C" void SphericalHarmonicsL2_Clear_m3342 (SphericalHarmonicsL2_t682 * __this, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_ClearInternal_m3343(NULL /*static, unused*/, __this, /*hidden argument*/&SphericalHarmonicsL2_ClearInternal_m3343_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m3343 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t682 * ___sh, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t682 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3344(NULL /*static, unused*/, L_0, /*hidden argument*/&SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3344_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3344 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t682 * ___sh, MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3344_ftn) (SphericalHarmonicsL2_t682 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3344_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m3344_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern MethodInfo SphericalHarmonicsL2_AddAmbientLight_m3345_MethodInfo;
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m3345 (SphericalHarmonicsL2_t682 * __this, Color_t17  ___color, MethodInfo* method)
{
	{
		Color_t17  L_0 = ___color;
		SphericalHarmonicsL2_AddAmbientLightInternal_m3346(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&SphericalHarmonicsL2_AddAmbientLightInternal_m3346_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m3346 (Object_t * __this /* static, unused */, Color_t17  ___color, SphericalHarmonicsL2_t682 * ___sh, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t682 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3347(NULL /*static, unused*/, (&___color), L_0, /*hidden argument*/&SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3347_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3347 (Object_t * __this /* static, unused */, Color_t17 * ___color, SphericalHarmonicsL2_t682 * ___sh, MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3347_ftn) (Color_t17 *, SphericalHarmonicsL2_t682 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___color, ___sh);
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern MethodInfo SphericalHarmonicsL2_AddDirectionalLight_m3348_MethodInfo;
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m3348 (SphericalHarmonicsL2_t682 * __this, Vector3_t31  ___direction, Color_t17  ___color, float ___intensity, MethodInfo* method)
{
	Color_t17  V_0 = {0};
	{
		Color_t17  L_0 = ___color;
		float L_1 = ___intensity;
		Color_t17  L_2 = Color_op_Multiply_m2556(NULL /*static, unused*/, L_0, ((float)((float)(2.0f)*(float)L_1)), /*hidden argument*/&Color_op_Multiply_m2556_MethodInfo);
		V_0 = L_2;
		Vector3_t31  L_3 = ___direction;
		Color_t17  L_4 = V_0;
		SphericalHarmonicsL2_AddDirectionalLightInternal_m3349(NULL /*static, unused*/, L_3, L_4, __this, /*hidden argument*/&SphericalHarmonicsL2_AddDirectionalLightInternal_m3349_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m3349 (Object_t * __this /* static, unused */, Vector3_t31  ___direction, Color_t17  ___color, SphericalHarmonicsL2_t682 * ___sh, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t682 * L_0 = ___sh;
		SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3350(NULL /*static, unused*/, (&___direction), (&___color), L_0, /*hidden argument*/&SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3350_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3350 (Object_t * __this /* static, unused */, Vector3_t31 * ___direction, Color_t17 * ___color, SphericalHarmonicsL2_t682 * ___sh, MethodInfo* method)
{
	typedef void (*SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3350_ftn) (Vector3_t31 *, Color_t17 *, SphericalHarmonicsL2_t682 *);
	static SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m3350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(___direction, ___color, ___sh);
}
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern MethodInfo SphericalHarmonicsL2_get_Item_m3351_MethodInfo;
extern "C" float SphericalHarmonicsL2_get_Item_m3351 (SphericalHarmonicsL2_t682 * __this, int32_t ___rgb, int32_t ___coefficient, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->___shr0_0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->___shr1_1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->___shr2_2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->___shr3_3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->___shr4_4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->___shr5_5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->___shr6_6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->___shr7_7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->___shr8_8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->___shg0_9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->___shg1_10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->___shg2_11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->___shg3_12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->___shg4_13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->___shg5_14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->___shg6_15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->___shg7_16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->___shg8_17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->___shb0_18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->___shb1_19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->___shb2_20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->___shb3_21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->___shb4_22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->___shb5_23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->___shb6_24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->___shb7_25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->___shb8_26);
		return L_30;
	}

IL_013d:
	{
		IndexOutOfRangeException_t803 * L_31 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_31, (String_t*) &_stringLiteral354, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_31);
	}
}
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern MethodInfo SphericalHarmonicsL2_set_Item_m3352_MethodInfo;
extern "C" void SphericalHarmonicsL2_set_Item_m3352 (SphericalHarmonicsL2_t682 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___rgb;
		int32_t L_1 = ___coefficient;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = ___value;
		__this->___shr0_0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = ___value;
		__this->___shr1_1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = ___value;
		__this->___shr2_2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = ___value;
		__this->___shr3_3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = ___value;
		__this->___shr4_4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = ___value;
		__this->___shr5_5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = ___value;
		__this->___shr6_6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = ___value;
		__this->___shr7_7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = ___value;
		__this->___shr8_8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = ___value;
		__this->___shg0_9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = ___value;
		__this->___shg1_10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = ___value;
		__this->___shg2_11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = ___value;
		__this->___shg3_12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = ___value;
		__this->___shg4_13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = ___value;
		__this->___shg5_14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = ___value;
		__this->___shg6_15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = ___value;
		__this->___shg7_16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = ___value;
		__this->___shg8_17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = ___value;
		__this->___shb0_18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = ___value;
		__this->___shb1_19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = ___value;
		__this->___shb2_20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = ___value;
		__this->___shb3_21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = ___value;
		__this->___shb4_22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = ___value;
		__this->___shb5_23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = ___value;
		__this->___shb6_24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = ___value;
		__this->___shb7_25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = ___value;
		__this->___shb8_26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		IndexOutOfRangeException_t803 * L_31 = (IndexOutOfRangeException_t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IndexOutOfRangeException_t803_il2cpp_TypeInfo));
		IndexOutOfRangeException__ctor_m3872(L_31, (String_t*) &_stringLiteral354, /*hidden argument*/&IndexOutOfRangeException__ctor_m3872_MethodInfo);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern MethodInfo SphericalHarmonicsL2_GetHashCode_m3353_MethodInfo;
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m3353 (SphericalHarmonicsL2_t682 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->___shr0_0);
		int32_t L_2 = Single_GetHashCode_m3845(L_1, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->___shr1_1);
		int32_t L_5 = Single_GetHashCode_m3845(L_4, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->___shr2_2);
		int32_t L_8 = Single_GetHashCode_m3845(L_7, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->___shr3_3);
		int32_t L_11 = Single_GetHashCode_m3845(L_10, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->___shr4_4);
		int32_t L_14 = Single_GetHashCode_m3845(L_13, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->___shr5_5);
		int32_t L_17 = Single_GetHashCode_m3845(L_16, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->___shr6_6);
		int32_t L_20 = Single_GetHashCode_m3845(L_19, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->___shr7_7);
		int32_t L_23 = Single_GetHashCode_m3845(L_22, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->___shr8_8);
		int32_t L_26 = Single_GetHashCode_m3845(L_25, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->___shg0_9);
		int32_t L_29 = Single_GetHashCode_m3845(L_28, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->___shg1_10);
		int32_t L_32 = Single_GetHashCode_m3845(L_31, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->___shg2_11);
		int32_t L_35 = Single_GetHashCode_m3845(L_34, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->___shg3_12);
		int32_t L_38 = Single_GetHashCode_m3845(L_37, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->___shg4_13);
		int32_t L_41 = Single_GetHashCode_m3845(L_40, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->___shg5_14);
		int32_t L_44 = Single_GetHashCode_m3845(L_43, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->___shg6_15);
		int32_t L_47 = Single_GetHashCode_m3845(L_46, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->___shg7_16);
		int32_t L_50 = Single_GetHashCode_m3845(L_49, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->___shg8_17);
		int32_t L_53 = Single_GetHashCode_m3845(L_52, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->___shb0_18);
		int32_t L_56 = Single_GetHashCode_m3845(L_55, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->___shb1_19);
		int32_t L_59 = Single_GetHashCode_m3845(L_58, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->___shb2_20);
		int32_t L_62 = Single_GetHashCode_m3845(L_61, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->___shb3_21);
		int32_t L_65 = Single_GetHashCode_m3845(L_64, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->___shb4_22);
		int32_t L_68 = Single_GetHashCode_m3845(L_67, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->___shb5_23);
		int32_t L_71 = Single_GetHashCode_m3845(L_70, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->___shb6_24);
		int32_t L_74 = Single_GetHashCode_m3845(L_73, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->___shb7_25);
		int32_t L_77 = Single_GetHashCode_m3845(L_76, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->___shb8_26);
		int32_t L_80 = Single_GetHashCode_m3845(L_79, /*hidden argument*/&Single_GetHashCode_m3845_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern MethodInfo SphericalHarmonicsL2_Equals_m3354_MethodInfo;
extern "C" bool SphericalHarmonicsL2_Equals_m3354 (SphericalHarmonicsL2_t682 * __this, Object_t * ___other, MethodInfo* method)
{
	SphericalHarmonicsL2_t682  V_0 = {0};
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInst(L_0, InitializedTypeInfo(&SphericalHarmonicsL2_t682_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(SphericalHarmonicsL2_t682 *)((SphericalHarmonicsL2_t682 *)UnBox (L_1, InitializedTypeInfo(&SphericalHarmonicsL2_t682_il2cpp_TypeInfo)))));
		SphericalHarmonicsL2_t682  L_2 = V_0;
		bool L_3 = SphericalHarmonicsL2_op_Equality_m3358(NULL /*static, unused*/, (*(SphericalHarmonicsL2_t682 *)__this), L_2, /*hidden argument*/&SphericalHarmonicsL2_op_Equality_m3358_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern MethodInfo SphericalHarmonicsL2_op_Multiply_m3355_MethodInfo;
extern "C" SphericalHarmonicsL2_t682  SphericalHarmonicsL2_op_Multiply_m3355 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t682  ___lhs, float ___rhs, MethodInfo* method)
{
	SphericalHarmonicsL2_t682  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&SphericalHarmonicsL2_t682_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ___rhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ___rhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ___rhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ___rhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ___rhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ___rhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ___rhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ___rhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ___rhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ___rhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ___rhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ___rhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ___rhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ___rhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ___rhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ___rhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ___rhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ___rhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ___rhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ___rhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ___rhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ___rhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ___rhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ___rhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ___rhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ___rhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ___rhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t682  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern MethodInfo SphericalHarmonicsL2_op_Multiply_m3356_MethodInfo;
extern "C" SphericalHarmonicsL2_t682  SphericalHarmonicsL2_op_Multiply_m3356 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t682  ___rhs, MethodInfo* method)
{
	SphericalHarmonicsL2_t682  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&SphericalHarmonicsL2_t682_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___rhs)->___shr0_0);
		float L_1 = ___lhs;
		(&V_0)->___shr0_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&___rhs)->___shr1_1);
		float L_3 = ___lhs;
		(&V_0)->___shr1_1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&___rhs)->___shr2_2);
		float L_5 = ___lhs;
		(&V_0)->___shr2_2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&___rhs)->___shr3_3);
		float L_7 = ___lhs;
		(&V_0)->___shr3_3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&___rhs)->___shr4_4);
		float L_9 = ___lhs;
		(&V_0)->___shr4_4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&___rhs)->___shr5_5);
		float L_11 = ___lhs;
		(&V_0)->___shr5_5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&___rhs)->___shr6_6);
		float L_13 = ___lhs;
		(&V_0)->___shr6_6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&___rhs)->___shr7_7);
		float L_15 = ___lhs;
		(&V_0)->___shr7_7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&___rhs)->___shr8_8);
		float L_17 = ___lhs;
		(&V_0)->___shr8_8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&___rhs)->___shg0_9);
		float L_19 = ___lhs;
		(&V_0)->___shg0_9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&___rhs)->___shg1_10);
		float L_21 = ___lhs;
		(&V_0)->___shg1_10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&___rhs)->___shg2_11);
		float L_23 = ___lhs;
		(&V_0)->___shg2_11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&___rhs)->___shg3_12);
		float L_25 = ___lhs;
		(&V_0)->___shg3_12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&___rhs)->___shg4_13);
		float L_27 = ___lhs;
		(&V_0)->___shg4_13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&___rhs)->___shg5_14);
		float L_29 = ___lhs;
		(&V_0)->___shg5_14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&___rhs)->___shg6_15);
		float L_31 = ___lhs;
		(&V_0)->___shg6_15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&___rhs)->___shg7_16);
		float L_33 = ___lhs;
		(&V_0)->___shg7_16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&___rhs)->___shg8_17);
		float L_35 = ___lhs;
		(&V_0)->___shg8_17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&___rhs)->___shb0_18);
		float L_37 = ___lhs;
		(&V_0)->___shb0_18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&___rhs)->___shb1_19);
		float L_39 = ___lhs;
		(&V_0)->___shb1_19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&___rhs)->___shb2_20);
		float L_41 = ___lhs;
		(&V_0)->___shb2_20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&___rhs)->___shb3_21);
		float L_43 = ___lhs;
		(&V_0)->___shb3_21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&___rhs)->___shb4_22);
		float L_45 = ___lhs;
		(&V_0)->___shb4_22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&___rhs)->___shb5_23);
		float L_47 = ___lhs;
		(&V_0)->___shb5_23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&___rhs)->___shb6_24);
		float L_49 = ___lhs;
		(&V_0)->___shb6_24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&___rhs)->___shb7_25);
		float L_51 = ___lhs;
		(&V_0)->___shb7_25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&___rhs)->___shb8_26);
		float L_53 = ___lhs;
		(&V_0)->___shb8_26 = ((float)((float)L_52*(float)L_53));
		SphericalHarmonicsL2_t682  L_54 = V_0;
		return L_54;
	}
}
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern MethodInfo SphericalHarmonicsL2_op_Addition_m3357_MethodInfo;
extern "C" SphericalHarmonicsL2_t682  SphericalHarmonicsL2_op_Addition_m3357 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t682  ___lhs, SphericalHarmonicsL2_t682  ___rhs, MethodInfo* method)
{
	SphericalHarmonicsL2_t682  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&SphericalHarmonicsL2_t682_il2cpp_TypeInfo), (&V_0));
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		(&V_0)->___shr0_0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		(&V_0)->___shr1_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		(&V_0)->___shr2_2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		(&V_0)->___shr3_3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		(&V_0)->___shr4_4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		(&V_0)->___shr5_5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		(&V_0)->___shr6_6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		(&V_0)->___shr7_7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		(&V_0)->___shr8_8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		(&V_0)->___shg0_9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		(&V_0)->___shg1_10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		(&V_0)->___shg2_11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		(&V_0)->___shg3_12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		(&V_0)->___shg4_13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		(&V_0)->___shg5_14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		(&V_0)->___shg6_15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		(&V_0)->___shg7_16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		(&V_0)->___shg8_17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		(&V_0)->___shb0_18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		(&V_0)->___shb1_19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		(&V_0)->___shb2_20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		(&V_0)->___shb3_21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		(&V_0)->___shb4_22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		(&V_0)->___shb5_23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		(&V_0)->___shb6_24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		(&V_0)->___shb7_25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		(&V_0)->___shb8_26 = ((float)((float)L_52+(float)L_53));
		SphericalHarmonicsL2_t682  L_54 = V_0;
		return L_54;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m3358 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t682  ___lhs, SphericalHarmonicsL2_t682  ___rhs, MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&___lhs)->___shr0_0);
		float L_1 = ((&___rhs)->___shr0_0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&___lhs)->___shr1_1);
		float L_3 = ((&___rhs)->___shr1_1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&___lhs)->___shr2_2);
		float L_5 = ((&___rhs)->___shr2_2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&___lhs)->___shr3_3);
		float L_7 = ((&___rhs)->___shr3_3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&___lhs)->___shr4_4);
		float L_9 = ((&___rhs)->___shr4_4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&___lhs)->___shr5_5);
		float L_11 = ((&___rhs)->___shr5_5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&___lhs)->___shr6_6);
		float L_13 = ((&___rhs)->___shr6_6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&___lhs)->___shr7_7);
		float L_15 = ((&___rhs)->___shr7_7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&___lhs)->___shr8_8);
		float L_17 = ((&___rhs)->___shr8_8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&___lhs)->___shg0_9);
		float L_19 = ((&___rhs)->___shg0_9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&___lhs)->___shg1_10);
		float L_21 = ((&___rhs)->___shg1_10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&___lhs)->___shg2_11);
		float L_23 = ((&___rhs)->___shg2_11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&___lhs)->___shg3_12);
		float L_25 = ((&___rhs)->___shg3_12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&___lhs)->___shg4_13);
		float L_27 = ((&___rhs)->___shg4_13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&___lhs)->___shg5_14);
		float L_29 = ((&___rhs)->___shg5_14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&___lhs)->___shg6_15);
		float L_31 = ((&___rhs)->___shg6_15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&___lhs)->___shg7_16);
		float L_33 = ((&___rhs)->___shg7_16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&___lhs)->___shg8_17);
		float L_35 = ((&___rhs)->___shg8_17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&___lhs)->___shb0_18);
		float L_37 = ((&___rhs)->___shb0_18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&___lhs)->___shb1_19);
		float L_39 = ((&___rhs)->___shb1_19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&___lhs)->___shb2_20);
		float L_41 = ((&___rhs)->___shb2_20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&___lhs)->___shb3_21);
		float L_43 = ((&___rhs)->___shb3_21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&___lhs)->___shb4_22);
		float L_45 = ((&___rhs)->___shb4_22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&___lhs)->___shb5_23);
		float L_47 = ((&___rhs)->___shb5_23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&___lhs)->___shb6_24);
		float L_49 = ((&___rhs)->___shb6_24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&___lhs)->___shb7_25);
		float L_51 = ((&___rhs)->___shb7_25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&___lhs)->___shb8_26);
		float L_53 = ((&___rhs)->___shb8_26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern MethodInfo SphericalHarmonicsL2_op_Inequality_m3359_MethodInfo;
extern "C" bool SphericalHarmonicsL2_op_Inequality_m3359 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t682  ___lhs, SphericalHarmonicsL2_t682  ___rhs, MethodInfo* method)
{
	{
		SphericalHarmonicsL2_t682  L_0 = ___lhs;
		SphericalHarmonicsL2_t682  L_1 = ___rhs;
		bool L_2 = SphericalHarmonicsL2_op_Equality_m3358(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SphericalHarmonicsL2_op_Equality_m3358_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Sprite_t367_il2cpp_TypeInfo;
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_SpriteMethodDeclarations.h"



// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern MethodInfo Sprite_get_rect_m2369_MethodInfo;
extern "C" Rect_t213  Sprite_get_rect_m2369 (Sprite_t367 * __this, MethodInfo* method)
{
	typedef Rect_t213  (*Sprite_get_rect_m2369_ftn) (Sprite_t367 *);
	static Sprite_get_rect_m2369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_m2369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern MethodInfo Sprite_get_pixelsPerUnit_m2366_MethodInfo;
extern "C" float Sprite_get_pixelsPerUnit_m2366 (Sprite_t367 * __this, MethodInfo* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m2366_ftn) (Sprite_t367 *);
	static Sprite_get_pixelsPerUnit_m2366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m2366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern MethodInfo Sprite_get_texture_m2363_MethodInfo;
extern "C" Texture2D_t15 * Sprite_get_texture_m2363 (Sprite_t367 * __this, MethodInfo* method)
{
	typedef Texture2D_t15 * (*Sprite_get_texture_m2363_ftn) (Sprite_t367 *);
	static Sprite_get_texture_m2363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m2363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern MethodInfo Sprite_get_textureRect_m2390_MethodInfo;
extern "C" Rect_t213  Sprite_get_textureRect_m2390 (Sprite_t367 * __this, MethodInfo* method)
{
	typedef Rect_t213  (*Sprite_get_textureRect_m2390_ftn) (Sprite_t367 *);
	static Sprite_get_textureRect_m2390_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_textureRect_m2390_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern MethodInfo Sprite_get_border_m2364_MethodInfo;
extern "C" Vector4_t91  Sprite_get_border_m2364 (Sprite_t367 * __this, MethodInfo* method)
{
	typedef Vector4_t91  (*Sprite_get_border_m2364_ftn) (Sprite_t367 *);
	static Sprite_get_border_m2364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_m2364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpriteRenderer_t480_il2cpp_TypeInfo;
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"



// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DataUtility_t683_il2cpp_TypeInfo;
// UnityEngine.Sprites.DataUtility
#include "UnityEngine_UnityEngine_Sprites_DataUtilityMethodDeclarations.h"

extern MethodInfo DataUtility_Internal_GetMinSize_m3360_MethodInfo;


// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetInnerUV_m2381_MethodInfo;
extern "C" Vector4_t91  DataUtility_GetInnerUV_m2381 (Object_t * __this /* static, unused */, Sprite_t367 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t91  (*DataUtility_GetInnerUV_m2381_ftn) (Sprite_t367 *);
	static DataUtility_GetInnerUV_m2381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetInnerUV_m2381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetOuterUV_m2380_MethodInfo;
extern "C" Vector4_t91  DataUtility_GetOuterUV_m2380 (Object_t * __this /* static, unused */, Sprite_t367 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t91  (*DataUtility_GetOuterUV_m2380_ftn) (Sprite_t367 *);
	static DataUtility_GetOuterUV_m2380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetOuterUV_m2380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetPadding_m2371_MethodInfo;
extern "C" Vector4_t91  DataUtility_GetPadding_m2371 (Object_t * __this /* static, unused */, Sprite_t367 * ___sprite, MethodInfo* method)
{
	typedef Vector4_t91  (*DataUtility_GetPadding_m2371_ftn) (Sprite_t367 *);
	static DataUtility_GetPadding_m2371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_GetPadding_m2371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(___sprite);
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern MethodInfo DataUtility_GetMinSize_m2368_MethodInfo;
extern "C" Vector2_t62  DataUtility_GetMinSize_m2368 (Object_t * __this /* static, unused */, Sprite_t367 * ___sprite, MethodInfo* method)
{
	Vector2_t62  V_0 = {0};
	{
		Sprite_t367 * L_0 = ___sprite;
		DataUtility_Internal_GetMinSize_m3360(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&DataUtility_Internal_GetMinSize_m3360_MethodInfo);
		Vector2_t62  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
extern "C" void DataUtility_Internal_GetMinSize_m3360 (Object_t * __this /* static, unused */, Sprite_t367 * ___sprite, Vector2_t62 * ___output, MethodInfo* method)
{
	typedef void (*DataUtility_Internal_GetMinSize_m3360_ftn) (Sprite_t367 *, Vector2_t62 *);
	static DataUtility_Internal_GetMinSize_m3360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DataUtility_Internal_GetMinSize_m3360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___sprite, ___output);
}
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CacheIndex_t684_il2cpp_TypeInfo;
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t684_marshal(const CacheIndex_t684& unmarshaled, CacheIndex_t684_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t684_marshal_back(const CacheIndex_t684_marshaled& marshaled, CacheIndex_t684& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t684_marshal_cleanup(CacheIndex_t684_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityString_t685_il2cpp_TypeInfo;

extern MethodInfo String_Format_m2603_MethodInfo;


// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" String_t* UnityString_Format_m3361 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t219* ___args, MethodInfo* method)
{
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t219* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m2603(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_Format_m2603_MethodInfo);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncOperation_t597_il2cpp_TypeInfo;

extern MethodInfo AsyncOperation_InternalDestroy_m3363_MethodInfo;


// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m3362 (AsyncOperation_t597 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m3487(__this, /*hidden argument*/&YieldInstruction__ctor_m3487_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m3363 (AsyncOperation_t597 * __this, MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m3363_ftn) (AsyncOperation_t597 *);
	static AsyncOperation_InternalDestroy_m3363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m3363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern MethodInfo AsyncOperation_Finalize_m3364_MethodInfo;
extern "C" void AsyncOperation_Finalize_m3364 (AsyncOperation_t597 * __this, MethodInfo* method)
{
	Exception_t234 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t234 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m3363(__this, /*hidden argument*/&AsyncOperation_InternalDestroy_m3363_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t234 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m410(__this, /*hidden argument*/&Object_Finalize_m410_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t234 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t597_marshal(const AsyncOperation_t597& unmarshaled, AsyncOperation_t597_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t597_marshal_back(const AsyncOperation_t597_marshaled& marshaled, AsyncOperation_t597& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t597_marshal_cleanup(AsyncOperation_t597_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
