#pragma once
#include "CoreMinimal.h"
#include "ECourseAssistType.h"
#include "SCourseAssist.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseAssist {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseAssistType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_road_closed_;
    
    FSCourseAssist();
};

