#pragma once
#include "CoreMinimal.h"
#include "EAutoDriveCorneringType.generated.h"

UENUM(BlueprintType)
enum class EAutoDriveCorneringType : uint8 {
    EADCT_LaneBase,
    EADCT_RoadBase,
};

