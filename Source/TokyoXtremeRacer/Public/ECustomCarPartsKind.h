#pragma once
#include "CoreMinimal.h"
#include "ECustomCarPartsKind.generated.h"

UENUM(BlueprintType)
enum class ECustomCarPartsKind : uint8 {
    Muffler,
    FrontBumper,
    RearBumper,
    SideSkirt,
    Bonnet,
    RearSpoiler,
    Front_Wheel,
    Rear_Wheel,
    FL_BrakeCaliper,
    FR_BrakeCaliper,
    RL_BrakeCaliper,
    RR_BrakeCaliper,
    FL_BrakeRotar,
    FR_BrakeRotar,
    RL_BrakeRotar,
    RR_BrakeRotar,
    FrontBumperHeadLight,
    FrontBumperWinkerR,
    FrontBumperWinkerL,
    RearBumperWinkerR,
    RearBumperWinkerL,
    RearBumperBrakeLamp,
    RearBumperBackLamp,
    RearSpoilerBrakeLamp,
    FrontBumperHeadLightL,
    FrontBumperHeadLightR,
    Num,
    None,
};

