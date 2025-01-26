#pragma once
#include "CoreMinimal.h"
#include "EInputSignalType.generated.h"

UENUM(BlueprintType)
enum class EInputSignalType : uint8 {
    Button,
    Axis,
    Hat,
    None,
};

