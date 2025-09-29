#pragma once
#include "CoreMinimal.h"
#include "WaveShape.generated.h"

UENUM(BlueprintType)
enum WaveShape {
    Sine,
    Triangle,
    SawtoothUp,
    SawtoothDown,
};

