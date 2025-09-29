#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStreamlineFeature.h"
#include "EStreamlineFeatureRequirementsFlags.h"
#include "EStreamlineFeatureSupport.h"
#include "StreamlineFeatureRequirements.h"
#include "StreamlineLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStreamlineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStreamlineFeatureSupport QueryStreamlineFeatureSupport(EStreamlineFeature Feature);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStreamlineFeatureSupported(EStreamlineFeature Feature);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStreamlineFeatureRequirements GetStreamlineFeatureInformation(EStreamlineFeature Feature);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakStreamlineFeatureRequirements(EStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired);
    
};

