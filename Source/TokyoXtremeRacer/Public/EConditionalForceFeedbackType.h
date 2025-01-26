#pragma once
#include "CoreMinimal.h"
#include "EConditionalForceFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EConditionalForceFeedbackType : uint8 {
    Spring,
    Damper,
    Inertia,
    Friction,
};

