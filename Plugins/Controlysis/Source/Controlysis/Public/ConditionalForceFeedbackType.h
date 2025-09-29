#pragma once
#include "CoreMinimal.h"
#include "ConditionalForceFeedbackType.generated.h"

UENUM(BlueprintType)
enum ConditionalForceFeedbackType {
    Spring,
    Damper,
    Inertia,
    Friction,
};

