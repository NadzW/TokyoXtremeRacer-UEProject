#pragma once
#include "CoreMinimal.h"
#include "EOP_Upscaling_Mode.generated.h"

UENUM(BlueprintType)
enum class EOP_Upscaling_Mode : uint8 {
    OP_OFF,
    OP_FXAA,
    OP_TSR,
    OP_DLSS,
    Num,
};

