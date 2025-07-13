#pragma once
#include "CoreMinimal.h"
#include "ECoursePictZone.h"
#include "ERunArea.h"
#include "SCourseAssistBranchData.h"
#include "SGetCousePictResult.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSGetCousePictResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea RunArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoursePictZone CoursePictZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoursePictText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnyCourseAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCourseAssistBranchData> CourseAssistDataParBranch;
    
    FSGetCousePictResult();
};

