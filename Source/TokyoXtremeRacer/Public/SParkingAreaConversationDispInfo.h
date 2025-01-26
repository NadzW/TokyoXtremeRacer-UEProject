#pragma once
#include "CoreMinimal.h"
#include "EConversationSituation.h"
#include "SParkingAreaConversationDispInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSParkingAreaConversationDispInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConversationSituation ThisTimeSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RivalRumors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsImportant;
    
    FSParkingAreaConversationDispInfo();
};

