#pragma once
#include "CoreMinimal.h"
#include "ELanguageType.generated.h"

UENUM(BlueprintType)
enum class ELanguageType : uint8 {
    LAN_JAPANESE,
    LAN_ENGLISH,
    LAN_CHINESE,
    Num,
};

