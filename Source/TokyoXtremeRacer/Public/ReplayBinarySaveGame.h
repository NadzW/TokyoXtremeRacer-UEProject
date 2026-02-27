#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ReplayBinaryDataInfo.h"
#include "ReplayBinarySaveGame.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UReplayBinarySaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayBinaryDataInfo Data;
    
    UReplayBinarySaveGame();

};

