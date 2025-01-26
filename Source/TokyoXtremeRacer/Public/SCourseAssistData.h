#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CoursePictUnitData.h"
#include "SCourseAssistBranchData.h"
#include "SCourseAssistData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCourseAssistData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePictUnitData FirstRoadPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePictUnitData LastRoadPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCourseAssistBranchData Branch1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCourseAssistBranchData Branch2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCourseAssistBranchData Branch3;
    
    FSCourseAssistData();
};

