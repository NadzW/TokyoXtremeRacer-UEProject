#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SEngineData.h"
#include "InternalMethodEngineDataAsset.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInternalMethodEngineDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSEngineData EngineData;
    
    UInternalMethodEngineDataAsset();

};

