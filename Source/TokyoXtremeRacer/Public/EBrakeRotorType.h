#pragma once
#include "CoreMinimal.h"
#include "EBrakeRotorType.generated.h"

UENUM(BlueprintType)
enum class EBrakeRotorType : uint8 {
    Normal,
    Slit,
    Drilled,
    SlitCarbon,
    DrilledCarbon,
    Num,
};

