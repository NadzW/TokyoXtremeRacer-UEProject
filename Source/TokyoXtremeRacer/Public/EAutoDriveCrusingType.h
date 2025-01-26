#pragma once
#include "CoreMinimal.h"
#include "EAutoDriveCrusingType.generated.h"

UENUM(BlueprintType)
enum class EAutoDriveCrusingType : uint8 {
    ADCT_Normal,
    ADCT_Rival,
    ADCT_Trains,
    ADCT_SportCar,
};

