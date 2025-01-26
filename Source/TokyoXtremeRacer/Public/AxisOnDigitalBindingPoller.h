#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AxisOnDigitalInputMappingInfo.h"
#include "ControllerId.h"
#include "EAxisPollStatusPins.h"
#include "AxisOnDigitalBindingPoller.generated.h"

UCLASS(Blueprintable)
class UAxisOnDigitalBindingPoller : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerId PollControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PollAxisIndex;
    
public:
    UAxisOnDigitalBindingPoller();

    UFUNCTION(BlueprintCallable)
    void UpdateState();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(FControllerId ControllerId, uint8 AxisIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckStatus(FAxisOnDigitalInputMappingInfo& AxisOnDigitalInfo, TEnumAsByte<EAxisPollStatusPins>& AxisPollStatus) const;
    
};

