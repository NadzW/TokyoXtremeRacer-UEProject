#pragma once
#include "CoreMinimal.h"
#include "ECarTireCondition.generated.h"

UENUM(BlueprintType)
enum class ECarTireCondition : uint8 {
    Green,
    Yellow,
    Red,
    Num,
};

