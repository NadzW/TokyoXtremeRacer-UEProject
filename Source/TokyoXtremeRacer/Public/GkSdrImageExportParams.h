#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GkSdrImageExportParams.generated.h"

USTRUCT(BlueprintType)
struct FGkSdrImageExportParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> ImageContent;
    
    TOKYOXTREMERACER_API FGkSdrImageExportParams();
};

