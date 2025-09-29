#pragma once
#include "CoreMinimal.h"
#include "SSkillTree.h"
#include "SSkillAccessInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSkillAccessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSSkillTree> LevelInfoMaps;
    
    FSSkillAccessInfo();
};

