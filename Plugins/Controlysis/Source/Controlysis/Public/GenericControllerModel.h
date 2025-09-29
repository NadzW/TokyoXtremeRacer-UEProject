#pragma once
#include "CoreMinimal.h"
#include "GenericControllerModel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLYSIS_API FGenericControllerModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 vid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pid;
    
    FGenericControllerModel();
};

