#pragma once
#include "CoreMinimal.h"
#include "EBadNameDisplayType.generated.h"

UENUM(BlueprintType)
enum class EBadNameDisplayType : uint8 {
    MT_Full,
    MT_Alpha,
    MT_Beta,
    MT_None,
    MT_Num,
};

