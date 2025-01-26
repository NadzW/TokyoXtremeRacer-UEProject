#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BPI_TargetLaneInfo.h"
#include "SLaneInfo.h"
#include "BP_TargetLaneInfo.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBP_TargetLaneInfo : public UObject, public IBPI_TargetLaneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSLaneInfo LaneInfo;
    
    UBP_TargetLaneInfo();


    // Fix for true pure virtual functions not being implemented
};

