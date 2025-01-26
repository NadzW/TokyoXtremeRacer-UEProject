#pragma once
#include "CoreMinimal.h"
#include "ERaceBattleResult.h"
#include "SRaceBattleResultRivalInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRaceBattleResultRivalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceBattleResult BattleResult;
    
    FSRaceBattleResultRivalInfo();
};

