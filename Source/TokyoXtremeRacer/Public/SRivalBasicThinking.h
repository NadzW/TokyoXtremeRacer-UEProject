#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERivalBasicConditionPatterns.h"
#include "ERivalSpecEffect.h"
#include "ERivalSpecEffectKind.h"
#include "SRivalBasicThinking.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalBasicThinking : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalBasicConditionPatterns Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConditionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalSpecEffectKind EffectKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalSpecEffect SpecEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectTimeSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreakOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CanBuffActivateCount;
    
    FSRivalBasicThinking();
};

