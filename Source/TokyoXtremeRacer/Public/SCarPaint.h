#pragma once
#include "CoreMinimal.h"
#include "SCarPaintColor.h"
#include "SCarPaint.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarPaint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGenuine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainBodyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubBodyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarPaintColor MainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCarPaintColor SubColor;
    
    FSCarPaint();
};

