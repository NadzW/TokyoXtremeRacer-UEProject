#pragma once
#include "CoreMinimal.h"
#include "ESkillTreeCategory.generated.h"

UENUM(BlueprintType)
enum class ESkillTreeCategory : uint8 {
    STC_WALLET,
    STC_BATTLE_PARAMETER,
    STC_REMEDIES,
    STC_PLAY_ENVIRONMENT,
    STC_CP_ACQUISITION_EFFICIENCY,
    STC_LEVEL,
    STC_PERK,
    STC_TUNE,
    STC_SKILL,
    STC_MACHINE,
    Num,
};

