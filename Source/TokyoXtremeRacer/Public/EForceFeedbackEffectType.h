#pragma once
#include "CoreMinimal.h"
#include "EForceFeedbackEffectType.generated.h"

UENUM(BlueprintType)
enum class EForceFeedbackEffectType : uint8 {
    None,
    Constant,
    Periodic,
    Ramp = 4,
    ConditionalSpring = 8,
    ConditionalDamper = 16,
    ConditionalInertia = 32,
    ConditionalFriction = 64,
};

