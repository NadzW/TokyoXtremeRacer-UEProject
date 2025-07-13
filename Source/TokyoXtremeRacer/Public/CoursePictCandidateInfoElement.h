#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CoursePictCandidateInfoElement.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FCoursePictCandidateInfoElement : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoursePictID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Endpoint;
    
    FCoursePictCandidateInfoElement();
};

