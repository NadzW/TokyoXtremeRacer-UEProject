#pragma once
#include "CoreMinimal.h"
#include "SBattleBaseInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSBattleBaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpDefense;
    
    FSBattleBaseInfo();
};

