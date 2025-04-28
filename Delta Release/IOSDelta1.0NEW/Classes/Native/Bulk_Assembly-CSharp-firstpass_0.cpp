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
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Resolution_t1_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffecMethodDeclarations.h"



// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BlurType_t2_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_0MethodDeclarations.h"



// UnityStandardAssets.ImageEffects.BloomOptimized
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BloomOptimized_t5_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.BloomOptimized
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
extern TypeInfo PostEffectsBase_t6_il2cpp_TypeInfo;
extern TypeInfo Boolean_t25_il2cpp_TypeInfo;
extern TypeInfo Vector4_t26_il2cpp_TypeInfo;
extern TypeInfo RenderTexture_t7_il2cpp_TypeInfo;
extern TypeInfo Int32_t27_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_2MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
extern MethodInfo PostEffectsBase__ctor_m27_MethodInfo;
extern MethodInfo PostEffectsBase_CheckSupport_m34_MethodInfo;
extern MethodInfo PostEffectsBase_CheckShaderAndCreateMaterial_m28_MethodInfo;
extern MethodInfo PostEffectsBase_ReportAutoDisable_m37_MethodInfo;
extern MethodInfo Object_op_Implicit_m55_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m56_MethodInfo;
extern MethodInfo BloomOptimized_CheckResources_m1_MethodInfo;
extern MethodInfo Graphics_Blit_m57_MethodInfo;
extern MethodInfo Vector4__ctor_m58_MethodInfo;
extern MethodInfo Material_SetVector_m59_MethodInfo;
extern MethodInfo Texture_set_filterMode_m60_MethodInfo;
extern MethodInfo RenderTexture_get_width_m61_MethodInfo;
extern MethodInfo RenderTexture_get_height_m62_MethodInfo;
extern MethodInfo RenderTexture_get_format_m63_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m64_MethodInfo;
extern MethodInfo Graphics_Blit_m65_MethodInfo;
extern MethodInfo RenderTexture_ReleaseTemporary_m66_MethodInfo;
extern MethodInfo Material_SetTexture_m67_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::.ctor()
extern MethodInfo BloomOptimized__ctor_m0_MethodInfo;
extern "C" void BloomOptimized__ctor_m0 (BloomOptimized_t5 * __this, MethodInfo* method)
{
	{
		__this->___threshold_5 = (0.25f);
		__this->___intensity_6 = (0.75f);
		__this->___blurSize_7 = (1.0f);
		__this->___blurIterations_9 = 1;
		PostEffectsBase__ctor_m27(__this, /*hidden argument*/&PostEffectsBase__ctor_m27_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.BloomOptimized::CheckResources()
extern "C" bool BloomOptimized_CheckResources_m1 (BloomOptimized_t5 * __this, MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m34(__this, 0, /*hidden argument*/&PostEffectsBase_CheckSupport_m34_MethodInfo);
		Shader_t3 * L_0 = (__this->___fastBloomShader_11);
		Material_t4 * L_1 = (__this->___fastBloomMaterial_12);
		Material_t4 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m28(__this, L_0, L_1, /*hidden argument*/&PostEffectsBase_CheckShaderAndCreateMaterial_m28_MethodInfo);
		__this->___fastBloomMaterial_12 = L_2;
		bool L_3 = (__this->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m37(__this, /*hidden argument*/&PostEffectsBase_ReportAutoDisable_m37_MethodInfo);
	}

IL_0031:
	{
		bool L_4 = (__this->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnDisable()
extern MethodInfo BloomOptimized_OnDisable_m2_MethodInfo;
extern "C" void BloomOptimized_OnDisable_m2 (BloomOptimized_t5 * __this, MethodInfo* method)
{
	{
		Material_t4 * L_0 = (__this->___fastBloomMaterial_12);
		bool L_1 = Object_op_Implicit_m55(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Material_t4 * L_2 = (__this->___fastBloomMaterial_12);
		Object_DestroyImmediate_m56(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo BloomOptimized_OnRenderImage_m3_MethodInfo;
extern "C" void BloomOptimized_OnRenderImage_m3 (BloomOptimized_t5 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_t7 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RenderTexture_t7 * V_7 = {0};
	int32_t G_B5_0 = 0;
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&BloomOptimized_CheckResources_m1_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t7 * L_1 = ___source;
		RenderTexture_t7 * L_2 = ___destination;
		Graphics_Blit_m57(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Graphics_Blit_m57_MethodInfo);
		return;
	}

IL_0013:
	{
		int32_t L_3 = (__this->___resolution_8);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		G_B5_0 = 4;
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 2;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		int32_t L_4 = (__this->___resolution_8);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		G_B8_0 = (0.5f);
		goto IL_0040;
	}

IL_003b:
	{
		G_B8_0 = (1.0f);
	}

IL_0040:
	{
		V_1 = G_B8_0;
		Material_t4 * L_5 = (__this->___fastBloomMaterial_12);
		float L_6 = (__this->___blurSize_7);
		float L_7 = V_1;
		float L_8 = (__this->___threshold_5);
		float L_9 = (__this->___intensity_6);
		Vector4_t26  L_10 = {0};
		Vector4__ctor_m58(&L_10, ((float)((float)L_6*(float)L_7)), (0.0f), L_8, L_9, /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		NullCheck(L_5);
		Material_SetVector_m59(L_5, (String_t*) &_stringLiteral1, L_10, /*hidden argument*/&Material_SetVector_m59_MethodInfo);
		RenderTexture_t7 * L_11 = ___source;
		NullCheck(L_11);
		Texture_set_filterMode_m60(L_11, 1, /*hidden argument*/&Texture_set_filterMode_m60_MethodInfo);
		RenderTexture_t7 * L_12 = ___source;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_12);
		int32_t L_14 = V_0;
		V_2 = ((int32_t)((int32_t)L_13/(int32_t)L_14));
		RenderTexture_t7 * L_15 = ___source;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_15);
		int32_t L_17 = V_0;
		V_3 = ((int32_t)((int32_t)L_16/(int32_t)L_17));
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		RenderTexture_t7 * L_20 = ___source;
		NullCheck(L_20);
		int32_t L_21 = RenderTexture_get_format_m63(L_20, /*hidden argument*/&RenderTexture_get_format_m63_MethodInfo);
		RenderTexture_t7 * L_22 = RenderTexture_GetTemporary_m64(NULL /*static, unused*/, L_18, L_19, 0, L_21, /*hidden argument*/&RenderTexture_GetTemporary_m64_MethodInfo);
		V_4 = L_22;
		RenderTexture_t7 * L_23 = V_4;
		NullCheck(L_23);
		Texture_set_filterMode_m60(L_23, 1, /*hidden argument*/&Texture_set_filterMode_m60_MethodInfo);
		RenderTexture_t7 * L_24 = ___source;
		RenderTexture_t7 * L_25 = V_4;
		Material_t4 * L_26 = (__this->___fastBloomMaterial_12);
		Graphics_Blit_m65(NULL /*static, unused*/, L_24, L_25, L_26, 1, /*hidden argument*/&Graphics_Blit_m65_MethodInfo);
		int32_t L_27 = (__this->___blurType_10);
		if (L_27)
		{
			goto IL_00c0;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B11_0 = 2;
	}

IL_00c1:
	{
		V_5 = G_B11_0;
		V_6 = 0;
		goto IL_0175;
	}

IL_00cb:
	{
		Material_t4 * L_28 = (__this->___fastBloomMaterial_12);
		float L_29 = (__this->___blurSize_7);
		float L_30 = V_1;
		int32_t L_31 = V_6;
		float L_32 = (__this->___threshold_5);
		float L_33 = (__this->___intensity_6);
		Vector4_t26  L_34 = {0};
		Vector4__ctor_m58(&L_34, ((float)((float)((float)((float)L_29*(float)L_30))+(float)((float)((float)(((float)L_31))*(float)(1.0f))))), (0.0f), L_32, L_33, /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		NullCheck(L_28);
		Material_SetVector_m59(L_28, (String_t*) &_stringLiteral1, L_34, /*hidden argument*/&Material_SetVector_m59_MethodInfo);
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		RenderTexture_t7 * L_37 = ___source;
		NullCheck(L_37);
		int32_t L_38 = RenderTexture_get_format_m63(L_37, /*hidden argument*/&RenderTexture_get_format_m63_MethodInfo);
		RenderTexture_t7 * L_39 = RenderTexture_GetTemporary_m64(NULL /*static, unused*/, L_35, L_36, 0, L_38, /*hidden argument*/&RenderTexture_GetTemporary_m64_MethodInfo);
		V_7 = L_39;
		RenderTexture_t7 * L_40 = V_7;
		NullCheck(L_40);
		Texture_set_filterMode_m60(L_40, 1, /*hidden argument*/&Texture_set_filterMode_m60_MethodInfo);
		RenderTexture_t7 * L_41 = V_4;
		RenderTexture_t7 * L_42 = V_7;
		Material_t4 * L_43 = (__this->___fastBloomMaterial_12);
		int32_t L_44 = V_5;
		Graphics_Blit_m65(NULL /*static, unused*/, L_41, L_42, L_43, ((int32_t)((int32_t)2+(int32_t)L_44)), /*hidden argument*/&Graphics_Blit_m65_MethodInfo);
		RenderTexture_t7 * L_45 = V_4;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_45, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		RenderTexture_t7 * L_46 = V_7;
		V_4 = L_46;
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		RenderTexture_t7 * L_49 = ___source;
		NullCheck(L_49);
		int32_t L_50 = RenderTexture_get_format_m63(L_49, /*hidden argument*/&RenderTexture_get_format_m63_MethodInfo);
		RenderTexture_t7 * L_51 = RenderTexture_GetTemporary_m64(NULL /*static, unused*/, L_47, L_48, 0, L_50, /*hidden argument*/&RenderTexture_GetTemporary_m64_MethodInfo);
		V_7 = L_51;
		RenderTexture_t7 * L_52 = V_7;
		NullCheck(L_52);
		Texture_set_filterMode_m60(L_52, 1, /*hidden argument*/&Texture_set_filterMode_m60_MethodInfo);
		RenderTexture_t7 * L_53 = V_4;
		RenderTexture_t7 * L_54 = V_7;
		Material_t4 * L_55 = (__this->___fastBloomMaterial_12);
		int32_t L_56 = V_5;
		Graphics_Blit_m65(NULL /*static, unused*/, L_53, L_54, L_55, ((int32_t)((int32_t)3+(int32_t)L_56)), /*hidden argument*/&Graphics_Blit_m65_MethodInfo);
		RenderTexture_t7 * L_57 = V_4;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_57, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		RenderTexture_t7 * L_58 = V_7;
		V_4 = L_58;
		int32_t L_59 = V_6;
		V_6 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_0175:
	{
		int32_t L_60 = V_6;
		int32_t L_61 = (__this->___blurIterations_9);
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00cb;
		}
	}
	{
		Material_t4 * L_62 = (__this->___fastBloomMaterial_12);
		RenderTexture_t7 * L_63 = V_4;
		NullCheck(L_62);
		Material_SetTexture_m67(L_62, (String_t*) &_stringLiteral2, L_63, /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		RenderTexture_t7 * L_64 = ___source;
		RenderTexture_t7 * L_65 = ___destination;
		Material_t4 * L_66 = (__this->___fastBloomMaterial_12);
		Graphics_Blit_m65(NULL /*static, unused*/, L_64, L_65, L_66, 0, /*hidden argument*/&Graphics_Blit_m65_MethodInfo);
		RenderTexture_t7 * L_67 = V_4;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_67, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ContrastEnhance
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContrastEnhance_t8_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.ContrastEnhance
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_3MethodDeclarations.h"

extern MethodInfo ContrastEnhance_CheckResources_m5_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m68_MethodInfo;
extern MethodInfo Graphics_Blit_m69_MethodInfo;
extern MethodInfo Material_SetFloat_m70_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::.ctor()
extern MethodInfo ContrastEnhance__ctor_m4_MethodInfo;
extern "C" void ContrastEnhance__ctor_m4 (ContrastEnhance_t8 * __this, MethodInfo* method)
{
	{
		__this->___intensity_5 = (0.5f);
		__this->___blurSpread_9 = (1.0f);
		PostEffectsBase__ctor_m27(__this, /*hidden argument*/&PostEffectsBase__ctor_m27_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ContrastEnhance::CheckResources()
extern "C" bool ContrastEnhance_CheckResources_m5 (ContrastEnhance_t8 * __this, MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m34(__this, 0, /*hidden argument*/&PostEffectsBase_CheckSupport_m34_MethodInfo);
		Shader_t3 * L_0 = (__this->___contrastCompositeShader_11);
		Material_t4 * L_1 = (__this->___contrastCompositeMaterial_8);
		Material_t4 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m28(__this, L_0, L_1, /*hidden argument*/&PostEffectsBase_CheckShaderAndCreateMaterial_m28_MethodInfo);
		__this->___contrastCompositeMaterial_8 = L_2;
		Shader_t3 * L_3 = (__this->___separableBlurShader_10);
		Material_t4 * L_4 = (__this->___separableBlurMaterial_7);
		Material_t4 * L_5 = PostEffectsBase_CheckShaderAndCreateMaterial_m28(__this, L_3, L_4, /*hidden argument*/&PostEffectsBase_CheckShaderAndCreateMaterial_m28_MethodInfo);
		__this->___separableBlurMaterial_7 = L_5;
		bool L_6 = (__this->___isSupported_4);
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m37(__this, /*hidden argument*/&PostEffectsBase_ReportAutoDisable_m37_MethodInfo);
	}

IL_0049:
	{
		bool L_7 = (__this->___isSupported_4);
		return L_7;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastEnhance::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ContrastEnhance_OnRenderImage_m6_MethodInfo;
extern "C" void ContrastEnhance_OnRenderImage_m6 (ContrastEnhance_t8 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t7 * V_2 = {0};
	RenderTexture_t7 * V_3 = {0};
	RenderTexture_t7 * V_4 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&ContrastEnhance_CheckResources_m5_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t7 * L_1 = ___source;
		RenderTexture_t7 * L_2 = ___destination;
		Graphics_Blit_m57(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Graphics_Blit_m57_MethodInfo);
		return;
	}

IL_0013:
	{
		RenderTexture_t7 * L_3 = ___source;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_3);
		V_0 = L_4;
		RenderTexture_t7 * L_5 = ___source;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_5);
		V_1 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		RenderTexture_t7 * L_9 = RenderTexture_GetTemporary_m68(NULL /*static, unused*/, ((int32_t)((int32_t)L_7/(int32_t)2)), ((int32_t)((int32_t)L_8/(int32_t)2)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m68_MethodInfo);
		V_2 = L_9;
		RenderTexture_t7 * L_10 = ___source;
		RenderTexture_t7 * L_11 = V_2;
		Graphics_Blit_m57(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Graphics_Blit_m57_MethodInfo);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		RenderTexture_t7 * L_14 = RenderTexture_GetTemporary_m68(NULL /*static, unused*/, ((int32_t)((int32_t)L_12/(int32_t)4)), ((int32_t)((int32_t)L_13/(int32_t)4)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m68_MethodInfo);
		V_3 = L_14;
		RenderTexture_t7 * L_15 = V_2;
		RenderTexture_t7 * L_16 = V_3;
		Graphics_Blit_m57(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&Graphics_Blit_m57_MethodInfo);
		RenderTexture_t7 * L_17 = V_2;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_17, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		Material_t4 * L_18 = (__this->___separableBlurMaterial_7);
		float L_19 = (__this->___blurSpread_9);
		RenderTexture_t7 * L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_20);
		Vector4_t26  L_22 = {0};
		Vector4__ctor_m58(&L_22, (0.0f), ((float)((float)((float)((float)L_19*(float)(1.0f)))/(float)(((float)L_21)))), (0.0f), (0.0f), /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		NullCheck(L_18);
		Material_SetVector_m59(L_18, (String_t*) &_stringLiteral3, L_22, /*hidden argument*/&Material_SetVector_m59_MethodInfo);
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		RenderTexture_t7 * L_25 = RenderTexture_GetTemporary_m68(NULL /*static, unused*/, ((int32_t)((int32_t)L_23/(int32_t)4)), ((int32_t)((int32_t)L_24/(int32_t)4)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m68_MethodInfo);
		V_4 = L_25;
		RenderTexture_t7 * L_26 = V_3;
		RenderTexture_t7 * L_27 = V_4;
		Material_t4 * L_28 = (__this->___separableBlurMaterial_7);
		Graphics_Blit_m69(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		RenderTexture_t7 * L_29 = V_3;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_29, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		Material_t4 * L_30 = (__this->___separableBlurMaterial_7);
		float L_31 = (__this->___blurSpread_9);
		RenderTexture_t7 * L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_32);
		Vector4_t26  L_34 = {0};
		Vector4__ctor_m58(&L_34, ((float)((float)((float)((float)L_31*(float)(1.0f)))/(float)(((float)L_33)))), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		NullCheck(L_30);
		Material_SetVector_m59(L_30, (String_t*) &_stringLiteral3, L_34, /*hidden argument*/&Material_SetVector_m59_MethodInfo);
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		RenderTexture_t7 * L_37 = RenderTexture_GetTemporary_m68(NULL /*static, unused*/, ((int32_t)((int32_t)L_35/(int32_t)4)), ((int32_t)((int32_t)L_36/(int32_t)4)), 0, /*hidden argument*/&RenderTexture_GetTemporary_m68_MethodInfo);
		V_3 = L_37;
		RenderTexture_t7 * L_38 = V_4;
		RenderTexture_t7 * L_39 = V_3;
		Material_t4 * L_40 = (__this->___separableBlurMaterial_7);
		Graphics_Blit_m69(NULL /*static, unused*/, L_38, L_39, L_40, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		RenderTexture_t7 * L_41 = V_4;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_41, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		Material_t4 * L_42 = (__this->___contrastCompositeMaterial_8);
		RenderTexture_t7 * L_43 = V_3;
		NullCheck(L_42);
		Material_SetTexture_m67(L_42, (String_t*) &_stringLiteral4, L_43, /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		Material_t4 * L_44 = (__this->___contrastCompositeMaterial_8);
		float L_45 = (__this->___intensity_5);
		NullCheck(L_44);
		Material_SetFloat_m70(L_44, (String_t*) &_stringLiteral5, L_45, /*hidden argument*/&Material_SetFloat_m70_MethodInfo);
		Material_t4 * L_46 = (__this->___contrastCompositeMaterial_8);
		float L_47 = (__this->___threshold_6);
		NullCheck(L_46);
		Material_SetFloat_m70(L_46, (String_t*) &_stringLiteral6, L_47, /*hidden argument*/&Material_SetFloat_m70_MethodInfo);
		RenderTexture_t7 * L_48 = ___source;
		RenderTexture_t7 * L_49 = ___destination;
		Material_t4 * L_50 = (__this->___contrastCompositeMaterial_8);
		Graphics_Blit_m69(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		RenderTexture_t7 * L_51 = V_3;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_51, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ContrastStretch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContrastStretch_t10_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.ContrastStretch
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_4MethodDeclarations.h"

// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern TypeInfo Material_t4_il2cpp_TypeInfo;
extern TypeInfo RenderTextureU5BU5D_t9_il2cpp_TypeInfo;
extern TypeInfo Mathf_t28_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
extern Il2CppType RenderTextureU5BU5D_t9_0_0_0;
extern MethodInfo Object_op_Equality_m71_MethodInfo;
extern MethodInfo Material__ctor_m72_MethodInfo;
extern MethodInfo Object_set_hideFlags_m73_MethodInfo;
extern MethodInfo MonoBehaviour__ctor_m74_MethodInfo;
extern MethodInfo SystemInfo_get_supportsImageEffects_m75_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m76_MethodInfo;
extern MethodInfo Shader_get_isSupported_m77_MethodInfo;
extern MethodInfo RenderTexture__ctor_m78_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m79_MethodInfo;
extern MethodInfo ContrastStretch_get_materialLum_m8_MethodInfo;
extern MethodInfo ContrastStretch_get_materialReduce_m9_MethodInfo;
extern MethodInfo ContrastStretch_CalculateAdaptation_m16_MethodInfo;
extern MethodInfo ContrastStretch_get_materialApply_m11_MethodInfo;
extern MethodInfo Time_get_deltaTime_m80_MethodInfo;
extern MethodInfo Mathf_Pow_m81_MethodInfo;
extern MethodInfo Mathf_Clamp_m82_MethodInfo;
extern MethodInfo ContrastStretch_get_materialAdapt_m10_MethodInfo;
extern MethodInfo Graphics_SetRenderTarget_m83_MethodInfo;
extern MethodInfo Color_get_black_m84_MethodInfo;
extern MethodInfo GL_Clear_m85_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern MethodInfo ContrastStretch__ctor_m7_MethodInfo;
extern TypeInfo* RenderTextureU5BU5D_t9_il2cpp_TypeInfo_var;
extern "C" void ContrastStretch__ctor_m7 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	static bool ContrastStretch__ctor_m7_init;
	if (!ContrastStretch__ctor_m7_init)
	{
		RenderTextureU5BU5D_t9_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&RenderTextureU5BU5D_t9_0_0_0);
		ContrastStretch__ctor_m7_init = true;
	}
	{
		__this->___adaptationSpeed_2 = (0.02f);
		__this->___limitMinimum_3 = (0.2f);
		__this->___limitMaximum_4 = (0.6f);
		__this->___adaptRenderTex_5 = ((RenderTextureU5BU5D_t9*)SZArrayNew(RenderTextureU5BU5D_t9_il2cpp_TypeInfo_var, 2));
		MonoBehaviour__ctor_m74(__this, /*hidden argument*/&MonoBehaviour__ctor_m74_MethodInfo);
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C" Material_t4 * ContrastStretch_get_materialLum_m8 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	{
		Material_t4 * L_0 = (__this->___m_materialLum_8);
		bool L_1 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t3 * L_2 = (__this->___shaderLum_7);
		Material_t4 * L_3 = (Material_t4 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t4_il2cpp_TypeInfo));
		Material__ctor_m72(L_3, L_2, /*hidden argument*/&Material__ctor_m72_MethodInfo);
		__this->___m_materialLum_8 = L_3;
		Material_t4 * L_4 = (__this->___m_materialLum_8);
		NullCheck(L_4);
		Object_set_hideFlags_m73(L_4, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
	}

IL_002f:
	{
		Material_t4 * L_5 = (__this->___m_materialLum_8);
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C" Material_t4 * ContrastStretch_get_materialReduce_m9 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	{
		Material_t4 * L_0 = (__this->___m_materialReduce_10);
		bool L_1 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t3 * L_2 = (__this->___shaderReduce_9);
		Material_t4 * L_3 = (Material_t4 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t4_il2cpp_TypeInfo));
		Material__ctor_m72(L_3, L_2, /*hidden argument*/&Material__ctor_m72_MethodInfo);
		__this->___m_materialReduce_10 = L_3;
		Material_t4 * L_4 = (__this->___m_materialReduce_10);
		NullCheck(L_4);
		Object_set_hideFlags_m73(L_4, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
	}

IL_002f:
	{
		Material_t4 * L_5 = (__this->___m_materialReduce_10);
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C" Material_t4 * ContrastStretch_get_materialAdapt_m10 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	{
		Material_t4 * L_0 = (__this->___m_materialAdapt_12);
		bool L_1 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t3 * L_2 = (__this->___shaderAdapt_11);
		Material_t4 * L_3 = (Material_t4 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t4_il2cpp_TypeInfo));
		Material__ctor_m72(L_3, L_2, /*hidden argument*/&Material__ctor_m72_MethodInfo);
		__this->___m_materialAdapt_12 = L_3;
		Material_t4 * L_4 = (__this->___m_materialAdapt_12);
		NullCheck(L_4);
		Object_set_hideFlags_m73(L_4, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
	}

IL_002f:
	{
		Material_t4 * L_5 = (__this->___m_materialAdapt_12);
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C" Material_t4 * ContrastStretch_get_materialApply_m11 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	{
		Material_t4 * L_0 = (__this->___m_materialApply_14);
		bool L_1 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t3 * L_2 = (__this->___shaderApply_13);
		Material_t4 * L_3 = (Material_t4 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t4_il2cpp_TypeInfo));
		Material__ctor_m72(L_3, L_2, /*hidden argument*/&Material__ctor_m72_MethodInfo);
		__this->___m_materialApply_14 = L_3;
		Material_t4 * L_4 = (__this->___m_materialApply_14);
		NullCheck(L_4);
		Object_set_hideFlags_m73(L_4, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
	}

IL_002f:
	{
		Material_t4 * L_5 = (__this->___m_materialApply_14);
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern MethodInfo ContrastStretch_Start_m12_MethodInfo;
extern "C" void ContrastStretch_Start_m12 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m75(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsImageEffects_m75_MethodInfo);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m76(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m76_MethodInfo);
		return;
	}

IL_0012:
	{
		Shader_t3 * L_1 = (__this->___shaderAdapt_11);
		NullCheck(L_1);
		bool L_2 = Shader_get_isSupported_m77(L_1, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Shader_t3 * L_3 = (__this->___shaderApply_13);
		NullCheck(L_3);
		bool L_4 = Shader_get_isSupported_m77(L_3, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		Shader_t3 * L_5 = (__this->___shaderLum_7);
		NullCheck(L_5);
		bool L_6 = Shader_get_isSupported_m77(L_5, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		Shader_t3 * L_7 = (__this->___shaderReduce_9);
		NullCheck(L_7);
		bool L_8 = Shader_get_isSupported_m77(L_7, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (L_8)
		{
			goto IL_005a;
		}
	}

IL_0052:
	{
		Behaviour_set_enabled_m76(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m76_MethodInfo);
		return;
	}

IL_005a:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern MethodInfo ContrastStretch_OnEnable_m13_MethodInfo;
extern "C" void ContrastStretch_OnEnable_m13 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0007:
	{
		RenderTextureU5BU5D_t9* L_0 = (__this->___adaptRenderTex_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		bool L_3 = Object_op_Implicit_m55(NULL /*static, unused*/, (*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		RenderTextureU5BU5D_t9* L_4 = (__this->___adaptRenderTex_5);
		int32_t L_5 = V_0;
		RenderTexture_t7 * L_6 = (RenderTexture_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t7_il2cpp_TypeInfo));
		RenderTexture__ctor_m78(L_6, 1, 1, 0, /*hidden argument*/&RenderTexture__ctor_m78_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_6);
		*((RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_4, L_5)) = (RenderTexture_t7 *)L_6;
		RenderTextureU5BU5D_t9* L_7 = (__this->___adaptRenderTex_5);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_7, L_9)));
		Object_set_hideFlags_m73((*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_7, L_9)), ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern MethodInfo ContrastStretch_OnDisable_m14_MethodInfo;
extern "C" void ContrastStretch_OnDisable_m14 (ContrastStretch_t10 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		RenderTextureU5BU5D_t9* L_0 = (__this->___adaptRenderTex_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		Object_DestroyImmediate_m56(NULL /*static, unused*/, (*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
		RenderTextureU5BU5D_t9* L_3 = (__this->___adaptRenderTex_5);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, NULL);
		*((RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_3, L_4)) = (RenderTexture_t7 *)NULL;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		Material_t4 * L_7 = (__this->___m_materialLum_8);
		bool L_8 = Object_op_Implicit_m55(NULL /*static, unused*/, L_7, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		Material_t4 * L_9 = (__this->___m_materialLum_8);
		Object_DestroyImmediate_m56(NULL /*static, unused*/, L_9, /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
	}

IL_0043:
	{
		Material_t4 * L_10 = (__this->___m_materialReduce_10);
		bool L_11 = Object_op_Implicit_m55(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		Material_t4 * L_12 = (__this->___m_materialReduce_10);
		Object_DestroyImmediate_m56(NULL /*static, unused*/, L_12, /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
	}

IL_005e:
	{
		Material_t4 * L_13 = (__this->___m_materialAdapt_12);
		bool L_14 = Object_op_Implicit_m55(NULL /*static, unused*/, L_13, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		Material_t4 * L_15 = (__this->___m_materialAdapt_12);
		Object_DestroyImmediate_m56(NULL /*static, unused*/, L_15, /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
	}

IL_0079:
	{
		Material_t4 * L_16 = (__this->___m_materialApply_14);
		bool L_17 = Object_op_Implicit_m55(NULL /*static, unused*/, L_16, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		Material_t4 * L_18 = (__this->___m_materialApply_14);
		Object_DestroyImmediate_m56(NULL /*static, unused*/, L_18, /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
	}

IL_0094:
	{
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ContrastStretch_OnRenderImage_m15_MethodInfo;
extern "C" void ContrastStretch_OnRenderImage_m15 (ContrastStretch_t10 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method)
{
	int32_t V_0 = 0;
	RenderTexture_t7 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RenderTexture_t7 * V_6 = {0};
	{
		RenderTexture_t7 * L_0 = ___source;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_0);
		RenderTexture_t7 * L_2 = ___source;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_2);
		RenderTexture_t7 * L_4 = RenderTexture_GetTemporary_m79(NULL /*static, unused*/, ((int32_t)((int32_t)L_1/(int32_t)1)), ((int32_t)((int32_t)L_3/(int32_t)1)), /*hidden argument*/&RenderTexture_GetTemporary_m79_MethodInfo);
		V_1 = L_4;
		RenderTexture_t7 * L_5 = ___source;
		RenderTexture_t7 * L_6 = V_1;
		Material_t4 * L_7 = ContrastStretch_get_materialLum_m8(__this, /*hidden argument*/&ContrastStretch_get_materialLum_m8_MethodInfo);
		Graphics_Blit_m69(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		goto IL_0074;
	}

IL_0028:
	{
		RenderTexture_t7 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_8);
		V_4 = ((int32_t)((int32_t)L_9/(int32_t)2));
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		V_4 = 1;
	}

IL_003d:
	{
		RenderTexture_t7 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_11);
		V_5 = ((int32_t)((int32_t)L_12/(int32_t)2));
		int32_t L_13 = V_5;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		V_5 = 1;
	}

IL_0052:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_5;
		RenderTexture_t7 * L_16 = RenderTexture_GetTemporary_m79(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&RenderTexture_GetTemporary_m79_MethodInfo);
		V_6 = L_16;
		RenderTexture_t7 * L_17 = V_1;
		RenderTexture_t7 * L_18 = V_6;
		Material_t4 * L_19 = ContrastStretch_get_materialReduce_m9(__this, /*hidden argument*/&ContrastStretch_get_materialReduce_m9_MethodInfo);
		Graphics_Blit_m69(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		RenderTexture_t7 * L_20 = V_1;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_20, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		RenderTexture_t7 * L_21 = V_6;
		V_1 = L_21;
	}

IL_0074:
	{
		RenderTexture_t7 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_22);
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RenderTexture_t7 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_24);
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RenderTexture_t7 * L_26 = V_1;
		ContrastStretch_CalculateAdaptation_m16(__this, L_26, /*hidden argument*/&ContrastStretch_CalculateAdaptation_m16_MethodInfo);
		Material_t4 * L_27 = ContrastStretch_get_materialApply_m11(__this, /*hidden argument*/&ContrastStretch_get_materialApply_m11_MethodInfo);
		RenderTextureU5BU5D_t9* L_28 = (__this->___adaptRenderTex_5);
		int32_t L_29 = (__this->___curAdaptIndex_6);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		int32_t L_30 = L_29;
		NullCheck(L_27);
		Material_SetTexture_m67(L_27, (String_t*) &_stringLiteral7, (*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_28, L_30)), /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		RenderTexture_t7 * L_31 = ___source;
		RenderTexture_t7 * L_32 = ___destination;
		Material_t4 * L_33 = ContrastStretch_get_materialApply_m11(__this, /*hidden argument*/&ContrastStretch_get_materialApply_m11_MethodInfo);
		Graphics_Blit_m69(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		RenderTexture_t7 * L_34 = V_1;
		RenderTexture_ReleaseTemporary_m66(NULL /*static, unused*/, L_34, /*hidden argument*/&RenderTexture_ReleaseTemporary_m66_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C" void ContrastStretch_CalculateAdaptation_m16 (ContrastStretch_t10 * __this, Texture_t12 * ___curTexture, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = (__this->___curAdaptIndex_6);
		V_0 = L_0;
		int32_t L_1 = (__this->___curAdaptIndex_6);
		__this->___curAdaptIndex_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)1))%(int32_t)2));
		float L_2 = (__this->___adaptationSpeed_2);
		float L_3 = Time_get_deltaTime_m80(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m80_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		float L_4 = powf(((float)((float)(1.0f)-(float)L_2)), ((float)((float)(30.0f)*(float)L_3)));
		V_1 = ((float)((float)(1.0f)-(float)L_4));
		float L_5 = V_1;
		float L_6 = Mathf_Clamp_m82(NULL /*static, unused*/, L_5, (0.01f), (1.0f), /*hidden argument*/&Mathf_Clamp_m82_MethodInfo);
		V_1 = L_6;
		Material_t4 * L_7 = ContrastStretch_get_materialAdapt_m10(__this, /*hidden argument*/&ContrastStretch_get_materialAdapt_m10_MethodInfo);
		Texture_t12 * L_8 = ___curTexture;
		NullCheck(L_7);
		Material_SetTexture_m67(L_7, (String_t*) &_stringLiteral8, L_8, /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		Material_t4 * L_9 = ContrastStretch_get_materialAdapt_m10(__this, /*hidden argument*/&ContrastStretch_get_materialAdapt_m10_MethodInfo);
		float L_10 = V_1;
		float L_11 = (__this->___limitMinimum_3);
		float L_12 = (__this->___limitMaximum_4);
		Vector4_t26  L_13 = {0};
		Vector4__ctor_m58(&L_13, L_10, L_11, L_12, (0.0f), /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		NullCheck(L_9);
		Material_SetVector_m59(L_9, (String_t*) &_stringLiteral9, L_13, /*hidden argument*/&Material_SetVector_m59_MethodInfo);
		RenderTextureU5BU5D_t9* L_14 = (__this->___adaptRenderTex_5);
		int32_t L_15 = (__this->___curAdaptIndex_6);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Graphics_SetRenderTarget_m83(NULL /*static, unused*/, (*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_14, L_16)), /*hidden argument*/&Graphics_SetRenderTarget_m83_MethodInfo);
		Color_t30  L_17 = Color_get_black_m84(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m84_MethodInfo);
		GL_Clear_m85(NULL /*static, unused*/, 0, 1, L_17, /*hidden argument*/&GL_Clear_m85_MethodInfo);
		RenderTextureU5BU5D_t9* L_18 = (__this->___adaptRenderTex_5);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		RenderTextureU5BU5D_t9* L_21 = (__this->___adaptRenderTex_5);
		int32_t L_22 = (__this->___curAdaptIndex_6);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		Material_t4 * L_24 = ContrastStretch_get_materialAdapt_m10(__this, /*hidden argument*/&ContrastStretch_get_materialAdapt_m10_MethodInfo);
		Graphics_Blit_m69(NULL /*static, unused*/, (*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_18, L_20)), (*(RenderTexture_t7 **)(RenderTexture_t7 **)SZArrayLdElema(L_21, L_23)), L_24, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Grayscale
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Grayscale_t13_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.Grayscale
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_5MethodDeclarations.h"

// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_6MethodDeclarations.h"
extern MethodInfo ImageEffectBase__ctor_m19_MethodInfo;
extern MethodInfo ImageEffectBase_get_material_m21_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.Grayscale::.ctor()
extern MethodInfo Grayscale__ctor_m17_MethodInfo;
extern "C" void Grayscale__ctor_m17 (Grayscale_t13 * __this, MethodInfo* method)
{
	{
		ImageEffectBase__ctor_m19(__this, /*hidden argument*/&ImageEffectBase__ctor_m19_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Grayscale::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo Grayscale_OnRenderImage_m18_MethodInfo;
extern "C" void Grayscale_OnRenderImage_m18 (Grayscale_t13 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method)
{
	{
		Material_t4 * L_0 = ImageEffectBase_get_material_m21(__this, /*hidden argument*/&ImageEffectBase_get_material_m21_MethodInfo);
		Texture_t12 * L_1 = (__this->___textureRamp_4);
		NullCheck(L_0);
		Material_SetTexture_m67(L_0, (String_t*) &_stringLiteral10, L_1, /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		Material_t4 * L_2 = ImageEffectBase_get_material_m21(__this, /*hidden argument*/&ImageEffectBase_get_material_m21_MethodInfo);
		float L_3 = (__this->___rampOffset_5);
		NullCheck(L_2);
		Material_SetFloat_m70(L_2, (String_t*) &_stringLiteral11, L_3, /*hidden argument*/&Material_SetFloat_m70_MethodInfo);
		RenderTexture_t7 * L_4 = ___source;
		RenderTexture_t7 * L_5 = ___destination;
		Material_t4 * L_6 = ImageEffectBase_get_material_m21(__this, /*hidden argument*/&ImageEffectBase_get_material_m21_MethodInfo);
		Graphics_Blit_m69(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		return;
	}
}
// UnityStandardAssets.ImageEffects.ImageEffectBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ImageEffectBase_t14_il2cpp_TypeInfo;



// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
extern "C" void ImageEffectBase__ctor_m19 (ImageEffectBase_t14 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m74(__this, /*hidden argument*/&MonoBehaviour__ctor_m74_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::Start()
extern MethodInfo ImageEffectBase_Start_m20_MethodInfo;
extern "C" void ImageEffectBase_Start_m20 (ImageEffectBase_t14 * __this, MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsImageEffects_m75(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsImageEffects_m75_MethodInfo);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Behaviour_set_enabled_m76(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m76_MethodInfo);
		return;
	}

IL_0012:
	{
		Shader_t3 * L_1 = (__this->___shader_2);
		bool L_2 = Object_op_Implicit_m55(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Shader_t3 * L_3 = (__this->___shader_2);
		NullCheck(L_3);
		bool L_4 = Shader_get_isSupported_m77(L_3, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (L_4)
		{
			goto IL_0039;
		}
	}

IL_0032:
	{
		Behaviour_set_enabled_m76(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m76_MethodInfo);
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
extern "C" Material_t4 * ImageEffectBase_get_material_m21 (ImageEffectBase_t14 * __this, MethodInfo* method)
{
	{
		Material_t4 * L_0 = (__this->___m_Material_3);
		bool L_1 = Object_op_Equality_m71(NULL /*static, unused*/, L_0, (Object_t29 *)NULL, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Shader_t3 * L_2 = (__this->___shader_2);
		Material_t4 * L_3 = (Material_t4 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t4_il2cpp_TypeInfo));
		Material__ctor_m72(L_3, L_2, /*hidden argument*/&Material__ctor_m72_MethodInfo);
		__this->___m_Material_3 = L_3;
		Material_t4 * L_4 = (__this->___m_Material_3);
		NullCheck(L_4);
		Object_set_hideFlags_m73(L_4, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
	}

IL_002f:
	{
		Material_t4 * L_5 = (__this->___m_Material_3);
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::OnDisable()
extern MethodInfo ImageEffectBase_OnDisable_m22_MethodInfo;
extern "C" void ImageEffectBase_OnDisable_m22 (ImageEffectBase_t14 * __this, MethodInfo* method)
{
	{
		Material_t4 * L_0 = (__this->___m_Material_3);
		bool L_1 = Object_op_Implicit_m55(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Material_t4 * L_2 = (__this->___m_Material_3);
		Object_DestroyImmediate_m56(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
	}

IL_001b:
	{
		return;
	}
}
// UnityStandardAssets.ImageEffects.ImageEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ImageEffects_t15_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.ImageEffects
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_7MethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
extern TypeInfo Vector2_t16_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
extern MethodInfo Object__ctor_m86_MethodInfo;
extern MethodInfo Texture_get_texelSize_m87_MethodInfo;
extern MethodInfo Vector3_get_zero_m88_MethodInfo;
extern MethodInfo Quaternion_Euler_m89_MethodInfo;
extern MethodInfo Vector3_get_one_m90_MethodInfo;
extern MethodInfo Matrix4x4_TRS_m91_MethodInfo;
extern MethodInfo Material_SetMatrix_m92_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
extern MethodInfo ImageEffects__ctor_m23_MethodInfo;
extern "C" void ImageEffects__ctor_m23 (ImageEffects_t15 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern MethodInfo ImageEffects_RenderDistortion_m24_MethodInfo;
extern "C" void ImageEffects_RenderDistortion_m24 (Object_t * __this /* static, unused */, Material_t4 * ___material, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, float ___angle, Vector2_t16  ___center, Vector2_t16  ___radius, MethodInfo* method)
{
	bool V_0 = false;
	Matrix4x4_t31  V_1 = {0};
	Vector2_t16  V_2 = {0};
	{
		RenderTexture_t7 * L_0 = ___source;
		NullCheck(L_0);
		Vector2_t16  L_1 = Texture_get_texelSize_m87(L_0, /*hidden argument*/&Texture_get_texelSize_m87_MethodInfo);
		V_2 = L_1;
		float L_2 = ((&V_2)->___y_2);
		V_0 = ((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		float L_4 = ((&___center)->___y_2);
		(&___center)->___y_2 = ((float)((float)(1.0f)-(float)L_4));
		float L_5 = ___angle;
		___angle = ((-L_5));
	}

IL_0034:
	{
		Vector3_t32  L_6 = Vector3_get_zero_m88(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m88_MethodInfo);
		float L_7 = ___angle;
		Quaternion_t33  L_8 = Quaternion_Euler_m89(NULL /*static, unused*/, (0.0f), (0.0f), L_7, /*hidden argument*/&Quaternion_Euler_m89_MethodInfo);
		Vector3_t32  L_9 = Vector3_get_one_m90(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m90_MethodInfo);
		Matrix4x4_t31  L_10 = Matrix4x4_TRS_m91(NULL /*static, unused*/, L_6, L_8, L_9, /*hidden argument*/&Matrix4x4_TRS_m91_MethodInfo);
		V_1 = L_10;
		Material_t4 * L_11 = ___material;
		Matrix4x4_t31  L_12 = V_1;
		NullCheck(L_11);
		Material_SetMatrix_m92(L_11, (String_t*) &_stringLiteral12, L_12, /*hidden argument*/&Material_SetMatrix_m92_MethodInfo);
		Material_t4 * L_13 = ___material;
		float L_14 = ((&___center)->___x_1);
		float L_15 = ((&___center)->___y_2);
		float L_16 = ((&___radius)->___x_1);
		float L_17 = ((&___radius)->___y_2);
		Vector4_t26  L_18 = {0};
		Vector4__ctor_m58(&L_18, L_14, L_15, L_16, L_17, /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		NullCheck(L_13);
		Material_SetVector_m59(L_13, (String_t*) &_stringLiteral13, L_18, /*hidden argument*/&Material_SetVector_m59_MethodInfo);
		Material_t4 * L_19 = ___material;
		float L_20 = ___angle;
		NullCheck(L_19);
		Material_SetFloat_m70(L_19, (String_t*) &_stringLiteral14, ((float)((float)L_20*(float)(0.0174532924f))), /*hidden argument*/&Material_SetFloat_m70_MethodInfo);
		RenderTexture_t7 * L_21 = ___source;
		RenderTexture_t7 * L_22 = ___destination;
		Material_t4 * L_23 = ___material;
		Graphics_Blit_m69(NULL /*static, unused*/, L_21, L_22, L_23, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ImageEffects_Blit_m25_MethodInfo;
extern "C" void ImageEffects_Blit_m25 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method)
{
	{
		RenderTexture_t7 * L_0 = ___source;
		RenderTexture_t7 * L_1 = ___dest;
		Graphics_Blit_m57(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Graphics_Blit_m57_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ImageEffects_BlitWithMaterial_m26_MethodInfo;
extern "C" void ImageEffects_BlitWithMaterial_m26 (Object_t * __this /* static, unused */, Material_t4 * ___material, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, MethodInfo* method)
{
	{
		RenderTexture_t7 * L_0 = ___source;
		RenderTexture_t7 * L_1 = ___dest;
		Material_t4 * L_2 = ___material;
		Graphics_Blit_m69(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Graphics_Blit_m69_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Object
#include "mscorlib_System_Object.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.DepthTextureMode
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
extern TypeInfo Object_t29_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t34_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t34_0_0_0;
extern MethodInfo Object_ToString_m93_MethodInfo;
extern MethodInfo String_Concat_m94_MethodInfo;
extern MethodInfo Debug_Log_m95_MethodInfo;
extern MethodInfo Material_get_shader_m96_MethodInfo;
extern MethodInfo PostEffectsBase_NotSupported_m39_MethodInfo;
extern MethodInfo String_Concat_m97_MethodInfo;
extern MethodInfo String_Concat_m98_MethodInfo;
extern MethodInfo Debug_LogWarning_m99_MethodInfo;
extern MethodInfo PostEffectsBase_CheckResources_m32_MethodInfo;
extern MethodInfo SystemInfo_SupportsRenderTextureFormat_m100_MethodInfo;
extern MethodInfo SystemInfo_get_graphicsShaderLevel_m101_MethodInfo;
extern MethodInfo SystemInfo_get_supportsComputeShaders_m102_MethodInfo;
extern MethodInfo SystemInfo_get_supportsRenderTextures_m103_MethodInfo;
extern MethodInfo Camera_get_depthTextureMode_m104_MethodInfo;
extern MethodInfo Camera_set_depthTextureMode_m105_MethodInfo;
extern MethodInfo RenderTexture_set_active_m106_MethodInfo;
extern MethodInfo GL_PushMatrix_m107_MethodInfo;
extern MethodInfo GL_LoadOrtho_m108_MethodInfo;
extern MethodInfo Material_SetPass_m109_MethodInfo;
extern MethodInfo GL_Begin_m110_MethodInfo;
extern MethodInfo GL_TexCoord2_m111_MethodInfo;
extern MethodInfo GL_Vertex3_m112_MethodInfo;
extern MethodInfo GL_End_m113_MethodInfo;
extern MethodInfo Material_get_passCount_m114_MethodInfo;
extern MethodInfo GL_PopMatrix_m115_MethodInfo;
struct Component_t35;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t35;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m117_gshared (Component_t35 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m117(__this, method) (( Object_t * (*) (Component_t35 *, MethodInfo*))Component_GetComponent_TisObject_t_m117_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t18_m116(__this, method) (( Camera_t18 * (*) (Component_t35 *, MethodInfo*))Component_GetComponent_TisObject_t_m117_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisCamera_t18_m116_GenericMethod;


// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C" void PostEffectsBase__ctor_m27 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		__this->___supportHDRTextures_2 = 1;
		__this->___isSupported_4 = 1;
		MonoBehaviour__ctor_m74(__this, /*hidden argument*/&MonoBehaviour__ctor_m74_MethodInfo);
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" Material_t4 * PostEffectsBase_CheckShaderAndCreateMaterial_m28 (PostEffectsBase_t6 * __this, Shader_t3 * ___s, Material_t4 * ___m2Create, MethodInfo* method)
{
	static bool PostEffectsBase_CheckShaderAndCreateMaterial_m28_init;
	if (!PostEffectsBase_CheckShaderAndCreateMaterial_m28_init)
	{
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		PostEffectsBase_CheckShaderAndCreateMaterial_m28_init = true;
	}
	{
		Shader_t3 * L_0 = ___s;
		bool L_1 = Object_op_Implicit_m55(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m94(NULL /*static, unused*/, (String_t*) &_stringLiteral15, L_2, /*hidden argument*/&String_Concat_m94_MethodInfo);
		Debug_Log_m95(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m95_MethodInfo);
		Behaviour_set_enabled_m76(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m76_MethodInfo);
		return (Material_t4 *)NULL;
	}

IL_0029:
	{
		Shader_t3 * L_4 = ___s;
		NullCheck(L_4);
		bool L_5 = Shader_get_isSupported_m77(L_4, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		Material_t4 * L_6 = ___m2Create;
		bool L_7 = Object_op_Implicit_m55(NULL /*static, unused*/, L_6, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		Material_t4 * L_8 = ___m2Create;
		NullCheck(L_8);
		Shader_t3 * L_9 = Material_get_shader_m96(L_8, /*hidden argument*/&Material_get_shader_m96_MethodInfo);
		Shader_t3 * L_10 = ___s;
		bool L_11 = Object_op_Equality_m71(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		Material_t4 * L_12 = ___m2Create;
		return L_12;
	}

IL_0052:
	{
		Shader_t3 * L_13 = ___s;
		NullCheck(L_13);
		bool L_14 = Shader_get_isSupported_m77(L_13, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (L_14)
		{
			goto IL_009f;
		}
	}
	{
		PostEffectsBase_NotSupported_m39(__this, /*hidden argument*/&PostEffectsBase_NotSupported_m39_MethodInfo);
		StringU5BU5D_t34* L_15 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 5));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral16);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 0)) = (String_t*)(String_t*) &_stringLiteral16;
		StringU5BU5D_t34* L_16 = L_15;
		Shader_t3 * L_17 = ___s;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, L_17);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 1)) = (String_t*)L_18;
		StringU5BU5D_t34* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral17);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)(String_t*) &_stringLiteral17;
		StringU5BU5D_t34* L_20 = L_19;
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, __this);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3)) = (String_t*)L_21;
		StringU5BU5D_t34* L_22 = L_20;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 4);
		ArrayElementTypeCheck (L_22, (String_t*) &_stringLiteral18);
		*((String_t**)(String_t**)SZArrayLdElema(L_22, 4)) = (String_t*)(String_t*) &_stringLiteral18;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m97(NULL /*static, unused*/, L_22, /*hidden argument*/&String_Concat_m97_MethodInfo);
		Debug_Log_m95(NULL /*static, unused*/, L_23, /*hidden argument*/&Debug_Log_m95_MethodInfo);
		return (Material_t4 *)NULL;
	}

IL_009f:
	{
		Shader_t3 * L_24 = ___s;
		Material_t4 * L_25 = (Material_t4 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t4_il2cpp_TypeInfo));
		Material__ctor_m72(L_25, L_24, /*hidden argument*/&Material__ctor_m72_MethodInfo);
		___m2Create = L_25;
		Material_t4 * L_26 = ___m2Create;
		NullCheck(L_26);
		Object_set_hideFlags_m73(L_26, ((int32_t)52), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
		Material_t4 * L_27 = ___m2Create;
		bool L_28 = Object_op_Implicit_m55(NULL /*static, unused*/, L_27, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_28)
		{
			goto IL_00bc;
		}
	}
	{
		Material_t4 * L_29 = ___m2Create;
		return L_29;
	}

IL_00bc:
	{
		return (Material_t4 *)NULL;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern MethodInfo PostEffectsBase_CreateMaterial_m29_MethodInfo;
extern "C" Material_t4 * PostEffectsBase_CreateMaterial_m29 (PostEffectsBase_t6 * __this, Shader_t3 * ___s, Material_t4 * ___m2Create, MethodInfo* method)
{
	{
		Shader_t3 * L_0 = ___s;
		bool L_1 = Object_op_Implicit_m55(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m94(NULL /*static, unused*/, (String_t*) &_stringLiteral15, L_2, /*hidden argument*/&String_Concat_m94_MethodInfo);
		Debug_Log_m95(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m95_MethodInfo);
		return (Material_t4 *)NULL;
	}

IL_0022:
	{
		Material_t4 * L_4 = ___m2Create;
		bool L_5 = Object_op_Implicit_m55(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		Material_t4 * L_6 = ___m2Create;
		NullCheck(L_6);
		Shader_t3 * L_7 = Material_get_shader_m96(L_6, /*hidden argument*/&Material_get_shader_m96_MethodInfo);
		Shader_t3 * L_8 = ___s;
		bool L_9 = Object_op_Equality_m71(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		Shader_t3 * L_10 = ___s;
		NullCheck(L_10);
		bool L_11 = Shader_get_isSupported_m77(L_10, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		Material_t4 * L_12 = ___m2Create;
		return L_12;
	}

IL_004b:
	{
		Shader_t3 * L_13 = ___s;
		NullCheck(L_13);
		bool L_14 = Shader_get_isSupported_m77(L_13, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (L_14)
		{
			goto IL_0058;
		}
	}
	{
		return (Material_t4 *)NULL;
	}

IL_0058:
	{
		Shader_t3 * L_15 = ___s;
		Material_t4 * L_16 = (Material_t4 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t4_il2cpp_TypeInfo));
		Material__ctor_m72(L_16, L_15, /*hidden argument*/&Material__ctor_m72_MethodInfo);
		___m2Create = L_16;
		Material_t4 * L_17 = ___m2Create;
		NullCheck(L_17);
		Object_set_hideFlags_m73(L_17, ((int32_t)52), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
		Material_t4 * L_18 = ___m2Create;
		bool L_19 = Object_op_Implicit_m55(NULL /*static, unused*/, L_18, /*hidden argument*/&Object_op_Implicit_m55_MethodInfo);
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		Material_t4 * L_20 = ___m2Create;
		return L_20;
	}

IL_0075:
	{
		return (Material_t4 *)NULL;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
extern MethodInfo PostEffectsBase_OnEnable_m30_MethodInfo;
extern "C" void PostEffectsBase_OnEnable_m30 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		__this->___isSupported_4 = 1;
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
extern MethodInfo PostEffectsBase_CheckSupport_m31_MethodInfo;
extern "C" bool PostEffectsBase_CheckSupport_m31 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		bool L_0 = PostEffectsBase_CheckSupport_m34(__this, 0, /*hidden argument*/&PostEffectsBase_CheckSupport_m34_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
extern "C" bool PostEffectsBase_CheckResources_m32 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_0, (String_t*) &_stringLiteral20, /*hidden argument*/&String_Concat_m98_MethodInfo);
		Debug_LogWarning_m99(NULL /*static, unused*/, L_1, /*hidden argument*/&Debug_LogWarning_m99_MethodInfo);
		bool L_2 = (__this->___isSupported_4);
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
extern MethodInfo PostEffectsBase_Start_m33_MethodInfo;
extern "C" void PostEffectsBase_Start_m33 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		VirtFuncInvoker0< bool >::Invoke(&PostEffectsBase_CheckResources_m32_MethodInfo, __this);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern MethodInfo* Component_GetComponent_TisCamera_t18_m116_MethodInfo_var;
extern "C" bool PostEffectsBase_CheckSupport_m34 (PostEffectsBase_t6 * __this, bool ___needDepth, MethodInfo* method)
{
	static bool PostEffectsBase_CheckSupport_m34_init;
	if (!PostEffectsBase_CheckSupport_m34_init)
	{
		Component_GetComponent_TisCamera_t18_m116_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t18_m116_GenericMethod);
		PostEffectsBase_CheckSupport_m34_init = true;
	}
	PostEffectsBase_t6 * G_B2_0 = {0};
	PostEffectsBase_t6 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	PostEffectsBase_t6 * G_B3_1 = {0};
	{
		__this->___isSupported_4 = 1;
		bool L_0 = SystemInfo_SupportsRenderTextureFormat_m100(NULL /*static, unused*/, 2, /*hidden argument*/&SystemInfo_SupportsRenderTextureFormat_m100_MethodInfo);
		__this->___supportHDRTextures_2 = L_0;
		int32_t L_1 = SystemInfo_get_graphicsShaderLevel_m101(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_graphicsShaderLevel_m101_MethodInfo);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		bool L_2 = SystemInfo_get_supportsComputeShaders_m102(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsComputeShaders_m102_MethodInfo);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		G_B3_1->___supportDX11_3 = G_B3_0;
		bool L_3 = SystemInfo_get_supportsImageEffects_m75(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsImageEffects_m75_MethodInfo);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4 = SystemInfo_get_supportsRenderTextures_m103(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m103_MethodInfo);
		if (L_4)
		{
			goto IL_0049;
		}
	}

IL_0041:
	{
		PostEffectsBase_NotSupported_m39(__this, /*hidden argument*/&PostEffectsBase_NotSupported_m39_MethodInfo);
		return 0;
	}

IL_0049:
	{
		bool L_5 = ___needDepth;
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		bool L_6 = SystemInfo_SupportsRenderTextureFormat_m100(NULL /*static, unused*/, 1, /*hidden argument*/&SystemInfo_SupportsRenderTextureFormat_m100_MethodInfo);
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		PostEffectsBase_NotSupported_m39(__this, /*hidden argument*/&PostEffectsBase_NotSupported_m39_MethodInfo);
		return 0;
	}

IL_0062:
	{
		bool L_7 = ___needDepth;
		if (!L_7)
		{
			goto IL_007b;
		}
	}
	{
		Camera_t18 * L_8 = Component_GetComponent_TisCamera_t18_m116(__this, /*hidden argument*/Component_GetComponent_TisCamera_t18_m116_MethodInfo_var);
		Camera_t18 * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = Camera_get_depthTextureMode_m104(L_9, /*hidden argument*/&Camera_get_depthTextureMode_m104_MethodInfo);
		NullCheck(L_9);
		Camera_set_depthTextureMode_m105(L_9, ((int32_t)((int32_t)L_10|(int32_t)1)), /*hidden argument*/&Camera_set_depthTextureMode_m105_MethodInfo);
	}

IL_007b:
	{
		return 1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern MethodInfo PostEffectsBase_CheckSupport_m35_MethodInfo;
extern "C" bool PostEffectsBase_CheckSupport_m35 (PostEffectsBase_t6 * __this, bool ___needDepth, bool ___needHdr, MethodInfo* method)
{
	{
		bool L_0 = ___needDepth;
		bool L_1 = PostEffectsBase_CheckSupport_m34(__this, L_0, /*hidden argument*/&PostEffectsBase_CheckSupport_m34_MethodInfo);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		bool L_2 = ___needHdr;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = (__this->___supportHDRTextures_2);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		PostEffectsBase_NotSupported_m39(__this, /*hidden argument*/&PostEffectsBase_NotSupported_m39_MethodInfo);
		return 0;
	}

IL_0027:
	{
		return 1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
extern MethodInfo PostEffectsBase_Dx11Support_m36_MethodInfo;
extern "C" bool PostEffectsBase_Dx11Support_m36 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___supportDX11_3);
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C" void PostEffectsBase_ReportAutoDisable_m37 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = String_Concat_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral21, L_0, (String_t*) &_stringLiteral22, /*hidden argument*/&String_Concat_m98_MethodInfo);
		Debug_LogWarning_m99(NULL /*static, unused*/, L_1, /*hidden argument*/&Debug_LogWarning_m99_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
extern MethodInfo PostEffectsBase_CheckShader_m38_MethodInfo;
extern TypeInfo* StringU5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" bool PostEffectsBase_CheckShader_m38 (PostEffectsBase_t6 * __this, Shader_t3 * ___s, MethodInfo* method)
{
	static bool PostEffectsBase_CheckShader_m38_init;
	if (!PostEffectsBase_CheckShader_m38_init)
	{
		StringU5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t34_0_0_0);
		PostEffectsBase_CheckShader_m38_init = true;
	}
	{
		StringU5BU5D_t34* L_0 = ((StringU5BU5D_t34*)SZArrayNew(StringU5BU5D_t34_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral16);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral16;
		StringU5BU5D_t34* L_1 = L_0;
		Shader_t3 * L_2 = ___s;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_3;
		StringU5BU5D_t34* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral17);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral17;
		StringU5BU5D_t34* L_5 = L_4;
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m93_MethodInfo, __this);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 3)) = (String_t*)L_6;
		StringU5BU5D_t34* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral23);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4)) = (String_t*)(String_t*) &_stringLiteral23;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m97(NULL /*static, unused*/, L_7, /*hidden argument*/&String_Concat_m97_MethodInfo);
		Debug_Log_m95(NULL /*static, unused*/, L_8, /*hidden argument*/&Debug_Log_m95_MethodInfo);
		Shader_t3 * L_9 = ___s;
		NullCheck(L_9);
		bool L_10 = Shader_get_isSupported_m77(L_9, /*hidden argument*/&Shader_get_isSupported_m77_MethodInfo);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		PostEffectsBase_NotSupported_m39(__this, /*hidden argument*/&PostEffectsBase_NotSupported_m39_MethodInfo);
		return 0;
	}

IL_004d:
	{
		return 0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
extern "C" void PostEffectsBase_NotSupported_m39 (PostEffectsBase_t6 * __this, MethodInfo* method)
{
	{
		Behaviour_set_enabled_m76(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m76_MethodInfo);
		__this->___isSupported_4 = 0;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern MethodInfo PostEffectsBase_DrawBorder_m40_MethodInfo;
extern "C" void PostEffectsBase_DrawBorder_m40 (PostEffectsBase_t6 * __this, RenderTexture_t7 * ___dest, Material_t4 * ___material, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		RenderTexture_t7 * L_0 = ___dest;
		RenderTexture_set_active_m106(NULL /*static, unused*/, L_0, /*hidden argument*/&RenderTexture_set_active_m106_MethodInfo);
		V_4 = 1;
		GL_PushMatrix_m107(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m107_MethodInfo);
		GL_LoadOrtho_m108(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m108_MethodInfo);
		V_5 = 0;
		goto IL_028d;
	}

IL_001b:
	{
		Material_t4 * L_1 = ___material;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		Material_SetPass_m109(L_1, L_2, /*hidden argument*/&Material_SetPass_m109_MethodInfo);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		V_6 = (1.0f);
		V_7 = (0.0f);
		goto IL_004c;
	}

IL_003e:
	{
		V_6 = (0.0f);
		V_7 = (1.0f);
	}

IL_004c:
	{
		V_0 = (0.0f);
		RenderTexture_t7 * L_4 = ___dest;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_4);
		V_1 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_5))*(float)(1.0f)))))));
		V_2 = (0.0f);
		V_3 = (1.0f);
		GL_Begin_m110(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m110_MethodInfo);
		float L_6 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_6, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_7 = V_0;
		float L_8 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_7, L_8, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_9 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_9, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_10 = V_1;
		float L_11 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_10, L_11, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_12 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_12, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_13 = V_1;
		float L_14 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_13, L_14, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_15 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_15, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_16 = V_0;
		float L_17 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_16, L_17, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		RenderTexture_t7 * L_18 = ___dest;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_18);
		V_0 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_19))*(float)(1.0f)))))));
		V_1 = (1.0f);
		V_2 = (0.0f);
		V_3 = (1.0f);
		float L_20 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_20, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_21 = V_0;
		float L_22 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_21, L_22, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_23 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_23, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_24 = V_1;
		float L_25 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_24, L_25, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_26 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_26, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_27 = V_1;
		float L_28 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_27, L_28, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_29 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_29, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_30 = V_0;
		float L_31 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_30, L_31, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		V_0 = (0.0f);
		V_1 = (1.0f);
		V_2 = (0.0f);
		RenderTexture_t7 * L_32 = ___dest;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_32);
		V_3 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_33))*(float)(1.0f)))))));
		float L_34 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_34, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_35 = V_0;
		float L_36 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_35, L_36, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_37 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_37, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_38 = V_1;
		float L_39 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_38, L_39, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_40 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_40, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_41 = V_1;
		float L_42 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_41, L_42, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_43 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_43, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_44 = V_0;
		float L_45 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_44, L_45, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		V_0 = (0.0f);
		V_1 = (1.0f);
		RenderTexture_t7 * L_46 = ___dest;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_46);
		V_2 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_47))*(float)(1.0f)))))));
		V_3 = (1.0f);
		float L_48 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_48, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_49 = V_0;
		float L_50 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_49, L_50, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_51 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_51, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_52 = V_1;
		float L_53 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_52, L_53, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_54 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_54, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_55 = V_1;
		float L_56 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_55, L_56, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_57 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_57, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_58 = V_0;
		float L_59 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_58, L_59, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		GL_End_m113(NULL /*static, unused*/, /*hidden argument*/&GL_End_m113_MethodInfo);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)((int32_t)L_60+(int32_t)1));
	}

IL_028d:
	{
		int32_t L_61 = V_5;
		Material_t4 * L_62 = ___material;
		NullCheck(L_62);
		int32_t L_63 = Material_get_passCount_m114(L_62, /*hidden argument*/&Material_get_passCount_m114_MethodInfo);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_001b;
		}
	}
	{
		GL_PopMatrix_m115(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m115_MethodInfo);
		return;
	}
}
// UnityStandardAssets.ImageEffects.PostEffectsHelper
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PostEffectsHelper_t17_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.PostEffectsHelper
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_8MethodDeclarations.h"

extern MethodInfo GL_LoadIdentity_m118_MethodInfo;
extern MethodInfo Camera_get_projectionMatrix_m119_MethodInfo;
extern MethodInfo GL_LoadProjectionMatrix_m120_MethodInfo;
extern MethodInfo Camera_get_fieldOfView_m121_MethodInfo;
extern MethodInfo Mathf_Cos_m122_MethodInfo;
extern MethodInfo Mathf_Sin_m123_MethodInfo;
extern MethodInfo Camera_get_aspect_m124_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
extern MethodInfo PostEffectsHelper__ctor_m41_MethodInfo;
extern "C" void PostEffectsHelper__ctor_m41 (PostEffectsHelper_t17 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m74(__this, /*hidden argument*/&MonoBehaviour__ctor_m74_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo PostEffectsHelper_OnRenderImage_m42_MethodInfo;
extern "C" void PostEffectsHelper_OnRenderImage_m42 (PostEffectsHelper_t17 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method)
{
	{
		Debug_Log_m95(NULL /*static, unused*/, (String_t*) &_stringLiteral24, /*hidden argument*/&Debug_Log_m95_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern MethodInfo PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m43_MethodInfo;
extern "C" void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m43 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___material, Camera_t18 * ___cameraForProjectionMatrix, MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		RenderTexture_t7 * L_0 = ___dest;
		RenderTexture_set_active_m106(NULL /*static, unused*/, L_0, /*hidden argument*/&RenderTexture_set_active_m106_MethodInfo);
		Material_t4 * L_1 = ___material;
		RenderTexture_t7 * L_2 = ___source;
		NullCheck(L_1);
		Material_SetTexture_m67(L_1, (String_t*) &_stringLiteral25, L_2, /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		V_0 = 1;
		GL_PushMatrix_m107(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m107_MethodInfo);
		GL_LoadIdentity_m118(NULL /*static, unused*/, /*hidden argument*/&GL_LoadIdentity_m118_MethodInfo);
		Camera_t18 * L_3 = ___cameraForProjectionMatrix;
		NullCheck(L_3);
		Matrix4x4_t31  L_4 = Camera_get_projectionMatrix_m119(L_3, /*hidden argument*/&Camera_get_projectionMatrix_m119_MethodInfo);
		GL_LoadProjectionMatrix_m120(NULL /*static, unused*/, L_4, /*hidden argument*/&GL_LoadProjectionMatrix_m120_MethodInfo);
		Camera_t18 * L_5 = ___cameraForProjectionMatrix;
		NullCheck(L_5);
		float L_6 = Camera_get_fieldOfView_m121(L_5, /*hidden argument*/&Camera_get_fieldOfView_m121_MethodInfo);
		V_1 = ((float)((float)((float)((float)L_6*(float)(0.5f)))*(float)(0.0174532924f)));
		float L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		float L_8 = cosf(L_7);
		float L_9 = V_1;
		float L_10 = sinf(L_9);
		V_2 = ((float)((float)L_8/(float)L_10));
		Camera_t18 * L_11 = ___cameraForProjectionMatrix;
		NullCheck(L_11);
		float L_12 = Camera_get_aspect_m124(L_11, /*hidden argument*/&Camera_get_aspect_m124_MethodInfo);
		V_3 = L_12;
		float L_13 = V_3;
		float L_14 = V_2;
		V_4 = ((float)((float)L_13/(float)((-L_14))));
		float L_15 = V_3;
		float L_16 = V_2;
		V_5 = ((float)((float)L_15/(float)L_16));
		float L_17 = V_2;
		V_6 = ((float)((float)(1.0f)/(float)((-L_17))));
		float L_18 = V_2;
		V_7 = ((float)((float)(1.0f)/(float)L_18));
		V_8 = (1.0f);
		float L_19 = V_4;
		float L_20 = ___dist;
		float L_21 = V_8;
		V_4 = ((float)((float)L_19*(float)((float)((float)L_20*(float)L_21))));
		float L_22 = V_5;
		float L_23 = ___dist;
		float L_24 = V_8;
		V_5 = ((float)((float)L_22*(float)((float)((float)L_23*(float)L_24))));
		float L_25 = V_6;
		float L_26 = ___dist;
		float L_27 = V_8;
		V_6 = ((float)((float)L_25*(float)((float)((float)L_26*(float)L_27))));
		float L_28 = V_7;
		float L_29 = ___dist;
		float L_30 = V_8;
		V_7 = ((float)((float)L_28*(float)((float)((float)L_29*(float)L_30))));
		float L_31 = ___dist;
		V_9 = ((-L_31));
		V_10 = 0;
		goto IL_0146;
	}

IL_00a9:
	{
		Material_t4 * L_32 = ___material;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		Material_SetPass_m109(L_32, L_33, /*hidden argument*/&Material_SetPass_m109_MethodInfo);
		GL_Begin_m110(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m110_MethodInfo);
		bool L_34 = V_0;
		if (!L_34)
		{
			goto IL_00d1;
		}
	}
	{
		V_11 = (1.0f);
		V_12 = (0.0f);
		goto IL_00df;
	}

IL_00d1:
	{
		V_11 = (0.0f);
		V_12 = (1.0f);
	}

IL_00df:
	{
		float L_35 = V_11;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_35, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_36 = V_4;
		float L_37 = V_6;
		float L_38 = V_9;
		GL_Vertex3_m112(NULL /*static, unused*/, L_36, L_37, L_38, /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_39 = V_11;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_39, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_40 = V_5;
		float L_41 = V_6;
		float L_42 = V_9;
		GL_Vertex3_m112(NULL /*static, unused*/, L_40, L_41, L_42, /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_43 = V_12;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_43, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_44 = V_5;
		float L_45 = V_7;
		float L_46 = V_9;
		GL_Vertex3_m112(NULL /*static, unused*/, L_44, L_45, L_46, /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_47 = V_12;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_47, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_48 = V_4;
		float L_49 = V_7;
		float L_50 = V_9;
		GL_Vertex3_m112(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		GL_End_m113(NULL /*static, unused*/, /*hidden argument*/&GL_End_m113_MethodInfo);
		int32_t L_51 = V_10;
		V_10 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_0146:
	{
		int32_t L_52 = V_10;
		Material_t4 * L_53 = ___material;
		NullCheck(L_53);
		int32_t L_54 = Material_get_passCount_m114(L_53, /*hidden argument*/&Material_get_passCount_m114_MethodInfo);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_00a9;
		}
	}
	{
		GL_PopMatrix_m115(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m115_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern MethodInfo PostEffectsHelper_DrawBorder_m44_MethodInfo;
extern "C" void PostEffectsHelper_DrawBorder_m44 (Object_t * __this /* static, unused */, RenderTexture_t7 * ___dest, Material_t4 * ___material, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		RenderTexture_t7 * L_0 = ___dest;
		RenderTexture_set_active_m106(NULL /*static, unused*/, L_0, /*hidden argument*/&RenderTexture_set_active_m106_MethodInfo);
		V_4 = 1;
		GL_PushMatrix_m107(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m107_MethodInfo);
		GL_LoadOrtho_m108(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m108_MethodInfo);
		V_5 = 0;
		goto IL_028d;
	}

IL_001b:
	{
		Material_t4 * L_1 = ___material;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		Material_SetPass_m109(L_1, L_2, /*hidden argument*/&Material_SetPass_m109_MethodInfo);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		V_6 = (1.0f);
		V_7 = (0.0f);
		goto IL_004c;
	}

IL_003e:
	{
		V_6 = (0.0f);
		V_7 = (1.0f);
	}

IL_004c:
	{
		V_0 = (0.0f);
		RenderTexture_t7 * L_4 = ___dest;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_4);
		V_1 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_5))*(float)(1.0f)))))));
		V_2 = (0.0f);
		V_3 = (1.0f);
		GL_Begin_m110(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m110_MethodInfo);
		float L_6 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_6, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_7 = V_0;
		float L_8 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_7, L_8, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_9 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_9, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_10 = V_1;
		float L_11 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_10, L_11, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_12 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_12, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_13 = V_1;
		float L_14 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_13, L_14, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_15 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_15, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_16 = V_0;
		float L_17 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_16, L_17, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		RenderTexture_t7 * L_18 = ___dest;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m61_MethodInfo, L_18);
		V_0 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_19))*(float)(1.0f)))))));
		V_1 = (1.0f);
		V_2 = (0.0f);
		V_3 = (1.0f);
		float L_20 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_20, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_21 = V_0;
		float L_22 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_21, L_22, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_23 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_23, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_24 = V_1;
		float L_25 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_24, L_25, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_26 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_26, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_27 = V_1;
		float L_28 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_27, L_28, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_29 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_29, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_30 = V_0;
		float L_31 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_30, L_31, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		V_0 = (0.0f);
		V_1 = (1.0f);
		V_2 = (0.0f);
		RenderTexture_t7 * L_32 = ___dest;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_32);
		V_3 = ((float)((float)(0.0f)+(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_33))*(float)(1.0f)))))));
		float L_34 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_34, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_35 = V_0;
		float L_36 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_35, L_36, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_37 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_37, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_38 = V_1;
		float L_39 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_38, L_39, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_40 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_40, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_41 = V_1;
		float L_42 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_41, L_42, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_43 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_43, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_44 = V_0;
		float L_45 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_44, L_45, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		V_0 = (0.0f);
		V_1 = (1.0f);
		RenderTexture_t7 * L_46 = ___dest;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m62_MethodInfo, L_46);
		V_2 = ((float)((float)(1.0f)-(float)((float)((float)(1.0f)/(float)((float)((float)(((float)L_47))*(float)(1.0f)))))));
		V_3 = (1.0f);
		float L_48 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_48, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_49 = V_0;
		float L_50 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_49, L_50, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_51 = V_6;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_51, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_52 = V_1;
		float L_53 = V_2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_52, L_53, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_54 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_54, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_55 = V_1;
		float L_56 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_55, L_56, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_57 = V_7;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_57, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_58 = V_0;
		float L_59 = V_3;
		GL_Vertex3_m112(NULL /*static, unused*/, L_58, L_59, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		GL_End_m113(NULL /*static, unused*/, /*hidden argument*/&GL_End_m113_MethodInfo);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)((int32_t)L_60+(int32_t)1));
	}

IL_028d:
	{
		int32_t L_61 = V_5;
		Material_t4 * L_62 = ___material;
		NullCheck(L_62);
		int32_t L_63 = Material_get_passCount_m114(L_62, /*hidden argument*/&Material_get_passCount_m114_MethodInfo);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_001b;
		}
	}
	{
		GL_PopMatrix_m115(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m115_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern MethodInfo PostEffectsHelper_DrawLowLevelQuad_m45_MethodInfo;
extern "C" void PostEffectsHelper_DrawLowLevelQuad_m45 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t7 * ___source, RenderTexture_t7 * ___dest, Material_t4 * ___material, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		RenderTexture_t7 * L_0 = ___dest;
		RenderTexture_set_active_m106(NULL /*static, unused*/, L_0, /*hidden argument*/&RenderTexture_set_active_m106_MethodInfo);
		Material_t4 * L_1 = ___material;
		RenderTexture_t7 * L_2 = ___source;
		NullCheck(L_1);
		Material_SetTexture_m67(L_1, (String_t*) &_stringLiteral25, L_2, /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		V_0 = 1;
		GL_PushMatrix_m107(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m107_MethodInfo);
		GL_LoadOrtho_m108(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m108_MethodInfo);
		V_1 = 0;
		goto IL_00bf;
	}

IL_0028:
	{
		Material_t4 * L_3 = ___material;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Material_SetPass_m109(L_3, L_4, /*hidden argument*/&Material_SetPass_m109_MethodInfo);
		GL_Begin_m110(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m110_MethodInfo);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		V_2 = (1.0f);
		V_3 = (0.0f);
		goto IL_005a;
	}

IL_004e:
	{
		V_2 = (0.0f);
		V_3 = (1.0f);
	}

IL_005a:
	{
		float L_6 = V_2;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_6, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_7 = ___x1;
		float L_8 = ___y1;
		GL_Vertex3_m112(NULL /*static, unused*/, L_7, L_8, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_9 = V_2;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_9, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_10 = ___x2;
		float L_11 = ___y1;
		GL_Vertex3_m112(NULL /*static, unused*/, L_10, L_11, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_12 = V_3;
		GL_TexCoord2_m111(NULL /*static, unused*/, (1.0f), L_12, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_13 = ___x2;
		float L_14 = ___y2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_13, L_14, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		float L_15 = V_3;
		GL_TexCoord2_m111(NULL /*static, unused*/, (0.0f), L_15, /*hidden argument*/&GL_TexCoord2_m111_MethodInfo);
		float L_16 = ___x1;
		float L_17 = ___y2;
		GL_Vertex3_m112(NULL /*static, unused*/, L_16, L_17, (0.1f), /*hidden argument*/&GL_Vertex3_m112_MethodInfo);
		GL_End_m113(NULL /*static, unused*/, /*hidden argument*/&GL_End_m113_MethodInfo);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_00bf:
	{
		int32_t L_19 = V_1;
		Material_t4 * L_20 = ___material;
		NullCheck(L_20);
		int32_t L_21 = Material_get_passCount_m114(L_20, /*hidden argument*/&Material_get_passCount_m114_MethodInfo);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0028;
		}
	}
	{
		GL_PopMatrix_m115(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m115_MethodInfo);
		return;
	}
}
// UnityStandardAssets.ImageEffects.Quads
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Quads_t20_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.Quads
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_9MethodDeclarations.h"

// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
extern TypeInfo MeshU5BU5D_t19_il2cpp_TypeInfo;
extern TypeInfo Mesh_t21_il2cpp_TypeInfo;
extern TypeInfo Vector3U5BU5D_t36_il2cpp_TypeInfo;
extern TypeInfo Vector3_t32_il2cpp_TypeInfo;
extern TypeInfo Vector2U5BU5D_t37_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t38_il2cpp_TypeInfo;
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern Il2CppType MeshU5BU5D_t19_0_0_0;
extern Il2CppType Vector3U5BU5D_t36_0_0_0;
extern Il2CppType Vector2U5BU5D_t37_0_0_0;
extern Il2CppType Int32U5BU5D_t38_0_0_0;
extern MethodInfo Object_op_Inequality_m125_MethodInfo;
extern MethodInfo Quads_HasMeshes_m48_MethodInfo;
extern MethodInfo Mathf_CeilToInt_m126_MethodInfo;
extern MethodInfo Mathf_Clamp_m127_MethodInfo;
extern MethodInfo Mathf_FloorToInt_m128_MethodInfo;
extern MethodInfo Quads_GetMesh_m51_MethodInfo;
extern MethodInfo Mesh__ctor_m129_MethodInfo;
extern MethodInfo Mathf_Floor_m130_MethodInfo;
extern MethodInfo Vector3__ctor_m131_MethodInfo;
extern MethodInfo Vector2__ctor_m132_MethodInfo;
extern MethodInfo Mesh_set_vertices_m133_MethodInfo;
extern MethodInfo Mesh_set_triangles_m134_MethodInfo;
extern MethodInfo Mesh_set_uv_m135_MethodInfo;
extern MethodInfo Mesh_set_uv2_m136_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.Quads::.ctor()
extern MethodInfo Quads__ctor_m46_MethodInfo;
extern "C" void Quads__ctor_m46 (Quads_t20 * __this, MethodInfo* method)
{
	{
		Object__ctor_m86(__this, /*hidden argument*/&Object__ctor_m86_MethodInfo);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::.cctor()
extern MethodInfo Quads__cctor_m47_MethodInfo;
extern "C" void Quads__cctor_m47 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
extern "C" bool Quads_HasMeshes_m48 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Mesh_t21 * V_0 = {0};
	MeshU5BU5D_t19* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_0 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_1 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_002f;
	}

IL_0019:
	{
		MeshU5BU5D_t19* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Mesh_t21 **)(Mesh_t21 **)SZArrayLdElema(L_2, L_4));
		Mesh_t21 * L_5 = V_0;
		bool L_6 = Object_op_Equality_m71(NULL /*static, unused*/, (Object_t29 *)NULL, L_5, /*hidden argument*/&Object_op_Equality_m71_MethodInfo);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_8 = V_2;
		MeshU5BU5D_t19* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		return 1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
extern MethodInfo Quads_Cleanup_m49_MethodInfo;
extern "C" void Quads_Cleanup_m49 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_0 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_1 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		bool L_4 = Object_op_Inequality_m125(NULL /*static, unused*/, (Object_t29 *)NULL, (*(Mesh_t21 **)(Mesh_t21 **)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&Object_op_Inequality_m125_MethodInfo);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_5 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_DestroyImmediate_m56(NULL /*static, unused*/, (*(Mesh_t21 **)(Mesh_t21 **)SZArrayLdElema(L_5, L_7)), /*hidden argument*/&Object_DestroyImmediate_m56_MethodInfo);
		MeshU5BU5D_t19* L_8 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, NULL);
		*((Mesh_t21 **)(Mesh_t21 **)SZArrayLdElema(L_8, L_9)) = (Mesh_t21 *)NULL;
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_12 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0 = (MeshU5BU5D_t19*)NULL;
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
extern MethodInfo Quads_GetMeshes_m50_MethodInfo;
extern TypeInfo* MeshU5BU5D_t19_il2cpp_TypeInfo_var;
extern "C" MeshU5BU5D_t19* Quads_GetMeshes_m50 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method)
{
	static bool Quads_GetMeshes_m50_init;
	if (!Quads_GetMeshes_m50_init)
	{
		MeshU5BU5D_t19_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MeshU5BU5D_t19_0_0_0);
		Quads_GetMeshes_m50_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		bool L_0 = Quads_HasMeshes_m48(NULL /*static, unused*/, /*hidden argument*/&Quads_HasMeshes_m48_MethodInfo);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		int32_t L_1 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___currentQuads_1;
		int32_t L_2 = ___totalWidth;
		int32_t L_3 = ___totalHeight;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)((int32_t)L_2*(int32_t)L_3))))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_4 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		return L_4;
	}

IL_001d:
	{
		V_0 = ((int32_t)10833);
		int32_t L_5 = ___totalWidth;
		int32_t L_6 = ___totalHeight;
		V_1 = ((int32_t)((int32_t)L_5*(int32_t)L_6));
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___currentQuads_1 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		int32_t L_10 = Mathf_CeilToInt_m126(NULL /*static, unused*/, ((float)((float)((float)((float)(1.0f)*(float)(((float)L_8))))/(float)((float)((float)(1.0f)*(float)(((float)L_9)))))), /*hidden argument*/&Mathf_CeilToInt_m126_MethodInfo);
		V_2 = L_10;
		int32_t L_11 = V_2;
		((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0 = ((MeshU5BU5D_t19*)SZArrayNew(MeshU5BU5D_t19_il2cpp_TypeInfo_var, L_11));
		V_3 = 0;
		V_4 = 0;
		V_3 = 0;
		goto IL_0089;
	}

IL_005b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		int32_t L_15 = Mathf_Clamp_m127(NULL /*static, unused*/, ((int32_t)((int32_t)L_12-(int32_t)L_13)), 0, L_14, /*hidden argument*/&Mathf_Clamp_m127_MethodInfo);
		int32_t L_16 = Mathf_FloorToInt_m128(NULL /*static, unused*/, (((float)L_15)), /*hidden argument*/&Mathf_FloorToInt_m128_MethodInfo);
		V_5 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_17 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		int32_t L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = V_3;
		int32_t L_21 = ___totalWidth;
		int32_t L_22 = ___totalHeight;
		Mesh_t21 * L_23 = Quads_GetMesh_m51(NULL /*static, unused*/, L_19, L_20, L_21, L_22, /*hidden argument*/&Quads_GetMesh_m51_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_23);
		*((Mesh_t21 **)(Mesh_t21 **)SZArrayLdElema(L_17, L_18)) = (Mesh_t21 *)L_23;
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		V_3 = ((int32_t)((int32_t)L_25+(int32_t)L_26));
	}

IL_0089:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo));
		MeshU5BU5D_t19* L_29 = ((Quads_t20_StaticFields*)InitializedTypeInfo(&Quads_t20_il2cpp_TypeInfo)->static_fields)->___meshes_0;
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Vector3U5BU5D_t36_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2U5BU5D_t37_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" Mesh_t21 * Quads_GetMesh_m51 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, MethodInfo* method)
{
	static bool Quads_GetMesh_m51_init;
	if (!Quads_GetMesh_m51_init)
	{
		Vector3U5BU5D_t36_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t36_0_0_0);
		Vector2U5BU5D_t37_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector2U5BU5D_t37_0_0_0);
		Int32U5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t38_0_0_0);
		Quads_GetMesh_m51_init = true;
	}
	Mesh_t21 * V_0 = {0};
	Vector3U5BU5D_t36* V_1 = {0};
	Vector2U5BU5D_t37* V_2 = {0};
	Vector2U5BU5D_t37* V_3 = {0};
	Int32U5BU5D_t38* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t32  V_11 = {0};
	{
		Mesh_t21 * L_0 = (Mesh_t21 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Mesh_t21_il2cpp_TypeInfo));
		Mesh__ctor_m129(L_0, /*hidden argument*/&Mesh__ctor_m129_MethodInfo);
		V_0 = L_0;
		Mesh_t21 * L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_m73(L_1, ((int32_t)52), /*hidden argument*/&Object_set_hideFlags_m73_MethodInfo);
		int32_t L_2 = ___triCount;
		V_1 = ((Vector3U5BU5D_t36*)SZArrayNew(Vector3U5BU5D_t36_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)4))));
		int32_t L_3 = ___triCount;
		V_2 = ((Vector2U5BU5D_t37*)SZArrayNew(Vector2U5BU5D_t37_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_3*(int32_t)4))));
		int32_t L_4 = ___triCount;
		V_3 = ((Vector2U5BU5D_t37*)SZArrayNew(Vector2U5BU5D_t37_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4*(int32_t)4))));
		int32_t L_5 = ___triCount;
		V_4 = ((Int32U5BU5D_t38*)SZArrayNew(Int32U5BU5D_t38_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_5*(int32_t)6))));
		V_5 = 0;
		goto IL_01ed;
	}

