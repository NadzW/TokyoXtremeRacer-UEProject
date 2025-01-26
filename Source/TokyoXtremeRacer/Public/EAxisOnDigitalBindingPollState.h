#pragma once
#include "CoreMinimal.h"
#include "EAxisOnDigitalBindingPollState.generated.h"

UENUM(BlueprintType)
enum class EAxisOnDigitalBindingPollState : uint8 {
    Invalid,
    SelectRange,
    Ongoing,
    Failed,
    Complete,
};

