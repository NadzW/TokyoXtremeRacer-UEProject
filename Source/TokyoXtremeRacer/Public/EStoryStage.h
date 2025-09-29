#pragma once
#include "CoreMinimal.h"
#include "EStoryStage.generated.h"

UENUM(BlueprintType)
enum class EStoryStage : uint8 {
    None,
    Tutorial,
    Stage1,
    Stage2,
    Stage3,
    Stage4,
    Stage5,
    Stage6,
    Stage7,
    Num,
};

