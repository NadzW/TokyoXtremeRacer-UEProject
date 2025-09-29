#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPI_RoadPointManagerNative.h"
#include "SRPDBranchInfo.h"
#include "BP_RoadPointManagerNative.generated.h"

class ABP_RoadPointDataNative;
class UDA_PrecomputeCourseAssistData;
class UDA_PrecomputeCoursePictData;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API ABP_RoadPointManagerNative : public AActor, public IBPI_RoadPointManagerNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSRPDBranchInfo> BranchInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_PrecomputeCoursePictData* CoursePictCandidates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_PrecomputeCourseAssistData* CourseAssistCandidates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ABP_RoadPointDataNative*> RoadPointDatasDict;
    
    ABP_RoadPointManagerNative(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

