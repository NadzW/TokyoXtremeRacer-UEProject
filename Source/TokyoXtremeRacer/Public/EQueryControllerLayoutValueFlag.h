#pragma once
#include "CoreMinimal.h"
#include "EQueryControllerLayoutValueFlag.generated.h"

UENUM(BlueprintType)
enum class EQueryControllerLayoutValueFlag : uint8 {
    None,
    CoalesceKnownXInputDevices,
};

