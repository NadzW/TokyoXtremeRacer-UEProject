#pragma once
#include "CoreMinimal.h"
#include "ECarTireType.generated.h"

UENUM(BlueprintType)
enum class ECarTireType : uint8 {
    Soft,
    Medium,
    Hard,
    Num,
};

