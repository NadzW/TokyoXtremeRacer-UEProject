#pragma once
#include "CoreMinimal.h"
#include "ERacePrizeCpType.generated.h"

UENUM(BlueprintType)
enum class ERacePrizeCpType : uint8 {
    Rival,
    RiskPlay,
    RivalBonus,
    ReversalAttack,
    FirstAttack,
    Drift,
    NearMiss,
    Drop,
    GarageResultBonus,
    GarageResultBonusChapterBoss,
    GarageResultBonusLastChapterBoss,
    GarageResultBonusLastBoss,
    SecretPocket,
    FreeRun,
    LongRun,
    StartAccele,
    Overflowed,
    None,
    PerkPointProvenExperienceFromPerk,
    CruisingEnthusiastsFromPerk,
    PerkPointFirstRivalBeatFromPerk,
    PerkPointGarageResultBonus,
    PerkPointGarageResultBonusChapterBoss,
    PerkPointGarageResultBonusLastChapterBoss,
    PerkPointGarageResultBonusLastBoss,
    GarageResultBonusStage1Clear,
    GarageResultBonusStage2Clear,
    GarageResultBonusStage3Clear,
    GarageResultBonusStage4Clear,
    GarageResultBonusStage5Clear,
    GarageResultBonusStage6Clear,
    GarageResultBonusStage7Clear,
    GarageResultBonusStage8Clear,
    GarageResultBonusStage9Clear,
    GarageResultBonusStage10Clear,
    PerkPointGarageResultBonusStage1Clear,
    PerkPointGarageResultBonusStage2Clear,
    PerkPointGarageResultBonusStage3Clear,
    PerkPointGarageResultBonusStage4Clear,
    PerkPointGarageResultBonusStage5Clear,
    PerkPointGarageResultBonusStage6Clear,
    PerkPointGarageResultBonusStage7Clear,
    PerkPointGarageResultBonusStage8Clear,
    PerkPointGarageResultBonusStage9Clear,
    PerkPointGarageResultBonusStage10Clear,
    PaidToTuner,
    OverflowedPerkPoint,
    TireReplacementFee,
    NitroRefillFee,
    Num,
};

