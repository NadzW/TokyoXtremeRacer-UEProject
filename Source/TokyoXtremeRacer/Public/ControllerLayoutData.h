#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControllerLayoutKey.h"
#include "ControllerLayoutValue.h"
#include "ControllerLayoutData.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UControllerLayoutData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FControllerLayoutKey, FControllerLayoutValue> Map;
    
    UControllerLayoutData();

};

