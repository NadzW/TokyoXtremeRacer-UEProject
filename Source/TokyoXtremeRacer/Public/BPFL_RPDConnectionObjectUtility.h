#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPFL_RPDConnectionObjectUtility.generated.h"

class UObject;
class URPDConnectionObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_RPDConnectionObjectUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_RPDConnectionObjectUtility();

private:
    UFUNCTION(BlueprintCallable)
    static UObject* ConstructTransientRPDConnectionObjectReturnUObject();
    
    UFUNCTION(BlueprintCallable)
    static URPDConnectionObject* ConstructTransientRPDConnectionObject();
    
};

