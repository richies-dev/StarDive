#pragma once
#include <stdint.h>
// Notification
struct Notification_t80;
// NotificationStats
struct NotificationStats_t106;
// System.Object
#include "mscorlib_System_Object.h"
// NewEnemyNotification
struct  NewEnemyNotification_t79  : public Object_t
{
	// Notification NewEnemyNotification::NotificationSystem
	Notification_t80 * ___NotificationSystem_0;
};
struct NewEnemyNotification_t79_StaticFields{
	// System.Boolean NewEnemyNotification::ShowingNewEnemyNotification
	bool ___ShowingNewEnemyNotification_1;
	// System.Boolean NewEnemyNotification::AboutToShowNotification
	bool ___AboutToShowNotification_2;
	// NotificationStats NewEnemyNotification::NotificationInfo
	NotificationStats_t106 * ___NotificationInfo_3;
};
