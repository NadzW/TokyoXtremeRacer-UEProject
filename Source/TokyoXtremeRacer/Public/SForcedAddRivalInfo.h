#pragma once
#include "CoreMinimal.h"
#include "EForcedAddRivalSituation.h"
#include "SForcedAddRivalInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSForcedAddRivalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EForcedAddRivalSituation Situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SituationParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RivalNameIds;
    
    FSForcedAddRivalInfo();
};

