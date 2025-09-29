#pragma once
#include "CoreMinimal.h"
#include "VehicleOptionSetting.generated.h"

USTRUCT(BlueprintType)
struct VEHICLEBEHAVIOR_API FVehicleOptionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double steer_input_rise_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double steer_input_fall_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool steer_limit_angle_enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool steer_input_is_digital;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double accele_input_rise_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double accele_input_fall_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool accele_input_is_digital;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double brake_input_rise_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double brake_input_fall_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool brake_input_is_digital;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double sidebrake_input_rise_rate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double sidebrake_input_fall_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool sidebrake_input_is_digital;
    
    FVehicleOptionSetting();
};

