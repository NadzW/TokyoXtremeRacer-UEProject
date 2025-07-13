#pragma once
#include "CoreMinimal.h"
#include "ERecollectionLockSituation.h"
#include "SRecollectionConversationSituationInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionConversationSituationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecollectionLockSituation Situation;
    
    FSRecollectionConversationSituationInfo();
};

