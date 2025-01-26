#pragma once
#include "CoreMinimal.h"
#include "ECarViewType.generated.h"

UENUM(BlueprintType)
enum class ECarViewType : uint8 {
    None,
    Behind,
    Driver,
    Bonnet,
    FarBehind,
    Num,
};

