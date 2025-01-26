#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCarPaintColor.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarPaintColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Color_Metal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Color_Mat;
    
    FSCarPaintColor();
};

