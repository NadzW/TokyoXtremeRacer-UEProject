#pragma once
#include "CoreMinimal.h"
#include "EGameMode.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8 {
    InGame,
    OutGmae,
    Title,
    MovieTeater,
    None,
    Num,
};