IL_003b:
	{
		int32_t L_6 = V_5;
		V_6 = ((int32_t)((int32_t)L_6*(int32_t)4));
		int32_t L_7 = V_5;
		V_7 = ((int32_t)((int32_t)L_7*(int32_t)6));
		int32_t L_8 = ___triOffset;
		int32_t L_9 = V_5;
		V_8 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		int32_t L_10 = V_8;
		int32_t L_11 = ___totalWidth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t28_il2cpp_TypeInfo));
		float L_12 = floorf((((float)((int32_t)((int32_t)L_10%(int32_t)L_11)))));
		int32_t L_13 = ___totalWidth;
		V_9 = ((float)((float)L_12/(float)(((float)L_13))));
		int32_t L_14 = V_8;
		int32_t L_15 = ___totalWidth;
		float L_16 = floorf((((float)((int32_t)((int32_t)L_14/(int32_t)L_15)))));
		int32_t L_17 = ___totalHeight;
		V_10 = ((float)((float)L_16/(float)(((float)L_17))));
		float L_18 = V_9;
		float L_19 = V_10;
		Vector3__ctor_m131((&V_11), ((float)((float)((float)((float)L_18*(float)(2.0f)))-(float)(1.0f))), ((float)((float)((float)((float)L_19*(float)(2.0f)))-(float)(1.0f))), (1.0f), /*hidden argument*/&Vector3__ctor_m131_MethodInfo);
		Vector3U5BU5D_t36* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		Vector3_t32  L_22 = V_11;
		*((Vector3_t32 *)(Vector3_t32 *)SZArrayLdElema(L_20, L_21)) = L_22;
		Vector3U5BU5D_t36* L_23 = V_1;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)1)));
		Vector3_t32  L_25 = V_11;
		*((Vector3_t32 *)(Vector3_t32 *)SZArrayLdElema(L_23, ((int32_t)((int32_t)L_24+(int32_t)1)))) = L_25;
		Vector3U5BU5D_t36* L_26 = V_1;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)));
		Vector3_t32  L_28 = V_11;
		*((Vector3_t32 *)(Vector3_t32 *)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)))) = L_28;
		Vector3U5BU5D_t36* L_29 = V_1;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)((int32_t)L_30+(int32_t)3)));
		Vector3_t32  L_31 = V_11;
		*((Vector3_t32 *)(Vector3_t32 *)SZArrayLdElema(L_29, ((int32_t)((int32_t)L_30+(int32_t)3)))) = L_31;
		Vector2U5BU5D_t37* L_32 = V_2;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		Vector2_t16  L_34 = {0};
		Vector2__ctor_m132(&L_34, (0.0f), (0.0f), /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_32, L_33)) = L_34;
		Vector2U5BU5D_t37* L_35 = V_2;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)));
		Vector2_t16  L_37 = {0};
		Vector2__ctor_m132(&L_37, (1.0f), (0.0f), /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)))) = L_37;
		Vector2U5BU5D_t37* L_38 = V_2;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)L_39+(int32_t)2)));
		Vector2_t16  L_40 = {0};
		Vector2__ctor_m132(&L_40, (0.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_38, ((int32_t)((int32_t)L_39+(int32_t)2)))) = L_40;
		Vector2U5BU5D_t37* L_41 = V_2;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)L_42+(int32_t)3)));
		Vector2_t16  L_43 = {0};
		Vector2__ctor_m132(&L_43, (1.0f), (1.0f), /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_41, ((int32_t)((int32_t)L_42+(int32_t)3)))) = L_43;
		Vector2U5BU5D_t37* L_44 = V_3;
		int32_t L_45 = V_6;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		float L_46 = V_9;
		float L_47 = V_10;
		Vector2_t16  L_48 = {0};
		Vector2__ctor_m132(&L_48, L_46, L_47, /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_44, L_45)) = L_48;
		Vector2U5BU5D_t37* L_49 = V_3;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, ((int32_t)((int32_t)L_50+(int32_t)1)));
		float L_51 = V_9;
		float L_52 = V_10;
		Vector2_t16  L_53 = {0};
		Vector2__ctor_m132(&L_53, L_51, L_52, /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_49, ((int32_t)((int32_t)L_50+(int32_t)1)))) = L_53;
		Vector2U5BU5D_t37* L_54 = V_3;
		int32_t L_55 = V_6;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)2)));
		float L_56 = V_9;
		float L_57 = V_10;
		Vector2_t16  L_58 = {0};
		Vector2__ctor_m132(&L_58, L_56, L_57, /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_54, ((int32_t)((int32_t)L_55+(int32_t)2)))) = L_58;
		Vector2U5BU5D_t37* L_59 = V_3;
		int32_t L_60 = V_6;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, ((int32_t)((int32_t)L_60+(int32_t)3)));
		float L_61 = V_9;
		float L_62 = V_10;
		Vector2_t16  L_63 = {0};
		Vector2__ctor_m132(&L_63, L_61, L_62, /*hidden argument*/&Vector2__ctor_m132_MethodInfo);
		*((Vector2_t16 *)(Vector2_t16 *)SZArrayLdElema(L_59, ((int32_t)((int32_t)L_60+(int32_t)3)))) = L_63;
		Int32U5BU5D_t38* L_64 = V_4;
		int32_t L_65 = V_7;
		int32_t L_66 = V_6;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_64, L_65)) = (int32_t)L_66;
		Int32U5BU5D_t38* L_67 = V_4;
		int32_t L_68 = V_7;
		int32_t L_69 = V_6;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)((int32_t)L_68+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, ((int32_t)((int32_t)L_68+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
		Int32U5BU5D_t38* L_70 = V_4;
		int32_t L_71 = V_7;
		int32_t L_72 = V_6;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)L_71+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_70, ((int32_t)((int32_t)L_71+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)L_72+(int32_t)2));
		Int32U5BU5D_t38* L_73 = V_4;
		int32_t L_74 = V_7;
		int32_t L_75 = V_6;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, ((int32_t)((int32_t)L_74+(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_73, ((int32_t)((int32_t)L_74+(int32_t)3)))) = (int32_t)((int32_t)((int32_t)L_75+(int32_t)1));
		Int32U5BU5D_t38* L_76 = V_4;
		int32_t L_77 = V_7;
		int32_t L_78 = V_6;
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, ((int32_t)((int32_t)L_77+(int32_t)4)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_76, ((int32_t)((int32_t)L_77+(int32_t)4)))) = (int32_t)((int32_t)((int32_t)L_78+(int32_t)2));
		Int32U5BU5D_t38* L_79 = V_4;
		int32_t L_80 = V_7;
		int32_t L_81 = V_6;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, ((int32_t)((int32_t)L_80+(int32_t)5)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_79, ((int32_t)((int32_t)L_80+(int32_t)5)))) = (int32_t)((int32_t)((int32_t)L_81+(int32_t)3));
		int32_t L_82 = V_5;
		V_5 = ((int32_t)((int32_t)L_82+(int32_t)1));
	}

