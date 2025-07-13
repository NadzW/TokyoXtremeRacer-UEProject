#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CourseAssistCandidateInfoElement.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCourseAssistCandidateInfoElement : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CourseAssistID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Endpoint;
    
    FCourseAssistCandidateInfoElement();
};

