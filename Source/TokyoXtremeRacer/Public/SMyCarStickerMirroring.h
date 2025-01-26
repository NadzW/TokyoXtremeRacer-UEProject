#pragma once
#include "CoreMinimal.h"
#include "SMyCarStickerMirroring.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMyCarStickerMirroring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMainMirroring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PairedIndex;
    
    FSMyCarStickerMirroring();
};

