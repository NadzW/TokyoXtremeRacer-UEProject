#pragma once
#include "CoreMinimal.h"
#include "EJumpScene.generated.h"

UENUM(BlueprintType)
enum class EJumpScene : uint8 {
    None,
    Garage,
    Dealer,
    Collection,
    Refrence,
    Driver,
    Tune,
    Setting,
    Aero,
    Livery,
    GarageResult,
    ParkingArea,
    Option,
    NowhereConversation,
    NewGameRaceSetup,
    Map,
    Num,
};

