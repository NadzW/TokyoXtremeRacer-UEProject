#pragma once
#include "CoreMinimal.h"
#include "UWrappedDLSSMode.generated.h"

UENUM(BlueprintType)
enum class UWrappedDLSSMode : uint8 {
    Off,
    Auto,
    DLAA,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

