#pragma once
#include "CoreMinimal.h"
#include "SStatusInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSStatusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FSStatusInfo();
};

