#pragma once
#include "CoreMinimal.h"
#include "EVehicleTuneKind.generated.h"

UENUM(BlueprintType)
enum class EVehicleTuneKind : uint8 {
    PowerUnit,
    IntakeSystem,
    ExhaustSystem,
    Transmission,
    Clutch,
    Suspension,
    Brake,
    Body,
    FrontTire,
    RearTire,
    LSD,
    Nitro,
    Num,
    None,
};

