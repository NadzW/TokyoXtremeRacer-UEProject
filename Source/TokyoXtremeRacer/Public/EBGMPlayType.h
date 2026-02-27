#pragma once
#include "CoreMinimal.h"
#include "EBGMPlayType.generated.h"

UENUM(BlueprintType)
enum class EBGMPlayType : uint8 {
    Default,
    Category,
    List,
};

