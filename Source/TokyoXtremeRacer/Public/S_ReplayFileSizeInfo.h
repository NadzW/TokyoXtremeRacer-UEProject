#pragma once
#include "CoreMinimal.h"
#include "S_ReplayFileSizeInfo.generated.h"

USTRUCT(BlueprintType)
struct FS_ReplayFileSizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 HeaderSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SteamingSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CheckpointSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TempHeaderSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TempSteamingSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TempCheckpointSize;
    
    TOKYOXTREMERACER_API FS_ReplayFileSizeInfo();
};

