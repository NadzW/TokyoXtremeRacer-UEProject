#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPFL_CDTManageSubSystem.generated.h"

class IBPI_CDTManageSystem;
class UBPI_CDTManageSystem;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_CDTManageSubSystem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_CDTManageSubSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TScriptInterface<IBPI_CDTManageSystem> GetCDTManageSubSystem(UObject* WorldContextObject);
    
};

