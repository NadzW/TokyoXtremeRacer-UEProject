#pragma once
#include "CoreMinimal.h"
#include "ETutorialAction.generated.h"

UENUM(BlueprintType)
enum class ETutorialAction : uint8 {
    None,
    DepriveCar,
    BuyCar,
    NoOtherCar,
    LoseResetBattle,
    InvalidPauseMap,
    CanOnlySelectEntranceNearRival,
    JumpScene,
    NoObstableVehicle,
    NoTrafficJam,
    NoBattleRestart,
    DisableSystemMenu,
    EnableSystemMenu,
    Num,
};

