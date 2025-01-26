#pragma once
#include "CoreMinimal.h"
#include "ERivalAppearanceCondition.generated.h"

UENUM(BlueprintType)
enum class ERivalAppearanceCondition : uint8 {
    None,
    NumOfDaysElapsed,
    MultipleDays,
    DayOfWeek,
    DefeatRivalId,
    DefeatRivalNum,
    DefeatTeamNum,
    WinNum,
    TotalCp,
    MaxSpeed,
    MileagesOfCarType,
    TotalMileages,
    NumOfOwned,
    ParkignAreaVisitNum,
    WinCombotNum,
    DriverLevel,
    EventExe,
    ObjectiveChecked,
    ObjectiveUnchecked,
    NoRivalOnCourse,
    NoRivalOnPA,
    RivalAppCondNotMet,
    Num,
};

