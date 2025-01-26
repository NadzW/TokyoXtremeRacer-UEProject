#pragma once
#include "CoreMinimal.h"
#include "ECarSetting.generated.h"

UENUM(BlueprintType)
enum class ECarSetting : uint8 {
    LSDFrontInitialTorque,
    LSDFrontRatio,
    LSDRearInitialTorque,
    LSDRearRatio,
    LSDCenterInitialTorque,
    LSDCenterRatio,
    CamberFront,
    CamberRear,
    ToeFront,
    ToeRear,
    SpringFront,
    SpringRear,
    DumperFront,
    DumperRear,
    DumperBalanceFront,
    DumperBalanceRear,
    StabilizerFront,
    StabilizerRear,
    RideHeightFront,
    RideHeightRear,
    Downforce,
    TorqueBalane,
    BrakeBalaneFront,
    BrakeBalaneRear,
    TractionControl,
    ABS,
    OffsetFront,
    OffsetRear,
    LSDTypeFront,
    LSDTypeRear,
    GearRatio,
    Num,
};

