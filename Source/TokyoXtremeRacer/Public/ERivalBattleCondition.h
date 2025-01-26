#pragma once
#include "CoreMinimal.h"
#include "ERivalBattleCondition.generated.h"

UENUM(BlueprintType)
enum class ERivalBattleCondition : uint8 {
    None,
    Vehicle,
    EngineType,
    Maker,
    IntakeType,
    DriveType,
    EquipNeon,
    CusutomBodyColor,
    PlateArea,
    EquipSticker,
    ChangeAero,
    NotChangeAero,
    NoTune,
    EquipSpecificStickers,
    NotEquipNitro,
    Num,
};

