#pragma once
#include "CoreMinimal.h"
#include "EConversationAppearanceType.generated.h"

UENUM(BlueprintType)
enum class EConversationAppearanceType : uint8 {
    Once,
    ManyTimes,
    None,
};

