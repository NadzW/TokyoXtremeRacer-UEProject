#pragma once
#include "CoreMinimal.h"
#include "EVersion.generated.h"

UENUM(BlueprintType)
enum class EVersion : uint8 {
    EarlyAccess,
    Release,
    Show,
};

