#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStreamlineFeatureSupport.h"
#include "EStreamlineDLSSGMode.h"
#include "StreamlineLibraryDLSSG.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryDLSSG();

    UFUNCTION(BlueprintCallable)
    static void SetDLSSGMode(EStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineFeatureSupport QueryDLSSGSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSGSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLSSGModeSupported(EStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EStreamlineDLSSGMode> GetSupportedDLSSGModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineDLSSGMode GetDLSSGMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineDLSSGMode GetDefaultDLSSGMode();
    
};

