#pragma once
#include "CoreMinimal.h"
#include "ControllerLayoutData.h"
#include "LayeredControllerLayoutData.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API ULayeredControllerLayoutData : public UControllerLayoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UControllerLayoutData*> ControllerLayoutDataArray;
    
    ULayeredControllerLayoutData();

};

