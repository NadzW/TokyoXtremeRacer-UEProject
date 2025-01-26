#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SADStimulusLaneTargetInfoElement.h"
#include "ADStimulusLaneTargetInfo.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UADStimulusLaneTargetInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSADStimulusLaneTargetInfoElement> LaneTargetInfos;
    
    UADStimulusLaneTargetInfo();

};

