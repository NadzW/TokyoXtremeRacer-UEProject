#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputUiSubsystem.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInputUiSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UInputUiSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestInputUiRefresh();
    
};

