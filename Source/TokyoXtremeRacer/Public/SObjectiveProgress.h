#pragma once
#include "CoreMinimal.h"
#include "EObjectiveState.h"
#include "SObjectiveProgress.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSObjectiveProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClearTaskNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUpdate;
    
    FSObjectiveProgress();
};

