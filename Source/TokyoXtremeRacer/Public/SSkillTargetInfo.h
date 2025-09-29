#pragma once
#include "CoreMinimal.h"
#include "ESkillTarget.h"
#include "SSkillTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSkillTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillTarget Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value1;
    
    FSSkillTargetInfo();
};

