#pragma once
#include "CoreMinimal.h"
#include "EConversationSituation.h"
#include "SParkingAreaConversationSituationInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSParkingAreaConversationSituationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConversationSituation Situation;
    
    FSParkingAreaConversationSituationInfo();
};

