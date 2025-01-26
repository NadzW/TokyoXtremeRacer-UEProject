#pragma once
#include "CoreMinimal.h"
#include "ECarCategory.generated.h"

UENUM(BlueprintType)
enum class ECarCategory : uint8 {
    Normal,
    Sports,
    Large,
    Special_Construction,
    Special_Accident,
    Num,
    None,
};

