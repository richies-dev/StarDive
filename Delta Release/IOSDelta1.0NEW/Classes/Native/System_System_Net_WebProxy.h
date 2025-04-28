#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t920;
// System.Collections.ArrayList
struct ArrayList_t906;
// System.Net.ICredentials
struct ICredentials_t943;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebProxy
struct  WebProxy_t944  : public Object_t
{
	// System.Uri System.Net.WebProxy::address
	Uri_t920 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t906 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	Object_t * ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;
};
