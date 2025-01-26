#pragma once
#include "CoreMinimal.h"
#include "EADLearningScoreType.generated.h"

UENUM(BlueprintType)
enum class EADLearningScoreType : uint8 {
    ADLST_Summary,
    ADLST_DrivingLineAccracy,
    ADLST_DrivingSpeed,
    ADLST_DrivingLineShake,
    ADLST_HitObstacle,
    ADLST_HitRivalCar,
};

