#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputUiSubsystem.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInputUiSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UInputUiSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestInputUiRefresh();
    
};