IL_01ed:
	{
		int32_t L_83 = V_5;
		int32_t L_84 = ___triCount;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_003b;
		}
	}
	{
		Mesh_t21 * L_85 = V_0;
		Vector3U5BU5D_t36* L_86 = V_1;
		NullCheck(L_85);
		Mesh_set_vertices_m133(L_85, L_86, /*hidden argument*/&Mesh_set_vertices_m133_MethodInfo);
		Mesh_t21 * L_87 = V_0;
		Int32U5BU5D_t38* L_88 = V_4;
		NullCheck(L_87);
		Mesh_set_triangles_m134(L_87, L_88, /*hidden argument*/&Mesh_set_triangles_m134_MethodInfo);
		Mesh_t21 * L_89 = V_0;
		Vector2U5BU5D_t37* L_90 = V_2;
		NullCheck(L_89);
		Mesh_set_uv_m135(L_89, L_90, /*hidden argument*/&Mesh_set_uv_m135_MethodInfo);
		Mesh_t21 * L_91 = V_0;
		Vector2U5BU5D_t37* L_92 = V_3;
		NullCheck(L_91);
		Mesh_set_uv2_m136(L_91, L_92, /*hidden argument*/&Mesh_set_uv2_m136_MethodInfo);
		Mesh_t21 * L_93 = V_0;
		return L_93;
	}
}
// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo OverlayBlendMode_t22_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_10MethodDeclarations.h"



