#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameCoreInterface.h"
#include "SSBVersion.h"
#include "GameFramework/SaveGame.h"
#include "SBSaveGameCore.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API USBSaveGameCore : public USaveGame, public ISBSaveGameCoreInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBVersion SBVersion;
    
    USBSaveGameCore();


    // Fix for true pure virtual functions not being implemented
};

