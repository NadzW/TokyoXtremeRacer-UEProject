#pragma once
#include "CoreMinimal.h"
#include "EAchievementsKind.generated.h"

UENUM(BlueprintType)
enum class EAchievementsKind : uint8 {
    None,
    DefeatRival,
    NumberOfWondererDefeated,
    BattlesWithRival,
    BattlesWithOtherCar,
    NumberOfDaysPassed,
    TotalEarnings,
    Mony,
    NumberOfVehiclesOwned,
    NumberOfFullTunedVehiclesCreated,
    ODO,
    BADName,
    ReadAllReference,
    ParkingAreaConversationViews,
    BreakingLimitTune,
    EngineReplacement,
    SpeedCheck,
    WiningStreakCheck,
    WallHitWin,
    WinBattleTime,
    WinTireLifeZero,
    CheckSpeedTrap,
    ReversalAttackConsecutiveTimes,
    FirstAttackConsecutiveTimes,
    JustAcceleConsecutiveTimes,
    CleanDriveConsecutiveTimes,
    NearMissConsecutiveTimes,
    DefeatRivalLoseZero,
    SpecialWallHit,
    KeepPushing,
    OverSpeedParkingAreaIn,
    OverSpeedBackingUpCar,
    WinTaxi,
    Win10Kei,
    DrawNum,
    Num,
};

