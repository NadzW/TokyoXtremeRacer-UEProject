#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SInternalMethodCarData.h"
#include "InternalMethodCarDataAsset.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInternalMethodCarDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSInternalMethodCarData CarData;
    
    UInternalMethodCarDataAsset();

    UFUNCTION(BlueprintCallable)
    double GetMaxTorqueConsideringGearRatio();
    
    UFUNCTION(BlueprintCallable)
    TArray<double> GetGears();
    
};

