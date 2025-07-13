#pragma once
#include "CoreMinimal.h"
#include "EFistAppearance.generated.h"

UENUM(BlueprintType)
enum class EFistAppearance : uint8 {
    EarlyAccess,
    FullRelease,
    DLC1,
    DLC2,
    DLC3,
    DLC4,
    DLC5,
    Num,
    None,
};

