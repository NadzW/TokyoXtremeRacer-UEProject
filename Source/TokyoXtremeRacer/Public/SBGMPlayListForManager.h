#pragma once
#include "CoreMinimal.h"
#include "EBGMType.h"
#include "SBGMPlayListForManager.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSBGMPlayListForManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGMType BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopMinNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopMaxNum;
    
    FSBGMPlayListForManager();
};

