#pragma once
#include "CoreMinimal.h"
#include "EStatsTypeKind.generated.h"

UENUM(BlueprintType)
enum class EStatsTypeKind : uint8 {
    ESTK_Int32,
    ESTK_Int64,
    ESTK_Float,
    Num,
};

