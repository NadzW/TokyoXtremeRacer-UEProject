#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_Serialize.generated.h"

class UBP_AINativeConfigParameter;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_Serialize : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Serialize();

private:
    UFUNCTION(BlueprintCallable)
    static bool ToJsonFile_BP_AINativeConfigParameter(UBP_AINativeConfigParameter* BP_AINativeConfigParameter, const FString& FilePath);
    
};

