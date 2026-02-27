#pragma once
#include "CoreMinimal.h"
#include "EBGMScene.generated.h"

UENUM(BlueprintType)
enum class EBGMScene : uint8 {
    Home,
    Collection,
    Tune,
    Setting,
    Aero,
    Livery,
    EnterCourse,
    Perk,
    Reference,
    Dealer,
    PA,
    PhotoMode,
    Result,
    FreeRun1,
    FreeRun2,
    FreeRun3,
    Battle_Stage1_Member,
    Battle_Stage2_Member,
    Battle_Stage3_Member,
    Battle_Stage4_Member,
    Battle_Stage5_Member,
    Battle_DLC_Member,
    Battle_Leader,
    Battle_DLC_Leader,
    Battle_Boss,
    Battle_DLC_Boss,
    Battle_Wanderer,
    Battle_DLC_Wanderer,
    Battle_OtherCar,
    None,
};

