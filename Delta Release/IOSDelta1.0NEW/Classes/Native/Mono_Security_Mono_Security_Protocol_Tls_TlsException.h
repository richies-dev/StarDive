﻿#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1183;
// System.Exception
#include "mscorlib_System_Exception.h"
// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t1227  : public Exception_t163
{
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t1183 * ___alert_11;
};
