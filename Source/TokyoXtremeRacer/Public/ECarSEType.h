#pragma once
#include "CoreMinimal.h"
#include "ECarSEType.generated.h"

UENUM(BlueprintType)
enum class ECarSEType : uint8 {
    SE_RACE_COLLISION_L,
    SE_RACE_COLLISION_S,
    SE_RACE_BLOWOFFVALVE,
    SE_RACE_AFTERFIRE,
    SE_RACE_COURSEPICTO_CORNER,
    SE_RACE_COURSEPICTO_CORNER_SHARP,
    SE_RACE_NITRO_ON,
    SE_RACE_START,
    SE_RACE_GOAL,
    SE_RACE_COUNTDOWN,
    SE_RACE_SQUEAL,
    SE_RACE_NITRO_SUSTAIN,
    SE_RACE_SCRATCH,
};

