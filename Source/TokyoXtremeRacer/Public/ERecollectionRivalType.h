#pragma once
#include "CoreMinimal.h"
#include "ERecollectionRivalType.generated.h"

UENUM(BlueprintType)
enum class ERecollectionRivalType : uint8 {
    None,
    Rival_A,
    Rival_B,
    Rival_PA,
    Rival_Tuner,
};

