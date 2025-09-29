#pragma once
#include "CoreMinimal.h"
#include "EBattleAttackSide.h"
#include "SBattleTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSBattleTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleAttackSide AttackSide;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AttackTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Damage;
    
    FSBattleTargetInfo();
};

