#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CourseAssistCandidateInfoElement.h"
#include "CourseAssistCandidateInfos.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCourseAssistCandidateInfos : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCourseAssistCandidateInfoElement> Candidates;
    
    FCourseAssistCandidateInfos();
};

