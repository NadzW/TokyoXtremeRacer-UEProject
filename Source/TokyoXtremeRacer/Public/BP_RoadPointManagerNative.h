#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BPI_RoadPointManagerNative.h"
#include "CourseAssistCandidateInfos.h"
#include "CoursePictCandidateInfos.h"
#include "SRPDBranchInfo.h"
#include "BP_RoadPointManagerNative.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API ABP_RoadPointManagerNative : public AActor, public IBPI_RoadPointManagerNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSRPDBranchInfo> BranchInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCoursePictCandidateInfos> CoursePictCandidates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCourseAssistCandidateInfos> CourseAssistCandidates;
    
    ABP_RoadPointManagerNative(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

