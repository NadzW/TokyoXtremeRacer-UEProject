#pragma once
#include "CoreMinimal.h"
#include "ERivalAppearanceConditionCheckType.generated.h"

UENUM(BlueprintType)
enum class ERivalAppearanceConditionCheckType : uint8 {
    None,
    OR,
    AND,
    ORx,
};

