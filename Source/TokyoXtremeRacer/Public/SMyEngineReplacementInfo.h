#pragma once
#include "CoreMinimal.h"
#include "STuneInfo.h"
#include "SMyEngineReplacementInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMyEngineReplacementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTuneInfo PowerUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTuneInfo IntakeSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTuneInfo ExhaustSystem;
    
    FSMyEngineReplacementInfo();
};

