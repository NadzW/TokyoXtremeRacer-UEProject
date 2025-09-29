#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DLCSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TOKYOXTREMERACER_API UDLCSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DLCApplicationDataTable;
    
    UDLCSettings();

};

