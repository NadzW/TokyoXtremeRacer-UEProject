#pragma once
#include "CoreMinimal.h"
#include "EQueryControllerLayoutValueFlag.generated.h"

UENUM(BlueprintType)
enum EQueryControllerLayoutValueFlag {
    None,
    CoalesceKnownXInputDevices,
};

