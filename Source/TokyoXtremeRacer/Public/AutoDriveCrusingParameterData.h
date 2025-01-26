#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AutoDriveCrusingDefinitionParameter.h"
#include "AutoDriveCrusingParameterData.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UAutoDriveCrusingParameterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoDriveCrusingDefinitionParameter CrusingParameter;
    
    UAutoDriveCrusingParameterData();

};

