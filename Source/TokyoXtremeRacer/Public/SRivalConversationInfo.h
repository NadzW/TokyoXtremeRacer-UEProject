#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SRivalConversationInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalConversationInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ConversationScripts;
    
    FSRivalConversationInfo();
};

