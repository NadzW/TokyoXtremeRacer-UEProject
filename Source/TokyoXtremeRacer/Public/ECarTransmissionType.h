#pragma once
#include "CoreMinimal.h"
#include "ECarTransmissionType.generated.h"

UENUM(BlueprintType)
enum class ECarTransmissionType : uint8 {
    None,
    Auto,
    Manual,
    Num,
};

