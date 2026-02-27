#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBGMPlayType.h"
#include "EBGMScene.h"
#include "EBGMType.h"
#include "SMusicSelect.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMusicSelect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGMPlayType BgmPlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBGMType> ListArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBGMScene, EBGMType> CategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUniqueFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShuffle;
    
    FSMusicSelect();
};

