#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SGameStageToChunkID.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSGameStageToChunkID : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkId;
    
    FSGameStageToChunkID();
};

