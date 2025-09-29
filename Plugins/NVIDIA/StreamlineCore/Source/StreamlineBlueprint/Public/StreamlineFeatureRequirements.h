#pragma once
#include "CoreMinimal.h"
#include "EStreamlineFeatureRequirementsFlags.h"
#include "EStreamlineFeatureSupport.h"
#include "StreamlineVersion.h"
#include "StreamlineFeatureRequirements.generated.h"

USTRUCT(BlueprintType)
struct FStreamlineFeatureRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineFeatureSupport Support;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineFeatureRequirementsFlags Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion RequiredOperatingSystemVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion DetectedOperatingSystemVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion RequiredDriverVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamlineVersion DetectedDriverVersion;
    
    STREAMLINEBLUEPRINT_API FStreamlineFeatureRequirements();
};

