#pragma once
#include "CoreMinimal.h"
#include "ECourseMapFilterIconType.generated.h"

UENUM(BlueprintType)
enum class ECourseMapFilterIconType : uint8 {
    ECMFIT_Player,
    ECMFIT_NormalRival,
    ECMFIT_LeaderRival,
    ECMFIT_BossRival,
    ECMFIT_WondererRival,
    ECMFIT_AccidentCar,
    ECMFIT_Obstacle,
    ECMFIT_Unknown,
    ECMFIT_PA,
    ECMFIT_RampIn,
    ECMFIT_RampOut,
    ECMFIT_RampCarDealer,
    ECMFIT_DecorationPart,
    ECMFIT_CustomPart,
    ECMFIT_SpeedTrapStart,
    ECMFIT_SpeedTrapEnd,
    ECMFIT_Grave,
    ECMFIT_ConstructionStart,
    ECMFIT_ConstructionEnd,
    ECMFIT_SegmentStart,
    ECMFIT_SegmentEnd,
    ECMFIT_TrafficStart,
    ECMFIT_TrafficEnd,
};

