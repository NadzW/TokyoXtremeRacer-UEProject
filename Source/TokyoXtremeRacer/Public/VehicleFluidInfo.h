#pragma once
#include "CoreMinimal.h"
#include "VehicleFluidInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FVehicleFluidInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double C;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Mass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double kBaseThermostatOff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double kBaseThermostatOn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AddkFanOn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ThermostatOnTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FanOnTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RedzoneTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CheckLampTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeatOmegaGain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CoolerBase;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CoolerAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OpenThermostat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnFan;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PowerRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnLamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CoolCoef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ThermalConductivityCoef;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeatOmegaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InRedzone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeatTransferCoef;
    
    FVehicleFluidInfo();
};

