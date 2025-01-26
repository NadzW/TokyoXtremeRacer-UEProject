#pragma once
#include "CoreMinimal.h"
#include "ERivalDriftPreference.generated.h"

UENUM(BlueprintType)
enum class ERivalDriftPreference : uint8 {
    RDP_Normal,
    RDP_DriftOnHardCorner,
    RDP_DriftOnAlways,
};

