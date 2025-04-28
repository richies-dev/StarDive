#pragma once
#include <stdint.h>
// SavedData
struct SavedData_t182;
// Stats
struct Stats_t183;
// System.Boolean[]
struct BooleanU5BU5D_t184;
// GunStats
struct GunStats_t168;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.Boolean>
#include "mscorlib_System_Nullable_1_gen.h"
// SavedData
struct  SavedData_t182  : public Object_t
{
	// Stats SavedData::PlayerStats
	Stats_t183 * ___PlayerStats_1;
	// System.Int32 SavedData::round
	int32_t ___round_2;
	// System.Int32 SavedData::GunSelected
	int32_t ___GunSelected_3;
	// System.Boolean[] SavedData::ItemBought
	BooleanU5BU5D_t184* ___ItemBought_4;
	// GunStats SavedData::StarterTurret
	GunStats_t168 * ___StarterTurret_5;
	// GunStats SavedData::AdvancedTurret
	GunStats_t168 * ___AdvancedTurret_6;
	// GunStats SavedData::LegendaryTurret
	GunStats_t168 * ___LegendaryTurret_7;
	// GunStats SavedData::MissileLauncher
	GunStats_t168 * ___MissileLauncher_8;
	// System.Nullable`1<System.Boolean> SavedData::ShowTutorial
	Nullable_1_t154  ___ShowTutorial_9;
	// System.Boolean[] SavedData::ShowedRock
	BooleanU5BU5D_t184* ___ShowedRock_10;
};
struct SavedData_t182_StaticFields{
	// SavedData SavedData::current
	SavedData_t182 * ___current_0;
};
