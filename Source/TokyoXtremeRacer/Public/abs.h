#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "abs.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API Uabs : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InControll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ModeIsBraking;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Timer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NotLockTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BrakingTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NoBrakingTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ControllExitNotLockTime;
    
    Uabs();

    UFUNCTION(BlueprintCallable)
    double Update(const double in_dt, const double in_input_brake, const bool in_is_lock);
    
    UFUNCTION(BlueprintCallable)
    void Setup(const double in_braking_time, const double in_no_braking_time, const double in_controll_exit_time);
    
};

