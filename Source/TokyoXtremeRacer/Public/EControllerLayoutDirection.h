#pragma once
#include "CoreMinimal.h"
#include "EControllerLayoutDirection.generated.h"

UENUM(BlueprintType)
enum class EControllerLayoutDirection : uint8 {
    None,
    Horizontal,
    Vertical,
    Hat,
    LooksLikeHat,
};

