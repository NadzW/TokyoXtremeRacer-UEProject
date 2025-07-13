#pragma once
#include "CoreMinimal.h"
#include "ERecollectionStoryCategory.generated.h"

UENUM(BlueprintType)
enum class ERecollectionStoryCategory : uint8 {
    None,
    Movie,
    Poem,
    Event,
    Gossip,
};

