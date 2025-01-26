#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerModel.h"
#include "ControllerModelSet.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UControllerModelSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FControllerModel> Set;
    
    UControllerModelSet();

};

