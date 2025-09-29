#pragma once
#include "CoreMinimal.h"
#include "ESkillTarget.generated.h"

UENUM(BlueprintType)
enum class ESkillTarget : uint8 {
    CLEAN_CORNERING,
    NEAR_MISS,
    DRIFT,
    NITRO,
    FIRST_ATTACK,
    REVERSAL_ATTACK,
    NICE_BLOCK,
    JUST_ACCELE,
    SLIP_STREAM,
    TIRE,
    WALL,
    BATTLE_VEHICLE,
    OTHER_VEHICLE,
    RECOVERY_FROM_ATTACK,
    AT_CONTINUOUS_BATTLE,
    SRC_COEF,
    AT_PA_BATTLE,
    AT_BONUS_TIME,
    FROM_SKILL,
    AT_MULTIPLAYER,
    SP,
    ATK,
    DEF,
    PHY,
    DEX,
    LONG_RUN,
    BOSS,
    WANDERER,
    LEADER,
    Num,
    NONE,
};

