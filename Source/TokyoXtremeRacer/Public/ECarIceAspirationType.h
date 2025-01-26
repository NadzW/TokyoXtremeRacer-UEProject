#pragma once
#include "CoreMinimal.h"
#include "ECarIceAspirationType.generated.h"

UENUM(BlueprintType)
enum class ECarIceAspirationType : uint8 {
    NA,
    Turbo,
    Supercharger,
    Num,
    None,
};

