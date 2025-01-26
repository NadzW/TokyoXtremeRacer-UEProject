#pragma once
#include "CoreMinimal.h"
#include "EStoryAxis.generated.h"

UENUM(BlueprintType)
enum class EStoryAxis : uint8 {
    None,
    Step1,
    Step2,
    Step3,
    Step4,
    Num,
};

