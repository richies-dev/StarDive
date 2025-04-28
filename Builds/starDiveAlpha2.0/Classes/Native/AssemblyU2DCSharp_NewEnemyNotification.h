#pragma once
#include <stdint.h>
// Notification
struct Notification_t145;
// NotificationStats
struct NotificationStats_t172;
// System.Object
#include "mscorlib_System_Object.h"
// NewEnemyNotification
struct  NewEnemyNotification_t144  : public Object_t
{
	// Notification NewEnemyNotification::NotificationSystem
	Notification_t145 * ___NotificationSystem_0;
};
struct NewEnemyNotification_t144_StaticFields{
	// System.Boolean NewEnemyNotification::ShowingNewEnemyNotification
	bool ___ShowingNewEnemyNotification_1;
	// System.Boolean NewEnemyNotification::AboutToShowNotification
	bool ___AboutToShowNotification_2;
	// NotificationStats NewEnemyNotification::NotificationInfo
	NotificationStats_t172 * ___NotificationInfo_3;
};
