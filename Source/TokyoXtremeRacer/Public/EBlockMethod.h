#pragma once
#include "CoreMinimal.h"
#include "EBlockMethod.generated.h"

UENUM(BlueprintType)
enum class EBlockMethod : uint8 {
    BM_NeverBlock,
    BM_SometimesBlock,
    BM_AlwaysBlock,
};

