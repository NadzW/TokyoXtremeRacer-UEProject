#pragma once
#include "CoreMinimal.h"
#include "EFFBWaveform.generated.h"

UENUM(BlueprintType)
enum class EFFBWaveform : uint8 {
    Square,
    Sine,
    Triangle,
    SawtoothUp,
    SawtoothDown,
    Num,
};

