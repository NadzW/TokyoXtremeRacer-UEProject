#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputActionInjectionSubsystem.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInputActionInjectionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UInputActionInjectionSubsystem();

};

