#pragma once
#include "CoreMinimal.h"
#include "UWrappedNISMode.generated.h"

UENUM(BlueprintType)
enum class UWrappedNISMode : uint8 {
    Off,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    Custom,
};

