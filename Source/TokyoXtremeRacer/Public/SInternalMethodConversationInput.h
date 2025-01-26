#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SInternalMethodConversationInput.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSInternalMethodConversationInput : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EditName;
    
    FSInternalMethodConversationInput();
};

