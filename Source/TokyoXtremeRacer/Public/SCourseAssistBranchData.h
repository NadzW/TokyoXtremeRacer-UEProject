#pragma once
#include "CoreMinimal.h"
#include "ECourseAssistIcon.h"
#include "ECourseAssistSign.h"
#include "ECourseAssistType.h"
#include "ERunArea.h"
#include "SCourseAssistBranchData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseAssistBranchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseAssistType LabelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseAssistSign SignType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseAssistIcon IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea RunArea;
    
    FSCourseAssistBranchData();
};

