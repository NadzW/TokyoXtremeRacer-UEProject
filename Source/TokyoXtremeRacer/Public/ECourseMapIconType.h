#pragma once
#include "CoreMinimal.h"
#include "ECourseMapIconType.generated.h"

UENUM(BlueprintType)
enum class ECourseMapIconType : uint8 {
    ECMIT_None,
    ECMIT_PlayerCar,
    ECMIT_RivalCar,
    ECMIT_Obstacle,
    ECMIT_Static,
    ECMIT_Measurement,
};

