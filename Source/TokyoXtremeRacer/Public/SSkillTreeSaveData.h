#pragma once
#include "CoreMinimal.h"
#include "ESkillTreeStatus.h"
#include "SSkillTreeSaveData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSkillTreeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillTreeStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DT_No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Step;
    
    FSSkillTreeSaveData();
};

