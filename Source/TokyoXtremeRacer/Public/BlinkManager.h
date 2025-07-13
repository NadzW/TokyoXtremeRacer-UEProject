#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlinkManager.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBlinkManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlinkTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BetweenTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReserveStop;
    
    UBlinkManager();

    UFUNCTION(BlueprintCallable)
    bool Tick(const double in_dt, bool& out_change_now);
    
    UFUNCTION(BlueprintCallable)
    void Stop(const bool in_stop_on_tick);
    
    UFUNCTION(BlueprintCallable)
    void Start(const double in_start_time);
    
    UFUNCTION(BlueprintCallable)
    void Setup(const double in_blink_time, const double in_between_time);
    
};

