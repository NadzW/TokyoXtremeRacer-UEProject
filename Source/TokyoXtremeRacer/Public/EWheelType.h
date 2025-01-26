#pragma once
#include "CoreMinimal.h"
#include "EWheelType.generated.h"

UENUM(BlueprintType)
enum class EWheelType : uint8 {
    Normal,
    R57T,
    TE37,
    W11R,
    Num,
};

