#pragma once
#include "CoreMinimal.h"
#include "ECarCutInProductionType.generated.h"

UENUM(BlueprintType)
enum class ECarCutInProductionType : uint8 {
    TeamLeader,
    Boss_C1,
    Boss_NewLoop,
    Boss_Wangan,
    Boss_Yokohane,
    ChapterBoss_C1,
    ChapterBoss_NewLoop,
    ChapterBoss_Wangan,
    ChapterBoss_Yokohane,
    FinalChapterBoss_SnakeEyes,
    FinalChapterBoss_Jinhtei,
    FinalChapterBoss_Polaris,
    LastBoss,
    SecretBoss,
    SecretBoss_Z,
    Wanderer,
    Wanderer_Musoutei,
    Wanderer_RevengeEyes,
    Intruder,
    BattleStart_1,
    BattleStart_2,
    BattleStart_3,
    Num,
    None,
};

