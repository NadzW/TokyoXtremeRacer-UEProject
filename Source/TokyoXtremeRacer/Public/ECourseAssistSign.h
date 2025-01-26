#pragma once
#include "CoreMinimal.h"
#include "ECourseAssistSign.generated.h"

UENUM(BlueprintType)
enum class ECourseAssistSign : uint8 {
    ECAS_Normal,
    ECAS_PAType1,
    ECAS_PAType2,
};

