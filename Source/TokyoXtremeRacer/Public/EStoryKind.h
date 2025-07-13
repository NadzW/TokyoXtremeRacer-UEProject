#pragma once
#include "CoreMinimal.h"
#include "EStoryKind.generated.h"

UENUM(BlueprintType)
enum class EStoryKind : uint8 {
    None,
    Normal,
    Plus,
    PlusPlus,
    Num,
};

