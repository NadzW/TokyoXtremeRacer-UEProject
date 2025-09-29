#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputActionInjectionSubsystem.generated.h"

class UWindowUtilSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInputActionInjectionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWindowUtilSubsystem* WindowUtilSubsystem;
    
public:
    UInputActionInjectionSubsystem();

};

