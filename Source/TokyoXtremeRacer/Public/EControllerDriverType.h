#pragma once
#include "CoreMinimal.h"
#include "EControllerDriverType.generated.h"

UENUM(BlueprintType)
enum class EControllerDriverType : uint8 {
    Unknown,
    XInput,
    WGI,
    HidApi,
    RawInput,
    Virtual,
};

