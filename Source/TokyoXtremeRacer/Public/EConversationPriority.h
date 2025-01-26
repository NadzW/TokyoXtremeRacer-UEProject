#pragma once
#include "CoreMinimal.h"
#include "EConversationPriority.generated.h"

UENUM(BlueprintType)
enum class EConversationPriority : uint8 {
    Hi,
    Mid,
    Low,
    Num,
    None,
};

