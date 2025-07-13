#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CoursePictCandidateInfoElement.h"
#include "CoursePictCandidateInfos.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCoursePictCandidateInfos : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCoursePictCandidateInfoElement> Candidates;
    
    FCoursePictCandidateInfos();
};

