#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TickableGameObjectSubsystemElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TOKYOXTREMERACER_API UTickableGameObjectSubsystemElement : public UObject {
    GENERATED_BODY()
public:
    UTickableGameObjectSubsystemElement();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickOnSubsystem(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeInitialize();
    
};

