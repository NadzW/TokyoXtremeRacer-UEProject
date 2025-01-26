#pragma once
#include "CoreMinimal.h"
#include "ERivalCategory.generated.h"

UENUM(BlueprintType)
enum class ERivalCategory : uint8 {
    SecretBoss,
    LastBoss,
    LastChapterBoss,
    ChapterBoss,
    Boss,
    Wanderer,
    TeamLeader,
    TeamMenber,
    Num,
    None,
};

