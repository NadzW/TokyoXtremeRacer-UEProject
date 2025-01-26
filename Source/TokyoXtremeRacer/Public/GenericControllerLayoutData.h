#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerLayoutValue.h"
#include "GenericControllerLayoutData.generated.h"

UCLASS(Blueprintable)
class UGenericControllerLayoutData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerLayoutValue> hats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerLayoutValue> buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerLayoutValue> axes;
    
    UGenericControllerLayoutData();

};

