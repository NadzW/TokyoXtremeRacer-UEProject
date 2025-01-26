#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "TickableGameObjectSubsystem.generated.h"

class UTickableGameObjectSubsystemElement;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UTickableGameObjectSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTickableGameObjectSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveElement(const FName Key);
    
    UFUNCTION(BlueprintCallable)
    UTickableGameObjectSubsystemElement* FindElement(const FName Key);
    
    UFUNCTION(BlueprintCallable)
    void AddElement(const FName Key, TSubclassOf<UTickableGameObjectSubsystemElement> ElementClass);
    
};

