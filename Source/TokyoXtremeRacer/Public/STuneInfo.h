#pragma once
#include "CoreMinimal.h"
#include "EVehicleTuneLevel.h"
#include "STuneInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSTuneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HaveFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleTuneLevel EquipLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TunerEffect;
    
    FSTuneInfo();
};

