#pragma once
#include "CoreMinimal.h"
#include "EGkBuildPlatformType.generated.h"

UENUM(BlueprintType)
enum class EGkBuildPlatformType : uint8 {
    Win64,
    PS5,
    Num,
};

