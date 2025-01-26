#pragma once
#include "CoreMinimal.h"
#include "EObjectiveAction.generated.h"

UENUM(BlueprintType)
enum class EObjectiveAction : uint8 {
    None,
    NotAppearTuner,
    AppearTuner,
    Num,
};

