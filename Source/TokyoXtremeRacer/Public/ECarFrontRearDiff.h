#pragma once
#include "CoreMinimal.h"
#include "ECarFrontRearDiff.generated.h"

UENUM(BlueprintType)
enum class ECarFrontRearDiff : uint8 {
    None,
    Other,
    AYC,
    SAYC,
    Num,
};

