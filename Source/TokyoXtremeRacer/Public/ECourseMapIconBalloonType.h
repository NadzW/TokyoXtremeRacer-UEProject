#pragma once
#include "CoreMinimal.h"
#include "ECourseMapIconBalloonType.generated.h"

UENUM(BlueprintType)
enum class ECourseMapIconBalloonType : uint8 {
    ECMIBT_PA_Versus,
    ECMIBT_PA_Turner,
    ECMIBT_PA_Talk,
    ECMIBT_PA_ImportantTalk,
};

