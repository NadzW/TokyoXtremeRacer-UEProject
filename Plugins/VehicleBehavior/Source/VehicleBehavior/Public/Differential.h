#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Differential.generated.h"

UCLASS(Blueprintable)
class VEHICLEBEHAVIOR_API UDifferential : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InitLockRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxLockRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InvChangeSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentLockRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentTireTorqueL;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentTireTorqueR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAcceleOn;
    
    UDifferential();

    UFUNCTION(BlueprintCallable)
    void Update(const double in_dt, const double in_accele, const double in_tire_omega_l, const double in_tire_omega_r, const bool in_tire_is_slip_l, const bool in_tire_is_slip_r, const double in_tire_max_torqu_l, const double in_tire_max_torque_r, const double in_pu_torque, double& out_torque_rate_l, double& out_torque_rate_r);
    
    UFUNCTION(BlueprintCallable)
    void SetParameter(const int32 in_type, const double in_init_lock_rate, const double in_max_lock_rate, const double in_change_speed);
    
};

