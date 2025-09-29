#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPFL_PathUtility.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_PathUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_PathUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SplitPathWithoutRootPath(const FString& PackagePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameDir(const FString& PackagePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ExtractRootPath(const FString& PackagePath);
    
};

