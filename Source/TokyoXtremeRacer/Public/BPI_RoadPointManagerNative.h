#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SGetCousePictResult.h"
#include "SReachableBranchResult.h"
#include "SRoadPointPositionInfo.h"
#include "BPI_RoadPointManagerNative.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_RoadPointManagerNative : public UInterface {
    GENERATED_BODY()
};

class IBPI_RoadPointManagerNative : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSReachableBranchResult ReturnReachableBranchRoute(const int32 SearchStartBranchID, const int32 SearchTargetBranchID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCoursePictTextPrecomputed(const FSRoadPointPositionInfo& TargetRPDPosInfo, FSGetCousePictResult& OutCoursePictResult) const;
    
};

