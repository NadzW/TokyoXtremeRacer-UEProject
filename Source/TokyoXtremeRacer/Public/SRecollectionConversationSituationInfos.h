#pragma once
#include "CoreMinimal.h"
#include "SRecollectionConversationSituationInfo.h"
#include "SRecollectionConversationSituationInfos.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionConversationSituationInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRecollectionConversationSituationInfo> ConversationSituations;
    
    FSRecollectionConversationSituationInfos();
};

