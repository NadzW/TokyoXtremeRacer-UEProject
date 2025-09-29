#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CourseAssistCandidateInfos.h"
#include "DA_PrecomputeCourseAssistData.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UDA_PrecomputeCourseAssistData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCourseAssistCandidateInfos> CourseAssistDatasPerRPD;
    
    UDA_PrecomputeCourseAssistData();

};

