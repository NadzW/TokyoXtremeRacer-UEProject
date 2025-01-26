#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BadNameConditionDataAssetRecord.h"
#include "BadNameConditionDataAsset.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBadNameConditionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBadNameConditionDataAssetRecord> Data;
    
    UBadNameConditionDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

