#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SFindRPDDataResult.h"
#include "SGetCousePictResult.h"
#include "SRPDBranchInfo.h"
#include "SReachableBranchResult.h"
#include "SRoadPointPositionInfo.h"
#include "BPI_RoadPointManagerNative.generated.h"

class UDA_PrecomputeCourseAssistData;
class UDA_PrecomputeCoursePictData;
class UDataTable;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_RoadPointManagerNative : public UInterface {
    GENERATED_BODY()
};

class IBPI_RoadPointManagerNative : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnRelatedRoadPointNames(const FName& RPDName, TArray<FName>& RelatedRPDNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSReachableBranchResult ReturnReachableBranchRoute(const int32 SearchStartBranchID, const int32 SearchTargetBranchID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> ReturnAllRoadPointNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCoursePictTextPrecomputed(const FSRoadPointPositionInfo& TargetRPDPosInfo, FSGetCousePictResult& OutCoursePictResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForcedSetCoursePictAndAssistObject(UDataTable* CoursePictDataTable, UDA_PrecomputeCoursePictData* CoursePictCandidateData, UDataTable* CourseAssistDataTable, UDA_PrecomputeCourseAssistData* CourseAssistCandidateData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FindRPDDataFromRPDName(FSFindRPDDataResult& Result, const FName RPDName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FindBranchInfo(FSRPDBranchInfo& OutBranchInfo, const int32 BranchIndex) const;
    
};

