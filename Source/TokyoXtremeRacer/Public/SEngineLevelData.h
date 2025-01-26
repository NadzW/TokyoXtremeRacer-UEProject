#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SEngineLevelData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSEngineLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RevLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RedZoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRpm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPower_ps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPowerRpm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTorque_kg_m;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTorqueRpm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxBoostNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TachoMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTurbo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> RpmData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTorqueCoef;
    
    FSEngineLevelData();
};

