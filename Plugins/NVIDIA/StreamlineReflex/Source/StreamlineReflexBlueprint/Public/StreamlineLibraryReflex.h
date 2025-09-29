#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStreamlineFeatureSupport.h"
#include "EStreamlineReflexMode.h"
#include "StreamlineLibraryReflex.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryReflex();

    UFUNCTION(BlueprintCallable)
    static void SetReflexMode(const EStreamlineReflexMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineFeatureSupport QueryReflexSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReflexSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReflexModeSupported(EStreamlineReflexMode ReflexMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EStreamlineReflexMode> GetSupportedReflexModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineReflexMode GetReflexMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameToRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineReflexMode GetDefaultReflexMode();
    
};

