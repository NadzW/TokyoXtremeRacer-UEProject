#pragma once
#include "CoreMinimal.h"
#include "EDecimalOperator.generated.h"

UENUM(BlueprintType)
enum class EDecimalOperator : uint8 {
    Less,
    LessOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
    IsTrue,
    MAX,
};

