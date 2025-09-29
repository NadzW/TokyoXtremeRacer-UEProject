#pragma once
#include "CoreMinimal.h"
#include "EStreamlineReflexMode.generated.h"

UENUM(BlueprintType)
enum class EStreamlineReflexMode : uint8 {
    Off,
    Enabled,
    Boost = 3,
};

