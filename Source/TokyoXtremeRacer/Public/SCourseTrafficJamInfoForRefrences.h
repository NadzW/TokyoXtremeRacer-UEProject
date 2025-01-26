#pragma once
#include "CoreMinimal.h"
#include "SCourseTrafficJamInfoForRefrence.h"
#include "SCourseTrafficJamInfoForRefrences.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseTrafficJamInfoForRefrences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCourseTrafficJamInfoForRefrence> Infos;
    
    FSCourseTrafficJamInfoForRefrences();
};

