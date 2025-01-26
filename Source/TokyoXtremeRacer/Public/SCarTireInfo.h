#pragma once
#include "CoreMinimal.h"
#include "SCarTireInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarTireInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Inchi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Pulling;
    
    FSCarTireInfo();
};

