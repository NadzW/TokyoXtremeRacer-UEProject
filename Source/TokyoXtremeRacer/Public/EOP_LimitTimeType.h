#pragma once
#include "CoreMinimal.h"
#include "EOP_LimitTimeType.generated.h"

UENUM(BlueprintType)
enum class EOP_LimitTimeType : uint8 {
    OP_NoLimit,
    OP_03_Minute,
    OP_04_Minute,
    OP_05_Minute,
    OP_06_Minute,
    OP_07_Minute,
    OP_08_Minute,
    OP_09_Minute,
    OP_10_Minute,
    OP_11_Minute,
    OP_12_Minute,
    Num,
};

