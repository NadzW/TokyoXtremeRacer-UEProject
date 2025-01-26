#pragma once
#include "CoreMinimal.h"
#include "EConversationSituation.generated.h"

UENUM(BlueprintType)
enum class EConversationSituation : uint8 {
    NotSeen,
    Seen,
    None,
};

