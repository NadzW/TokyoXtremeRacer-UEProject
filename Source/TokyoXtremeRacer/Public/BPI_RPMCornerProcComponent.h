#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SRoadPointPositionInfo.h"
#include "BPI_RPMCornerProcComponent.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_RPMCornerProcComponent : public UInterface {
    GENERATED_BODY()
};

class IBPI_RPMCornerProcComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 JudgeCornerStatus(const FSRoadPointPositionInfo& CurrentRPDPos, const FSRoadPointPositionInfo& PrevRPDPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitComponent(UObject* tRoadPointManager);
    
};

