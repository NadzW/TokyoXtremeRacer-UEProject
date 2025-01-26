#pragma once
#include "CoreMinimal.h"
#include "SPerkTreeMachineInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPerkTreeMachineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Maker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcquiredNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNum;
    
    FSPerkTreeMachineInfo();
};

