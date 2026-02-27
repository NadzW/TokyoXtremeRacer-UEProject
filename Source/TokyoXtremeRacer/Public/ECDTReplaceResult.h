#pragma once
#include "CoreMinimal.h"
#include "ECDTReplaceResult.generated.h"

UENUM(BlueprintType)
enum class ECDTReplaceResult : uint8 {
    ECDTRR_Success,
    ECDTRR_InvalidLicense,
    ECDTRR_DataCurrupt,
    Num,
};

