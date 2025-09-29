#pragma once
#include "CoreMinimal.h"
#include "SRecollectionConversationSituationInfos.h"
#include "SRecollectionConversationSituationInfoList.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionConversationSituationInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRecollectionConversationSituationInfos> RivalList;
    
    FSRecollectionConversationSituationInfoList();
};

