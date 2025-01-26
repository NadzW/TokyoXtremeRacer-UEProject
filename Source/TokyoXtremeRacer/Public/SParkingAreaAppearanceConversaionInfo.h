#pragma once
#include "CoreMinimal.h"
#include "SParkingAreaConversationDispInfo.h"
#include "SParkingAreaAppearanceConversaionInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSParkingAreaAppearanceConversaionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSParkingAreaConversationDispInfo> Conversations;
    
    FSParkingAreaAppearanceConversaionInfo();
};

