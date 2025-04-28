#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.IO.FileSystemInfo
#include "mscorlib_System_IO_FileSystemInfo.h"
// System.IO.DirectoryInfo
struct  DirectoryInfo_t1512  : public FileSystemInfo_t1513
{
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;
};
