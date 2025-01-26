#pragma once
#include "CoreMinimal.h"
#include "EADBrakeMethodType.generated.h"

UENUM(BlueprintType)
enum class EADBrakeMethodType : uint8 {
    EADBMT_Constant,
    EADBMT_UniAccelLinear,
};

