#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineViewFamilySetting.h"
#include "EMoviePipelineDLSSQuality.h"
#include "MoviePipelineDLSSSetting.generated.h"

UCLASS(Blueprintable)
class DLSSMOVIEPIPELINESUPPORT_API UMoviePipelineDLSSSetting : public UMoviePipelineViewFamilySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoviePipelineDLSSQuality DLSSQuality;
    
    UMoviePipelineDLSSSetting();

};

