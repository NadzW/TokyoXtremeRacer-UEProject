#pragma once
#include "CoreMinimal.h"
#include "ReplayBinaryDataInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FReplayBinaryDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScreenshotFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ImgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplayFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReplayData;
    
    FReplayBinaryDataInfo();
};

