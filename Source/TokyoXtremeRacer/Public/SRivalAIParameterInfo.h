#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SRivalDrivingParameter.h"
#include "SRivalAIParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalAIParameterInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterTemplateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideBattleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalDrivingParameter OverrideBattleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideOnBattleEvaluationOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideOnBattleEvaluationOrderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideOnCrusingEvaluationOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideOnCrusingEvaluationOrderName;
    
    FSRivalAIParameterInfo();
};

