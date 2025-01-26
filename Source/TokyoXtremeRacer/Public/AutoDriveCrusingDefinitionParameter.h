#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAutoDriveCrusingType.h"
#include "AutoDriveCrusingDefinitionParameter.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FAutoDriveCrusingDefinitionParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoDriveCrusingType CrusingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTargetSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiffMinBaseCrusingSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiffMaxBaseCrusingSpeedKmh;
    
    FAutoDriveCrusingDefinitionParameter();
};

