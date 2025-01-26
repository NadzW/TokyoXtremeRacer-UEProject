#pragma once
#include "CoreMinimal.h"
#include "EObjectiveActionWhenCleared.generated.h"

UENUM(BlueprintType)
enum class EObjectiveActionWhenCleared : uint8 {
    None,
    ReturnGarage,
    SpawnOtherCar,
    DisableSystemMenu,
    EnableSystemMenu,
    Num,
};

