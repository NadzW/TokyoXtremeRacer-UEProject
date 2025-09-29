#pragma once
#include "CoreMinimal.h"
#include "ERecollectionStoryLineType.generated.h"

UENUM(BlueprintType)
enum class ERecollectionStoryLineType : uint8 {
    None,
    Legend,
    Bastards,
    NewG,
    Cross,
};

