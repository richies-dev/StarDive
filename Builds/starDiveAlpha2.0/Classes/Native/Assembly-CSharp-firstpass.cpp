#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
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
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
extern TypeInfo Resolution_t1_il2cpp_TypeInfo;
extern TypeInfo BlurType_t2_il2cpp_TypeInfo;
extern TypeInfo BloomOptimized_t5_il2cpp_TypeInfo;
extern TypeInfo AAMode_t8_il2cpp_TypeInfo;
extern TypeInfo Antialiasing_t9_il2cpp_TypeInfo;
extern TypeInfo LensFlareStyle_t10_il2cpp_TypeInfo;
extern TypeInfo TweakMode_t11_il2cpp_TypeInfo;
extern TypeInfo HDRBloomMode_t12_il2cpp_TypeInfo;
extern TypeInfo BloomScreenBlendMode_t13_il2cpp_TypeInfo;
extern TypeInfo BloomQuality_t14_il2cpp_TypeInfo;
extern TypeInfo Bloom_t16_il2cpp_TypeInfo;
extern TypeInfo LensflareStyle34_t18_il2cpp_TypeInfo;
extern TypeInfo TweakMode34_t19_il2cpp_TypeInfo;
extern TypeInfo HDRBloomMode_t20_il2cpp_TypeInfo;
extern TypeInfo BloomScreenBlendMode_t21_il2cpp_TypeInfo;
extern TypeInfo BloomAndFlares_t22_il2cpp_TypeInfo;
extern TypeInfo Blur_t23_il2cpp_TypeInfo;
extern TypeInfo BlurType_t25_il2cpp_TypeInfo;
extern TypeInfo BlurOptimized_t26_il2cpp_TypeInfo;
extern TypeInfo MotionBlurFilter_t27_il2cpp_TypeInfo;
extern TypeInfo CameraMotionBlur_t30_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionMode_t34_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionCurves_t36_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionLookup_t38_il2cpp_TypeInfo;
extern TypeInfo ColorCorrectionRamp_t40_il2cpp_TypeInfo;
extern TypeInfo ContrastEnhance_t42_il2cpp_TypeInfo;
extern TypeInfo ContrastStretch_t44_il2cpp_TypeInfo;
extern TypeInfo CreaseShading_t45_il2cpp_TypeInfo;
extern TypeInfo BlurType_t46_il2cpp_TypeInfo;
extern TypeInfo BlurSampleCount_t47_il2cpp_TypeInfo;
extern TypeInfo DepthOfField_t50_il2cpp_TypeInfo;
extern TypeInfo Dof34QualitySetting_t51_il2cpp_TypeInfo;
extern TypeInfo DofResolution_t52_il2cpp_TypeInfo;
extern TypeInfo DofBlurriness_t53_il2cpp_TypeInfo;
extern TypeInfo BokehDestination_t54_il2cpp_TypeInfo;
extern TypeInfo DepthOfFieldDeprecated_t55_il2cpp_TypeInfo;
extern TypeInfo EdgeDetectMode_t56_il2cpp_TypeInfo;
extern TypeInfo EdgeDetection_t57_il2cpp_TypeInfo;
extern TypeInfo Fisheye_t58_il2cpp_TypeInfo;
extern TypeInfo GlobalFog_t59_il2cpp_TypeInfo;
extern TypeInfo Grayscale_t60_il2cpp_TypeInfo;
extern TypeInfo ImageEffectBase_t41_il2cpp_TypeInfo;
extern TypeInfo ImageEffects_t61_il2cpp_TypeInfo;
extern TypeInfo MotionBlur_t63_il2cpp_TypeInfo;
extern TypeInfo NoiseAndGrain_t64_il2cpp_TypeInfo;
extern TypeInfo NoiseAndScratches_t65_il2cpp_TypeInfo;
extern TypeInfo PostEffectsBase_t6_il2cpp_TypeInfo;
extern TypeInfo PostEffectsHelper_t66_il2cpp_TypeInfo;
extern TypeInfo Quads_t68_il2cpp_TypeInfo;
extern TypeInfo OverlayBlendMode_t70_il2cpp_TypeInfo;
extern TypeInfo ScreenOverlay_t71_il2cpp_TypeInfo;
extern TypeInfo ScreenSpaceAmbientObscurance_t72_il2cpp_TypeInfo;
extern TypeInfo SSAOSamples_t73_il2cpp_TypeInfo;
extern TypeInfo ScreenSpaceAmbientOcclusion_t74_il2cpp_TypeInfo;
extern TypeInfo SepiaTone_t75_il2cpp_TypeInfo;
extern TypeInfo SunShaftsResolution_t76_il2cpp_TypeInfo;
extern TypeInfo ShaftsScreenBlendMode_t77_il2cpp_TypeInfo;
extern TypeInfo SunShafts_t78_il2cpp_TypeInfo;
extern TypeInfo TiltShiftMode_t79_il2cpp_TypeInfo;
extern TypeInfo TiltShiftQuality_t80_il2cpp_TypeInfo;
extern TypeInfo TiltShift_t81_il2cpp_TypeInfo;
extern TypeInfo TonemapperType_t82_il2cpp_TypeInfo;
extern TypeInfo AdaptiveTexSize_t83_il2cpp_TypeInfo;
extern TypeInfo Tonemapping_t84_il2cpp_TypeInfo;
extern TypeInfo Triangles_t85_il2cpp_TypeInfo;
extern TypeInfo Twirl_t86_il2cpp_TypeInfo;
extern TypeInfo AberrationMode_t87_il2cpp_TypeInfo;
extern TypeInfo VignetteAndChromaticAberration_t88_il2cpp_TypeInfo;
extern TypeInfo Vortex_t89_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DCSharpU2Dfirstpass_Assembly_Types[71] = 
{
	&U3CModuleU3E_t0_il2cpp_TypeInfo,
	&Resolution_t1_il2cpp_TypeInfo,
	&BlurType_t2_il2cpp_TypeInfo,
	&BloomOptimized_t5_il2cpp_TypeInfo,
	&AAMode_t8_il2cpp_TypeInfo,
	&Antialiasing_t9_il2cpp_TypeInfo,
	&LensFlareStyle_t10_il2cpp_TypeInfo,
	&TweakMode_t11_il2cpp_TypeInfo,
	&HDRBloomMode_t12_il2cpp_TypeInfo,
	&BloomScreenBlendMode_t13_il2cpp_TypeInfo,
	&BloomQuality_t14_il2cpp_TypeInfo,
	&Bloom_t16_il2cpp_TypeInfo,
	&LensflareStyle34_t18_il2cpp_TypeInfo,
	&TweakMode34_t19_il2cpp_TypeInfo,
	&HDRBloomMode_t20_il2cpp_TypeInfo,
	&BloomScreenBlendMode_t21_il2cpp_TypeInfo,
	&BloomAndFlares_t22_il2cpp_TypeInfo,
	&Blur_t23_il2cpp_TypeInfo,
	&BlurType_t25_il2cpp_TypeInfo,
	&BlurOptimized_t26_il2cpp_TypeInfo,
	&MotionBlurFilter_t27_il2cpp_TypeInfo,
	&CameraMotionBlur_t30_il2cpp_TypeInfo,
	&ColorCorrectionMode_t34_il2cpp_TypeInfo,
	&ColorCorrectionCurves_t36_il2cpp_TypeInfo,
	&ColorCorrectionLookup_t38_il2cpp_TypeInfo,
	&ColorCorrectionRamp_t40_il2cpp_TypeInfo,
	&ContrastEnhance_t42_il2cpp_TypeInfo,
	&ContrastStretch_t44_il2cpp_TypeInfo,
	&CreaseShading_t45_il2cpp_TypeInfo,
	&BlurType_t46_il2cpp_TypeInfo,
	&BlurSampleCount_t47_il2cpp_TypeInfo,
	&DepthOfField_t50_il2cpp_TypeInfo,
	&Dof34QualitySetting_t51_il2cpp_TypeInfo,
	&DofResolution_t52_il2cpp_TypeInfo,
	&DofBlurriness_t53_il2cpp_TypeInfo,
	&BokehDestination_t54_il2cpp_TypeInfo,
	&DepthOfFieldDeprecated_t55_il2cpp_TypeInfo,
	&EdgeDetectMode_t56_il2cpp_TypeInfo,
	&EdgeDetection_t57_il2cpp_TypeInfo,
	&Fisheye_t58_il2cpp_TypeInfo,
	&GlobalFog_t59_il2cpp_TypeInfo,
	&Grayscale_t60_il2cpp_TypeInfo,
	&ImageEffectBase_t41_il2cpp_TypeInfo,
	&ImageEffects_t61_il2cpp_TypeInfo,
	&MotionBlur_t63_il2cpp_TypeInfo,
	&NoiseAndGrain_t64_il2cpp_TypeInfo,
	&NoiseAndScratches_t65_il2cpp_TypeInfo,
	&PostEffectsBase_t6_il2cpp_TypeInfo,
	&PostEffectsHelper_t66_il2cpp_TypeInfo,
	&Quads_t68_il2cpp_TypeInfo,
	&OverlayBlendMode_t70_il2cpp_TypeInfo,
	&ScreenOverlay_t71_il2cpp_TypeInfo,
	&ScreenSpaceAmbientObscurance_t72_il2cpp_TypeInfo,
	&SSAOSamples_t73_il2cpp_TypeInfo,
	&ScreenSpaceAmbientOcclusion_t74_il2cpp_TypeInfo,
	&SepiaTone_t75_il2cpp_TypeInfo,
	&SunShaftsResolution_t76_il2cpp_TypeInfo,
	&ShaftsScreenBlendMode_t77_il2cpp_TypeInfo,
	&SunShafts_t78_il2cpp_TypeInfo,
	&TiltShiftMode_t79_il2cpp_TypeInfo,
	&TiltShiftQuality_t80_il2cpp_TypeInfo,
	&TiltShift_t81_il2cpp_TypeInfo,
	&TonemapperType_t82_il2cpp_TypeInfo,
	&AdaptiveTexSize_t83_il2cpp_TypeInfo,
	&Tonemapping_t84_il2cpp_TypeInfo,
	&Triangles_t85_il2cpp_TypeInfo,
	&Twirl_t86_il2cpp_TypeInfo,
	&AberrationMode_t87_il2cpp_TypeInfo,
	&VignetteAndChromaticAberration_t88_il2cpp_TypeInfo,
	&Vortex_t89_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern CustomAttributesCache g_AssemblyU2DCSharpU2Dfirstpass_Assembly__CustomAttributeCache;
Il2CppAssembly g_AssemblyU2DCSharpU2Dfirstpass_Assembly = 
{
	{ "Assembly-CSharp-firstpass", 0, 0, 0, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image,
	&g_AssemblyU2DCSharpU2Dfirstpass_Assembly__CustomAttributeCache,
};
Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image = 
{
	 "Assembly-CSharp-firstpass.dll" ,
	&g_AssemblyU2DCSharpU2Dfirstpass_Assembly,
	g_AssemblyU2DCSharpU2Dfirstpass_Assembly_Types,
	70,
	NULL,
};
static void s_AssemblyU2DCSharpU2DfirstpassRegistration()
{
	RegisterAssembly (&g_AssemblyU2DCSharpU2Dfirstpass_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_AssemblyU2DCSharpU2DfirstpassRegistrationVariable(&s_AssemblyU2DCSharpU2DfirstpassRegistration, NULL);
