#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TokyoXtremeRacerGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class TOKYOXTREMERACER_API ATokyoXtremeRacerGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    ATokyoXtremeRacerGameModeBase(const FObjectInitializer& ObjectInitializer);

};

