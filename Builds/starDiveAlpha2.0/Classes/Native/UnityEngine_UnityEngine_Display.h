#pragma once
#include <stdint.h>
// UnityEngine.Display[]
struct DisplayU5BU5D_t693;
// UnityEngine.Display
struct Display_t694;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t692;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Display
struct  Display_t694  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t694_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t693* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t694 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t692 * ___onDisplaysUpdated_3;
};
