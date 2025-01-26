#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECarTireType.h"
#include "SCarTireDegradationInfo.generated.h"

class UMetaSoundSource;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarTireDegradationInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarTireType Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxLife;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CliffThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxGripRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CliffGripRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinGripRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSideGripRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CliffSideGripRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinSideGripRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMetaSoundSource> RoadNoise;
    
    FSCarTireDegradationInfo();
};

