#pragma once
#include "CoreMinimal.h"
#include "ERivalAppearsSpecialEvent.h"
#include "SRivalAppearsSpecialEventInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalAppearsSpecialEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalAppearsSpecialEvent Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FNameValues;
    
    FSRivalAppearsSpecialEventInfo();
};

