#pragma once
#include "CoreMinimal.h"
#include "ECarEffectType.generated.h"

UENUM(BlueprintType)
enum class ECarEffectType : uint8 {
    AFTERFIRE,
    SPARK,
    COLLISION_S,
    COLLISION_L,
    SMOKE_R,
    SMOKE_L,
    NITRO,
    AFTERFIRE_BLUE,
};

