#pragma once
#include "CoreMinimal.h"
#include "EADInputCorrectMethodType.generated.h"

UENUM(BlueprintType)
enum class EADInputCorrectMethodType : uint8 {
    EADICzMT_None,
    EADICMT_0to100kmhLinear,
    EADICMT_90to100kmhLinear,
    EADICMT_MAX UMETA(Hidden),
};

