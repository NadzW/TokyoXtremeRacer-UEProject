#pragma once
#include "CoreMinimal.h"
#include "ECarLsdType.generated.h"

UENUM(BlueprintType)
enum class ECarLsdType : uint8 {
    None,
    OneWay,
    TwoWay,
    Intermediate,
    Num,
};

