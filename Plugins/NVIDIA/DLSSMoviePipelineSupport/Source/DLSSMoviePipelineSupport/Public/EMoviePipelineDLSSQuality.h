#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineDLSSQuality.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelineDLSSQuality : uint8 {
    EMoviePipelineDLSSQuality_DLAA,
    EMoviePipelineDLSSQuality_UltraQuality,
    EMoviePipelineDLSSQuality_Quality,
    EMoviePipelineDLSSQuality_Balanced,
    EMoviePipelineDLSSQuality_Performance,
    EMoviePipelineDLSSQuality_UltraPerformance,
};

