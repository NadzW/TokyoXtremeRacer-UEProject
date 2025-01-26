#pragma once
#include "CoreMinimal.h"
#include "ERivalCategory.h"
#include "ReplayRivalInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FReplayRivalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Emblem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TeamNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalCategory Category;
    
    FReplayRivalInfo();
};

