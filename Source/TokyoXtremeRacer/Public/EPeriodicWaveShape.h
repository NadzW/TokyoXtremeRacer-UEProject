#pragma once
#include "CoreMinimal.h"
#include "EPeriodicWaveShape.generated.h"

UENUM(BlueprintType)
enum class EPeriodicWaveShape : uint8 {
    Sine,
    Triangle,
    SawtoothUp,
    SawtoothDown,
};

