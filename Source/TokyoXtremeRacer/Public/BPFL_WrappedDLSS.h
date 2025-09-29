#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWrappedStreamlineDLSSGMode.h"
#include "EWrappedStreamlineFeatureSupport.h"
#include "UWrappedDLSSMode.h"
#include "UWrappedDLSSSupport.h"
#include "UWrappedNISMode.h"
#include "BPFL_WrappedDLSS.generated.h"

class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_WrappedDLSS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_WrappedDLSS();

    UFUNCTION(BlueprintCallable)
    static void SetNISSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    static void SetNISMode(UWrappedNISMode NISMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetNISCustomScreenPercentage(float CustomScreenPercentage);
    
    UFUNCTION(BlueprintCallable)
    static void SetDLSSSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDLSSMode(UObject* WorldContextObject, UWrappedDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetDLSSGMode(EWrappedStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWrappedDLSSSupport QueryDLSSSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWrappedDLSSSupport QueryDLSSRRSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWrappedStreamlineFeatureSupport QueryDLSSGSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRayTracingAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNISSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNISModeSupported(UWrappedNISMode NISMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSRRSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSRREnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSModeSupported(UWrappedDLSSMode DLSSMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSGSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSGModeSupported(EWrappedStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLAAEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UWrappedNISMode> GetSupportedNISModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UWrappedDLSSMode> GetSupportedDLSSModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EWrappedStreamlineDLSSGMode> GetSupportedDLSSGModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNISRecommendedScreenPercentage(UWrappedNISMode NISMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDLSSSharpness();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSRRMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSModeInformation(UWrappedDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWrappedDLSSMode GetDLSSMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWrappedStreamlineDLSSGMode GetDLSSGMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWrappedNISMode GetDefaultNISMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWrappedDLSSMode GetDefaultDLSSMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWrappedStreamlineDLSSGMode GetDefaultDLSSGMode();
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLSSRR(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLSS(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void EnableDLAA(bool bEnabled);
    
};

