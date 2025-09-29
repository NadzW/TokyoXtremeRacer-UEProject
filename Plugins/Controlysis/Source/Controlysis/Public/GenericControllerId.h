#pragma once
#include "CoreMinimal.h"
#include "GenericControllerModel.h"
#include "GenericControllerId.generated.h"

USTRUCT(BlueprintType)
struct CONTROLYSIS_API FGenericControllerId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericControllerModel Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 instance;
    
    FGenericControllerId();
};

