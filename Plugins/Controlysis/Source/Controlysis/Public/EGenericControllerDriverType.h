#pragma once
#include "CoreMinimal.h"
#include "EGenericControllerDriverType.generated.h"

UENUM(BlueprintType)
enum class EGenericControllerDriverType : uint8 {
    Unknown,
    XInput,
    WGI,
    HidApi,
    RawInput,
    Virtual,
};

