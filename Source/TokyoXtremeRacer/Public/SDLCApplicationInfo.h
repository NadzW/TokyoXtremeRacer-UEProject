#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDLCPlatform.h"
#include "SDLCApplicationInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSDLCApplicationInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDLCPlatform, FString> DLCPlatformIDs;
    
    FSDLCApplicationInfo();
};

