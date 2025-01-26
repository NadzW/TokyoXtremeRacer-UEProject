#pragma once
#include "CoreMinimal.h"
#include "SParkingAreaConversationSituationInfo.h"
#include "SParkingAreaConversationSituationInfos.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSParkingAreaConversationSituationInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSParkingAreaConversationSituationInfo> ConversationSituations;
    
    FSParkingAreaConversationSituationInfos();
};

