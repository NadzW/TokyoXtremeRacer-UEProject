#pragma once
#include "CoreMinimal.h"
#include "EAbilityAIType.generated.h"

UENUM(BlueprintType)
enum class EAbilityAIType : uint8 {
    EAAIType_Disable,
    EAAIType_AbilityEvaluationAI,
    EAAIType_GhostAI,
};

