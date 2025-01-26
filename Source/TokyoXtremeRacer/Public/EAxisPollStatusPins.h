#pragma once
#include "CoreMinimal.h"
#include "EAxisPollStatusPins.generated.h"

UENUM(BlueprintType)
enum EAxisPollStatusPins {
    Ongoing,
    Failed,
    Complete,
};

