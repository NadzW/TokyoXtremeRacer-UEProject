#pragma once
#include "CoreMinimal.h"
#include "ECDTRegisterResult.generated.h"

UENUM(BlueprintType)
enum class ECDTRegisterResult : uint8 {
    ECDTRR_Success,
    ECDTRR_AnyNotLoaded,
    ECDTRR_DataCurrupt,
    Num,
};

