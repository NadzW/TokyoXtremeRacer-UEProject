#pragma once
#include "CoreMinimal.h"
#include "EGameLoadResult.generated.h"

UENUM(BlueprintType)
enum class EGameLoadResult : uint8 {
    EGLR_Success,
    EGLR_UnknownError,
    EGLR_NotEnoughDLC,
    Num,
};

