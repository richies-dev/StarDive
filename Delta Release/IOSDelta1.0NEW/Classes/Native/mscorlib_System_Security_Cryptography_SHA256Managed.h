﻿#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t1137;
// System.Byte[]
struct ByteU5BU5D_t952;
// System.Security.Cryptography.SHA256
#include "mscorlib_System_Security_Cryptography_SHA256.h"
// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t1739  : public SHA256_t1263
{
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t1137* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t952* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t1137* ___buff_8;
};
