#pragma once
#include "CoreMinimal.h"
#include "SPerkStatusInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPerkStatusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FSPerkStatusInfo();
};

