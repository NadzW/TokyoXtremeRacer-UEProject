#pragma once
#include "CoreMinimal.h"
#include "EVehicleFluidType.generated.h"

UENUM(BlueprintType)
enum class EVehicleFluidType : uint8 {
    Oil,
    Water,
    Num,
    None,
};

