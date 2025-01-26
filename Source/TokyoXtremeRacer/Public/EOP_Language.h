#pragma once
#include "CoreMinimal.h"
#include "EOP_Language.generated.h"

UENUM(BlueprintType)
enum class EOP_Language : uint8 {
    OP_JAPANESE,
    OP_ENGLISH,
    OP_CHINESE_CN,
    OP_CHINESE_TW,
    Num,
};

