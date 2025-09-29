#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoursePictCandidateInfos.h"
#include "DA_PrecomputeCoursePictData.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UDA_PrecomputeCoursePictData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCoursePictCandidateInfos> CoursePictDatasPerRPD;
    
    UDA_PrecomputeCoursePictData();

};

