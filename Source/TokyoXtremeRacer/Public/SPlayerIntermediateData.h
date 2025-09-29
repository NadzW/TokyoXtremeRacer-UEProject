#pragma once
#include "CoreMinimal.h"
#include "SPlayerIntermediateData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPlayerIntermediateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NitroCapacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NitroRemainingCapacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, double> TireLife;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrontTireLifeMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RearTireLifeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfCollisionsAvoided;
    
    FSPlayerIntermediateData();
};

