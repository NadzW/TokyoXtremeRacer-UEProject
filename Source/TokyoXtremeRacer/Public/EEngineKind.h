#pragma once
#include "CoreMinimal.h"
#include "EEngineKind.generated.h"

UENUM(BlueprintType)
enum class EEngineKind : uint8 {
    Straight2,
    Straight3,
    Straight4,
    Straight6,
    Flat4,
    Flat6,
    V6,
    V8,
    RE,
    W8,
    V10,
    Num,
    None,
};

