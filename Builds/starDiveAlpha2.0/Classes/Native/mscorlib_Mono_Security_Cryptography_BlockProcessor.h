﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1218;
// System.Byte[]
struct ByteU5BU5D_t1019;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Cryptography.BlockProcessor
struct  BlockProcessor_t1427  : public Object_t
{
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.BlockProcessor::transform
	Object_t * ___transform_0;
	// System.Byte[] Mono.Security.Cryptography.BlockProcessor::block
	ByteU5BU5D_t1019* ___block_1;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockSize
	int32_t ___blockSize_2;
	// System.Int32 Mono.Security.Cryptography.BlockProcessor::blockCount
	int32_t ___blockCount_3;
};
