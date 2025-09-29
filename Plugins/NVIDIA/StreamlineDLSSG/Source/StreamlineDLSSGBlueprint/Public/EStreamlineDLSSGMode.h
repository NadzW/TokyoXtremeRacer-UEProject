#pragma once
#include "CoreMinimal.h"
#include "EStreamlineDLSSGMode.generated.h"

UENUM(BlueprintType)
enum class EStreamlineDLSSGMode : uint8 {
    Off,
    Auto = 251,
    On2X = 17,
    On3X = 23,
    On4X = 31,
};

