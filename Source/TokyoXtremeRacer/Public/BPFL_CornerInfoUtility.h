#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCornerInfo.h"
#include "BPFL_CornerInfoUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_CornerInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_CornerInfoUtility();

    UFUNCTION(BlueprintCallable)
    static FText ConstructStringCornerInfoDataRowText(const FSCornerInfo& CornerInfo);
    
};

