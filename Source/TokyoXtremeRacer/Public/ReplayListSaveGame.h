#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ReplayDetailInfo.h"
#include "ReplayListSaveGame.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UReplayListSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayDetailInfo> ReplayList;
    
    UReplayListSaveGame();

};

