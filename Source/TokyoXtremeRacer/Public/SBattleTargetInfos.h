#pragma once
#include "CoreMinimal.h"
#include "SBattleTargetInfo.h"
#include "SBattleTargetInfos.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSBattleTargetInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSBattleTargetInfo> Targets;
    
    FSBattleTargetInfos();
};

