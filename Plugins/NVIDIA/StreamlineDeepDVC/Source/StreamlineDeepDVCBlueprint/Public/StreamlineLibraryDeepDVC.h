#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStreamlineFeatureSupport.h"
#include "EStreamlineDeepDVCMode.h"
#include "StreamlineLibraryDeepDVC.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStreamlineLibraryDeepDVC : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryDeepDVC();

    UFUNCTION(BlueprintCallable)
    static void SetDeepDVCSaturationBoost(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    static void SetDeepDVCMode(EStreamlineDeepDVCMode DeepDVCMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetDeepDVCIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineFeatureSupport QueryDeepDVCSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeepDVCSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeepDVCModeSupported(EStreamlineDeepDVCMode DeepDVCMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EStreamlineDeepDVCMode> GetSupportedDeepDVCModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineDeepDVCMode GetDefaultDeepDVCMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDeepDVCSaturationBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineDeepDVCMode GetDeepDVCMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDeepDVCIntensity();
    
};

