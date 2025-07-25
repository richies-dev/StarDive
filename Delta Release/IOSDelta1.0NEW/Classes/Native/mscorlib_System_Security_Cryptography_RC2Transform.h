﻿#pragma once
#include <stdint.h>
// System.UInt16[]
struct UInt16U5BU5D_t935;
// System.Byte[]
struct ByteU5BU5D_t952;
// Mono.Security.Cryptography.SymmetricTransform
#include "mscorlib_Mono_Security_Cryptography_SymmetricTransform.h"
// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t1728  : public SymmetricTransform_t1371
{
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t935* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;
};
struct RC2Transform_t1728_StaticFields{
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t952* ___pitable_18;
};
