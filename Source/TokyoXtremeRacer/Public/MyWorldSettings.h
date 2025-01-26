#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "MyWorldSettings.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API AMyWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIngameEffectWorldSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutgameEffectWorldSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIngameSoundWorldSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutgameSoundWorldSubSystem;
    
    AMyWorldSettings(const FObjectInitializer& ObjectInitializer);

};

