#pragma once
#include "CoreMinimal.h"
#include "ERecollectionConversationType.generated.h"

UENUM(BlueprintType)
enum class ERecollectionConversationType : uint8 {
    None,
    Rival_A,
    Rival_B,
    PA_Battle,
    TeamInfo,
    WandererInfo,
    BossInfo,
    Tuner,
    Event,
    Gossip,
};

