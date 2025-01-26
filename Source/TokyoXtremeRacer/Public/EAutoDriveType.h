#pragma once
#include "CoreMinimal.h"
#include "EAutoDriveType.generated.h"

UENUM(BlueprintType)
enum class EAutoDriveType : uint8 {
    EADT_Player,
    EADT_Rival,
    EADT_Other,
    EADT_Train,
    EADT_ExperimentCar,
};

