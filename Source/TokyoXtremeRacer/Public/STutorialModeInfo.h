#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGameTutorialMode.h"
#include "EJumpScene.h"
#include "ETutorialAction.h"
#include "STutorialModeInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSTutorialModeInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameTutorialMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EJumpScene> ScenesCantGoTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpScene DisplayPopupOutGameScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayPopupIdOutGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayPopupIdInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InGamePauseIsPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETutorialAction> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialAction NextModeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameTutorialMode NextMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpScene NextModeActionJumpScene;
    
    FSTutorialModeInfo();
};

