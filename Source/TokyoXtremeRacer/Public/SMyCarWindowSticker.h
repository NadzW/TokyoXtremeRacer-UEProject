#pragma once
#include "CoreMinimal.h"
#include "EWindowStickerIndex.h"
#include "SMyCarWindowSticker.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMyCarWindowSticker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StickerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWindowStickerIndex Index;
    
    FSMyCarWindowSticker();
};

