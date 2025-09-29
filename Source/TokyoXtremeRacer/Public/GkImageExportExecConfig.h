#pragma once
#include "CoreMinimal.h"
#include "OnImageExportCompleteDelegate.h"
#include "OnImageExportDispatchCompleteDelegate.h"
#include "GkImageExportExecConfig.generated.h"

USTRUCT(BlueprintType)
struct FGkImageExportExecConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImageExportDispatchComplete OnDispatchComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImageExportComplete OnComplete;
    
    TOKYOXTREMERACER_API FGkImageExportExecConfig();
};

