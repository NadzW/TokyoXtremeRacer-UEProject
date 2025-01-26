#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameCore.h"
#include "SRaceCoreInfo.h"
#include "SUserInfo.h"
#include "SUserOptionInfo.h"
#include "UserSaveGame.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UUserSaveGame : public USBSaveGameCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUserInfo User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRaceCoreInfo Core;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSUserOptionInfo Option;
    
    UUserSaveGame();

};

