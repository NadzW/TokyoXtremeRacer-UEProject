#pragma once
#include "CoreMinimal.h"
#include "SSkillTreeSaveData.h"
#include "SStatusInfo.h"
#include "SDriverInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSDriverInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSStatusInfo> Statuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSStatusInfo> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSkillTreeSaveData> AcquiredSkils;
    
    FSDriverInfo();
};

