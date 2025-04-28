#pragma once
#include <stdint.h>
// SavedData
struct SavedData_t116;
// Stats
struct Stats_t117;
// System.Boolean[]
struct BooleanU5BU5D_t118;
// GunStats
struct GunStats_t102;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_gen.h"
// SavedData
struct  SavedData_t116  : public Object_t
{
	// Stats SavedData::PlayerStats
	Stats_t117 * ___PlayerStats_1;
	// System.Int32 SavedData::round
	int32_t ___round_2;
	// System.Nullable`1<System.Boolean> SavedData::ShowTutorial
	Nullable_1_t88  ___ShowTutorial_3;
	// System.Int32 SavedData::GunSelected
	int32_t ___GunSelected_4;
	// System.Boolean[] SavedData::ItemBought
	BooleanU5BU5D_t118* ___ItemBought_5;
	// GunStats SavedData::StarterTurret
	GunStats_t102 * ___StarterTurret_6;
	// GunStats SavedData::AdvancedTurret
	GunStats_t102 * ___AdvancedTurret_7;
	// GunStats SavedData::LegendaryTurret
	GunStats_t102 * ___LegendaryTurret_8;
	// GunStats SavedData::MissileLauncher
	GunStats_t102 * ___MissileLauncher_9;
	// System.Boolean[] SavedData::ShowedRock
	BooleanU5BU5D_t118* ___ShowedRock_10;
	// System.Boolean[] SavedData::ShowRockOnlyOnce
	BooleanU5BU5D_t118* ___ShowRockOnlyOnce_11;
};
struct SavedData_t116_StaticFields{
	// SavedData SavedData::current
	SavedData_t116 * ___current_0;
};
