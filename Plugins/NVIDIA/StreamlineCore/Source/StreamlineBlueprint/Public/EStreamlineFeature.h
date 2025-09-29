#pragma once
#include "CoreMinimal.h"
#include "EStreamlineFeature.generated.h"

UENUM(BlueprintType)
enum class EStreamlineFeature : uint8 {
    DLSSG,
    Latewarp,
    Reflex,
    DeepDVC,
    Count,
};

