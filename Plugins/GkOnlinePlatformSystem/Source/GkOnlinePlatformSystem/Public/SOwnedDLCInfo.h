#pragma once
#include "CoreMinimal.h"
#include "SOwnedDLCInfo.generated.h"

USTRUCT(BlueprintType)
struct GKONLINEPLATFORMSYSTEM_API FSOwnedDLCInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstalled;
    
    FSOwnedDLCInfo();
};

