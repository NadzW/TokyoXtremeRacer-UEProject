#pragma once
#include "CoreMinimal.h"
#include "ETPEPM_UseBrakingJudgeResult.generated.h"

UENUM(BlueprintType)
enum class ETPEPM_UseBrakingJudgeResult : uint8 {
    ETPEPMUBJ_None,
    ETPEPMUBJ_OtherCarFound,
    ETPEPMUBJ_WallFound,
};