// UnityStandardAssets.ImageEffects.ScreenOverlay
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScreenOverlay_t24_il2cpp_TypeInfo;
// UnityStandardAssets.ImageEffects.ScreenOverlay
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_11MethodDeclarations.h"

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
extern MethodInfo ScreenOverlay_CheckResources_m53_MethodInfo;


// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::.ctor()
extern MethodInfo ScreenOverlay__ctor_m52_MethodInfo;
extern "C" void ScreenOverlay__ctor_m52 (ScreenOverlay_t24 * __this, MethodInfo* method)
{
	{
		__this->___blendMode_5 = 3;
		__this->___intensity_6 = (1.0f);
		PostEffectsBase__ctor_m27(__this, /*hidden argument*/&PostEffectsBase__ctor_m27_MethodInfo);
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.ScreenOverlay::CheckResources()
extern "C" bool ScreenOverlay_CheckResources_m53 (ScreenOverlay_t24 * __this, MethodInfo* method)
{
	{
		PostEffectsBase_CheckSupport_m34(__this, 0, /*hidden argument*/&PostEffectsBase_CheckSupport_m34_MethodInfo);
		Shader_t3 * L_0 = (__this->___overlayShader_8);
		Material_t4 * L_1 = (__this->___overlayMaterial_9);
		Material_t4 * L_2 = PostEffectsBase_CheckShaderAndCreateMaterial_m28(__this, L_0, L_1, /*hidden argument*/&PostEffectsBase_CheckShaderAndCreateMaterial_m28_MethodInfo);
		__this->___overlayMaterial_9 = L_2;
		bool L_3 = (__this->___isSupported_4);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		PostEffectsBase_ReportAutoDisable_m37(__this, /*hidden argument*/&PostEffectsBase_ReportAutoDisable_m37_MethodInfo);
	}

IL_0031:
	{
		bool L_4 = (__this->___isSupported_4);
		return L_4;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo ScreenOverlay_OnRenderImage_m54_MethodInfo;
extern "C" void ScreenOverlay_OnRenderImage_m54 (ScreenOverlay_t24 * __this, RenderTexture_t7 * ___source, RenderTexture_t7 * ___destination, MethodInfo* method)
{
	Vector4_t26  V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&ScreenOverlay_CheckResources_m53_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RenderTexture_t7 * L_1 = ___source;
		RenderTexture_t7 * L_2 = ___destination;
		Graphics_Blit_m57(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Graphics_Blit_m57_MethodInfo);
		return;
	}

IL_0013:
	{
		Vector4__ctor_m58((&V_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/&Vector4__ctor_m58_MethodInfo);
		Material_t4 * L_3 = (__this->___overlayMaterial_9);
		Vector4_t26  L_4 = V_0;
		NullCheck(L_3);
		Material_SetVector_m59(L_3, (String_t*) &_stringLiteral26, L_4, /*hidden argument*/&Material_SetVector_m59_MethodInfo);
		Material_t4 * L_5 = (__this->___overlayMaterial_9);
		float L_6 = (__this->___intensity_6);
		NullCheck(L_5);
		Material_SetFloat_m70(L_5, (String_t*) &_stringLiteral27, L_6, /*hidden argument*/&Material_SetFloat_m70_MethodInfo);
		Material_t4 * L_7 = (__this->___overlayMaterial_9);
		Texture2D_t23 * L_8 = (__this->___texture_7);
		NullCheck(L_7);
		Material_SetTexture_m67(L_7, (String_t*) &_stringLiteral28, L_8, /*hidden argument*/&Material_SetTexture_m67_MethodInfo);
		RenderTexture_t7 * L_9 = ___source;
		RenderTexture_t7 * L_10 = ___destination;
		Material_t4 * L_11 = (__this->___overlayMaterial_9);
		int32_t L_12 = (__this->___blendMode_5);
		Graphics_Blit_m65(NULL /*static, unused*/, L_9, L_10, L_11, L_12, /*hidden argument*/&Graphics_Blit_m65_MethodInfo);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
