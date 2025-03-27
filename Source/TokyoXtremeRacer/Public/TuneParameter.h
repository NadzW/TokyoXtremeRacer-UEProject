#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TuneParameter.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UTuneParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float max_torque_coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float add_front_axis_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float add_rear_axis_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float add_front_axis_weight_from_driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float add_rear_axis_weight_from_driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightForTorqueCoef3;
    
    UTuneParameter();

};

